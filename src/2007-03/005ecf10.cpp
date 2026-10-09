// roc 2007-03 005ecf10  unit: seg_005e0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ecf10
//
// 005ecf10  56                   push esi
// 005ecf11  57                   push edi
// 005ecf12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ecf16  8bf1                 mov esi, ecx
// 005ecf18  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 005ecf1b  7507                 jne 0x5ecf24
// 005ecf1d  c7462400000000       mov dword ptr [esi + 0x24], 0
// 005ecf24  6a00                 push 0
// 005ecf26  8bcf                 mov ecx, edi
// 005ecf28  c6464c01             mov byte ptr [esi + 0x4c], 1
// 005ecf2c  e82f1bfcff           call 0x5aea60
// 005ecf31  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 005ecf34  6a00                 push 0
// 005ecf36  e80535fcff           call 0x5b0440
// 005ecf3b  8d44240c             lea eax, [esp + 0xc]
// 005ecf3f  50                   push eax
// 005ecf40  8d4e30               lea ecx, [esi + 0x30]
// 005ecf43  e8a8f6fbff           call 0x5ac5f0
// 005ecf48  8bce                 mov ecx, esi
// 005ecf4a  e891fdffff           call 0x5ecce0
// 005ecf4f  5f                   pop edi
// 005ecf50  88462c               mov byte ptr [esi + 0x2c], al
// 005ecf53  5e                   pop esi
// 005ecf54  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTCaptionButtonTheme@ns_ROCX000004@@QAEXPAX@Z)

namespace ns_ROCX000004 {
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
}
