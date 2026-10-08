// roc 2009-12 0098a3d0  unit: seg_00980000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a3d0
//
// 0098a3d0  a18090b900           mov eax, dword ptr [0xb99080]
// 0098a3d5  85c0                 test eax, eax
// 0098a3d7  7435                 je 0x98a40e
// 0098a3d9  83c004               add eax, 4
// 0098a3dc  50                   push eax
// 0098a3dd  ff1508b29800         call dword ptr [0x98b208]
// 0098a3e3  85c0                 test eax, eax
// 0098a3e5  751d                 jne 0x98a404
// 0098a3e7  8b0d8090b900         mov ecx, dword ptr [0xb99080]
// 0098a3ed  e82e0cacff           call 0x44b020
// 0098a3f2  8b0d8090b900         mov ecx, dword ptr [0xb99080]
// 0098a3f8  85c9                 test ecx, ecx
// 0098a3fa  7408                 je 0x98a404
// 0098a3fc  8b01                 mov eax, dword ptr [ecx]
// 0098a3fe  8b10                 mov edx, dword ptr [eax]
// 0098a400  6a01                 push 1
// 0098a402  ffd2                 call edx
// 0098a404  c7058090b90000000000 mov dword ptr [0xb99080], 0
// 0098a40e  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__FfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
