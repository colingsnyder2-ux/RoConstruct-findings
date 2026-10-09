// roc 2009-12 005ce510  unit: RBX::PartChunk  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce510
//
// 005ce510  8b442404             mov eax, dword ptr [esp + 4]
// 005ce514  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ce518  56                   push esi
// 005ce519  8bf1                 mov esi, ecx
// 005ce51b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce51f  8906                 mov dword ptr [esi], eax
// 005ce521  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ce525  894e04               mov dword ptr [esi + 4], ecx
// 005ce528  895608               mov dword ptr [esi + 8], edx
// 005ce52b  d900                 fld dword ptr [eax]
// 005ce52d  d95e0c               fstp dword ptr [esi + 0xc]
// 005ce530  d94004               fld dword ptr [eax + 4]
// 005ce533  d95e10               fstp dword ptr [esi + 0x10]
// 005ce536  d94008               fld dword ptr [eax + 8]
// 005ce539  d95e14               fstp dword ptr [esi + 0x14]
// 005ce53c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005ce53f  894e18               mov dword ptr [esi + 0x18], ecx
// 005ce542  8d4e1c               lea ecx, [esi + 0x1c]
// 005ce545  c70100000000         mov dword ptr [ecx], 0
// 005ce54b  8b5010               mov edx, dword ptr [eax + 0x10]
// 005ce54e  52                   push edx
// 005ce54f  e89c7af1ff           call 0x4e5ff0
// 005ce554  8a442418             mov al, byte ptr [esp + 0x18]
// 005ce558  884620               mov byte ptr [esi + 0x20], al
// 005ce55b  c6462100             mov byte ptr [esi + 0x21], 0
// 005ce55f  8bc6                 mov eax, esi
// 005ce561  5e                   pop esi
// 005ce562  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
