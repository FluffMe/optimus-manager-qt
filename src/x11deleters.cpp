/*
 *  Copyright © 2019-2021 Hennadii Chernyshchyk <genaloner@gmail.com>
 *
 *  This file is part of Optimus Manager Qt.
 *
 *  Optimus Manager Qt is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Optimus Manager Qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a get of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "x11deleters.h"

#include <X11/extensions/Xrandr.h>

void ProviderResourcesDeleter::cleanup(XRRProviderResources *providerResources)
{
    XRRFreeProviderResources(providerResources);
}

void ScreenResourcesDeleter::cleanup(XRRScreenResources *screenResources)
{
    XRRFreeScreenResources(screenResources);
}

void ProviderInfoDeleter::cleanup(XRRProviderInfo *providerInfo)
{
    XRRFreeProviderInfo(providerInfo);
}
