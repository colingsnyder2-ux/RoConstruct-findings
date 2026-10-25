// from server: 71% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-net-dll roc_physics_receiver_native_motor_count_snapshotb8c8e2039fe6c79c.cpp

// Candidate translation unit (score above; library headers required).
// Native004c83b0 full1890B, DirectPhysicsReceiver::receivePacket.
// Typed public SDK values plus binary-backed opaque pointer APIs.
#include <BitStream.h>
#include <G3D/CoordinateFrame.h>
#include "util/Quaternion.h"
#include "util/Guid.h"
#include "util/Association.h"
#include "util/standardout.h"
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <stdexcept>

template<class T> static inline T& physicsField(void* p,unsigned offset) {
    return *reinterpret_cast<T*>(static_cast<char*>(p)+offset);
}
// Actual native Association<Instance>::TItem<TimeStamp> RTTI and8B allocation.
struct TimeStamp { unsigned value; TimeStamp():value(0) {} };
namespace RBX {
class Instance;
class NativePhysicsSettings {
public:
    static NativePhysicsSettings& singleton(); //0049e890
    bool printErrors() const { return physicsField<bool>(const_cast<NativePhysicsSettings*>(this),0x130); }
};
class NativePhysicsMotor {
public:
    void setCurrentAngle(float); //005e5da0 ret4
};
class NativePhysicsAssembly {
public:
    int getNumMotors(); //005e62d0
    NativePhysicsMotor* getMotor(unsigned); //005e6400 ret4
};
class NativePhysicsClump {
public:
    bool getAnchored() const; //005e60e0
};
class NativePhysicsPrimitive {
public:
    NativePhysicsAssembly* getAssembly() const; //005e7570
};
class NativePhysicsPart {
public:
    static bool nonNullInWorkspace(boost::shared_ptr<NativePhysicsPart>); //005995f0 cdecl value8
    void setCoordinateFrame(const G3D::CoordinateFrame&); //005997f0 ret4
    NativePhysicsPrimitive& primitive() { return physicsField<NativePhysicsPrimitive>(this,0x228); }
    NativePhysicsClump* clump() { return physicsField<NativePhysicsClump*>(this,0x284); }
    Association<Instance>& association() { return physicsField<Association<Instance> >(this,0xec); }
};
// 004c7530: cdecl hidden shared_ptr result, one enable_shared_from_this pointer.
// Native helper uses static/polymorphic downcast, no runtime dynamic cast.
boost::shared_ptr<NativePhysicsPart> __cdecl recoverPhysicsPart(boost::enable_shared_from_this<Instance>*);
namespace Network {
class NativePhysicsReplicator {
public:
    bool deserializeInstanceRef(RakNet::BitStream&,Instance*&,Guid::Data&); //004a8b60 ret12
};
class IPhysicsSender {
public:
    static void readPosition(RakNet::BitStream&,G3D::Vector3&); //004ca5c0 cdecl
};
RakNet::BitStream& operator>>(RakNet::BitStream&,unsigned char&); //004a6380 cdecl
float decodePhysicsAngle(unsigned char); //005dda30 cdecl
class DirectPhysicsReceiver {
public:
    void receivePacket(RakNet::BitStream&,unsigned);
};
}}
typedef char NativeGuidDataSize[sizeof(RBX::Guid::Data)==8?1:-1];
typedef char NativeQuaternionSize[sizeof(RBX::Quaternion)==16?1:-1];
typedef char NativeSharedPartSize[sizeof(boost::shared_ptr<RBX::NativePhysicsPart>)==8?1:-1];
typedef char NativeCoordinateFrameSize[sizeof(G3D::CoordinateFrame)==48?1:-1];
typedef char NativeAssociationSize[sizeof(RBX::Association<RBX::Instance>)==24?1:-1];

void RBX::Network::DirectPhysicsReceiver::receivePacket(RakNet::BitStream& stream,unsigned timestamp) {
    while(true) {
        boost::shared_ptr<NativePhysicsPart> part;
        Instance* instance;
        Guid::Data id;
        if(physicsField<NativePhysicsReplicator*>(this,4)->deserializeInstanceRef(stream,instance,id)) {
            if(!instance) return;
            part=recoverPhysicsPart(reinterpret_cast<boost::enable_shared_from_this<Instance>*>(reinterpret_cast<char*>(instance)+0xe4));
        } else if(NativePhysicsSettings::singleton().printErrors())
            StandardOut::singleton()->print(MESSAGE_WARNING,"Physics-in of unidentified %s",id.readableString(4).c_str());
        if(part) {
            if(!NativePhysicsPart::nonNullInWorkspace(part)) {
                if(NativePhysicsSettings::singleton().printErrors())
                    StandardOut::singleton()->print(MESSAGE_INFO,"Physics-in of part not in workspace %s",id.readableString(4).c_str());
                part.reset();
            } else if(!part->primitive().getAssembly()) {
                if(NativePhysicsSettings::singleton().printErrors())
                    StandardOut::singleton()->print(MESSAGE_INFO,"Physics-in of primitive with no assembly %s",id.readableString(4).c_str());
                part.reset();
            } else if(part->clump()->getAnchored()) {
                if(NativePhysicsSettings::singleton().printErrors())
                    StandardOut::singleton()->print(MESSAGE_INFO,"Physics-in of anchored primitive %s",id.readableString(4).c_str());
                part.reset();
            } else {
                unsigned& partTime=part->association().get<TimeStamp>().value;
                if(partTime>timestamp) {
                    if(NativePhysicsSettings::singleton().printErrors())
                        StandardOut::singleton()->print(MESSAGE_INFO,"Physics-in old packet");
                    part.reset();
                } else partTime=timestamp;
            }
        }
        G3D::CoordinateFrame frame;
        IPhysicsSender::readPosition(stream,frame.translation);
        Quaternion rotation;
        if(!stream.ReadNormQuat(rotation.w,rotation.x,rotation.y,rotation.z))
            throw std::runtime_error("Failed to read Quaternion");
        rotation.toRotationMatrix(frame.rotation);
        if(part && !part->clump()->getAnchored()) part->setCoordinateFrame(frame);
        unsigned char motorCount;
        stream>>motorCount;
        if(motorCount>50 && NativePhysicsSettings::singleton().printErrors())
            StandardOut::singleton()->print(MESSAGE_WARNING,"Physics-in of %s has %d motors",id.readableString(4).c_str(),motorCount);
        const int count=motorCount;
        NativePhysicsAssembly* assembly;
        if(part && (assembly=part->primitive().getAssembly()) && assembly->getNumMotors()==count) {
            for(int i=0;i<count;++i) {
                unsigned char angle;
                stream>>angle;
                assembly->getMotor(i)->setCurrentAngle(decodePhysicsAngle(angle));
            }
        } else {
            for(int remaining=count;remaining>0;--remaining) {
                unsigned char discard;
                stream>>discard;
            }
        }
    }
}
