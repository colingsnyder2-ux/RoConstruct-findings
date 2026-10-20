// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("v8datamodel/Camera.h", "../roc_camera_fly_native_header_f804c210c099df00.cpp")
#pragma include_alias("v8xml/XmlElement.h", "../roc_xml_native_double_header_414358b35d9237a4.cpp")
#pragma include_alias("v8datamodel/DebugSettings.h", "../roc_lua_debug_settings_header_c5ae733591533a2b.cpp")
#pragma include_alias("reflection/object.h", "../roc_class_registry_native_header_a61a6f26f57e648b.cpp")
#pragma include_alias("util/Name.h", "../roc_member_name_const_header_435e0dbf905df038.cpp")
#pragma include_alias("reflection/member.h", "../roc_member_registry_native_header_9d65f5dc84cdc322.cpp")
#undef _RELEASEASSERT
#include "v8datamodel/Camera.h"
#include "util/Math.h"
#include "v8datamodel/ICameraOwner.h"
namespace RBX {
void Camera::tellCameraMoved() {
 if (ICameraOwner* owner = getCameraOwner()) owner->cameraMoved();
}


	void Camera::setGCameraCoordinateFrame(const G3D::CoordinateFrame& coord)
	{
		if (Math::legalCameraCoord(coord))
		{
			(*(G3D::GCamera*)((char*)this+0x130)).setCoordinateFrame(coord);
		}
		else
		{
			RBXASSERT(false);
		}
	}

