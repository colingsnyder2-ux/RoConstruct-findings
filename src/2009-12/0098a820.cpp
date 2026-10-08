// roc 2009-12 0098a820  unit: seg_00980000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a820
//
// 0098a820  a1b41cba00           mov eax, dword ptr [0xba1cb4]
// 0098a825  85c0                 test eax, eax
// 0098a827  7435                 je 0x98a85e
// 0098a829  83c004               add eax, 4
// 0098a82c  50                   push eax
// 0098a82d  ff1508b29800         call dword ptr [0x98b208]
// 0098a833  85c0                 test eax, eax
// 0098a835  751d                 jne 0x98a854
// 0098a837  8b0db41cba00         mov ecx, dword ptr [0xba1cb4]
// 0098a83d  e8de07acff           call 0x44b020
// 0098a842  8b0db41cba00         mov ecx, dword ptr [0xba1cb4]
// 0098a848  85c9                 test ecx, ecx
// 0098a84a  7408                 je 0x98a854
// 0098a84c  8b01                 mov eax, dword ptr [ecx]
// 0098a84e  8b10                 mov edx, dword ptr [eax]
// 0098a850  6a01                 push 1
// 0098a852  ffd2                 call edx
// 0098a854  c705b41cba0000000000 mov dword ptr [0xba1cb4], 0
// 0098a85e  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__FfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
