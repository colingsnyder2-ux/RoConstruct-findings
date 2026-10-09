// roc 2010-06 00531900  unit: G3D::VVector3::?$Table  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00531900
//
// 00531900  51                   push ecx
// 00531901  55                   push ebp
// 00531902  57                   push edi
// 00531903  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00531907  807f2100             cmp byte ptr [edi + 0x21], 0
// 0053190b  894c2408             mov dword ptr [esp + 8], ecx
// 0053190f  8bef                 mov ebp, edi
// 00531911  7573                 jne 0x531986
// 00531913  56                   push esi
// 00531914  8b4508               mov eax, dword ptr [ebp + 8]
// 00531917  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053191b  50                   push eax
// 0053191c  e8dfffffff           call 0x531900
// 00531921  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00531924  8b6d00               mov ebp, dword ptr [ebp]
// 00531927  85c0                 test eax, eax
// 00531929  7449                 je 0x531974
// 0053192b  83c004               add eax, 4
// 0053192e  50                   push eax
// 0053192f  ff157ca39e00         call dword ptr [0x9ea37c]
// 00531935  85c0                 test eax, eax
// 00531937  7534                 jne 0x53196d
// 00531939  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0053193c  8b7108               mov esi, dword ptr [ecx + 8]
// 0053193f  85f6                 test esi, esi
// 00531941  741b                 je 0x53195e
// 00531943  8b0e                 mov ecx, dword ptr [esi]
// 00531945  8b11                 mov edx, dword ptr [ecx]
// 00531947  8b4204               mov eax, dword ptr [edx + 4]
// 0053194a  ffd0                 call eax
// 0053194c  8bc6                 mov eax, esi
// 0053194e  8b7604               mov esi, dword ptr [esi + 4]
// 00531951  50                   push eax
// 00531952  e843602700           call 0x7a799a
// 00531957  83c404               add esp, 4
// 0053195a  85f6                 test esi, esi
// 0053195c  75e5                 jne 0x531943
// 0053195e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00531961  85c9                 test ecx, ecx
// 00531963  7408                 je 0x53196d
// 00531965  8b11                 mov edx, dword ptr [ecx]
// 00531967  8b02                 mov eax, dword ptr [edx]
// 00531969  6a01                 push 1
// 0053196b  ffd0                 call eax
// 0053196d  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 00531974  57                   push edi
// 00531975  e820602700           call 0x7a799a
// 0053197a  83c404               add esp, 4
// 0053197d  807d2100             cmp byte ptr [ebp + 0x21], 0
// 00531981  8bfd                 mov edi, ebp
// 00531983  748f                 je 0x531914
// 00531985  5e                   pop esi
// 00531986  5f                   pop edi
// 00531987  5d                   pop ebp
// 00531988  59                   pop ecx
// 00531989  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
