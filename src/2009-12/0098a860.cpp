// roc 2009-12 0098a860  unit: seg_00980000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0098a860
//
// 0098a860  a1b01cba00           mov eax, dword ptr [0xba1cb0]
// 0098a865  85c0                 test eax, eax
// 0098a867  7435                 je 0x98a89e
// 0098a869  83c004               add eax, 4
// 0098a86c  50                   push eax
// 0098a86d  ff1508b29800         call dword ptr [0x98b208]
// 0098a873  85c0                 test eax, eax
// 0098a875  751d                 jne 0x98a894
// 0098a877  8b0db01cba00         mov ecx, dword ptr [0xba1cb0]
// 0098a87d  e89e07acff           call 0x44b020
// 0098a882  8b0db01cba00         mov ecx, dword ptr [0xba1cb0]
// 0098a888  85c9                 test ecx, ecx
// 0098a88a  7408                 je 0x98a894
// 0098a88c  8b01                 mov eax, dword ptr [ecx]
// 0098a88e  8b10                 mov edx, dword ptr [eax]
// 0098a890  6a01                 push 1
// 0098a892  ffd2                 call edx
// 0098a894  c705b01cba0000000000 mov dword ptr [0xba1cb0], 0
// 0098a89e  c3                   ret 
// library rbxgs-appdraw/Fonts.cpp (function ??__FfontRef@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
