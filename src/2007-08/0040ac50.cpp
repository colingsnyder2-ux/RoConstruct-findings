// from server: 92% by colin
// roc 2007-08 0040ac50  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040ac50
//
// 0040ac50  53                   push ebx
// 0040ac51  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0040ac55  55                   push ebp
// 0040ac56  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0040ac5a  56                   push esi
// 0040ac5b  8bf1                 mov esi, ecx
// 0040ac5d  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 0040ac63  85c9                 test ecx, ecx
// 0040ac65  57                   push edi
// 0040ac66  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0040ac6a  741d                 je 0x40ac89
// 0040ac6c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040ac70  57                   push edi
// 0040ac71  53                   push ebx
// 0040ac72  55                   push ebp
// 0040ac73  50                   push eax
// 0040ac74  e8d7932200           call 0x634050
// 0040ac79  85c0                 test eax, eax
// 0040ac7b  740c                 je 0x40ac89
// 0040ac7d  5f                   pop edi
// 0040ac7e  5e                   pop esi
// 0040ac7f  5d                   pop ebp
// 0040ac80  b801000000           mov eax, 1
// 0040ac85  5b                   pop ebx
// 0040ac86  c21000               ret 0x10
// 0040ac89  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040ac8d  57                   push edi
// 0040ac8e  53                   push ebx
// 0040ac8f  55                   push ebp
// 0040ac90  51                   push ecx
// 0040ac91  8bce                 mov ecx, esi
// 0040ac93  e844512200           call 0x62fddc
// 0040ac98  5f                   pop edi
// 0040ac99  5e                   pop esi
// 0040ac9a  5d                   pop ebp
// 0040ac9b  5b                   pop ebx
// 0040ac9c  c21000               ret 0x10

struct VCSecureHtmlView
{
    char pad[0xf4];
    void* field_f4;
    int sub_62fddc(int, int, int, int);
    int sub_634050(int, int, int, int);
    int method(int, int, int, int);
};

int VCSecureHtmlView::method(int a, int b, int c, int d)
{
    if (field_f4 != 0)
    {
        if (sub_634050(a, b, c, d) != 0)
            return 1;
    }
    return sub_62fddc(a, b, c, d);
}
