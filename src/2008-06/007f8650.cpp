// from server: 100% by tester
// roc 2008-06 007f8650  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8650
//
// 007f8650  6a05                 push 5
// 007f8652  33c9                 xor ecx, ecx
// 007f8654  51                   push ecx
// 007f8655  b870ab6300           mov eax, 0x63ab70
// 007f865a  50                   push eax
// 007f865b  6830010000           push 0x130
// 007f8660  6890248200           push 0x822490
// 007f8665  6878848100           push 0x818478
// 007f866a  b9f0d39700           mov ecx, 0x97d3f0
// 007f866f  e8fcede3ff           call 0x637470
// 007f8674  68e00a8000           push 0x800ae0
// 007f8679  e83191eaff           call 0x6a17af
// 007f867e  59                   pop ecx
// 007f867f  c3                   ret 

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

class BoolValue : public Instance, public Listener
{
    char gap0[0x128];
    bool value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<bool, 1> prop_Value;
};

Reflection::BoundProp<bool, 1> BoolValue::prop_Value("Value", "Data", &BoolValue::value, &BoolValue::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
