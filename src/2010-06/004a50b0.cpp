// roc 2010-06 004a50b0  unit: boost::any::placeholder  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a50b0
//
// 004a50b0  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 004a50b3  85c9                 test ecx, ecx
// 004a50b5  740a                 je 0x4a50c1
// 004a50b7  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004a50ba  2b410c               sub eax, dword ptr [ecx + 0xc]
// 004a50bd  c1f803               sar eax, 3
// 004a50c0  c3                   ret 
// 004a50c1  33c0                 xor eax, eax
// 004a50c3  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00001a@@QAEHXZ)

namespace ns_ROCX00001a {
struct S
{
    char pad[0x50];
    int* value;

    int f();
};

int S::f()
{
    int* p = value;
    if (p)
        return (p[4] - p[3]) >> 3;
    return 0;
}
}
