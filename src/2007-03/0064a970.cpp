// roc 2007-03 0064a970  unit: seg_00640000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064a970
//
// 0064a970  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0064a973  33d2                 xor edx, edx
// 0064a975  394840               cmp dword ptr [eax + 0x40], ecx
// 0064a978  0f94c2               sete dl
// 0064a97b  8bc2                 mov eax, edx
// 0064a97d  c3                   ret 
// copied from an identical function in another client (function ?m@S@ns_ROCX000002@@QAEHXZ)

namespace ns_ROCX000002 {
struct S;

struct Inner {
    char pad[0x40];
    S* owner;
};

struct S {
    char pad[0x54];
    Inner* field;
    int m();
};

int S::m()
{
    return field->owner == this;
}
}
