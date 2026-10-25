// from server: 100% by tester
// roc 2008-06 007f8830  unit: seg_007f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8830
//
// 007f8830  6a05                 push 5
// 007f8832  33c9                 xor ecx, ecx
// 007f8834  51                   push ecx
// 007f8835  b8f0b06300           mov eax, 0x63b0f0
// 007f883a  50                   push eax
// 007f883b  6830010000           push 0x130
// 007f8840  6890248200           push 0x822490
// 007f8845  6878848100           push 0x818478
// 007f884a  b9fcd19700           mov ecx, 0x97d1fc
// 007f884f  e82cf0e3ff           call 0x637880
// 007f8854  68800b8000           push 0x800b80
// 007f8859  e8518feaff           call 0x6a17af
// 007f885e  59                   pop ecx
// 007f885f  c3                   ret 

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

class CFrameValue : public Instance, public Listener
{
    char gap0[0x128];
    float value;
    void onValueChanged(const Reflection::PropertyDescriptor&);
public:
    static Reflection::BoundProp<float, 1> prop_Value;
};

Reflection::BoundProp<float, 1> CFrameValue::prop_Value("Value", "Data", &CFrameValue::value, &CFrameValue::onValueChanged, (Reflection::PropertyDescriptor::Functionality)5);

}
