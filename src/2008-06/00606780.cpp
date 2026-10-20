// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_contact_counter_open_a53cbed5341d1a27.cpp

// Candidate translation unit (score above; library headers required).
#pragma include_alias("v8kernel/Connector.h", "../roc_contact_counter_header_f558e10abf3c82a4.cpp")
#undef _RELEASEASSERT
#include "v8kernel/Connector.h"
#include "util/Debug.h"

namespace RBX
{
void ContactConnector::computeForce(const float dt, bool throttling)
{
	PairParams params;

	params.position = params.normal = G3D::Vector3(0.0f, 0.0f, 0.0f);
	geoPair.computeLengthNormalPosition(params);

	if (params.length < 0.0f) {
		++inContactHit;
		float normalVel;
		G3D::Vector3 perpVel(0.0f, 0.0f, 0.0f);

		geoPair.computeNormalPerpVel(normalVel, perpVel, params);

		frictionOffset += dt * perpVel;

		float kApplied = k * 0.2f;
		float magnitude = frictionOffset.magnitude(), frictionForce = magnitude * kApplied;
		float maxFriction = kFriction * forceMagLast;

		if (frictionForce > maxFriction && frictionForce > 1e-08) {
			frictionOffset *= maxFriction / frictionForce;
		}

		frictionOffset -= params.normal * frictionOffset.dot(params.normal);

		threshold =
			threshold != 0.0f ? (threshold + 0.01f) * 0.999f - 0.01f : (firstApproach == 0.0f ? 0.0f : params.length);

		firstApproach = firstApproach != 0.0f ? (firstApproach + 0.01f) * 0.999f - 0.01f : params.length;

		forceMagLast = (firstApproach - params.length) * (normalVel < 0.0f ? k : kNeg);
		forceMagLast = params.length <= threshold ? forceMagLast : 0.0f;

		G3D::Vector3 force = forceMagLast * params.normal - frictionOffset * kApplied;

		geoPair.forceToBodies(force, params.position);
	}
	else {
		++outOfContactHit;
		forceMagLast = threshold = firstApproach = 0.0f;
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
