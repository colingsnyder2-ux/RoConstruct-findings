// roc 2009-06 0051ab60  unit: G3D::VVector3::?$Table  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051ab60
//
// 0051ab60  51                   push ecx
// 0051ab61  55                   push ebp
// 0051ab62  57                   push edi
// 0051ab63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051ab67  807f2900             cmp byte ptr [edi + 0x29], 0
// 0051ab6b  894c2408             mov dword ptr [esp + 8], ecx
// 0051ab6f  8bef                 mov ebp, edi
// 0051ab71  7573                 jne 0x51abe6
// 0051ab73  56                   push esi
// 0051ab74  8b4508               mov eax, dword ptr [ebp + 8]
// 0051ab77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051ab7b  50                   push eax
// 0051ab7c  e8dfffffff           call 0x51ab60
// 0051ab81  8b4724               mov eax, dword ptr [edi + 0x24]
// 0051ab84  8b6d00               mov ebp, dword ptr [ebp]
// 0051ab87  85c0                 test eax, eax
// 0051ab89  7449                 je 0x51abd4
// 0051ab8b  83c004               add eax, 4
// 0051ab8e  50                   push eax
// 0051ab8f  ff15a4e18900         call dword ptr [0x89e1a4]
// 0051ab95  85c0                 test eax, eax
// 0051ab97  7534                 jne 0x51abcd
// 0051ab99  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0051ab9c  8b7108               mov esi, dword ptr [ecx + 8]
// 0051ab9f  85f6                 test esi, esi
// 0051aba1  741b                 je 0x51abbe
// 0051aba3  8b0e                 mov ecx, dword ptr [esi]
// 0051aba5  8b11                 mov edx, dword ptr [ecx]
// 0051aba7  8b4204               mov eax, dword ptr [edx + 4]
// 0051abaa  ffd0                 call eax
// 0051abac  8bc6                 mov eax, esi
// 0051abae  8b7604               mov esi, dword ptr [esi + 4]
// 0051abb1  50                   push eax
// 0051abb2  e87bde1f00           call 0x718a32
// 0051abb7  83c404               add esp, 4
// 0051abba  85f6                 test esi, esi
// 0051abbc  75e5                 jne 0x51aba3
// 0051abbe  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0051abc1  85c9                 test ecx, ecx
// 0051abc3  7408                 je 0x51abcd
// 0051abc5  8b11                 mov edx, dword ptr [ecx]
// 0051abc7  8b02                 mov eax, dword ptr [edx]
// 0051abc9  6a01                 push 1
// 0051abcb  ffd0                 call eax
// 0051abcd  c7472400000000       mov dword ptr [edi + 0x24], 0
// 0051abd4  57                   push edi
// 0051abd5  e858de1f00           call 0x718a32
// 0051abda  83c404               add esp, 4
// 0051abdd  807d2900             cmp byte ptr [ebp + 0x29], 0
// 0051abe1  8bfd                 mov edi, ebp
// 0051abe3  748f                 je 0x51ab74
// 0051abe5  5e                   pop esi
// 0051abe6  5f                   pop edi
// 0051abe7  5d                   pop ebp
// 0051abe8  59                   pop ecx
// 0051abe9  c20400               ret 4
// library openrbx-client/RbxView\PBBMesh.cpp (function ?_Erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
