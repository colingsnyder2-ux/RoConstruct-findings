// from server: 100% by tester
// roc 2008-06 007f5f50  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5f50
//
// 007f5f50  6a05                 push 5
// 007f5f52  33c9                 xor ecx, ecx
// 007f5f54  51                   push ecx
// 007f5f55  b800040000           mov eax, 0x400
// 007f5f5a  50                   push eax
// 007f5f5b  6868c18300           push 0x83c168
// 007f5f60  685c258200           push 0x82255c
// 007f5f65  b98c9e9700           mov ecx, 0x979e8c
// 007f5f6a  e841c9ddff           call 0x5d28b0
// 007f5f6f  6810f07f00           push 0x7ff010
// 007f5f74  e836b8eaff           call 0x6a17af
// 007f5f79  59                   pop ecx
// 007f5f7a  c3                   ret 

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

class SpawnLocation : public virtual Instance
{
    char gap0[0x3fc];
    bool neutral;
public:
    static Reflection::BoundProp<bool, 1> prop_Neutral;
};

Reflection::BoundProp<bool, 1> SpawnLocation::prop_Neutral("Neutral", "Teams", &SpawnLocation::neutral, Reflection::PropertyDescriptor::STANDARD);
}
