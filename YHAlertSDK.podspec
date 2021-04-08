
Pod::Spec.new do |s|

  s.name         = "YHAlertSDK"
  s.version      = "1.2.9" 
  s.summary      = "YHAlertSDK is only a alert sdk"

  s.description  = "YHNetSDK is only a base common alert sdk, incluse svp,label alert"

  s.homepage     = "https://github.com/XmYlzYhkj/YHAlertSDK"

  s.license      = "MIT "

  s.author       = { "XmYlzYhkj" => "yhkj_xm@163.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHAlertSDK.git", :tag => s.version.to_s }

  s.resources    = 'Resources/*.bundle'

  #s.source_files  = "Classes", "Classes/*"

  s.frameworks = 'UIKit', 'Foundation'
  
  s.requires_arc = true

  s.dependency     "YHCategorySDK"

  s.vendored_frameworks = ["Frameworks/*.framework"]
  
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => '$(EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_$(EFFECTIVE_PLATFORM_SUFFIX)__NATIVE_ARCH_64_BIT_$(NATIVE_ARCH_64_BIT)__XCODE_$(XCODE_VERSION_MAJOR))',
    'EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_simulator__NATIVE_ARCH_64_BIT_x86_64__XCODE_1200' => 'arm64 arm64e armv7 armv7s armv6 armv8'
  }

# Default
#  s.default_subspecs = 'Default'
#  s.subspec 'Default' do |sp|
#    sp.vendored_frameworks = ["Frameworks/Default/*.framework"]
#  end

  # SVP
#  s.subspec 'SVP' do |sp|
#    sp.vendored_frameworks = ["Frameworks/SVP/*.framework"]
#    sp.dependency     "SVProgressHUD", "~> 2.1"
#  end
  
  end