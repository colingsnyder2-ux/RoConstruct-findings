// from server: 72% by colin
// roc 2007-08 006a7bd0  unit: CXTPRibbonBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7bd0
//
// 006a7bd0  83b93c02000000       cmp dword ptr [ecx + 0x23c], 0
// 006a7bd7  7418                 je 0x6a7bf1
// 006a7bd9  e872feffff           call 0x6a7a50
// 006a7bde  85c0                 test eax, eax
// 006a7be0  740f                 je 0x6a7bf1
// 006a7be2  83b98802000000       cmp dword ptr [ecx + 0x288], 0
// 006a7be9  7506                 jne 0x6a7bf1
// 006a7beb  b801000000           mov eax, 1
// 006a7bf0  c3                   ret 
// 006a7bf1  33c0                 xor eax, eax
// 006a7bf3  c3                   ret 

struct CXTPRibbonBar
{
    char pad[0x23c];
    int field_23c;
    char pad2[0x288 - 0x23c - 4];
    int field_288;
    int sub_6a7a50();
    int func_6a7bd0();
};

int CXTPRibbonBar::func_6a7bd0()
{
    if (field_23c != 0)
    {
        if (sub_6a7a50() != 0)
        {
            if (field_288 == 0)
                return 1;
        }
    }
    return 0;
}
