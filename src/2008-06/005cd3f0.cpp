// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("v8kernel/Connector.h", "../roc_contact_counter_header_f558e10abf3c82a4.cpp")
#pragma include_alias("reflection/enumconverter.h", "../roc_enum_native_owner_header_b9f24b80cd6bff22.cpp")
#pragma include_alias("util/ContentProvider.h", "../roc_wordlist_static_asset_header_179d09ed9a896b44.cpp")
#pragma include_alias("reflection/object.h", "../roc_descriptor_receiver_class_header_268a149c290eb686.cpp")
#undef _RELEASEASSERT
#include "v8kernel/Connector.h"
#include "util/Debug.h"

namespace RBX
{
	void ContactConnector::computeForce(const float dt, bool throttling)
	{
		RBXASSERT(!throttling || !this->canThrottle());

		PairParams params;
		this->geoPair.computeLengthNormalPosition(params);

		if (params.length < 0.f)
		{
			++inContactHit;
			float normalVel;
			G3D::Vector3 perpVel;
			this->geoPair.computeNormalPerpVel(normalVel, perpVel, params);
			this->frictionOffset += dt * perpVel;

			float v8 = this->k * 0.2f;
			float mag = this->frictionOffset.magnitude() * v8;
			float v10 = this->kFriction * this->forceMagLast;

			if (v10 < mag && mag > 0.00000001)
				this->frictionOffset *= (v10 / mag); 

			this->frictionOffset -= params.normal * this->frictionOffset.dot(params.normal);

			float newThreshold;
			if (this->threshold != 0)
			{
				newThreshold = (this->threshold + 0.01f) * 0.999f - 0.01f;
			}
			else
			{
				if (this->firstApproach == 0)
					newThreshold = 0;
				else
					newThreshold = params.length;
			}
			this->threshold = newThreshold;

			float newFirstApproach;
			if (this->firstApproach != 0)
			{
				newFirstApproach = (this->firstApproach + 0.01f) * 0.999f - 0.01f;
			}
			else
			{
				newFirstApproach = params.length;
			}
			this->firstApproach = newFirstApproach;

			float kApplied = normalVel < 0 ? this->k : this->kNeg;
			float v27 = (this->firstApproach - params.length) * kApplied;
			this->forceMagLast = v27;
			this->forceMagLast = params.length <= this->threshold ? this->forceMagLast : 0.f;

			G3D::Vector3 v31 = this->frictionOffset * v8;
			G3D::Vector3 force = (this->forceMagLast * params.normal) - v31;
			this->geoPair.forceToBodies(force, params.position); 
		}
		else
		{
			++outOfContactHit;
			this->firstApproach = 0;
			this->threshold = 0;
			this->forceMagLast = 0;
		}
	}

	bool ContactConnector::canThrottle() const
	{
		return this->geoPair.getBody(0)->getCanThrottle() && this->geoPair.getBody(1)->getCanThrottle();
	}

	void PointToPointBreakConnector::forceToPoints(const G3D::Vector3& force)
	{
		this->point0->accumulateForce(-force);
		this->point1->accumulateForce(force);
		RBXASSERT(force.magnitude() < Math::inf());
	}

	void PointToPointBreakConnector::computeForce(const float dt, bool throttling)
	{
		if (!this->broken)
		{
			G3D::Vector3 force = (this->point1->getWorldPos() - this->point0->getWorldPos()) * -this->k;

			float taxi = Math::taxiCabMagnitude(force);
			this->broken = taxi > this->breakForce;
			this->forceToPoints(force);
		}
	}

	float PointToPointBreakConnector::potentialEnergy()
	{
		G3D::Vector3 diff = this->point1->getWorldPos() - this->point0->getWorldPos();
		float mag = diff.length();
		return this->k * mag * mag * 0.5f;
	}

