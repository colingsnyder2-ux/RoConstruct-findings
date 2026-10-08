// roc 2009-12 00980d30  unit: seg_00980000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980d30
//
// 00980d30  a1982fb800           mov eax, dword ptr [0xb82f98]
// 00980d35  85c0                 test eax, eax
// 00980d37  7435                 je 0x980d6e
// 00980d39  83c004               add eax, 4
// 00980d3c  50                   push eax
// 00980d3d  ff1508b29800         call dword ptr [0x98b208]
// 00980d43  85c0                 test eax, eax
// 00980d45  751d                 jne 0x980d64
// 00980d47  8b0d982fb800         mov ecx, dword ptr [0xb82f98]
// 00980d4d  e8cea2acff           call 0x44b020
// 00980d52  8b0d982fb800         mov ecx, dword ptr [0xb82f98]
// 00980d58  85c9                 test ecx, ecx
// 00980d5a  7408                 je 0x980d64
// 00980d5c  8b01                 mov eax, dword ptr [ecx]
// 00980d5e  8b10                 mov edx, dword ptr [eax]
// 00980d60  6a01                 push 1
// 00980d62  ffd2                 call edx
// 00980d64  c705982fb80000000000 mov dword ptr [0xb82f98], 0
// 00980d6e  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__FfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
