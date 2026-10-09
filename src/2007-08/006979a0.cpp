// from server: 73% by colin
// roc 2007-08 006979a0  unit: CXTPPropertyGridItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006979a0
//
// 006979a0  55                   push ebp
// 006979a1  57                   push edi
// 006979a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006979a6  85ff                 test edi, edi
// 006979a8  8be9                 mov ebp, ecx
// 006979aa  7451                 je 0x6979fd
// 006979ac  53                   push ebx
// 006979ad  6a0a                 push 0xa
// 006979af  57                   push edi
// 006979b0  ff1524e77700         call dword ptr [0x77e724]
// 006979b6  8bd8                 mov ebx, eax
// 006979b8  83c408               add esp, 8
// 006979bb  85db                 test ebx, ebx
// 006979bd  8d8da8000000         lea ecx, [ebp + 0xa8]
// 006979c3  750d                 jne 0x6979d2
// 006979c5  57                   push edi
// 006979c6  ff156cdd7700         call dword ptr [0x77dd6c]
// 006979cc  5b                   pop ebx
// 006979cd  5f                   pop edi
// 006979ce  5d                   pop ebp
// 006979cf  c20400               ret 4
// 006979d2  56                   push esi
// 006979d3  8bf3                 mov esi, ebx
// 006979d5  2bf7                 sub esi, edi
// 006979d7  56                   push esi
// 006979d8  ff1570d57700         call dword ptr [0x77d570]
// 006979de  56                   push esi
// 006979df  57                   push edi
// 006979e0  56                   push esi
// 006979e1  50                   push eax
// 006979e2  ff15d4e67700         call dword ptr [0x77e6d4]
// 006979e8  83c410               add esp, 0x10
// 006979eb  83c301               add ebx, 1
// 006979ee  53                   push ebx
// 006979ef  8d8dac000000         lea ecx, [ebp + 0xac]
// 006979f5  ff156cdd7700         call dword ptr [0x77dd6c]
// 006979fb  5e                   pop esi
// 006979fc  5b                   pop ebx
// 006979fd  5f                   pop edi
// 006979fe  5d                   pop ebp
// 006979ff  c20400               ret 4

extern "C" {
    void* __cdecl _mbschr(const char*, int);
    int __cdecl memcpy_s(void*, unsigned int, const void*, unsigned int);
    void* __stdcall sub_77D570(void*);
    void* __stdcall sub_77DD6C(void*, void*);
    void* __stdcall sub_77E6D4(void*, void*, unsigned int, void*);
    void* __stdcall sub_77E724(const char*, int);
}

struct CXTPPropertyGridItem {
    char pad[0xa8];
    void* m_pStr1;
    void* m_pStr2;
    void SetCaption(const char*);
};

void CXTPPropertyGridItem::SetCaption(const char* psz)
{
    if (psz == 0)
        return;

    char* p = (char*)sub_77E724(psz, 10);
    if (p == 0) {
        sub_77DD6C(&m_pStr1, (void*)psz);
        return;
    }

    unsigned int len = (unsigned int)(p - psz);
    void* p2 = sub_77D570((void*)len);
    sub_77E6D4(p2, (void*)psz, len, p2);
    sub_77DD6C(&m_pStr2, (void*)(p + 1));
}
