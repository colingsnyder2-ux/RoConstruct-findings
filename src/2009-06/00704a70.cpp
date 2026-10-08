// roc 2009-06 00704a70  unit: RBX::AdornG3D  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704a70
//
// 00704a70  56                   push esi
// 00704a71  ff1514eb8900         call dword ptr [0x89eb14]
// 00704a77  e870f71200           call 0x8341ec
// 00704a7c  8bf0                 mov esi, eax
// 00704a7e  68ac860100           push 0x186ac
// 00704a83  56                   push esi
// 00704a84  e85df71200           call 0x8341e6
// 00704a89  d9442408             fld dword ptr [esp + 8]
// 00704a8d  6a0f                 push 0xf
// 00704a8f  6a0f                 push 0xf
// 00704a91  83ec08               sub esp, 8
// 00704a94  dd1c24               fstp qword ptr [esp]
// 00704a97  56                   push esi
// 00704a98  e843f71200           call 0x8341e0
// 00704a9d  56                   push esi
// 00704a9e  e837f71200           call 0x8341da
// 00704aa3  5e                   pop esi
// 00704aa4  ff2524eb8900         jmp dword ptr [0x89eb24]
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawSphere@DrawPrimitives@RBX@@SAXMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
