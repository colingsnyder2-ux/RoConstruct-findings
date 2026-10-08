// from server: 100% by colin
// roc 2007-08 00647070  unit: CXTPCommandBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647070
//
// 00647070  56                   push esi
// 00647071  e8faf4ffff           call 0x646570
// 00647076  8bf0                 mov esi, eax
// 00647078  85f6                 test esi, esi
// 0064707a  7414                 je 0x647090
// 0064707c  8b06                 mov eax, dword ptr [esi]
// 0064707e  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 00647084  8bce                 mov ecx, esi
// 00647086  ffd2                 call edx
// 00647088  85c0                 test eax, eax
// 0064708a  7404                 je 0x647090
// 0064708c  8bc6                 mov eax, esi
// 0064708e  5e                   pop esi
// 0064708f  c3                   ret 
// 00647090  33c0                 xor eax, eax
// 00647092  5e                   pop esi
// 00647093  c3                   ret 

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
