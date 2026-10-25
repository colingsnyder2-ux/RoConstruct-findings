// from server: 100% by tester
// roc 2008-06 007f6210  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6210
//
// 007f6210  6a05                 push 5
// 007f6212  33c9                 xor ecx, ecx
// 007f6214  51                   push ecx
// 007f6215  b8503b5d00           mov eax, 0x5d3b50
// 007f621a  50                   push eax
// 007f621b  6844010000           push 0x144
// 007f6220  68ac298300           push 0x8329ac
// 007f6225  68dccc8300           push 0x83ccdc
// 007f622a  b988a09700           mov ecx, 0x97a088
// 007f622f  e85cedddff           call 0x5d4f90
// 007f6234  6840f17f00           push 0x7ff140
// 007f6239  e871b5eaff           call 0x6a17af
// 007f623e  59                   pop ecx
// 007f623f  c3                   ret 

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
    char gap0[0x13c];
    BrickColor leftLegColor;
    void onColorChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_LeftLegColor;
};

Reflection::BoundProp<BrickColor, 1> BodyColors::prop_LeftLegColor("LeftLegColor", "Appearance", &BodyColors::leftLegColor, &BodyColors::onColorChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
