// from server: 72% by colin
// roc 2007-08 0060bc40  unit: CXTCaptionButtonTheme  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bc40
//
// 0060bc40  83ec0c               sub esp, 0xc
// 0060bc43  8d442410             lea eax, [esp + 0x10]
// 0060bc47  50                   push eax
// 0060bc48  8d542404             lea edx, [esp + 4]
// 0060bc4c  52                   push edx
// 0060bc4d  83c13c               add ecx, 0x3c
// 0060bc50  e85b6dfdff           call 0x5e29b0
// 0060bc55  83c40c               add esp, 0xc
// 0060bc58  c20400               ret 4

struct CXTCaptionButtonTheme {
    char pad0[0x3c];
    void sub_5e29b0(int* out1, int* out2);
    void func_0060bc40(int arg);
};

void CXTCaptionButtonTheme::func_0060bc40(int arg)
{
    int a;
    int b;
    sub_5e29b0(&a, &b);
}
