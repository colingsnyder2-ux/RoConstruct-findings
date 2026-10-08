// roc 2010-06 00540eb0  unit: RBX::AggregatingSceneManager  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540eb0
//
// 00540eb0  64a100000000         mov eax, dword ptr fs:[0]
// 00540eb6  6aff                 push -1
// 00540eb8  6838fa9800           push 0x98fa38
// 00540ebd  50                   push eax
// 00540ebe  64892500000000       mov dword ptr fs:[0], esp
// 00540ec5  53                   push ebx
// 00540ec6  55                   push ebp
// 00540ec7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00540ecb  807d1500             cmp byte ptr [ebp + 0x15], 0
// 00540ecf  56                   push esi
// 00540ed0  57                   push edi
// 00540ed1  8bd9                 mov ebx, ecx
// 00540ed3  8bf5                 mov esi, ebp
// 00540ed5  7548                 jne 0x540f1f
// 00540ed7  8b4608               mov eax, dword ptr [esi + 8]
// 00540eda  50                   push eax
// 00540edb  8bcb                 mov ecx, ebx
// 00540edd  e8ceffffff           call 0x540eb0
// 00540ee2  8b36                 mov esi, dword ptr [esi]
// 00540ee4  8d7d0c               lea edi, [ebp + 0xc]
// 00540ee7  897c2420             mov dword ptr [esp + 0x20], edi
// 00540eeb  c7079cf2a100         mov dword ptr [edi], 0xa1f29c
// 00540ef1  8bcf                 mov ecx, edi
// 00540ef3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00540efb  e820ebffff           call 0x53fa20
// 00540f00  55                   push ebp
// 00540f01  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00540f09  c70738e8a100         mov dword ptr [edi], 0xa1e838
// 00540f0f  e8866a2600           call 0x7a799a
// 00540f14  83c404               add esp, 4
// 00540f17  807e1500             cmp byte ptr [esi + 0x15], 0
// 00540f1b  8bee                 mov ebp, esi
// 00540f1d  74b8                 je 0x540ed7
// 00540f1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00540f23  5f                   pop edi
// 00540f24  5e                   pop esi
// 00540f25  5d                   pop ebp
// 00540f26  64890d00000000       mov dword ptr fs:[0], ecx
// 00540f2d  5b                   pop ebx
// 00540f2e  83c40c               add esp, 0xc
// 00540f31  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Erase@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
