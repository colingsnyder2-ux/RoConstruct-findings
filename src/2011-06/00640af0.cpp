// roc 2011-06 00640af0  unit: RBX::Workspace  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00640af0
//
// 00640af0  8b442404             mov eax, dword ptr [esp + 4]
// 00640af4  50                   push eax
// 00640af5  e886ffffff           call 0x640a80
// 00640afa  83c404               add esp, 4
// 00640afd  85c0                 test eax, eax
// 00640aff  7407                 je 0x640b08
// 00640b01  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 00640b07  c3                   ret 
// 00640b08  33c0                 xor eax, eax
// 00640b0a  c3                   ret 
// copied from an identical function in another client (function ?getValue@ns_ROCX000004@@YAHPAUDescribedBase@1@@Z)

namespace ns_ROCX000004 {
struct DescribedBase;

struct ClassDescriptor
{
    char pad[0x138];
    int value;
};

extern "C" ClassDescriptor* __cdecl getClassDescriptor(DescribedBase* object);

int getValue(DescribedBase* object)
{
    ClassDescriptor* cd = getClassDescriptor(object);
    if (cd)
        return cd->value;
    return 0;
}
}
