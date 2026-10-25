// from server: 100% by tester
// roc 2008-06 007f78e0  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f78e0
//
// 007f78e0  6a05                 push 5
// 007f78e2  33c9                 xor ecx, ecx
// 007f78e4  51                   push ecx
// 007f78e5  b8fc010000           mov eax, 0x1fc
// 007f78ea  50                   push eax
// 007f78eb  68d0498300           push 0x8349d0
// 007f78f0  68601e8400           push 0x841e60
// 007f78f5  b94cb89700           mov ecx, 0x97b84c
// 007f78fa  e8d171e0ff           call 0x5fead0
// 007f78ff  6820008000           push 0x800020
// 007f7904  e8a69eeaff           call 0x6a17af
// 007f7909  59                   pop ecx
// 007f790a  c3                   ret 

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
    BoundProp(const char* name, const char* category, PropType (Class::*member), PropertyDescriptor::Functionality flags);
    ~BoundProp();
};
}

class Instance { public: virtual ~Instance(); };

class Tool : public virtual Instance
{
    char gap0[0x1f8];
    bool enabled;
public:
    static Reflection::BoundProp<bool, 1> prop_Enabled;
};

Reflection::BoundProp<bool, 1> Tool::prop_Enabled("Enabled", "State", &Tool::enabled, Reflection::PropertyDescriptor::STANDARD);
}
