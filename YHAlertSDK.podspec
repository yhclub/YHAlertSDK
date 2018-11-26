
Pod::Spec.new do |s|

  s.name         = "YHAlertSDK"
  s.version      = "1.0.2"
  s.summary      = "YHAlertSDK is only a alert sdk"

  s.description  = "YHNetSDK is only a base common alert sdk, incluse svp,label alert"

  s.homepage     = "https://github.com/XmYlzYhkj/YHAlertSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }

  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHAlertSDK.git", :tag => s.version.to_s }

  #s.resources    = 'Resources/*.bundle'

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.dependency     "SVProgressHUD", "~> 2.1"

  s.dependency     "YHCategorySDK"

  s.vendored_frameworks = ["Frameworks/*.framework"]
  
  end