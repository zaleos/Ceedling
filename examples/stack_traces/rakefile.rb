PROJECT_CEEDLING_ROOT = "../../"
load "#{PROJECT_CEEDLING_ROOT}/lib/rakefile.rb"

task :default => %w[ test:all ]
