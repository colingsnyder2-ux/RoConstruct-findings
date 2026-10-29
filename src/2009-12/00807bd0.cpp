// roc 2009-12 00807bd0  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807bd0
//
// 00807bd0  56                   push esi
// 00807bd1  e8baf4ffff           call 0x807090
// 00807bd6  8bf0                 mov esi, eax
// 00807bd8  85f6                 test esi, esi
// 00807bda  7414                 je 0x807bf0
// 00807bdc  8b06                 mov eax, dword ptr [esi]
// 00807bde  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00807be4  8bce                 mov ecx, esi
// 00807be6  ffd2                 call edx
// 00807be8  85c0                 test eax, eax
// 00807bea  7404                 je 0x807bf0
// 00807bec  8bc6                 mov eax, esi
// 00807bee  5e                   pop esi
// 00807bef  c3                   ret 
// 00807bf0  33c0                 xor eax, eax
// 00807bf2  5e                   pop esi
// 00807bf3  c3                   ret 
// copied from an identical function in another client (function ?sub_00647070@@YGPAUCXTPCommandBar@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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