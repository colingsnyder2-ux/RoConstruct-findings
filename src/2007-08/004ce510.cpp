// roc 2007-08 004ce510  unit: 0RBX::View  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce510
//
// 004ce510  51                   push ecx
// 004ce511  55                   push ebp
// 004ce512  57                   push edi
// 004ce513  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ce517  807f2100             cmp byte ptr [edi + 0x21], 0
// 004ce51b  894c2408             mov dword ptr [esp + 8], ecx
// 004ce51f  8bef                 mov ebp, edi
// 004ce521  7573                 jne 0x4ce596
// 004ce523  56                   push esi
// 004ce524  8b4508               mov eax, dword ptr [ebp + 8]
// 004ce527  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ce52b  50                   push eax
// 004ce52c  e8dfffffff           call 0x4ce510
// 004ce531  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004ce534  85c0                 test eax, eax
// 004ce536  8b6d00               mov ebp, dword ptr [ebp]
// 004ce539  7449                 je 0x4ce584
// 004ce53b  83c004               add eax, 4
// 004ce53e  50                   push eax
// 004ce53f  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ce545  85c0                 test eax, eax
// 004ce547  7534                 jne 0x4ce57d
// 004ce549  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004ce54c  8b7108               mov esi, dword ptr [ecx + 8]
// 004ce54f  85f6                 test esi, esi
// 004ce551  741b                 je 0x4ce56e
// 004ce553  8b0e                 mov ecx, dword ptr [esi]
// 004ce555  8b11                 mov edx, dword ptr [ecx]
// 004ce557  8b4204               mov eax, dword ptr [edx + 4]
// 004ce55a  ffd0                 call eax
// 004ce55c  8bc6                 mov eax, esi
// 004ce55e  8b7604               mov esi, dword ptr [esi + 4]
// 004ce561  50                   push eax
// 004ce562  e8fb161600           call 0x62fc62
// 004ce567  83c404               add esp, 4
// 004ce56a  85f6                 test esi, esi
// 004ce56c  75e5                 jne 0x4ce553
// 004ce56e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004ce571  85c9                 test ecx, ecx
// 004ce573  7408                 je 0x4ce57d
// 004ce575  8b11                 mov edx, dword ptr [ecx]
// 004ce577  8b02                 mov eax, dword ptr [edx]
// 004ce579  6a01                 push 1
// 004ce57b  ffd0                 call eax
// 004ce57d  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 004ce584  57                   push edi
// 004ce585  e8d8161600           call 0x62fc62
// 004ce58a  83c404               add esp, 4
// 004ce58d  807d2100             cmp byte ptr [ebp + 0x21], 0
// 004ce591  8bfd                 mov edi, ebp
// 004ce593  748f                 je 0x4ce524
// 004ce595  5e                   pop esi
// 004ce596  5f                   pop edi
// 004ce597  5d                   pop ebp
// 004ce598  59                   pop ecx
// 004ce599  c20400               ret 4
// library rbxgs-view/View.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