	RotateConnector::RotateConnector(Point* base0, Point* ray0, Point* ref0, Point* ref1, float kValue, float armLength)
		: base0(base0),
		  ray0(ray0),
		  ref0(ref0),
		  ref1(ref1),
  		  k(kValue * armLength * armLength),
		  lastRotation(0),
		  windings(0),
		  kernelInput()
	{}

	void RotateConnector::computeForce(const float dt, bool throttling)
	{
		G3D::Vector3 normal;
		float rotation;
		float rotVel;
		this->computeParams(normal, rotation, rotVel);

		this->kernelInput.setGoal(rotation);

		float lastGoal = 0;
		float currentGoal;
		float increment;
		this->kernelInput.get(lastGoal, currentGoal, increment);

		//float v1 = (currentGoal - rotation) * this->k;
		G3D::Vector3 v2 = normal * ((currentGoal - rotation) * this->k);

		this->ref0->getBody()->accumulateTorque(-v2);
		this->ref1->getBody()->accumulateTorque(v2);
	}

	void RotateConnector::computeParams(G3D::Vector3& normal, float& rotation, float& rotVel)
	{
		G3D::Vector3 ray0base0_delta = this->ray0->getWorldPos() - this->base0->getWorldPos();
		normal = ray0base0_delta;
		normal.unitize();
		G3D::Vector3 ref0base0_delta = this->ref0->getWorldPos() - this->base0->getWorldPos();
		G3D::Vector3 ref1base0_delta = this->ref1->getWorldPos() - this->base0->getWorldPos();

		float funnyCalculation1 = normal.dot(ref0base0_delta);
		float funnyCalculation2 = normal.dot(ref1base0_delta);

		G3D::Vector3 ref0base0_delta_funny = ref0base0_delta - (normal * funnyCalculation1);
		G3D::Vector3 ref1base0_delta_funny = ref1base0_delta - (normal * funnyCalculation2);

		int oldWindings = this->windings;

		float tripleProdThing = ref0base0_delta_funny.cross(ref1base0_delta_funny).dot(normal);
		float dotThing = ref1base0_delta_funny.dot(ref0base0_delta_funny);

		float result = atan2(tripleProdThing, dotThing);

		if (this->lastRotation > G3D::halfPi())
		{
			if (result < -G3D::halfPi()) //line numbers show that this is an actual line
				this->windings = oldWindings + 1; // these could be very likely temp values 
		}									   //that are later written to actual class variable according to original asm
		else if (this->lastRotation < -G3D::halfPi())
		{
			if (result > G3D::halfPi())
				this->windings = oldWindings - 1;
		}

		rotation = this->windings * Math::twoPi() + result;// line 69 and line 70
		rotVel = rotation - (Math::twoPi() * oldWindings + this->lastRotation);
		this->lastRotation = result; //line 71
	}

	void NormalBreakConnector::computeForce(const float dt, bool throttling)
	{
		if ( !this->broken )
		{
			const G3D::Vector3& worldNormal = Math::getWorldNormal(this->normalIdBody0, this->point0->getBody()->getPV().position);
			const G3D::Vector3& force = -this->k * (this->point1->getWorldPos() - this->point0->getWorldPos());
			
			float forceDot = force.dot(worldNormal);
			this->broken = -forceDot > this->breakForce;
			this->forceToPoints(force);
		}
	}
}

namespace RBX {
int ContactConnector::inContactHit = 0;
int ContactConnector::outOfContactHit = 0;
float ContactConnector::percentActive() {
 int denom = inContactHit + outOfContactHit;
 float answer = denom == 0 ? -1 : (float)inContactHit / (float)denom;
 inContactHit = 0; outOfContactHit = 0;
 return answer;
}
}

