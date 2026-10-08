// from server: 83% by colin
// roc 2007-08 006a8d90  unit: CXTPRibbonBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8d90
//
// 006a8d90  56                   push esi
// 006a8d91  8bf1                 mov esi, ecx
// 006a8d93  e8a674f8ff           call 0x63023e
// 006a8d98  8bce                 mov ecx, esi
// 006a8d9a  e8a1ecffff           call 0x6a7a40
// 006a8d9f  85c0                 test eax, eax
// 006a8da1  741d                 je 0x6a8dc0
// 006a8da3  8b442408             mov eax, dword ptr [esp + 8]
// 006a8da7  3b8638020000         cmp eax, dword ptr [esi + 0x238]
// 006a8dad  7411                 je 0x6a8dc0
// 006a8daf  8b8e7c020000         mov ecx, dword ptr [esi + 0x27c]
// 006a8db5  898638020000         mov dword ptr [esi + 0x238], eax
// 006a8dbb  e8b0dc0600           call 0x716a70
// 006a8dc0  5e                   pop esi
// 006a8dc1  c20800               ret 8

struct CXTPRibbonBar
{
    char pad_0000[0x238];
    int field_0238;
    char pad_023c[0x27c - 0x23c];
    int field_027c;

    void sub_0063023e();
    int sub_006a7a40();
    void sub_00716a70();
    void sub_006a8d90(int, int);
};

void CXTPRibbonBar::sub_006a8d90(int a1, int a2)
{
    sub_0063023e();
    if (sub_006a7a40() != 0)
    {
        if (a1 != field_0238)
        {
            field_027c = a2;
            field_0238 = a1;
            sub_00716a70();
        }
    }
}
