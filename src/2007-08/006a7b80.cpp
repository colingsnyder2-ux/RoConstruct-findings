// from server: 100% by colin
// roc 2007-08 006a7b80  unit: CXTPRibbonBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7b80
//
// 006a7b80  83b94002000000       cmp dword ptr [ecx + 0x240], 0
// 006a7b87  740c                 je 0x6a7b95
// 006a7b89  e852feffff           call 0x6a79e0
// 006a7b8e  8b8030060000         mov eax, dword ptr [eax + 0x630]
// 006a7b94  c3                   ret 
// 006a7b95  b802000000           mov eax, 2
// 006a7b9a  c3                   ret 

struct CXTPRibbonBar {
    char pad_0x000[0x240];
    int field_0x240;
    int GetSomething();
};

extern CXTPRibbonBar* GetRibbonBarHelper();

int CXTPRibbonBar::GetSomething()
{
    if (field_0x240 != 0)
    {
        CXTPRibbonBar* p = GetRibbonBarHelper();
        return *(int*)((char*)p + 0x630);
    }
    return 2;
}
