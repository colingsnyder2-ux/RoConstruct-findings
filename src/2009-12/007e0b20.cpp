// roc 2009-12 007e0b20  unit: RBX::CircleRadialNormal  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e0b20
//
// 007e0b20  56                   push esi
// 007e0b21  ff15dcba9800         call dword ptr [0x98badc]
// 007e0b27  e8c0e61200           call 0x90f1ec
// 007e0b2c  8bf0                 mov esi, eax
// 007e0b2e  68ac860100           push 0x186ac
// 007e0b33  56                   push esi
// 007e0b34  e8ade61200           call 0x90f1e6
// 007e0b39  d9442408             fld dword ptr [esp + 8]
// 007e0b3d  6a0f                 push 0xf
// 007e0b3f  6a0f                 push 0xf
// 007e0b41  83ec08               sub esp, 8
// 007e0b44  dd1c24               fstp qword ptr [esp]
// 007e0b47  56                   push esi
// 007e0b48  e893e61200           call 0x90f1e0
// 007e0b4d  56                   push esi
// 007e0b4e  e887e61200           call 0x90f1da
// 007e0b53  5e                   pop esi
// 007e0b54  ff25ccba9800         jmp dword ptr [0x98bacc]
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawSphere@DrawPrimitives@RBX@@SAXMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
