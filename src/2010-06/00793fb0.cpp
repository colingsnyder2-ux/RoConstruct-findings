// roc 2010-06 00793fb0  unit: RBX::IndexBox  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00793fb0
//
// 00793fb0  56                   push esi
// 00793fb1  ff15d4ab9e00         call dword ptr [0x9eabd4]
// 00793fb7  e830f21200           call 0x8c31ec
// 00793fbc  8bf0                 mov esi, eax
// 00793fbe  68ac860100           push 0x186ac
// 00793fc3  56                   push esi
// 00793fc4  e81df21200           call 0x8c31e6
// 00793fc9  d9442408             fld dword ptr [esp + 8]
// 00793fcd  6a0f                 push 0xf
// 00793fcf  6a0f                 push 0xf
// 00793fd1  83ec08               sub esp, 8
// 00793fd4  dd1c24               fstp qword ptr [esp]
// 00793fd7  56                   push esi
// 00793fd8  e803f21200           call 0x8c31e0
// 00793fdd  56                   push esi
// 00793fde  e8f7f11200           call 0x8c31da
// 00793fe3  5e                   pop esi
// 00793fe4  ff25c8ab9e00         jmp dword ptr [0x9eabc8]
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawSphere@DrawPrimitives@RBX@@SAXMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