#include "reflection/type.h"
#include "util/Utilities.h"
#include <G3D/Vector3.h>
#include <stdexcept>
namespace boost { template<> G3D::Vector3 any_cast<G3D::Vector3>(const any&); }
namespace RBX { namespace Reflection {
template<> std::string& Value::convert<std::string>() {
 if (isType<bool>()) {
  value = StringConverter<bool>::convertToString(cast<bool>());
  _type = &Type::singleton<bool>();
 }
 if (isType<int>()) {
  value = StringConverter<int>::convertToString(cast<int>());
  _type = &Type::singleton<int>();
 }
 if (isType<float>()) {
  value = StringConverter<float>::convertToString(cast<float>());
  _type = &Type::singleton<float>();
 }
 if (isType<double>()) {
  value = StringConverter<double>::convertToString(cast<double>());
  _type = &Type::singleton<double>();
 }
 if (isType<G3D::Vector3>()) {
  value = StringConverter<G3D::Vector3>::convertToString(boost::any_cast<G3D::Vector3>(static_cast<const boost::any&>(value)));
  _type = &Type::singleton<G3D::Vector3>();
 }
 std::string* result = boost::any_cast<std::string>(&value);
 if (!result) throw std::runtime_error("Unable to cast value to std::string");
 return *result;
}
} }

#undef _RELEASEASSERT
#include "util/Sound.h"
#include "reflection/enumconverter.h"
namespace RBX { namespace Reflection {
using namespace Soundscape;
template<>
EnumDesc<Soundscape::ReverbType>::EnumDesc()
	:EnumDescriptor("ReverbType", typeid(Soundscape::ReverbType))
{
	addPair(NoReverb, "NoReverb");
	addPair(GenericReverb, "GenericReverb");
	addPair(PaddedCell, "PaddedCell");
	addPair(Room, "Room");
	addPair(Bathroom, "Bathroom");
	addPair(LivingRoom, "LivingRoom");
	addPair(StoneRoom, "StoneRoom");
	addPair(Auditorium, "Auditorium");
	addPair(ConcertHall, "ConcertHall");
	addPair(Cave, "Cave");
	addPair(Arena, "Arena");
	addPair(Hangar, "Hangar");
	addPair(CarpettedHallway, "CarpettedHallway");
	addPair(Hallway, "Hallway");
	addPair(StoneCorridor, "StoneCorridor");
	addPair(Alley, "Alley");
	addPair(Forest, "Forest");
	addPair(City, "City");
	addPair(Mountains, "Mountains");
	addPair(Quarry, "Quarry");
	addPair(Plain, "Plain");
	addPair(ParkingLot, "ParkingLot");
	addPair(SewerPipe, "SewerPipe");
	addPair(UnderWater, "UnderWater");
}
} }

#include "v8datamodel/Camera.h"
#include "v8datamodel/Feature.h"
#include "util/SurfaceType.h"

namespace RBX {
template<>
	
	Reflection::EnumDesc<Camera::CameraType>::EnumDesc()
		: EnumDescriptor("CameraType", typeid(Camera::CameraType))
	{
		addPair(Camera::FIXED_CAMERA, "Fixed");
		addPair(Camera::WATCH_CAMERA, "Watch");
		addPair(Camera::ATTACH_CAMERA, "Attach");
		addPair(Camera::TRACK_CAMERA, "Track");
		addPair(Camera::FOLLOW_CAMERA, "Follow");
		addPair(Camera::CUSTOM_CAMERA, "Custom");
	}
}

namespace RBX {
template<>

	Reflection::EnumDesc<Feature::TopBottom>::EnumDesc()
		: EnumDescriptor("TopBottom", typeid(Feature::TopBottom))
	{
		addPair(Feature::TOP, "Top");
		addPair(Feature::CENTER_TB, "Center");
		addPair(Feature::BOTTOM, "Bottom");
	}
}

namespace RBX {
template<>

	Reflection::EnumDesc<Feature::LeftRight>::EnumDesc()
		: EnumDescriptor("LeftRight", typeid(Feature::LeftRight))
	{
		addPair(Feature::LEFT, "Left");
		addPair(Feature::CENTER_LR, "Center");
		addPair(Feature::RIGHT, "Right");
	}
}

