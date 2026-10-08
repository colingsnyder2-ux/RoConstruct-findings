// roc 2007-03 004c3190  unit: seg_004c0000  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3190
//
// 004c3190  64a100000000         mov eax, dword ptr fs:[0]
// 004c3196  6aff                 push -1
// 004c3198  6858cf7400           push 0x74cf58
// 004c319d  50                   push eax
// 004c319e  64892500000000       mov dword ptr fs:[0], esp
// 004c31a5  53                   push ebx
// 004c31a6  55                   push ebp
// 004c31a7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004c31ab  807d2100             cmp byte ptr [ebp + 0x21], 0
// 004c31af  56                   push esi
// 004c31b0  57                   push edi
// 004c31b1  8bd9                 mov ebx, ecx
// 004c31b3  8bf5                 mov esi, ebp
// 004c31b5  7548                 jne 0x4c31ff
// 004c31b7  8b4608               mov eax, dword ptr [esi + 8]
// 004c31ba  50                   push eax
// 004c31bb  8bcb                 mov ecx, ebx
// 004c31bd  e8ceffffff           call 0x4c3190
// 004c31c2  8b36                 mov esi, dword ptr [esi]
// 004c31c4  8d7d18               lea edi, [ebp + 0x18]
// 004c31c7  897c2420             mov dword ptr [esp + 0x20], edi
// 004c31cb  c707bce57900         mov dword ptr [edi], 0x79e5bc
// 004c31d1  8bcf                 mov ecx, edi
// 004c31d3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004c31db  e820f3ffff           call 0x4c2500
// 004c31e0  55                   push ebp
// 004c31e1  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004c31e9  c70780e57900         mov dword ptr [edi], 0x79e580
// 004c31ef  e8fcae1500           call 0x61e0f0
// 004c31f4  83c404               add esp, 4
// 004c31f7  807e2100             cmp byte ptr [esi + 0x21], 0
// 004c31fb  8bee                 mov ebp, esi
// 004c31fd  74b8                 je 0x4c31b7
// 004c31ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c3203  5f                   pop edi
// 004c3204  5e                   pop esi
// 004c3205  5d                   pop ebp
// 004c3206  64890d00000000       mov dword ptr fs:[0], ecx
// 004c320d  5b                   pop ebx
// 004c320e  83c40c               add esp, 0xc
// 004c3211  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@U?$less@UAttributes@MaterialFactory@View@RBX@@@std@@V?$allocator@U?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
