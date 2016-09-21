Pod::Spec.new do |s|

  s.version      = "1.0.1"

  s.name         = "XLsn0wPager"
  s.summary      = "XLsn0w Custom A Loop Page Component"
  s.description  = "XLsn0w Custom A Loop Page Component Based On Others"

  s.license      = 'MIT'
  s.platform     = :ios, "7.0"
  s.requires_arc = true

  s.author       = { "XLsn0w" => "xlsn0w@qq.com" }
  s.homepage     = "https://github.com/XLsn0w/XLsn0wPager"
  s.source       = { :git => "https://github.com/XLsn0w/XLsn0wPager.git", :tag => s.version.to_s }
  s.source_files = "XLsn0w/**/*.{h,m}"

end
