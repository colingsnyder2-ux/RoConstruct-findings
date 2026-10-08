// roc 2007-08 0062f550  unit: RBX::IndexBox  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f550
//
// 0062f550  56                   push esi
// 0062f551  ff1598ea7700         call dword ptr [0x77ea98]
// 0062f557  e838c10f00           call 0x72b694
// 0062f55c  8bf0                 mov esi, eax
// 0062f55e  68ac860100           push 0x186ac
// 0062f563  56                   push esi
// 0062f564  e825c10f00           call 0x72b68e
// 0062f569  d9442408             fld dword ptr [esp + 8]
// 0062f56d  6a0f                 push 0xf
// 0062f56f  6a0f                 push 0xf
// 0062f571  83ec08               sub esp, 8
// 0062f574  dd1c24               fstp qword ptr [esp]
// 0062f577  56                   push esi
// 0062f578  e80bc10f00           call 0x72b688
// 0062f57d  56                   push esi
// 0062f57e  e8ffc00f00           call 0x72b682
// 0062f583  5e                   pop esi
// 0062f584  ff25a4ea7700         jmp dword ptr [0x77eaa4]
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?rawSphere@DrawPrimitives@RBX@@SAXMPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
