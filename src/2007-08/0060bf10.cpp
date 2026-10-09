// from server: 100% by colin
// roc 2007-08 0060bf10  unit: CXTCaptionButtonTheme  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bf10
//
// 0060bf10  56                   push esi
// 0060bf11  57                   push edi
// 0060bf12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060bf16  8bf1                 mov esi, ecx
// 0060bf18  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 0060bf1b  7507                 jne 0x60bf24
// 0060bf1d  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0060bf24  6a00                 push 0
// 0060bf26  8bcf                 mov ecx, edi
// 0060bf28  c6464c01             mov byte ptr [esi + 0x4c], 1
// 0060bf2c  e8ef88faff           call 0x5b4820
// 0060bf31  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0060bf34  6a00                 push 0
// 0060bf36  e87565fdff           call 0x5e24b0
// 0060bf3b  8d44240c             lea eax, [esp + 0xc]
// 0060bf3f  50                   push eax
// 0060bf40  8d4e30               lea ecx, [esi + 0x30]
// 0060bf43  e8e89bffff           call 0x605b30
// 0060bf48  8bce                 mov ecx, esi
// 0060bf4a  e831fcffff           call 0x60bb80
// 0060bf4f  5f                   pop edi
// 0060bf50  88462c               mov byte ptr [esi + 0x2c], al
// 0060bf53  5e                   pop esi
// 0060bf54  c20400               ret 4

struct CXTCaptionButtonTheme {
    void sub_5B4820(int);
    void sub_5E24B0(int);
    void sub_605B30(void*);
    char sub_60BB80();
    void SetTheme(void*);
};

void CXTCaptionButtonTheme::SetTheme(void* p) {
    if (p == *(void**)((char*)this + 0x24)) {
        *(void**)((char*)this + 0x24) = 0;
    }
    *(char*)((char*)this + 0x4c) = 1;
    ((CXTCaptionButtonTheme*)p)->sub_5B4820(0);
    ((CXTCaptionButtonTheme*)(*(void**)((char*)p + 0x64)))->sub_5E24B0(0);
    void* tmp;
    ((CXTCaptionButtonTheme*)((char*)this + 0x30))->sub_605B30(&tmp);
    *(char*)((char*)this + 0x2c) = sub_60BB80();
}
