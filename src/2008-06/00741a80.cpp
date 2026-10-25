// from server: 100% by auto
// roc 2008-06 00741a80  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00741a80
//
// 00741a80  b8a0949600           mov eax, 0x9694a0
// 00741a85  c3                   ret 

extern char G;

char* func_00741a80()
{
    return &G;
}
