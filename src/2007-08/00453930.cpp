// from server: 78% by colin
// roc 2007-08 00453930  unit: CRobloxReportDocView  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00453930
//
// 00453930  53                   push ebx
// 00453931  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00453935  55                   push ebp
// 00453936  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0045393a  56                   push esi
// 0045393b  57                   push edi
// 0045393c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00453940  53                   push ebx
// 00453941  55                   push ebp
// 00453942  57                   push edi
// 00453943  8bf1                 mov esi, ecx
// 00453945  e854c91d00           call 0x63029e
// 0045394a  85ff                 test edi, edi
// 0045394c  7415                 je 0x453963
// 0045394e  8b4654               mov eax, dword ptr [esi + 0x54]
// 00453951  50                   push eax
// 00453952  6a01                 push 1
// 00453954  e89728fbff           call 0x4061f0
// 00453959  83c408               add esp, 8
// 0045395c  5f                   pop edi
// 0045395d  5e                   pop esi
// 0045395e  5d                   pop ebp
// 0045395f  5b                   pop ebx
// 00453960  c20c00               ret 0xc
// 00453963  3beb                 cmp ebp, ebx
// 00453965  740e                 je 0x453975
// 00453967  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0045396a  51                   push ecx
// 0045396b  6a00                 push 0
// 0045396d  e87e28fbff           call 0x4061f0
// 00453972  83c408               add esp, 8
// 00453975  5f                   pop edi
// 00453976  5e                   pop esi
// 00453977  5d                   pop ebp
// 00453978  5b                   pop ebx
// 00453979  c20c00               ret 0xc

struct CRobloxReportDocView {
    void sub_453930(int, int, int);
    char pad[0x54];
    int field_54;
};

extern "C" void __cdecl func_63029e(int, int, int);
extern "C" void __cdecl func_4061f0(int, int);

void CRobloxReportDocView::sub_453930(int a, int b, int c)
{
    func_63029e(a, b, c);
    if (a != 0) {
        func_4061f0(1, field_54);
    } else if (b != c) {
        func_4061f0(0, field_54);
    }
}
