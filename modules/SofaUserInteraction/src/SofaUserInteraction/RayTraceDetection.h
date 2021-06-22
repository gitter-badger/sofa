/******************************************************************************
*                 SOFA, Simulation Open-Framework Architecture                *
*                    (c) 2006 INRIA, USTL, UJF, CNRS, MGH                     *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#pragma once
#include <SofaUserInteraction/config.h>

#include <SofaBaseCollision/BruteForceBroadPhase.h>
#include <SofaGeneralMeshCollision/RayTraceNarrowPhase.h>
#include <sofa/core/CollisionElement.h>
#include <sofa/defaulttype/Vec.h>
#include <set>


namespace sofa::component::collision
{

/**
 *  \brief It is a Ray Trace based collision detection algorithm
 *
 *   For each point in one object, we trace a ray following the oposite of the point's normal
 *   up to find a triangle in the other object. Both triangles are tested to evaluate if they are in
 *   colliding state. It must be used with a TriangleOctreeModel,as an octree is used to traverse the object.
 */
class SOFA_SOFAUSERINTERACTION_API RayTraceDetection :
    public BruteForceBroadPhase,
    public RayTraceNarrowPhase
{
public:
    SOFA_CLASS2(RayTraceDetection, BruteForceBroadPhase, RayTraceNarrowPhase);
};

} // namespace sofa::component::collision
