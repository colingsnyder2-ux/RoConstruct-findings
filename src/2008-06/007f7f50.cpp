// from server: 100% by tester
// roc 2008-06 007f7f50  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7f50
//
// 007f7f50  6a05                 push 5
// 007f7f52  33c9                 xor ecx, ecx
// 007f7f54  51                   push ecx
// 007f7f55  b8f0e06200           mov eax, 0x62e0f0
// 007f7f5a  50                   push eax
// 007f7f5b  6854010000           push 0x154
// 007f7f60  68b8818400           push 0x8481b8
// 007f7f65  68c0818400           push 0x8481c0
// 007f7f6a  b974c79700           mov ecx, 0x97c774
// 007f7f6f  e83c92e3ff           call 0x6311b0
// 007f7f74  68f0078000           push 0x8007f0
// 007f7f79  e83198eaff           call 0x6a17af
// 007f7f7e  59                   pop ecx
// 007f7f7f  c3                   ret 

namespace G3D { class Vector3 { public: float x, y, z; }; }
namespace RBX {
namespace Reflection {
class PropertyDescriptor
{
public:
    enum Functionality { STANDARD = 5 };
};

template<typename PropType, int Unknown>
class BoundProp
{
    char data[0x40];
public:
    template<typename Class>
    BoundProp(const char* name, const char* category, PropType (Class::*member),
              void (Class::*changed)(const PropertyDescriptor&), PropertyDescriptor::Functionality flags);
    ~BoundProp();
};
}

class Instance { public: virtual ~Instance(); };
class Listener { public: virtual ~Listener(); };

class Rocket : public Instance, public Listener
{
    char gap0[0x14c];
    G3D::Vector3 targetOffset;
    void onGoalChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<G3D::Vector3, 1> prop_TargetOffset;
};

Reflection::BoundProp<G3D::Vector3, 1> Rocket::prop_TargetOffset("TargetOffset", "Goals", &Rocket::targetOffset, &Rocket::onGoalChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
