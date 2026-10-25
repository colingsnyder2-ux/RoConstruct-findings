// from server: 100% by tester
// roc 2008-06 007f61b0  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f61b0
//
// 007f61b0  6a05                 push 5
// 007f61b2  33c9                 xor ecx, ecx
// 007f61b4  51                   push ecx
// 007f61b5  b8503b5d00           mov eax, 0x5d3b50
// 007f61ba  50                   push eax
// 007f61bb  683c010000           push 0x13c
// 007f61c0  68ac298300           push 0x8329ac
// 007f61c5  68c0cc8300           push 0x83ccc0
// 007f61ca  b9dca09700           mov ecx, 0x97a0dc
// 007f61cf  e8bcedddff           call 0x5d4f90
// 007f61d4  6800f17f00           push 0x7ff100
// 007f61d9  e8d1b5eaff           call 0x6a17af
// 007f61de  59                   pop ecx
// 007f61df  c3                   ret 

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
class BrickColor { int number; };

class BodyColors : public Instance, public Listener
{
    char gap0[0x134];
    BrickColor rightArmColor;
    void onColorChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_RightArmColor;
};

Reflection::BoundProp<BrickColor, 1> BodyColors::prop_RightArmColor("RightArmColor", "Appearance", &BodyColors::rightArmColor, &BodyColors::onColorChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
