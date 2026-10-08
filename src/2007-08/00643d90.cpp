// from server: 62% by colin
// roc 2007-08 00643d90  unit: CXTPControlComboBoxPopupBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643d90
//
// 00643d90  8bc1                 mov eax, ecx
// 00643d92  8b8874010000         mov ecx, dword ptr [eax + 0x174]
// 00643d98  85c9                 test ecx, ecx
// 00643d9a  7415                 je 0x643db1
// 00643d9c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00643da0  52                   push edx
// 00643da1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00643da5  52                   push edx
// 00643da6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00643daa  52                   push edx
// 00643dab  50                   push eax
// 00643dac  e8df2a0500           call 0x696890
// 00643db1  c20c00               ret 0xc

struct CXTPControlComboBoxPopupBar
{
    char pad[0x174];
    void* field_174;
    void Method(int, int, int);
};

extern "C" void __stdcall Helper(void*, int, int, int);

void CXTPControlComboBoxPopupBar::Method(int a, int b, int c)
{
    void* p = field_174;
    if (p != 0)
    {
        Helper(p, a, b, c);
    }
}
