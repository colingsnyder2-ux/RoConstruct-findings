// from server: 100% by tester
// roc 2008-06 007f86c0  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f86c0
//
// 007f86c0  6a05                 push 5
// 007f86c2  33c9                 xor ecx, ecx
// 007f86c4  51                   push ecx
// 007f86c5  b8a0ac6300           mov eax, 0x63aca0
// 007f86ca  50                   push eax
// 007f86cb  6830010000           push 0x130
// 007f86d0  6890248200           push 0x822490
// 007f86d5  6878848100           push 0x818478
// 007f86da  b9c4d19700           mov ecx, 0x97d1c4
// 007f86df  e85ceee3ff           call 0x637540
// 007f86e4  68000b8000           push 0x800b00
// 007f86e9  e8c190eaff           call 0x6a17af
// 007f86ee  59                   pop ecx
// 007f86ef  c3                   ret 

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

class DoubleValue : public Instance, public Listener
{
    char gap0[0x128];
    double value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<double, 1> prop_Value;
};

Reflection::BoundProp<double, 1> DoubleValue::prop_Value("Value", "Data", &DoubleValue::value, &DoubleValue::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
