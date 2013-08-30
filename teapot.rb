
#
#  This file is part of the "Teapot" project, and is released under the MIT license.
#

teapot_version "0.8.0"

define_target "dream-display-x11" do |target|
	target.build do |environment|
		build_directory(package.path, 'source', environment)
	end
	
	target.depends "Library/Dream"
	
	target.provides "Library/Dream/Display" => "Library/Dream/DisplayX11"
	
	target.provides "Library/Dream/DisplayX11" do
		append linkflags "-lDreamDisplayX11"
	end
end
