// from server: 100% by tester
// roc 2008-06 007f8600  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8600
//
// 007f8600  6a05                 push 5
// 007f8602  33c9                 xor ecx, ecx
// 007f8604  51                   push ecx
// 007f8605  b830ab6300           mov eax, 0x63ab30
// 007f860a  50                   push eax
// 007f860b  6830010000           push 0x130
// 007f8610  6890248200           push 0x822490
// 007f8615  6878848100           push 0x818478
// 007f861a  b9d0d29700           mov ecx, 0x97d2d0
// 007f861f  e87cede3ff           call 0x6373a0
// 007f8624  68c00a8000           push 0x800ac0
// 007f8629  e88191eaff           call 0x6a17af
// 007f862e  59                   pop ecx
// 007f862f  c3                   ret 

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

class IntValue : public Instance, public Listener
{
    char gap0[0x128];
    int value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<int, 1> prop_Value;
};

Reflection::BoundProp<int, 1> IntValue::prop_Value("Value", "Data", &IntValue::value, &IntValue::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
