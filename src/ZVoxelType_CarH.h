/*
 * This file is part of Blackvoxel.
 *
 * Copyright 2010-2021 Laurent Thiebaut & Olivia Merle
 *
 * Blackvoxel is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Blackvoxel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*
 * ZVoxelType_CarH0.h
 *
 *  Created on: 27 janv. 2021
 *      Author: laurent
 */

#ifndef Z_ZVOXELTYPE_CARH0_H
#define Z_ZVOXELTYPE_CARH_H

//#ifndef Z_ZVOXELTYPE_CARH_H
//#  include "ZVoxelType_CarH.h"
//#endif

#ifndef Z_ZVOXELTYPE_H
#  include "ZVoxelType.h"
#endif

class ZVoxelType_CarH : public ZVoxelType
{
  public:
    ZVoxelType_CarH(ULong VoxelType) : ZVoxelType(VoxelType)
    {
      Is_VoxelExtension = true;
      Is_HasAllocatedMemoryExtension = true;
      Is_Rideable = true;
      Is_HasHelpingMessage = true;
      HelpingMessage = "CAR : PRESS MIDDLE MOUSE BUTTON (SCROLLWHEEL) TO BOARD";
    }

    // Voxel Extensions

    virtual ZVoxelExtension * CreateVoxelExtension(bool IsLoadingPhase = true);


    // The user click the activation button(Middle) on the voxel to activate special functions.
    virtual void  UserAction_Activate(ZMemSize VoxelInfo, Long x, Long y, Long z);

    virtual ULong  Interface_PushBlock_Push( ZVoxelLocation * DestLocation, UShort VoxelType, ULong Count );
};



#endif /* Z_ZVOXELTYPE_CARH0_H */
