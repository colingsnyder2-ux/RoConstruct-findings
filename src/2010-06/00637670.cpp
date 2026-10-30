// roc 2010-06 00637670  unit: RBX::VBasicPartInstance::?$ActionStation  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00637670
//
// 00637670  8b442404             mov eax, dword ptr [esp + 4]
// 00637674  85c0                 test eax, eax
// 00637676  7410                 je 0x637688
// 00637678  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0063767e  85c0                 test eax, eax
// 00637680  7406                 je 0x637688
// 00637682  055cffffff           add eax, 0xffffff5c
// 00637687  c3                   ret 
// 00637688  33c0                 xor eax, eax
// 0063768a  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX00000d@@YAPAHPAH@Z)

namespace ns_ROCX00000d {
struct S
{
};

int * __cdecl f(int *p)
{
    if (p != 0 && p[62] != 0)
        return (int *)((char *)p[62] - 164);
    return 0;
}
}
