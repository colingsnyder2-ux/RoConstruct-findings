// from server: 100% by tester
// roc 2008-06 007f6180  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6180
//
// 007f6180  6a05                 push 5
// 007f6182  33c9                 xor ecx, ecx
// 007f6184  51                   push ecx
// 007f6185  b8503b5d00           mov eax, 0x5d3b50
// 007f618a  50                   push eax
// 007f618b  6838010000           push 0x138
// 007f6190  68ac298300           push 0x8329ac
// 007f6195  68b0cc8300           push 0x83ccb0
// 007f619a  b96ca09700           mov ecx, 0x97a06c
// 007f619f  e8ecedddff           call 0x5d4f90
// 007f61a4  68c0f07f00           push 0x7ff0c0
// 007f61a9  e801b6eaff           call 0x6a17af
// 007f61ae  59                   pop ecx
// 007f61af  c3                   ret 

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
    char gap0[0x130];
    BrickColor leftArmColor;
    void onColorChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_LeftArmColor;
};

Reflection::BoundProp<BrickColor, 1> BodyColors::prop_LeftArmColor("LeftArmColor", "Appearance", &BodyColors::leftArmColor, &BodyColors::onColorChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
