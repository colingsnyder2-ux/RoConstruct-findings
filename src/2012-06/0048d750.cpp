// roc 2012-06 0048d750  unit: CRobloxPlayerDlg  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048d750
//
// 0048d750  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0048d753  85c0                 test eax, eax
// 0048d755  7408                 je 0x48d75f
// 0048d757  8b08                 mov ecx, dword ptr [eax]
// 0048d759  8b5108               mov edx, dword ptr [ecx + 8]
// 0048d75c  50                   push eax
// 0048d75d  ffd2                 call edx
// 0048d75f  c3                   ret 
// copied from an identical function in another client (function ?Release@CRobloxPlayerDlg@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct CRobloxPlayerDlg
{
    char pad[0xc];
    void* field_c;
    void Release();
};

void CRobloxPlayerDlg::Release()
{
    void* p = field_c;
    if (p)
    {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[2];
        fn(p);
    }
}