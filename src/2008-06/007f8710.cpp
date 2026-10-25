// from server: 100% by tester
// roc 2008-06 007f8710  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8710
//
// 007f8710  6a05                 push 5
// 007f8712  33c9                 xor ecx, ecx
// 007f8714  51                   push ecx
// 007f8715  b8e0ac6300           mov eax, 0x63ace0
// 007f871a  50                   push eax
// 007f871b  6830010000           push 0x130
// 007f8720  6890248200           push 0x822490
// 007f8725  6878848100           push 0x818478
// 007f872a  b9e0d19700           mov ecx, 0x97d1e0
// 007f872f  e8dceee3ff           call 0x637610
// 007f8734  68200b8000           push 0x800b20
// 007f8739  e87190eaff           call 0x6a17af
// 007f873e  59                   pop ecx
// 007f873f  c3                   ret 

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

class NumberValue : public Instance, public Listener
{
    char gap0[0x128];
    double value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<double, 1> prop_Value;
};

Reflection::BoundProp<double, 1> NumberValue::prop_Value("Value", "Data", &NumberValue::value, &NumberValue::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
