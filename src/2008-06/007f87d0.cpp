// from server: 100% by tester
// roc 2008-06 007f87d0  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f87d0
//
// 007f87d0  6a05                 push 5
// 007f87d2  33c9                 xor ecx, ecx
// 007f87d4  51                   push ecx
// 007f87d5  b8a0af6300           mov eax, 0x63afa0
// 007f87da  50                   push eax
// 007f87db  6830010000           push 0x130
// 007f87e0  6890248200           push 0x822490
// 007f87e5  6878848100           push 0x818478
// 007f87ea  b90cd49700           mov ecx, 0x97d40c
// 007f87ef  e8bcefe3ff           call 0x6377b0
// 007f87f4  68600b8000           push 0x800b60
// 007f87f9  e8b18feaff           call 0x6a17af
// 007f87fe  59                   pop ecx
// 007f87ff  c3                   ret 

namespace G3D { class Color3 { public: float r, g, b; }; }
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

class Color3Value : public Instance, public Listener
{
    char gap0[0x128];
    G3D::Color3 value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<G3D::Color3, 1> prop_Value;
};

Reflection::BoundProp<G3D::Color3, 1> Color3Value::prop_Value("Value", "Data", &Color3Value::value, &Color3Value::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
