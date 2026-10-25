// from server: 100% by tester
// roc 2008-06 007f7f80  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7f80
//
// 007f7f80  6a05                 push 5
// 007f7f82  33c9                 xor ecx, ecx
// 007f7f84  51                   push ecx
// 007f7f85  b8f0e06200           mov eax, 0x62e0f0
// 007f7f8a  50                   push eax
// 007f7f8b  6860010000           push 0x160
// 007f7f90  68b8818400           push 0x8481b8
// 007f7f95  68d0818400           push 0x8481d0
// 007f7f9a  b958c79700           mov ecx, 0x97c758
// 007f7f9f  e8dc92e3ff           call 0x631280
// 007f7fa4  68d0078000           push 0x8007d0
// 007f7fa9  e80198eaff           call 0x6a17af
// 007f7fae  59                   pop ecx
// 007f7faf  c3                   ret 

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
    char gap0[0x158];
    float targetRadius;
    void onGoalChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<float, 1> prop_TargetRadius;
};

Reflection::BoundProp<float, 1> Rocket::prop_TargetRadius("TargetRadius", "Goals", &Rocket::targetRadius, &Rocket::onGoalChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
