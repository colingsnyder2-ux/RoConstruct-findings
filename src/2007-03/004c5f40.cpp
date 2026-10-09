// roc 2007-03 004c5f40  unit: seg_004c0000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c5f40
//
// 004c5f40  8b442404             mov eax, dword ptr [esp + 4]
// 004c5f44  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c5f48  56                   push esi
// 004c5f49  8bf1                 mov esi, ecx
// 004c5f4b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c5f4f  8906                 mov dword ptr [esi], eax
// 004c5f51  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c5f55  894e04               mov dword ptr [esi + 4], ecx
// 004c5f58  895608               mov dword ptr [esi + 8], edx
// 004c5f5b  d900                 fld dword ptr [eax]
// 004c5f5d  d95e0c               fstp dword ptr [esi + 0xc]
// 004c5f60  d94004               fld dword ptr [eax + 4]
// 004c5f63  d95e10               fstp dword ptr [esi + 0x10]
// 004c5f66  d94008               fld dword ptr [eax + 8]
// 004c5f69  d95e14               fstp dword ptr [esi + 0x14]
// 004c5f6c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004c5f6f  894e18               mov dword ptr [esi + 0x18], ecx
// 004c5f72  d94010               fld dword ptr [eax + 0x10]
// 004c5f75  d95e1c               fstp dword ptr [esi + 0x1c]
// 004c5f78  8d4e24               lea ecx, [esi + 0x24]
// 004c5f7b  d94014               fld dword ptr [eax + 0x14]
// 004c5f7e  c70100000000         mov dword ptr [ecx], 0
// 004c5f84  d95e20               fstp dword ptr [esi + 0x20]
// 004c5f87  8b5018               mov edx, dword ptr [eax + 0x18]
// 004c5f8a  52                   push edx
// 004c5f8b  e800f1faff           call 0x475090
// 004c5f90  8a442418             mov al, byte ptr [esp + 0x18]
// 004c5f94  884628               mov byte ptr [esi + 0x28], al
// 004c5f97  c6462900             mov byte ptr [esi + 0x29], 0
// 004c5f9b  8bc6                 mov eax, esi
// 004c5f9d  5e                   pop esi
// 004c5f9e  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
