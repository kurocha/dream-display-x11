//
//  Display.h
//  File file is part of the "dream-display-x11" project and released under the MIT license.
//
//  Created by Samuel Williams on 10/9/2013.
//  Copyright, 2013, by Samuel Williams. All rights reserved.
//

#ifndef DREAM_CLIENT_DISPLAY_H
#define DREAM_CLIENT_DISPLAY_H

#include <Dream/Display/Application.h>

namespace Dream
{
	namespace Client
	{
		void run(Ptr<Display::IApplicationDelegate> delegate);
	}
}

#endif
