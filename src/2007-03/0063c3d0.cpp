// roc 2007-03 0063c3d0  unit: seg_00630000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0063c3d0
//
// 0063c3d0  56                   push esi
// 0063c3d1  e8faf4ffff           call 0x63b8d0
// 0063c3d6  8bf0                 mov esi, eax
// 0063c3d8  85f6                 test esi, esi
// 0063c3da  7414                 je 0x63c3f0
// 0063c3dc  8b06                 mov eax, dword ptr [esi]
// 0063c3de  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 0063c3e4  8bce                 mov ecx, esi
// 0063c3e6  ffd2                 call edx
// 0063c3e8  85c0                 test eax, eax
// 0063c3ea  7404                 je 0x63c3f0
// 0063c3ec  8bc6                 mov eax, esi
// 0063c3ee  5e                   pop esi
// 0063c3ef  c3                   ret 
// 0063c3f0  33c0                 xor eax, eax
// 0063c3f2  5e                   pop esi
// 0063c3f3  c3                   ret 
// copied from an identical function in another client (function ?sub_00647070@ns_ROCX00000d@@YGPAUCXTPCommandBar@1@XZ)

namespace ns_ROCX00000d {
struct CXTPCommandBar;

struct CXTPCommandBarVtbl {
    char pad0[0x128];
    int (__thiscall *pfn_128)(CXTPCommandBar *);
};

struct CXTPCommandBar {
    CXTPCommandBarVtbl *m_pVtbl;
};

extern "C" CXTPCommandBar * __stdcall sub_00646570();

CXTPCommandBar * __stdcall sub_00647070()
{
    CXTPCommandBar *p = sub_00646570();
    if (p != 0) {
        if (p->m_pVtbl->pfn_128(p) != 0) {
            return p;
        }
    }
    return 0;
}
}
