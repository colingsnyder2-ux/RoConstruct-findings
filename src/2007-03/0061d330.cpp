// roc 2007-03 0061d330  unit: seg_00610000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061d330
//
// 0061d330  56                   push esi
// 0061d331  ff1524ec7700         call dword ptr [0x77ec24]
// 0061d337  e8e8e91000           call 0x72bd24
// 0061d33c  8bf0                 mov esi, eax
// 0061d33e  68ac860100           push 0x186ac
// 0061d343  56                   push esi
// 0061d344  e8d5e91000           call 0x72bd1e
// 0061d349  d9442408             fld dword ptr [esp + 8]
// 0061d34d  6a0f                 push 0xf
// 0061d34f  6a0f                 push 0xf
// 0061d351  83ec08               sub esp, 8
// 0061d354  dd1c24               fstp qword ptr [esp]
// 0061d357  56                   push esi
// 0061d358  e8bbe91000           call 0x72bd18
// 0061d35d  56                   push esi
// 0061d35e  e8afe91000           call 0x72bd12
// 0061d363  5e                   pop esi
// 0061d364  ff2518ec7700         jmp dword ptr [0x77ec18]
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawSphere@DrawPrimitives@RBX@@SAXMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