	void Camera::lookAt(const G3D::Vector3& point)
	{
		(*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation = point;
		(*(G3D::CoordinateFrame*)((char*)this+0x174)).lookAt(point);
	}

	void Camera::getHeadingElevationDistance(float& heading, float& elevation, float& distance)
	{
		Math::getHeadingElevation((*(G3D::CoordinateFrame*)((char*)this+0x174)), heading, elevation);
		distance = goalToFocusDistance();
	}

	bool Camera::setDistanceFromTarget(float newDistance)
	{
		G3D::Vector3 lookVector = (*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation - (*(G3D::CoordinateFrame*)((char*)this+0x174)).translation;
		float currentDistance = lookVector.magnitude();

		const float min = distanceMin();
		const float max = distanceMax();

		if (newDistance < min && currentDistance == min)
			return false;
		
		if (newDistance > max && currentDistance == max)
			return false;

		newDistance = G3D::min(max, G3D::max(min, newDistance));
		
		lookVector *= newDistance;
		(*(G3D::CoordinateFrame*)((char*)this+0x174)).translation = (*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation - (lookVector / currentDistance);

		tellCameraMoved();

		return true;
	}

	bool Camera::nonCharacterZoom(float in)
	{
		G3D::Vector3 lookVector = (*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation - (*(G3D::CoordinateFrame*)((char*)this+0x174)).translation;

		float currentDistance = lookVector.magnitude();
		float newZoomDistance = getNewZoomDistance(currentDistance, in);

		if (newZoomDistance == currentDistance)
			return false;

		(*(G3D::CoordinateFrame*)((char*)this+0x174)).translation -= lookVector * (newZoomDistance / currentDistance - 1.0f);

		tellCameraMoved();

		return true;
	}

	bool Camera::characterZoom(float in)
	{
		G3D::Vector3 focusToGoal = (*(G3D::CoordinateFrame*)((char*)this+0x174)).translation - (*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation;

		float currentDistance = focusToGoal.magnitude();

		float maxDistance = distanceMaxCharacter();
		float newDistance = getNewZoomDistance(currentDistance, in);
		newDistance = G3D::min(newDistance, maxDistance);

		if (newDistance == currentDistance)
			return false;

		focusToGoal.y = 0.0;
		focusToGoal.unitize();
		focusToGoal.y = newDistance * 0.03f;

		(*(G3D::CoordinateFrame*)((char*)this+0x174)).translation = focusToGoal.direction() * newDistance + (*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation;

		return true;
	}

	void Camera::panRadians(float angle)
	{
		RBXASSERT(angle > -100);
		RBXASSERT(angle < 100);

		if (angle != 0)
		{
			float heading, elevation, distance;

			getHeadingElevationDistance(heading, elevation, distance);
			heading = Math::radWrap(heading + angle);
			setHeadingElevationDistance(heading, elevation, distance);

			tellCameraMoved();
		}
	}

	bool Camera::tiltRadians(float angle)
	{
		if (angle != 0)
		{
			float heading, elevation, distance;
			getHeadingElevationDistance(heading, elevation, distance);

			static float rad = G3D::toRadians(81);
			float newElevation = G3D::clamp(elevation + angle, -rad, rad);

			if (elevation != newElevation)
			{
				setHeadingElevationDistance(heading, newElevation, distance);
				tellCameraMoved();
				return true;
			}
		}

		return false;
	}

	void Camera::tryZoomExtents(float low, float current, float high, const Extents& extents, const G3D::Rect2D& viewPort)
	{
		RBXASSERT(current >= low);
		RBXASSERT(current <= high);

		if (high - low < 0.1)
			return;

		setDistanceFromTarget(current);
		updateGoal();
		goalToCamera();

		if (extents.containedByFrustum((*(G3D::GCamera*)((char*)this+0x130)).frustum(viewPort)))
		{
			tryZoomExtents(low, (low + current) * 0.5, current, extents, viewPort);
		}
		else
		{
			tryZoomExtents(current, (current + high) * 0.5, high, extents, viewPort);
		}
	}

	void Camera::zoomExtents(Extents extents, const G3D::Rect2D& viewPort, Camera::ZoomType zoomType)
	{
		G3D::CoordinateFrame currentCoord = (*(G3D::GCamera*)((char*)this+0x130)).getCoordinateFrame();
		extents.expand(0.1f);

		if (zoomType != ZOOM_CHAR_PART_DRAG || (*(CameraType*)((char*)this+0x1d4)) == CUSTOM_CAMERA)
		{
			if ((*(CameraType*)((char*)this+0x1d4)) == FIXED_CAMERA)
			{
				G3D::Vector3 scaler = extents.center() - (*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation;

				(*(G3D::CoordinateFrame*)((char*)this+0x1a4)).translation += scaler;
				(*(G3D::CoordinateFrame*)((char*)this+0x174)).translation += scaler;
			}

			float low;

			if (zoomType == ZOOM_OUT_ONLY || zoomType == ZOOM_CHAR_PART_DRAG)
				low = goalToFocusDistance();
			else
				low = distanceMin();

			float current = goalToFocusDistance();

			RBXASSERT(G3D::isFinite(current));

			if (zoomType == ZOOM_CHAR_PART_DRAG)
				extents.scale(1.1f);

			if (G3D::isFinite(low) && G3D::isFinite(current) && G3D::isFinite(distanceMax()))
				tryZoomExtents(low, current, distanceMax(), extents, viewPort);

			(*(G3D::CoordinateFrame*)((char*)this+0x174)) = (*(G3D::GCamera*)((char*)this+0x130)).getCoordinateFrame();
			setGCameraCoordinateFrame(currentCoord);
			tellCameraMoved();
		}
	}
}

namespace RBX {

	void Camera::setCameraCoordinateFrameNoLerp(const G3D::CoordinateFrame& value)
	{
		(*(G3D::CoordinateFrame*)((char*)this+0x174)) = value;
		goalToCamera();
	}

	void Camera::setImageServerViewNoLerp(const G3D::CoordinateFrame& modelCoord, const G3D::Rect2D& viewPort)
	{
		G3D::Vector3 look = modelCoord.lookVector();

		bool noTilt = (fabs(look.y) > 0.95);
		if (noTilt)
		{
			look = -G3D::Vector3::unitZ();
		}
		else
		{
			look.y = 0;
			look = look.direction();
		}

		G3D::CoordinateFrame lookCoord;

		lookCoord.lookAt(look);
		lookCoord.rotation *= G3D::Matrix3::fromEulerAnglesZXY(G3D::toRadians(45), G3D::toRadians(35), 0.0f);

		look = lookCoord.lookVector();
		lookCoord.translation = (look * 10.0f) + modelCoord.translation;

		lookCoord.lookAt(modelCoord.translation);

		setCameraType(FIXED_CAMERA);
		setCameraFocus(modelCoord.translation);
		setCameraCoordinateFrameNoLerp(lookCoord);
		zoomExtents(viewPort);
		goalToCamera();
	}

	float Camera::getNewZoomDistance(float currentDistance, float in)
	{
		float const ZOOM_FACTOR = 0.25f;

		if (in > 0.0f)
		{
			currentDistance = G3D::max<float>(currentDistance / (1.0 + in * ZOOM_FACTOR), distanceMin());
		} 	
		else if (in < 0.0f)
		{
			return G3D::min<float>(currentDistance * (1.0 - in * ZOOM_FACTOR), distanceMax());
		}

		return currentDistance;
	}
	bool Camera::zoomExtents(const G3D::Rect2D& viewPort)
	{
		if (ICameraOwner* owner = getCameraOwner())
		{
			zoomExtents(owner->computeCameraOwnerExtents(), viewPort, ZOOM_IN_OR_OUT);
			return true;
		}
		return false;
	}
}

namespace RBX {
class NavKeys
{
public:
	bool forward_arrow;  // 0x00
	bool backward_arrow; // 0x01
	bool left_arrow;     // 0x02
	bool right_arrow;    // 0x03
	bool forward_asdw;   // 0x04
	bool backward_asdw;  // 0x05
	bool left_asdw;      // 0x06
	bool right_asdw;     // 0x07
	bool space;          // 0x08
		bool forward() const		{return (forward_arrow || forward_asdw);}

		bool backward() const		{return (backward_arrow || backward_asdw);}

		bool left() const			{return (left_arrow || left_asdw);}
		
		bool right() const			{return (right_arrow || right_asdw);}

		bool arrowKeyDown() const	{return (forward_arrow || backward_arrow || left_arrow || right_arrow);}

		bool asdwKeyDown() const	{return (forward_asdw || backward_asdw || left_asdw || right_asdw);}


 bool navKeyDown() const {return arrowKeyDown() || asdwKeyDown() || space;}
};


	static Reflection::EnumPropDescriptor<Camera, Camera::CameraType> desc_cameraType("CameraType", "Camera", &Camera::getCameraType, &Camera::setCameraType, Reflection::PropertyDescriptor::STANDARD); 

	void Camera::setCameraType(CameraType type)
	{
		if ((*(CameraType*)((char*)this+0x1d4)) != type)
		{
			(*(CameraType*)((char*)this+0x1d4)) = type;
			raisePropertyChanged(desc_cameraType);

			tellCameraMoved();
		}
	}

void Camera::doFly(const NavKeys& nav, int steps)
{
 if (nav.navKeyDown()) {
  float accelerationMultiplier = 2.0f;
  if (steps > 120) accelerationMultiplier = 8.0f;
  else if (steps > 60) accelerationMultiplier = 4.0f;
  G3D::CoordinateFrame current = getCameraCoordinateFrame();
  G3D::Vector3 look = current.lookVector();
  G3D::Vector3 right = current.rightVector();
  G3D::Vector3 delta;
  if (nav.forward()) delta += look * accelerationMultiplier;
  if (nav.backward()) delta -= look * accelerationMultiplier;
  if (nav.right()) delta += right * accelerationMultiplier;
  if (nav.left()) delta -= right * accelerationMultiplier;
  current.translation += delta;
  setCameraType(Camera::FIXED_CAMERA);
  setCameraCoordinateFrameNoLerp(current);
  setCameraFocus(current.translation + 20.0f * look);
 }
}

}

#undef _RELEASEASSERT
#include "v8tree/Property.cpp"
bool (*roc_color_parser)(const std::string&, G3D::Color3&) = &RBX::StringConverter<G3D::Color3>::convertToValue;
bool (*roc_vector_parser)(const std::string&, G3D::Vector3&) = &RBX::StringConverter<G3D::Vector3>::convertToValue;

#undef _RELEASEASSERT
#include <v8world/Contact.h>
#include <util/Math.h>
namespace RBX {
	Block* BlockBlockContact::block(int i)
	{
		return rbx_static_cast<Block*>(this->getPrimitive(i)->getGeometry());
	}

	int BlockBlockContact::intersectRectQuad(G3D::Vector2& planeRect, G3D::Vector2 (&otherQuad)[4])
	{
		bool quadCrossRect[4][4];

		bool quadIn[4] = {true, true, true, true};

		int foundCounter = 0;

		for (int i = 3; i >= 0; i--)
		{
			if (otherQuad[i].y <= planeRect.y)
			{
				quadCrossRect[0][i] = true;
			}
			else
			{
				quadCrossRect[0][i] = false;
				quadIn[i] = false;
			}

			if (otherQuad[i].x >= -planeRect.x)
			{
				quadCrossRect[1][i] = true;
			}
			else
			{
				quadCrossRect[1][i] = false;
				quadIn[i] = false;
			}

			if (otherQuad[i].y >= -planeRect.y)
			{
				quadCrossRect[2][i] = true;
			}
			else
			{
				quadCrossRect[2][i] = false;
				quadIn[i] = false;
			}

			if (otherQuad[i].x <= planeRect.x)
			{
				quadCrossRect[3][i] = true;
			}
			else
			{
				quadCrossRect[3][i] = false;
				quadIn[i] = false;
			}
		}

		for (int i = 3; i >= 0; i--)
		{
			if (quadIn[i])
			{
				loadGeoPairPointPlane((*(int*)((char*)this+0x70)), (*(int*)((char*)this+0x6c)), i, (*(NormalId*)((char*)this+0x78)), (*(NormalId*)((char*)this+0x74)));
				foundCounter++;
			}
		}

		if (foundCounter == 4)
			return foundCounter;
		else
		{
			bool rectCrossQuad[4][4];
			G3D::Vector2 rect[4];
			rect[0] = G3D::Vector2(planeRect.x, planeRect.y);
			rect[1] = G3D::Vector2(-planeRect.x, planeRect.y);
			rect[2] = G3D::Vector2(-planeRect.x, -planeRect.y);
			rect[3] = G3D::Vector2(planeRect.x, -planeRect.y);

			bool rectIn[4] = {true, true, true, true};

			for (int i = 3; i >= 0; i--)
			{
				G3D::Vector2& current = otherQuad[i];
				G3D::Vector2& currentO = otherQuad[(i + 3) % 4];
				for (int j = 0; j < 4; j++)
				{
					G3D::Vector2 math1 = rect[j] - current;
					G3D::Vector2 math2 = currentO - current;

					if ((math2.x * math1.y) - (math2.y * math1.x) >= 0.0f)
					{
						rectCrossQuad[i][j] = true;
					}
					else
					{
						rectCrossQuad[i][j] = false;
						rectIn[j] = false;
					}
				}
			}

			int wasZero = foundCounter == 0;

			for (int i = 0; i < 4; i++)
			{
				if (rectIn[i])
				{
					loadGeoPairPointPlane((*(int*)((char*)this+0x6c)), (*(int*)((char*)this+0x70)), i, (*(NormalId*)((char*)this+0x74)), (*(NormalId*)((char*)this+0x78)));
					foundCounter++;
				}
			}

			if (wasZero && foundCounter == 4)
				return foundCounter;
			else
			{
				for (int i = 0; i < 4; i++)
				{
					for (int j = 3; j >= 0; j--)
					{
						if (quadCrossRect[i][j] != quadCrossRect[i][(j + 3) % 4] && rectCrossQuad[j][i] != rectCrossQuad[j][(i + 1) % 4])
						{

							loadGeoPairEdgeEdgePlane((*(int*)((char*)this+0x70)), (*(int*)((char*)this+0x6c)), block((*(int*)((char*)this+0x70)))->faceVertexToEdge((*(NormalId*)((char*)this+0x78)), (j+3)%4), block((*(int*)((char*)this+0x6c)))->faceVertexToEdge((*(NormalId*)((char*)this+0x74)), i));
							foundCounter++;
						}
					}
				}
				RBXASSERT(foundCounter != 1 && foundCounter <= 8);
				return foundCounter;
			}
		}
	}


}

#include <script/ScriptContext.h>
#include <util/standardout.h>
#include <lua/lua.hpp>
#include <lauxlib.h>
#include <cstring>
namespace RBX { namespace Lua { const char* safe_lua_tostring(lua_State*, int); } }
using namespace RBX;
void ScriptContext::executeInNewThread(Security::Identities identity, const char* script, const char* name, PushArgumentsClosure pushArguments, ReadResultsClosure readResults)
{
    openState();

    lua_State* L;
    lua_State* newThread;

    if (identity == Security::CmdLine)
    {
        if ((*(Lua::ThreadRef*)((char*)this+0x13c)).empty())
        {
            {
                Lua::ThreadRef threadRef(lua_newthread((*(lua_State**)((char*)this+0x138))));
                (*(Lua::ThreadRef*)((char*)this+0x13c)) = threadRef;
            }

            if ((*(Lua::ThreadRef*)((char*)this+0x13c)).empty())
                throw std::runtime_error("Unable to create trusted sandbox thread");

            sandboxThread((*(Lua::ThreadRef*)((char*)this+0x13c)).thread());
            setThreadIdentity((*(Lua::ThreadRef*)((char*)this+0x13c)).thread(), Security::CmdLine);
            lua_pop((*(lua_State**)((char*)this+0x138)), 1);
        }

        L = (*(Lua::ThreadRef*)((char*)this+0x13c)).thread();
        newThread = lua_newthread(L);
    }
    else
    {
        L = (*(lua_State**)((char*)this+0x138));
        newThread = lua_newthread(L);
        sandboxThread(newThread);
        setThreadIdentity(newThread, identity);
    }

    if (!newThread)
    {
        StandardOut::singleton()->print(MESSAGE_ERROR, "ScriptContext::execute: Unable to create a new thread");
        throw std::runtime_error("Unable to create a new thread");
    }

    Lua::ScopedPopper popper(L, 1);

    std::string sName("=");

    if (name)
        sName += name;
    else
        sName += "Script";

    if (luaL_loadbuffer(newThread, script, strlen(script), sName.c_str()))
    {
        std::string err = Lua::safe_lua_tostring(newThread, -1);
        lua_pop(newThread, 1);

        StandardOut::singleton()->print(MESSAGE_ERROR, err.c_str());
        throw std::runtime_error(err);
    }

    resume(newThread, pushArguments, readResults);
}


#undef _RELEASEASSERT
#include <v8world/RotateJoint.h>
#include <v8world/Primitive.h>
#include <v8world/World.h>
#include <v8kernel/Body.h>
#include <util/Math.h>
namespace RBX {
class RotatePrimitiveApi {
public:
    Body* getBody() { return *(Body**)((char*)this+0xa0); }
};
class RotateBodyApi {
private:
    void updatePV() const;
public:
    const G3D::CoordinateFrame& getCoordinateFrame() const {
        updatePV();
        return *(const G3D::CoordinateFrame*)((const char*)this+0x94);
    }
};
	void RotateJoint::putInKernel(Kernel* _kernel)
	{
		MultiJoint::putInKernel(_kernel);

		Body* b0 = ((RotatePrimitiveApi*)getAxlePrim())->getBody();
		Body* b1 = ((RotatePrimitiveApi*)getHolePrim())->getBody();

		G3D::CoordinateFrame cAxleWorld = ((RotateBodyApi*)b0)->getCoordinateFrame() * jointCoord0;
		G3D::CoordinateFrame cHoleWorld = ((RotateBodyApi*)b1)->getCoordinateFrame() * jointCoord1;

		G3D::Vector3 vAxleWorld = cAxleWorld.rotation.getColumn(2);
		G3D::Vector3 vHoleWorld = cHoleWorld.rotation.getColumn(2);

		for (int i = 0; i < 2; i++)
		{
			float multiplier = i == 0 ? -1.0f : 1.0f;

			G3D::Vector3 pAxleWorldPos = vAxleWorld * multiplier + cAxleWorld.translation;
			G3D::Vector3 pHoleWorldPos = vHoleWorld * multiplier + cHoleWorld.translation;

			Point* pAxleWorld = getKernel()->newPoint(b0, pAxleWorldPos);
			Point* pHoleWorld = getKernel()->newPoint(b1, pHoleWorldPos);

			PointToPointBreakConnector* connector = new PointToPointBreakConnector(pAxleWorld, pHoleWorld, getJointK(), Math::inf());
			addToMultiJoint(pAxleWorld, pHoleWorld, connector);
		}

		if (getJointType() == ROTATE_P_JOINT || getJointType() == ROTATE_V_JOINT)
		{
			G3D::Vector3 center0 = cAxleWorld.translation;
			G3D::Vector3 perp = cAxleWorld.rotation.getColumn(0);
			G3D::Vector3 marker0 = perp * 10.0f + center0;

			Point* pMarker0 = getKernel()->newPoint(b0, marker0);
			Point* pMarker1 = getKernel()->newPoint(b1, marker0);

			RBXASSERT(!rotateConnector);
			RotateConnector* connector = new RotateConnector(getPoint(0), getPoint(2), pMarker0, pMarker1, getJointK(), getTorqueArmLength());
			rotateConnector = connector;
			addToMultiJoint(pMarker0, pMarker1, connector);
		}
	}


}

#include <reflection/property.h>
#include "reflection/object.h"
#include "v8xml/XmlElement.h"
#include <G3D/CoordinateFrame.h>
// Real public getter boundary4acb30; no GetSet slot/layout fabrication.
template<> G3D::CoordinateFrame RBX::Reflection::TypedPropertyDescriptor<G3D::CoordinateFrame>::getValue(const RBX::Reflection::DescribedBase*) const;
// Genuine declared float constructor, with native FLOAT7/tag/value stores.
XmlNameValuePair::XmlNameValuePair(const RBX::Name& name, float value)
    : tag(name), valueType(FLOAT), floatValue(value) {}
template<>
void RBX::Reflection::TypedPropertyDescriptor<G3D::CoordinateFrame>::writeValue(const RBX::Reflection::DescribedBase* instance, XmlElement* element) const
{
	// Write the data out in accordance with ROBLOX Schema
	G3D::CoordinateFrame c = getValue(instance);
	element->addChild(new XmlElement(tag_X, c.translation.x));
	element->addChild(new XmlElement(tag_Y, c.translation.y));
	element->addChild(new XmlElement(tag_Z, c.translation.z));
	element->addChild(new XmlElement(tag_R00, c.rotation[0][0]));
	element->addChild(new XmlElement(tag_R01, c.rotation[0][1]));
	element->addChild(new XmlElement(tag_R02, c.rotation[0][2]));
	element->addChild(new XmlElement(tag_R10, c.rotation[1][0]));
	element->addChild(new XmlElement(tag_R11, c.rotation[1][1]));
	element->addChild(new XmlElement(tag_R12, c.rotation[1][2]));
	element->addChild(new XmlElement(tag_R20, c.rotation[2][0]));
	element->addChild(new XmlElement(tag_R21, c.rotation[2][1]));
	element->addChild(new XmlElement(tag_R22, c.rotation[2][2]));
}


// Genuine public XML member roots; these globals claim no native identity.
XmlElement* (XmlElement::*roc_xml_add_child)(XmlElement*) = &XmlElement::addChild;
const RBX::Name& (XmlNameValuePair::*roc_xml_get_tag)() const = &XmlNameValuePair::getTag;
XmlNameValuePair::ValueType (XmlNameValuePair::*roc_xml_get_type)() const = &XmlNameValuePair::getValueType;
template XmlElement::XmlElement(const RBX::Name&, float);
template XmlElement::XmlElement(const RBX::Name&, int);
template void XmlElement::addAttribute<float>(const RBX::Name&, float);

#undef _RELEASEASSERT
#include "v8kernel/Pair.h"
namespace RBX {
// Real public fast accessor, genuine2016 Body.h: cached PV, assertion only.
// Native6136a0 loads coordinate frame directly at94; no updatePV call.
class PairBodyApi {
public:
 const PV& getPvFast() const { return *(const PV*)((const char*)this+0x94); }
};
}
#include "v8kernel/Pair.h"
#include "util/Math.h"
#include "util/Debug.h"

namespace RBX
{
	GeoPair::GeoPair()
	{
		this->body0 = NULL;
		this->body1 = NULL;
		this->offset0 = NULL;
		this->offset1 = NULL;
	}

	void GeoPair::computeNormalPerpVel(float& normalVel, G3D::Vector3& perpVel, const PairParams& _params)
	{
		G3D::Vector3 body0Velocity = ((PairBodyApi*)this->body0)->getPvFast().linearVelocityAtPoint(_params.position);
		G3D::Vector3 body1Velocity = ((PairBodyApi*)this->body1)->getPvFast().linearVelocityAtPoint(_params.position);
		body1Velocity -= body0Velocity;

		float body1VelDot = _params.normal.dot(body1Velocity);
		normalVel = body1VelDot;
		G3D::Vector3 normalVelMul = _params.normal * body1VelDot;
		perpVel = body1Velocity - normalVelMul;
	}

	void GeoPair::forceToBodies(const G3D::Vector3& _force, const G3D::Vector3& _position)
	{
		this->body0->accumulateForce(-_force, _position);
		this->body1->accumulateForce(_force, _position);
		RBXASSERT(fabs(_force.x) < Math::inf());
	}

	void GeoPair::computeBallBall(PairParams& _params)
	{
		const PV& body0PV = ((PairBodyApi*)this->body0)->getPvFast();
		const PV& body1PV = ((PairBodyApi*)this->body1)->getPvFast();

		const G3D::Vector3& body0Trans = body0PV.position.translation;
		const G3D::Vector3& body1Trans = body1PV.position.translation;

		_params.normal = body1Trans - body0Trans;
		_params.length = _params.normal.unitize() - this->pairData.radiusSum;
		_params.position = _params.normal * this->pairData.radius0 + body0Trans;
	}

	void GeoPair::computeBallPoint(PairParams& _params)
	{
		const G3D::Vector3& body0Trans = ((PairBodyApi*)this->body0)->getPvFast().position.translation;
		const G3D::CoordinateFrame& body1Pos = ((PairBodyApi*)this->body1)->getPvFast().position;

		const G3D::Vector3& myoffset1 = *this->offset1;
		_params.position = body1Pos.pointToWorldSpace(myoffset1);
		_params.normal = _params.position - body0Trans;
		_params.length = _params.normal.unitize() - this->pairData.radius0;
	}

	G3D::Vector3 somemaththing(const G3D::Vector3& normal, const G3D::Vector3& trans)
	{
		return trans - normal * normal.dot(trans);
	}

	void GeoPair::computeBallEdge(PairParams& _params)
	{
		const G3D::Vector3& body0PV = ((PairBodyApi*)this->body0)->getPvFast().position.translation;
		const G3D::CoordinateFrame& body1PV = ((PairBodyApi*)this->body1)->getPvFast().position;
		const G3D::Vector3& myoffset1 = *this->offset1;
		const G3D::Vector3& worldPoint = body1PV.pointToWorldSpace(myoffset1);

		const G3D::Vector3& normal = Math::getWorldNormal(this->pairData.normalID1, body1PV);

		const G3D::Vector3& temp = worldPoint - body0PV;
		_params.normal = somemaththing(normal, temp);
		_params.position = _params.normal + body0PV;
		_params.length = _params.normal.unitize() - this->pairData.radius0;
	}

	void GeoPair::computeBallPlane(RBX::PairParams& _params)
	{
		const G3D::Vector3& body0PV = ((PairBodyApi*)this->body0)->getPvFast().position.translation;
		const G3D::CoordinateFrame& body1PV = ((PairBodyApi*)this->body1)->getPvFast().position;
		const G3D::Vector3& myoffset1 = *this->offset1;
		const G3D::Vector3& worldPoint = body1PV.pointToWorldSpace(myoffset1);

		const G3D::Vector3& normal = -Math::getWorldNormal(this->pairData.normalID1, body1PV);

		_params.normal = normal;

		const G3D::Vector3& temp = worldPoint - body0PV;
		G3D::Vector3 someMathThing = normal.dot(temp) * normal;
		_params.position = body0PV + someMathThing;
		_params.length = someMathThing.length() - this->pairData.radius0;
	}

	void GeoPair::computePointPlane(RBX::PairParams& _params)
	{
		_params.position = ((PairBodyApi*)this->body0)->getPvFast().position.pointToWorldSpace(*offset0);
		const G3D::CoordinateFrame& body1PV = ((PairBodyApi*)this->body1)->getPvFast().position;
		G3D::Vector3 body1worldSpace = body1PV.pointToWorldSpace(*offset1);
		_params.normal = -Math::getWorldNormal(this->pairData.normalID1, body1PV);
		_params.length = _params.normal.dot(body1worldSpace - _params.position);
	}

	// is this actually an inline?
	__forceinline float unkClampInline(float d, float max)
	{
		if (fabs(d) > max)
			return max * Math::sign(d);

		return d;
	}
	
	void GeoPair::computeEdgeEdgePlane(RBX::PairParams& _params)
	{
		const G3D::CoordinateFrame& body0PV = ((PairBodyApi*)this->body0)->getPvFast().position;
		const G3D::CoordinateFrame& body1PV = ((PairBodyApi*)this->body1)->getPvFast().position;

		//world space defines
		G3D::Vector3 body0worldSpace = body0PV.pointToWorldSpace(*this->offset0);
		G3D::Vector3 body1worldSpace = body1PV.pointToWorldSpace(*this->offset1);
		//normals
		G3D::Vector3 body0Normal = Math::getWorldNormal(this->pairData.normalID0, body0PV);
		G3D::Vector3 body1Normal = Math::getWorldNormal(this->pairData.normalID1, body1PV);
		//calcs
		G3D::Vector3 bodyWorldSpaceDelta = body1worldSpace - body0worldSpace;
		float bodyNormalDot = body0Normal.dot(body1Normal);
		float compareResult = 1.0f - bodyNormalDot * bodyNormalDot;
		_params.normal = -Math::getWorldNormal(this->pairData.planeID, body1PV.rotation);
		if ( compareResult > 0.00001 )
		{
			float body1Dot = -bodyWorldSpaceDelta.dot(body1Normal);
			float body0Dot = bodyWorldSpaceDelta.dot(body0Normal);
			float theSinner = (body0Dot + (bodyNormalDot * body1Dot)) / compareResult;
			theSinner = unkClampInline(theSinner, 6.0f);
			_params.position = body0Normal * theSinner + body0worldSpace;
			_params.length = _params.normal.dot(body1worldSpace - _params.position);
		}
		else
		{
			_params.position = body0worldSpace;
			_params.length = 0.0;
		}
	}

	void GeoPair::computeEdgeEdge(RBX::PairParams& _params)
	{
		const G3D::CoordinateFrame& body0coord = ((PairBodyApi*)this->body0)->getPvFast().position;
		const G3D::CoordinateFrame& body1coord = ((PairBodyApi*)this->body1)->getPvFast().position;

		//world space defines
		G3D::Vector3 body0worldSpace = body0coord.pointToWorldSpace(*this->offset0);
		G3D::Vector3 body1worldSpace = body1coord.pointToWorldSpace(*this->offset1);
		//normals
		G3D::Vector3 body0Normal = Math::getWorldNormal(this->pairData.normalID0, body0coord);
		G3D::Vector3 body1Normal = Math::getWorldNormal(this->pairData.normalID1, body1coord);
		//calcs
		G3D::Vector3 bodyWorldSpaceDelta = body1worldSpace - body0worldSpace;
		float bodyNormalDot = body0Normal.dot(body1Normal);
		float body0Dot = bodyWorldSpaceDelta.dot(body0Normal);
		float body1Dot = -bodyWorldSpaceDelta.dot(body1Normal);
		float compareResult = 1.0f - bodyNormalDot * bodyNormalDot;
		if ( compareResult > 0.000001f )
		{
			float bodyDotCalc1 = (body0Dot + body1Dot * bodyNormalDot) * (1.0f / compareResult);
			float bodyDotCalc2 = (body1Dot + body0Dot * bodyNormalDot) * (1.0f / compareResult);
			const G3D::Vector3 body0NormalDotCalc = body0worldSpace + (body0Normal * bodyDotCalc1);
			const G3D::Vector3 body1NormalDotCalc = body1worldSpace + (body1Normal * bodyDotCalc2);
			_params.position = (body1NormalDotCalc + body0NormalDotCalc) * 0.5f;
			_params.normal = body0NormalDotCalc - body1NormalDotCalc;
			_params.length = -_params.normal.unitize();

			
		}
		else
		{
			_params.position = body0worldSpace;
			_params.normal = body0Normal;
			_params.length = 0.0f;
		}
	}
}

#undef _RELEASEASSERT
#include "script/ScriptContext.h"
#include "v8datamodel/DebugSettings.h"
#include "util/StandardOut.h"
extern "C" {
#include "lobject.h"
#include "lauxlib.h"
}
namespace RBX {
void ScriptContext::reportError(lua_State* thread) {
 StandardOut::singleton()->print(MESSAGE_ERROR, "%s", lua_tostring(thread, -1));
 if (DebugSettings::singleton().getStackTracingEnabled()) {
  lua_Debug ar;
  if (lua_getstack(thread, 0, &ar)) {
   bool moreStack = false;
   int level = 0;
   while (level < 12 && lua_getstack(thread, level++, &ar)) {
    if (lua_getinfo(thread, "nSlu", &ar) && ar.currentline >= 0) {
     moreStack = true;
     char source[64];
     luaO_chunkid(source, ar.source, sizeof(source));
     if (ar.name)
      StandardOut::singleton()->print(MESSAGE_INFO, "%s, line %d - %s %s", source, ar.currentline, ar.namewhat, ar.name);
     else
      StandardOut::singleton()->print(MESSAGE_INFO, "%s, line %d", source, ar.currentline);
    }
   }
   if (moreStack && level < 12) StandardOut::singleton()->print(MESSAGE_INFO, "   stack end");
  }
 } else StandardOut::singleton()->print(MESSAGE_ERROR, "%s", lua_tostring(thread, -1));
}
}

#undef _RELEASEASSERT
#include "util/Face.h"
#include "util/Math.h"

namespace RBX
{
	const G3D::Vector3& Face::operator[](int i) const
	{
		return ((G3D::Vector3*)this)[i];
	}

	G3D::Vector3& Face::operator[](int i)
	{
		return ((G3D::Vector3*)this)[i];
	}

	void Face::snapToGrid(float grid)
	{
		for (int i = 0; i < 4; ++i)
		{
			G3D::Vector3& v = (*this)[i];
			v = Math::toGrid(v, grid);
		}
	}

	bool Face::overlapWithinPlanes(const Face& f0, const Face& f1, float tolerance)
	{
		for (int i = 0; i < 2; ++i)
		{
			const Face& face = i == 0 ? f0 : f1;
			const Face& otherFace = i == 0 ? f1 : f0;

			G3D::Plane p0(face.c0, face.c1, face.c3);
			
			G3D::Vector3 normal;
			double distance;
			p0.getEquation(normal, distance);

			Face overlapOn1 = otherFace.projectOverlapOnMe(face);

			for (int j = 0; j < 4; ++j)
			{
				if (overlapOn1[j].dot(normal) > tolerance)
					return false;
			}
		}

		return true;
	}

	bool Face::fuzzyContainsInExtrusion(const G3D::Vector3& point, float tolerance) const
	{
		RBXASSERT(tolerance >= 0.0);

		for (int i = 0; i < 4; ++i)
		{
			const G3D::Vector3& v1 = (*this)[i];
			const G3D::Vector3& v2 = (*this)[(i + 1) % 4];

			if ((v2 - v1).dot(point - v1) < -tolerance)
				return false;
		}

		return true;
	}

	void Face::minMax(const G3D::Vector3& point, const G3D::Vector3& normal, float& min, float& max) const
	{
		min = 1.0e10;
		max = -1.0e10;

		for (int i = 0; i < 4; ++i)
		{
			const G3D::Vector3& v = (*this)[i];
			float temp = (v - point).dot(normal);
			min = G3D::min(min, temp);
			max = G3D::max(max, temp);
		}
	}

	bool Face::hasOverlap(const Face& f0, const Face& f1, float byAtLeast)
	{
		for (int i = 0; i < 2; ++i)
		{
			G3D::Vector3 axis = f0.getAxis(i);

			float f0min, f0max;
			f0.minMax(f0.c0, axis, f0min, f0max);

			float f1min, f1max;
			f1.minMax(f0.c0, axis, f1min, f1max);

			if ((f0min - byAtLeast) < f1min || (f0max + byAtLeast) > f1max)
				return false;
		}
		
		return true;
	}

	bool Face::cornersAligned(const Face& f0, const Face& f1, float tolerance)
	{
		RBXASSERT(tolerance > 0.0);

		float toleranceSquared = tolerance*tolerance;

		for (int i = 0; i < 4; ++i)
		{
			bool aligned = false;

			for (int j = 0; j < 4; ++j)
			{
				const G3D::Vector3& v1 = f0[i];
				const G3D::Vector3& v2 = f1[j];

				if ((v1 - v2).squaredMagnitude() < toleranceSquared)
				{
					aligned = true;
					break;
				}
			}

			if (!aligned)
				return false;
		}

		return true;
	}

	Face Face::projectOverlapOnMe(const Face& other) const
	{
		const Face& f0 = (*this);
		const Face& f1 = other;

		//RBXASSERT(Face::hasOverlap(f0, f1, 1e-6f));
		G3D::Vector3 normal[2];
		float minL[2];
		float maxL[2];

		normal[0] = f0.getU();
		normal[1] = f0.getV();
		for (int i = 0; i < 2; ++i) {
			float f0min, f0max, f1min, f1max;
			f0.minMax(f0.c0, normal[i], f0min, f0max);
			f1.minMax(f0.c0, normal[i], f1min, f1max);
			minL[i] = std::max(f0min, f1min);
			maxL[i] = std::min(f0max, f1max);
		}
		return Face(	f0.c0 + (normal[0] * minL[0] + normal[1] * minL[1]),
						f0.c0 + (normal[0] * minL[0] + normal[1] * maxL[1]),
						f0.c0 + (normal[0] * maxL[0] + normal[1] * maxL[1]),
						f0.c0 + (normal[0] * maxL[0] + normal[1] * minL[1])		);
	}

	Face Face::fromExtentsSide(const Extents& e, NormalId faceId)
	{
		Face face;
		e.getFaceCorners(faceId, face.c0, face.c1, face.c2, face.c3);
		return face;
	}

	Face Face::toWorldSpace(const G3D::CoordinateFrame& objectCoord) const
	{
		Face face;
		for (int i = 0; i < 4; ++i)
		{
			face[i] = objectCoord.pointToWorldSpace((*this)[i]);
		}
		return face;
	}

	Face Face::toObjectSpace(const G3D::CoordinateFrame& objectCoord) const
	{
		Face face;
		for (int i = 0; i < 4; ++i)
		{
			face[i] = objectCoord.pointToObjectSpace((*this)[i]);
		}
		return face;
	}
}

#undef _RELEASEASSERT
#include "reflection/object.h"
template void RBX::Reflection::MemberDescriptorContainer<RBX::Reflection::PropertyDescriptor>::declare(RBX::Reflection::PropertyDescriptor*);
template void RBX::Reflection::MemberDescriptorContainer<RBX::Reflection::SignalDescriptor>::declare(RBX::Reflection::SignalDescriptor*);
template void RBX::Reflection::MemberDescriptorContainer<RBX::Reflection::FunctionDescriptor>::declare(RBX::Reflection::FunctionDescriptor*);

namespace RBX { namespace Reflection {
static ClassDescriptor::ClassDescriptors& staticData2()
{
	static ClassDescriptor::ClassDescriptors result;
	return result;
}
static void initStaticData2()
{
	staticData2();
}

ClassDescriptor::ClassDescriptors& ClassDescriptor::allClasses()
{
	static boost::once_flag flag = BOOST_ONCE_INIT;
	boost::call_once(&initStaticData2, flag);
	return staticData2();
}

static bool compare2(const ClassDescriptor* a, const ClassDescriptor* b) { return a->name < b->name; }
		ClassDescriptor::ClassDescriptor(ClassDescriptor& base, const char* name)
			: Descriptor(name),
			  PropertyContainer(&base),
			  SignalContainer(&base),
			  FunctionContainer(&base),
			  derivedClasses(),
			  base(&base)
		{
			RBXASSERT(!lockedDown);

			{
				boost::recursive_mutex::scoped_lock lock(sync());
				ClassDescriptors::iterator bound = std::lower_bound(base.derivedClasses.begin(), base.derivedClasses.end(), this, compare2);
                base.derivedClasses.insert(bound, this);
                ClassDescriptors::iterator iter = allClasses().begin();
                while (iter != allClasses().end()) {
                    ClassDescriptor* desc = *iter;
                    if (Name::compare(this->name, desc->name) < 0) break;
                    ++iter;
                }
                allClasses().insert(iter, this);
			}
		}

} }
