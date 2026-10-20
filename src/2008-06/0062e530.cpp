// from server: 70% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_rocket_turn_native_49484d2f8c9594a1.cpp

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
    G3D::Matrix3 getBranchIBody() const {
        const Cofm* cofm=*(Cofm*const*)((const char*)this+0x28);
        return cofm ? cofm->getMoment() : *(const G3D::Matrix3*)((const char*)this+0x68);
    }
    G3D::Vector3 getBranchIBodyV3() const {
        return Math::toDiagonal(getBranchIBody());
    }
};
	G3D::Vector3 Rocket::turn(Body* body, const G3D::Vector3& targetDir)
	{
		G3D::Vector3 targetObjectSpace = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(targetDir);

		Body* root = ((GyroBodyApi*)body)->getRoot();
		G3D::Vector3 oldTorqueWorld = ((GyroBodyApi*)root)->getBranchTorque();

		float desiredTorqueX = targetObjectSpace.y * ((GyroBodyApi*)root)->getBranchIBodyV3().x * (*(const float*)((const char*)this+0x178));
		float desiredTorqueY = -(targetObjectSpace.x * ((GyroBodyApi*)root)->getBranchIBodyV3().y * (*(const float*)((const char*)this+0x178)));

		G3D::Vector3 torqueBody = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(oldTorqueWorld);
		
		if (fabs(desiredTorqueX - torqueBody.x) < ((GyroBodyApi*)root)->getBranchIBodyV3().x * (*(const G3D::Vector3*)((const char*)this+0x180)).x)
			torqueBody.x = desiredTorqueX;
		else
			torqueBody.x += desiredTorqueX;
		
		if (fabs(desiredTorqueY - torqueBody.y) < ((GyroBodyApi*)root)->getBranchIBodyV3().y * (*(const G3D::Vector3*)((const char*)this+0x180)).y)
			torqueBody.y = desiredTorqueY;
		else
			torqueBody.y += desiredTorqueY;

		G3D::Vector3 angVelBody = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToObjectSpace(((GyroBodyApi*)body)->getVelocity().rotational);
		torqueBody.x -= (((GyroBodyApi*)root)->getBranchIBodyV3().x * angVelBody.x) * (*(const float*)((const char*)this+0x17c));
		torqueBody.y -= (((GyroBodyApi*)root)->getBranchIBodyV3().y * angVelBody.y) * (*(const float*)((const char*)this+0x17c));

		G3D::Vector3 addedTorque = ((GyroBodyApi*)body)->getCoordinateFrame().vectorToWorldSpace(torqueBody) - oldTorqueWorld;
		((GyroBodyApi*)root)->accumulateTorque(addedTorque);

		return targetObjectSpace;
	}



}
