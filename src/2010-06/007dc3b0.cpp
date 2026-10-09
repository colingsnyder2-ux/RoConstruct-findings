// roc 2010-06 007dc3b0  unit: CXTPReportColumn  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dc3b0
//
// 007dc3b0  56                   push esi
// 007dc3b1  8bf1                 mov esi, ecx
// 007dc3b3  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007dc3b6  85c9                 test ecx, ecx
// 007dc3b8  740e                 je 0x7dc3c8
// 007dc3ba  8b01                 mov eax, dword ptr [ecx]
// 007dc3bc  8b5068               mov edx, dword ptr [eax + 0x68]
// 007dc3bf  ffd2                 call edx
// 007dc3c1  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 007dc3c8  5e                   pop esi
// 007dc3c9  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000009@CXTPReportColumn@ns_ROCX000009@ns_ROCX000017@@QAEXXZ)

namespace ns_ROCX000009 {
namespace ns_ROCX00000b {
struct CXTPReportControlLocale
{
};

struct Sub656db0
{
    void Call(unsigned int a, const void* p);
};

extern unsigned int G_8c87d8;
extern unsigned int G_8c87d0;

void __cdecl AddTimespec(const void* p, unsigned int a, unsigned int b)
{
    unsigned int local[3];
    local[0] = (unsigned int)p;
    local[1] = a;
    local[2] = b;
    ((Sub656db0*)&G_8c87d0)->Call(G_8c87d8, local);
}
}
}
