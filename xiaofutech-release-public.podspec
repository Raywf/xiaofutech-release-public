Pod::Spec.new do |s|
  s.name         = "xiaofutech-release-public" 		# 项目名称
  s.version      = "1.0.5" 		# 版本号 与 你仓库的 标签号 对应
  s.license      = "MIT" 	 # 开源证书
  s.summary      = "小肤iOS快捷开发工具包，Release，来自公有仓库" 	# 项目简介
  s.deprecated = false

  s.homepage     = "https://github.com/Raywf/xiaofutech-release-public" 	# 你的主页
  s.source       = { :git => "https://github.com/Raywf/xiaofutech-release-public.git", :tag => "#{s.version}" } 	# 你的仓库地址，不能用SSH地址
  # s.source_files = "xiaofutech-release-public/*.{h,m}" 	# 代码的位置， xiaofutech-release-public/*.{h,m} 表示 xiaofutech-release-public 文件夹下所有的.h和.m文件
  s.requires_arc = true 	# 是否启用ARC
  s.platform     = :ios, "8.0" 		#平台及支持的最低版本
  s.vendored_frameworks = "Frameworks/XiaoFuTech.framework"
  s.frameworks   = "UIKit", "Foundation" #支持的框架
  
  # User
  s.author             = { "Raywf" => "https://github.com/Raywf" } 	# 作者信息
  s.social_media_url   = "https://github.com/Raywf" 	# 个人主页

end