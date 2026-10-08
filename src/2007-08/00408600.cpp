// from server: 100% by colin
// roc 2007-08 00408600  unit: VCApp::?$CComObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408600
//
// 00408600  83790400             cmp dword ptr [ecx + 4], 0
// 00408604  7e0a                 jle 0x408610
// 00408606  8b01                 mov eax, dword ptr [ecx]
// 00408608  50                   push eax
// 00408609  ff15c4e67700         call dword ptr [0x77e6c4]
// 0040860f  59                   pop ecx
// 00408610  c3                   ret 

extern void (__cdecl *free_ptr)(void*);

struct S {
    void* m_ptr;
    int m_count;
    void Release();
};

void S::Release()
{
    if (m_count > 0)
    {
        free_ptr(m_ptr);
    }
}
