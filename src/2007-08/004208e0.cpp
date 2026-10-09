// from server: 100% by colin
// roc 2007-08 004208e0  unit: CRobloxTreeCtrl  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004208e0
//
// 004208e0  8b442408             mov eax, dword ptr [esp + 8]
// 004208e4  57                   push edi
// 004208e5  8bf9                 mov edi, ecx
// 004208e7  c70000000000         mov dword ptr [eax], 0
// 004208ed  80bfc900000000       cmp byte ptr [edi + 0xc9], 0
// 004208f4  7544                 jne 0x42093a
// 004208f6  80bfa400000000       cmp byte ptr [edi + 0xa4], 0
// 004208fd  753b                 jne 0x42093a
// 004208ff  83bfe400000000       cmp dword ptr [edi + 0xe4], 0
// 00420906  7432                 je 0x42093a
// 00420908  56                   push esi
// 00420909  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042090d  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00420911  740d                 je 0x420920
// 00420913  6a01                 push 1
// 00420915  8d4e38               lea ecx, [esi + 0x38]
// 00420918  51                   push ecx
// 00420919  8bcf                 mov ecx, edi
// 0042091b  e860feffff           call 0x420780
// 00420920  837e1400             cmp dword ptr [esi + 0x14], 0
// 00420924  7413                 je 0x420939
// 00420926  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0042092a  740d                 je 0x420939
// 0042092c  6a00                 push 0
// 0042092e  83c610               add esi, 0x10
// 00420931  56                   push esi
// 00420932  8bcf                 mov ecx, edi
// 00420934  e847feffff           call 0x420780
// 00420939  5e                   pop esi
// 0042093a  5f                   pop edi
// 0042093b  c20800               ret 8

struct CRobloxTreeCtrl
{
    char pad[0xa4];
    char field_a4;
    char pad2[0x24];
    char field_c9;
    char pad3[0x1a];
    int field_e4;
    void sub_420780(void*, int);
    void sub_4208e0(void*, void*);
};

void CRobloxTreeCtrl::sub_4208e0(void* arg1, void* arg2)
{
    *(int*)arg2 = 0;
    if (field_c9 != 0)
        return;
    if (field_a4 != 0)
        return;
    if (field_e4 == 0)
        return;
    if (*(int*)((char*)arg1 + 0x3c) != 0)
        sub_420780((char*)arg1 + 0x38, 1);
    if (*(int*)((char*)arg1 + 0x14) != 0)
    {
        if (*(int*)((char*)arg1 + 0xc) != 0)
            sub_420780((char*)arg1 + 0x10, 0);
    }
}
