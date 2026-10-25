// from server: 100% by tester
// roc 2008-06 007f5f80  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5f80
//
// 007f5f80  6a05                 push 5
// 007f5f82  33c9                 xor ecx, ecx
// 007f5f84  51                   push ecx
// 007f5f85  b801040000           mov eax, 0x401
// 007f5f8a  50                   push eax
// 007f5f8b  6868c18300           push 0x83c168
// 007f5f90  6870c18300           push 0x83c170
// 007f5f95  b9709e9700           mov ecx, 0x979e70
// 007f5f9a  e811c9ddff           call 0x5d28b0
// 007f5f9f  68f0ef7f00           push 0x7feff0
// 007f5fa4  e806b8eaff           call 0x6a17af
// 007f5fa9  59                   pop ecx
// 007f5faa  c3                   ret 

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
    char gap0[0x3fd];
    bool allowTeamChangeOnTouch;
public:
    static Reflection::BoundProp<bool, 1> prop_AllowTeamChangeOnTouch;
};

Reflection::BoundProp<bool, 1> SpawnLocation::prop_AllowTeamChangeOnTouch("AllowTeamChangeOnTouch", "Teams", &SpawnLocation::allowTeamChangeOnTouch, Reflection::PropertyDescriptor::STANDARD);
}
