// from server: 100% by tester
// roc 2008-06 006b8500  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8500
//
// 006b8500  56                   push esi
// 006b8501  e8baf4ffff           call 0x6b79c0
// 006b8506  8bf0                 mov esi, eax
// 006b8508  85f6                 test esi, esi
// 006b850a  7414                 je 0x6b8520
// 006b850c  8b06                 mov eax, dword ptr [esi]
// 006b850e  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 006b8514  8bce                 mov ecx, esi
// 006b8516  ffd2                 call edx
// 006b8518  85c0                 test eax, eax
// 006b851a  7404                 je 0x6b8520
// 006b851c  8bc6                 mov eax, esi
// 006b851e  5e                   pop esi
// 006b851f  c3                   ret 
// 006b8520  33c0                 xor eax, eax
// 006b8522  5e                   pop esi
// 006b8523  c3                   ret 

struct CXTPCommandBar;

struct CXTPCommandBarVtbl {
    char pad0[0x130];
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
