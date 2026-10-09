// from server: 78% by colin
// roc 2007-08 00661dd0  unit: PAVCXTPReportRecordItem::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661dd0
//
// 00661dd0  56                   push esi
// 00661dd1  57                   push edi
// 00661dd2  8bf9                 mov edi, ecx
// 00661dd4  8b7728               mov esi, dword ptr [edi + 0x28]
// 00661dd7  83ee01               sub esi, 1
// 00661dda  781d                 js 0x661df9
// 00661ddc  8d642400             lea esp, [esp]
// 00661de0  85f6                 test esi, esi
// 00661de2  7c37                 jl 0x661e1b
// 00661de4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00661de7  7d32                 jge 0x661e1b
// 00661de9  8b4724               mov eax, dword ptr [edi + 0x24]
// 00661dec  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00661def  e8f0e3fcff           call 0x6301e4
// 00661df4  83ee01               sub esi, 1
// 00661df7  79e7                 jns 0x661de0
// 00661df9  6aff                 push -1
// 00661dfb  6a00                 push 0
// 00661dfd  8d4f20               lea ecx, [edi + 0x20]
// 00661e00  e8abdc0900           call 0x6ffab0
// 00661e05  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00661e08  85c9                 test ecx, ecx
// 00661e0a  740c                 je 0x661e18
// 00661e0c  e8d3e3fcff           call 0x6301e4
// 00661e11  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 00661e18  5f                   pop edi
// 00661e19  5e                   pop esi
// 00661e1a  c3                   ret 
// 00661e1b  e900e1fcff           jmp 0x62ff20

struct CArray {
    char pad[0x20];
    int field20;
    int field24;
    int field28;
    char pad2[0x10];
    int field3c;
    void method();
};

extern "C" void __stdcall sub_006301e4(int);
extern "C" void __stdcall sub_006ffab0(int, int, int);
extern "C" void __stdcall sub_0062ff20();

void CArray::method() {
    int i = field28 - 1;
    if (i >= 0) {
        do {
            if (i < 0 || i >= field28) {
                sub_0062ff20();
                return;
            }
            sub_006301e4(*(int*)(field24 + i * 4));
            i--;
        } while (i >= 0);
    }
    sub_006ffab0((int)(&field20), 0, -1);
    if (field3c != 0) {
        sub_006301e4(field3c);
        field3c = 0;
    }
}
