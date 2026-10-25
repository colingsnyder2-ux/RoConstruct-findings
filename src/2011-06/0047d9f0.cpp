// from server: 100% by atomic.potato
// roc 2011-06 0047d9f0  unit: CRobloxPlayerDlg  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047d9f0
//
// 0047d9f0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0047d9f3  85c0                 test eax, eax
// 0047d9f5  7408                 je 0x47d9ff
// 0047d9f7  8b08                 mov ecx, dword ptr [eax]
// 0047d9f9  8b5108               mov edx, dword ptr [ecx + 8]
// 0047d9fc  50                   push eax
// 0047d9fd  ffd2                 call edx
// 0047d9ff  c3                   ret 

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
