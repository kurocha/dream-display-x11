//
//  Display.cpp
//  File file is part of the "dream-display-x11" project and released under the MIT license.
//
//  Created by Samuel Williams on 10/9/2013.
//  Copyright, 2013, by Samuel Williams. All rights reserved.
//

#include "Display.h"

#include "../Display/X11/Application.h"

namespace Dream
{
	namespace Client
	{
		using namespace Display;

		void run (Ptr<IApplicationDelegate> delegate)
		{
			Ref<X11::Application> application = new X11::Application(delegate);
			
			application->run();
		}
	}
}
