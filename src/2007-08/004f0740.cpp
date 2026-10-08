// roc 2007-08 004f0740  unit: RBX::Render::AggregatingSceneManager  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0740
//
// 004f0740  51                   push ecx
// 004f0741  53                   push ebx
// 004f0742  55                   push ebp
// 004f0743  56                   push esi
// 004f0744  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f0748  85f6                 test esi, esi
// 004f074a  57                   push edi
// 004f074b  8bf9                 mov edi, ecx
// 004f074d  7406                 je 0x4f0755
// 004f074f  3b742424             cmp esi, dword ptr [esp + 0x24]
// 004f0753  7406                 je 0x4f075b
// 004f0755  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f075b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004f075f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f0763  3beb                 cmp ebp, ebx
// 004f0765  7447                 je 0x4f07ae
// 004f0767  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f076b  8b7708               mov esi, dword ptr [edi + 8]
// 004f076e  c644242400           mov byte ptr [esp + 0x24], 0
// 004f0773  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f0777  50                   push eax
// 004f0778  c644241400           mov byte ptr [esp + 0x14], 0
// 004f077d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f0781  51                   push ecx
// 004f0782  52                   push edx
// 004f0783  55                   push ebp
// 004f0784  56                   push esi
// 004f0785  53                   push ebx
// 004f0786  e8e5ebffff           call 0x4ef370
// 004f078b  8b442430             mov eax, dword ptr [esp + 0x30]
// 004f078f  8b4f08               mov ecx, dword ptr [edi + 8]
// 004f0792  50                   push eax
// 004f0793  2bf3                 sub esi, ebx
// 004f0795  57                   push edi
// 004f0796  c1fe02               sar esi, 2
// 004f0799  51                   push ecx
// 004f079a  8d74b500             lea esi, [ebp + esi*4]
// 004f079e  56                   push esi
// 004f079f  e8acf6ffff           call 0x4efe50
// 004f07a4  897708               mov dword ptr [edi + 8], esi
// 004f07a7  8b742444             mov esi, dword ptr [esp + 0x44]
// 004f07ab  83c428               add esp, 0x28
// 004f07ae  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f07b2  5f                   pop edi
// 004f07b3  8930                 mov dword ptr [eax], esi
// 004f07b5  5e                   pop esi
// 004f07b6  896804               mov dword ptr [eax + 4], ebp
// 004f07b9  5d                   pop ebp
// 004f07ba  5b                   pop ebx
// 004f07bb  59                   pop ecx
// 004f07bc  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
