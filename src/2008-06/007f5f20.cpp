// from server: 100% by tester
// roc 2008-06 007f5f20  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5f20
//
// 007f5f20  6a05                 push 5
// 007f5f22  33c9                 xor ecx, ecx
// 007f5f24  51                   push ecx
// 007f5f25  b804040000           mov eax, 0x404
// 007f5f2a  50                   push eax
// 007f5f2b  685cc18300           push 0x83c15c
// 007f5f30  6850c18300           push 0x83c150
// 007f5f35  b9a89e9700           mov ecx, 0x979ea8
// 007f5f3a  e891c8ddff           call 0x5d27d0
// 007f5f3f  6830f07f00           push 0x7ff030
// 007f5f44  e866b8eaff           call 0x6a17af
// 007f5f49  59                   pop ecx
// 007f5f4a  c3                   ret 

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
    char gap0[0x400];
    int forcefieldDuration;
public:
    static Reflection::BoundProp<int, 1> prop_Duration;
};

Reflection::BoundProp<int, 1> SpawnLocation::prop_Duration("Duration", "Forcefield", &SpawnLocation::forcefieldDuration, Reflection::PropertyDescriptor::STANDARD);
}
