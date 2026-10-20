// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_4f842e31c2d089ba.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("util/IRenderable.h", "roc_unit_b8671ae8d3010f90.cpp")
#pragma include_alias("v8datamodel/PartInstance.h", "roc_unit_ea83e629b1338927.cpp")
#pragma include_alias("v8world/Primitive.h", "roc_unit_3cb14e7bbff2e8e6.cpp")
#pragma include_alias("v8kernel/Body.h", "roc_unit_9ebf98d898911199.cpp")
#include "v8datamodel/PartInstance.h"
#include "v8world/Primitive.h"
#include "AppDraw/HitTest.h"
namespace RBX {
	const G3D::CoordinateFrame& PartInstance::getCoordinateFrame() const
	{
		return roc_primitive_view()->getCoordinateFrame();
	}

	const G3D::Vector3& PartInstance::getTranslationUi() const
	{
		return roc_primitive_view()->getBody()->getCoordinateFrame().translation;
	}

	float PartInstance::getMass()
	{
		return roc_primitive_view()->getBody()->getMass();
	}

	const Velocity& PartInstance::getVelocity() const
	{
		return roc_primitive_view()->getBody()->getVelocity();
	}

	const G3D::Vector3& PartInstance::getLinearVelocity() const
	{
		return getVelocity().linear;
	}

	const G3D::Vector3& PartInstance::getRotationalVelocity() const
	{
		return getVelocity().rotational;
	}

	const G3D::Vector3& PartInstance::getPartSizeXml() const
	{
		return roc_primitive_view()->getGeometry()->getGridSize();
	}

	G3D::Vector3 PartInstance::getPartSizeUi() const
	{
		return getPartSizeXml();
	}

	bool PartInstance::getDragging() const
	{
		return roc_primitive_view()->getDragging();
	}

	bool PartInstance::getCanCollide() const
	{
		return !roc_primitive_view()->getDragging() && roc_primitive_view()->getCanCollide() ? true : false;
	}

	bool PartInstance::getAnchored() const
	{
		return roc_primitive_view()->getAnchor();
	}

	float PartInstance::getFriction() const
	{
		return roc_primitive_view()->getFriction();
	}

	float PartInstance::getElasticity() const
	{
		return roc_primitive_view()->getElasticity();
	}

	Extents PartInstance::getExtentsWorld() const
	{
		return roc_primitive_view()->getExtentsWorld();
	}

	Extents PartInstance::getExtentsLocal() const
	{
		return roc_primitive_view()->getExtentsLocal();
	}

	G3D::CoordinateFrame PartInstance::worldSnapLocation() const
	{
		G3D::Vector3 halfSize = getPartSizeXml() * 0.5f;

		G3D::Vector3 snapInPart;
		snapInPart.y = -halfSize.y;
		snapInPart.x = halfSize.x - G3D::iRound(floorf(halfSize.x));
		snapInPart.z = halfSize.z - G3D::iRound(floorf(halfSize.z));

		G3D::CoordinateFrame localSnapLocation(snapInPart);
		return roc_primitive_view()->getCoordinateFrame() * localSnapLocation;
	}

	bool PartInstance::hitTest(const G3D::Ray& worldRay, G3D::Vector3& worldHitPoint)
	{
		const G3D::CoordinateFrame& cframe = roc_primitive_view()->getCoordinateFrame();
		G3D::Ray rayInPartCoords = cframe.toObjectSpace(worldRay);
		G3D::Vector3 hitPointInPartCoords;

		if (HitTest::hitTest(getPart(), rayInPartCoords, hitPointInPartCoords, 1.0f))
		{
			const G3D::CoordinateFrame& cframe = roc_primitive_view()->getCoordinateFrame(); // roblox be like: lets do it again why not
			worldHitPoint = cframe.pointToWorldSpace(hitPointInPartCoords);
			return true;
		}
		else
		{
			return false;
		}
	}
}
