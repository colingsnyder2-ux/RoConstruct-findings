// from server: 100% by tester
// roc 2008-06 007f85b0  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f85b0
//
// 007f85b0  6a05                 push 5
// 007f85b2  33c9                 xor ecx, ecx
// 007f85b4  51                   push ecx
// 007f85b5  b810aa6300           mov eax, 0x63aa10
// 007f85ba  50                   push eax
// 007f85bb  6830010000           push 0x130
// 007f85c0  6890248200           push 0x822490
// 007f85c5  6878848100           push 0x818478
// 007f85ca  b984d39700           mov ecx, 0x97d384
// 007f85cf  e8fcece3ff           call 0x6372d0
// 007f85d4  68a00a8000           push 0x800aa0
// 007f85d9  e8d191eaff           call 0x6a17af
// 007f85de  59                   pop ecx
// 007f85df  c3                   ret 

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

class BrickColorValue : public Instance, public Listener
{
    char gap0[0x128];
    BrickColor value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<BrickColor, 1> prop_Value;
};

Reflection::BoundProp<BrickColor, 1> BrickColorValue::prop_Value("Value", "Data", &BrickColorValue::value, &BrickColorValue::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
