// from server: 80% by colin
// roc 2007-08 00717fe0  unit: CXTPRibbonControlTab  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717fe0
//
// 00717fe0  8b4184               mov eax, dword ptr [ecx - 0x7c]
// 00717fe3  85c0                 test eax, eax
// 00717fe5  7412                 je 0x717ff9
// 00717fe7  83782000             cmp dword ptr [eax + 0x20], 0
// 00717feb  740c                 je 0x717ff9
// 00717fed  8bc8                 mov ecx, eax
// 00717fef  8b01                 mov eax, dword ptr [ecx]
// 00717ff1  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00717ff7  ffe2                 jmp edx
// 00717ff9  c3                   ret 

struct CXTPRibbonControlTab {
    int field_0x00;
    char pad[0x78];
    void* field_0x7c;
    void OnUpdate();
};

void CXTPRibbonControlTab::OnUpdate()
{
    void* p = *(void**)((char*)this - 0x7c);
    if (p != 0 && *(int*)((char*)p + 0x20) != 0)
    {
        void** vtbl = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vtbl[0x17c / 4];
        fn(p);
    }
}
