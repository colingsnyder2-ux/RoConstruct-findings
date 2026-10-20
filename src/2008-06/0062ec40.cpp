// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_gyro_native_public_accessors_0350d6e00e33a6a4.cpp

// Candidate translation unit (score above; library headers required).
#include <v8datamodel/Gyro.h>
namespace RBX {
// Genuine Body accessor bodies on an opaque native receiver. Keep the actual
// updatePV helper PRIVATE, as in Body.h; only its own genuine public methods
// call it. Native PV starts94 (frame48bytes, then Velocity atc4). No private
// helper is exposed or called from the gyro methods; no access rules changed.
class GyroBodyApi {
private:
    void updatePV() const;
public:
    Body* getRoot() { return *(Body**)((char*)this+0x10); }
    const G3D::CoordinateFrame& getCoordinateFrame() const {
        updatePV();
        return *(const G3D::CoordinateFrame*)((const char*)this+0x94);
    }
    const Velocity& getVelocity() const {
        updatePV();
        return *(const Velocity*)((const char*)this+0xc4);
    }
    void accumulateTorque(const G3D::Vector3&);
    const G3D::Vector3& getBranchTorque() const {
        Body* root=*(Body*const*)((const char*)this+0x10);
        const SimBody* sim=*(SimBody*const*)((const char*)root+0x2c);
        return sim ? *(const G3D::Vector3*)((const char*)sim+0x90) : G3D::Vector3::zero();
    }
    G3D::Vector3 getBranchIBodyV3() const {
        const Cofm* cofm=*(Cofm*const*)((const char*)this+0x28);
        return Math::toDiagonal(cofm ? cofm->getMoment() : *(const G3D::Matrix3*)((const char*)this+0x68));
    }
};
	void BodyGyro::computeOrientation(Body* body)
	{
		if (G3D::fuzzyEq((*(const G3D::Vector3*)((const char*)this+0x150)).y, 0.0f))
			return;

		Body* root = ((GyroBodyApi*)body)->getRoot();

		G3D::Vector3 oldTorqueWorld = ((GyroBodyApi*)root)->getBranchTorque();


		G3D::Vector3 localZNegAxis = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace((*(const G3D::CoordinateFrame*)((const char*)this+0x15c)).lookVector());


		float desiredTorqueY = -(((GyroBodyApi*)root)->getBranchIBodyV3().y * localZNegAxis.x * (*(const float*)((const char*)this+0x148)));

		G3D::Vector3 torqueBody = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(oldTorqueWorld);

		if (fabs(desiredTorqueY - torqueBody.y) < ((GyroBodyApi*)root)->getBranchIBodyV3().y * (*(const G3D::Vector3*)((const char*)this+0x150)).y)
			torqueBody.y = desiredTorqueY;
		else
			torqueBody.y = torqueBody.y + desiredTorqueY;


		G3D::Vector3 angVelBody = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(((GyroBodyApi*)body)->getVelocity().rotational);
		torqueBody.y = torqueBody.y - (*(const float*)((const char*)this+0x14c)) * ((GyroBodyApi*)root)->getBranchIBodyV3().y * angVelBody.y;

		G3D::Vector3 addedTorque = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToWorldSpace(torqueBody) - oldTorqueWorld;

		((GyroBodyApi*)root)->accumulateTorque(addedTorque);
	}



	void BodyGyro::computeBalance(Body* body)
	{
		if (G3D::fuzzyEq((*(const G3D::Vector3*)((const char*)this+0x150)).x, 0.0f) && G3D::fuzzyEq((*(const G3D::Vector3*)((const char*)this+0x150)).z, 0.0f))
			return;

		Body* root = ((GyroBodyApi*)body)->getRoot();
		G3D::Vector3 oldTorqueWorld = ((GyroBodyApi*)root)->getBranchTorque();
		G3D::Vector3 localYAxis = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace((*(const G3D::CoordinateFrame*)((const char*)this+0x15c)).upVector());
		float desiredTorqueX = ((GyroBodyApi*)root)->getBranchIBodyV3().x * localYAxis.z * (*(const float*)((const char*)this+0x148));
		float desiredTorqueZ = -(((GyroBodyApi*)root)->getBranchIBodyV3().z * localYAxis.x * (*(const float*)((const char*)this+0x148)));

		G3D::Vector3 torqueBody = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(oldTorqueWorld);

		if (fabs(desiredTorqueX - torqueBody.x) < ((GyroBodyApi*)root)->getBranchIBodyV3().x * (*(const G3D::Vector3*)((const char*)this+0x150)).x)
			torqueBody.x = desiredTorqueX;
		else
			torqueBody.x += desiredTorqueX;

		if (fabs(desiredTorqueZ - torqueBody.z) < ((GyroBodyApi*)root)->getBranchIBodyV3().z * (*(const G3D::Vector3*)((const char*)this+0x150)).z)
			torqueBody.z = desiredTorqueZ;
		else
			torqueBody.z += desiredTorqueZ;

		G3D::Vector3 angVelBody = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(((GyroBodyApi*)body)->getVelocity().rotational);
		torqueBody.x -= (((GyroBodyApi*)root)->getBranchIBodyV3().x * angVelBody.x) * (*(const float*)((const char*)this+0x14c));
		torqueBody.z -= (((GyroBodyApi*)root)->getBranchIBodyV3().z * angVelBody.z) * (*(const float*)((const char*)this+0x14c));

		G3D::Vector3 addedTorque = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToWorldSpace(torqueBody) - oldTorqueWorld;

		((GyroBodyApi*)root)->accumulateTorque(addedTorque);
	}


}
