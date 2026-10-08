// roc 2007-03 004559f0  unit: seg_00450000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004559f0
//
// 004559f0  56                   push esi
// 004559f1  8bf1                 mov esi, ecx
// 004559f3  3935a0778b00         cmp dword ptr [0x8b77a0], esi
// 004559f9  7410                 je 0x455a0b
// 004559fb  8b06                 mov eax, dword ptr [esi]
// 004559fd  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 00455a03  ffd2                 call edx
// 00455a05  8935a0778b00         mov dword ptr [0x8b77a0], esi
// 00455a0b  5e                   pop esi
// 00455a0c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ?makeCurrent@GWindow@G3D@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