namespace RBX {
template<>

	Reflection::EnumDesc<Feature::InOut>::EnumDesc()
		: EnumDescriptor("InOut", typeid(Feature::InOut))
	{
		addPair(Feature::EDGE, "Edge");
		addPair(Feature::INSET, "Inset");
		addPair(Feature::CENTER_IO, "Center");
	}
}

namespace RBX {
namespace Reflection {
template<>
		EnumDesc<SurfaceType>::EnumDesc()
			: EnumDescriptor("SurfaceType", typeid(SurfaceType))
		{
			addPair(NO_SURFACE, "Smooth");
			addPair(GLUE, "Glue");
			addPair(WELD, "Weld");
			addPair(STUDS, "Studs");
			addPair(INLET, "Inlet");
			addLegacyName("Spawn", NO_SURFACE);
			addPair(ROTATE, "Hinge");
			addPair(ROTATE_V, "Motor");
			addPair(ROTATE_P, "SteppingMotor");
			addLegacyName("Bumps", GLUE);
		}
} }

#include <set>
#include <fstream>
#include <boost/algorithm/string.hpp>
#include "util/ContentProvider.h"
namespace RBX {
	class WordList
	{
	private:
		std::set<std::string> blacklist;
		void decrypt(std::string& str);
	public:
		WordList();
		~WordList();

		bool ContainsProfanity(std::string str);

	};


void WordList::decrypt(std::string& str)
{
	for(unsigned i = 0; i<str.size(); ++i){
		str[i] = 0x55 ^ str[i];
	}
}

WordList::WordList()
{
	/* Load blacklist

	
	*/

	std::string filename = ContentProvider::getAssetFile("Fonts\\diogenes.fnt");
	
	std::ifstream infile(filename.c_str());
	std::string line;
	while( std::getline(infile, line, '\n'))
	{
		boost::to_lower(line);
		boost::trim(line);
		blacklist.insert(line);
	}

	infile.close();
}
WordList::~WordList()
{

}
bool WordList::ContainsProfanity(std::string str)
{
	/*
	1. Convert query to lower case
	2. Check for in black list
	*/

	boost::to_lower(str);

	return blacklist.find(str) != blacklist.end();
}


}

#undef _RELEASEASSERT
#include "reflection/object.h"
#include <boost/algorithm/string.hpp>
#include <boost/cstdint.hpp>

namespace RakNet { class BitStream; }
namespace RBX { namespace Network {
template<class T> class DescriptorReceiver {
 std::vector<const T*> idToDesc;
 int idBits;
 void learnName(std::string s, int i);
public:
 void getValue(unsigned int id, const T*& value) const { value = idToDesc.at(id); }
 void learn(RakNet::BitStream& stream, bool exchangeChecksum, bool useRakString);
 unsigned int receive(RakNet::BitStream& stream, const T*& value, bool versionCheck) const;
 bool verifyChecksum(const T* value, boost::uint32_t remoteChecksum);
};
using namespace Reflection;
template<> void DescriptorReceiver<PropertyDescriptor>::learnName(std::string s, int i) {
 std::vector<std::string> words;
 boost::split(words,s,boost::is_any_of(":"));
 const Name& n = Name::lookup(words[0]);
 ClassDescriptor::ClassDescriptors::const_iterator iter = ClassDescriptor::all_begin();
 while(iter != ClassDescriptor::all_end()) {
  const ClassDescriptor* c = *iter;
  if(c->name == n) {
   const Name& propertyName = Name::lookup(words[1]);
   PropertyContainer::CollectionType::const_iterator desc = c->PropertyContainer::findDescriptor(propertyName);
   if(desc != c->PropertyContainer::descriptors_end()) { idToDesc[i] = *desc; return; }
   else break;
  }
  ++iter;
 }
 idToDesc[i] = NULL;
}
} }
