
Pod::Spec.new do |s|
    s.name         = "POCSKFramework"
    s.version      = "1.0.1"
    s.summary      = "A brief description of POCSKFramework project."
    s.description  = "An extended description of POCSKFramework project."
    s.homepage     = "https://github.com/abadikaka"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2018
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "$(git config user.name)" => "$(git config user.email)" }
    s.source       = { :git => 'https://github.com/iamsnowz/POCSKFramework.git', :tag => "#{s.version}" }
    s.vendored_frameworks = 'POCSKFramework.framework', 'EkoChat.framework', 'Realm.framework'
    s.platform = :ios
    s.swift_version = "5"
    s.ios.deployment_target  = '13.2'
end
