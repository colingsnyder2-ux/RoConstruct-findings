// from server: 100% by tester
// roc 2008-06 007f6120  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6120
//
// 007f6120  6a05                 push 5
// 007f6122  33c9                 xor ecx, ecx
// 007f6124  51                   push ecx
// 007f6125  b8503b5d00           mov eax, 0x5d3b50
// 007f612a  50                   push eax
// 007f612b  6834010000           push 0x134
// 007f6130  68ac298300           push 0x8329ac
// 007f6135  6898cc8300           push 0x83cc98
// 007f613a  b9c0a09700           mov ecx, 0x97a0c0
// 007f613f  e87cedddff           call 0x5d4ec0
// 007f6144  68e0f17f00           push 0x7ff1e0
// 007f6149  e861b6eaff           call 0x6a17af
// 007f614e  59                   pop ecx
// 007f614f  c3                   ret 

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

class Skin : public Instance, public Listener
{
    char gap0[0x12c];
    BrickColor skinColor;
    void onColorChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_SkinColor;
};

Reflection::BoundProp<BrickColor, 1> Skin::prop_SkinColor("SkinColor", "Appearance", &Skin::skinColor, &Skin::onColorChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
