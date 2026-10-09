// from server: 60% by colin
// roc 2007-08 006a0980  unit: CXTPNewToolbarDlg  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0980
//
// 006a0980  53                   push ebx
// 006a0981  56                   push esi
// 006a0982  8bd9                 mov ebx, ecx
// 006a0984  33f6                 xor esi, esi
// 006a0986  397328               cmp dword ptr [ebx + 0x28], esi
// 006a0989  7e2e                 jle 0x6a09b9
// 006a098b  55                   push ebp
// 006a098c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006a0990  57                   push edi
// 006a0991  8d7b20               lea edi, [ebx + 0x20]
// 006a0994  85f6                 test esi, esi
// 006a0996  7c26                 jl 0x6a09be
// 006a0998  3b7708               cmp esi, dword ptr [edi + 8]
// 006a099b  7d21                 jge 0x6a09be
// 006a099d  8b4704               mov eax, dword ptr [edi + 4]
// 006a09a0  3b2cb0               cmp ebp, dword ptr [eax + esi*4]
// 006a09a3  750a                 jne 0x6a09af
// 006a09a5  6a01                 push 1
// 006a09a7  56                   push esi
// 006a09a8  8bcf                 mov ecx, edi
// 006a09aa  e8011d0300           call 0x6d26b0
// 006a09af  83c601               add esi, 1
// 006a09b2  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 006a09b5  7cdd                 jl 0x6a0994
// 006a09b7  5f                   pop edi
// 006a09b8  5d                   pop ebp
// 006a09b9  5e                   pop esi
// 006a09ba  5b                   pop ebx
// 006a09bb  c20400               ret 4
// 006a09be  e85df5f8ff           call 0x62ff20

struct CXTPNewToolbarDlg {
    char pad[0x20];
    int field_0x20;
    int field_0x24;
    int field_0x28;
    void sub_6d26b0(int, int);
    void func(int);
};

extern "C" void __cdecl sub_62ff20();

void CXTPNewToolbarDlg::func(int a) {
    int i = 0;
    if (field_0x28 > 0) {
        int* arr = &field_0x24;
        for (; i < field_0x28; i++) {
            if (i < 0 || i >= field_0x28) {
                sub_62ff20();
            }
            if (a == arr[i]) {
                sub_6d26b0(i, 1);
            }
        }
    }
}
