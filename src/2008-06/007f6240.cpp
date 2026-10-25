// from server: 100% by tester
// roc 2008-06 007f6240  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6240
//
// 007f6240  6a05                 push 5
// 007f6242  33c9                 xor ecx, ecx
// 007f6244  51                   push ecx
// 007f6245  b8503b5d00           mov eax, 0x5d3b50
// 007f624a  50                   push eax
// 007f624b  6848010000           push 0x148
// 007f6250  68ac298300           push 0x8329ac
// 007f6255  68eccc8300           push 0x83ccec
// 007f625a  b9c49f9700           mov ecx, 0x979fc4
// 007f625f  e82cedddff           call 0x5d4f90
// 007f6264  6860f17f00           push 0x7ff160
// 007f6269  e841b5eaff           call 0x6a17af
// 007f626e  59                   pop ecx
// 007f626f  c3                   ret 

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
    char gap0[0x140];
    BrickColor rightLegColor;
    void onColorChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_RightLegColor;
};

Reflection::BoundProp<BrickColor, 1> BodyColors::prop_RightLegColor("RightLegColor", "Appearance", &BodyColors::rightLegColor, &BodyColors::onColorChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
