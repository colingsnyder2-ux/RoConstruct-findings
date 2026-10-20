// from server: 64% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_rocket_computeforce_genuine_8a3863da577a3a2d.cpp

// Candidate translation unit (score above; library headers required).
#include <v8datamodel/Gyro.h>
#include <v8datamodel/PartInstance.h>
namespace RBX {
void Rocket::computeForce(const float dt, bool throttling)
{
	if (!active)
		return;

	Body* body = part->getPrimitive()->getBody();
	RBXASSERT(body != NULL);

	G3D::Vector3 targetPos = target.get() ? target->getCoordinateFrame().pointToWorldSpace(targetOffset) : targetOffset;
	G3D::Vector3 targetDelta = targetPos - body->getCoordinateFrame().translation;
	G3D::Vector3 targetDir = targetDelta.direction();
	G3D::Vector3 pAccel = targetDelta * kThrustP;
	Body* root = body->getRoot();

	G3D::Vector3 force = pAccel * root->getBranchMass();

	if (root->getVelocity().linear.squaredMagnitude() > maxSpeed * maxSpeed)
	{
		G3D::Vector3 dir = root->getVelocity().linear.direction();
		float dotProduct = dir.dot(force);
		if (dotProduct > 0.0f)
		{
			force -= dir * dotProduct;
			pAccel = dir * maxSpeed;
			G3D::Vector3 low = root->getVelocity().linear - pAccel;
			force -= (low * root->getBranchMass()) / dt;
		}
	}

	G3D::Vector3 adjustedVelocity = (root->getBranchMass() * kThrustD) * root->getVelocity().linear;
	force -= adjustedVelocity;
	force -= body->getBranchForce();
	Math::fixDenorm(force);
	force = force.clamp(G3D::Vector3(-maxThrust, -maxThrust, -maxThrust), G3D::Vector3(maxThrust, maxThrust, maxThrust));
	root->accumulateForceAtBranchCofm(force);

	G3D::Vector3 unitForce = force.squaredMagnitude() > 0.000001f ? force.fastDirection() : G3D::Vector3::zero();
	G3D::Vector3 forceCartoon = unitForce * (1.0f - cartoonFactor);
	G3D::Vector3 newDirection = forceCartoon + (targetDir * cartoonFactor);
	turn(body, newDirection.direction());
}
}
