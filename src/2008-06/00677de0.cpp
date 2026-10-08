// roc 2008-06 00677de0  unit: RBX::AdornG3D  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677de0
//
// 00677de0  56                   push esi
// 00677de1  ff15642a8000         call dword ptr [0x802a64]
// 00677de7  e8b8e51200           call 0x7a63a4
// 00677dec  8bf0                 mov esi, eax
// 00677dee  68ac860100           push 0x186ac
// 00677df3  56                   push esi
// 00677df4  e8a5e51200           call 0x7a639e
// 00677df9  d9442408             fld dword ptr [esp + 8]
// 00677dfd  6a0f                 push 0xf
// 00677dff  6a0f                 push 0xf
// 00677e01  83ec08               sub esp, 8
// 00677e04  dd1c24               fstp qword ptr [esp]
// 00677e07  56                   push esi
// 00677e08  e88be51200           call 0x7a6398
// 00677e0d  56                   push esi
// 00677e0e  e87fe51200           call 0x7a6392
// 00677e13  5e                   pop esi
// 00677e14  ff25702a8000         jmp dword ptr [0x802a70]
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawSphere@DrawPrimitives@RBX@@SAXMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
