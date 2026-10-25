// from server: 100% by tester
// roc 2008-06 007f6150  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6150
//
// 007f6150  6a05                 push 5
// 007f6152  33c9                 xor ecx, ecx
// 007f6154  51                   push ecx
// 007f6155  b8503b5d00           mov eax, 0x5d3b50
// 007f615a  50                   push eax
// 007f615b  6834010000           push 0x134
// 007f6160  68ac298300           push 0x8329ac
// 007f6165  68a4cc8300           push 0x83cca4
// 007f616a  b9a89f9700           mov ecx, 0x979fa8
// 007f616f  e81ceeddff           call 0x5d4f90
// 007f6174  68e0f07f00           push 0x7ff0e0
// 007f6179  e831b6eaff           call 0x6a17af
// 007f617e  59                   pop ecx
// 007f617f  c3                   ret 

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
    char gap0[0x12c];
    BrickColor headColor;
    void onColorChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_HeadColor;
};

Reflection::BoundProp<BrickColor, 1> BodyColors::prop_HeadColor("HeadColor", "Appearance", &BodyColors::headColor, &BodyColors::onColorChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
