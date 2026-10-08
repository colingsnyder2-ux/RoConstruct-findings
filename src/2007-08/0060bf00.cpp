// from server: 82% by colin
// roc 2007-08 0060bf00  unit: CXTCaptionButtonTheme  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bf00
//
// 0060bf00  8d442404             lea eax, [esp + 4]
// 0060bf04  50                   push eax
// 0060bf05  83c13c               add ecx, 0x3c
// 0060bf08  e8239cffff           call 0x605b30
// 0060bf0d  c20400               ret 4

struct CXTCaptionButtonTheme {
    void sub_605B30(void*);
    void f(void*);
};

void CXTCaptionButtonTheme::f(void* arg) {
    sub_605B30(&arg);
}
