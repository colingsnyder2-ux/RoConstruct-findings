// roc 2007-08 004d1b30  unit: RBX::View::Texture  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1b30
//
// 004d1b30  8b442404             mov eax, dword ptr [esp + 4]
// 004d1b34  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d1b38  56                   push esi
// 004d1b39  8bf1                 mov esi, ecx
// 004d1b3b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d1b3f  8906                 mov dword ptr [esi], eax
// 004d1b41  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d1b45  894e04               mov dword ptr [esi + 4], ecx
// 004d1b48  895608               mov dword ptr [esi + 8], edx
// 004d1b4b  d900                 fld dword ptr [eax]
// 004d1b4d  d95e0c               fstp dword ptr [esi + 0xc]
// 004d1b50  d94004               fld dword ptr [eax + 4]
// 004d1b53  d95e10               fstp dword ptr [esi + 0x10]
// 004d1b56  d94008               fld dword ptr [eax + 8]
// 004d1b59  d95e14               fstp dword ptr [esi + 0x14]
// 004d1b5c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004d1b5f  894e18               mov dword ptr [esi + 0x18], ecx
// 004d1b62  d94010               fld dword ptr [eax + 0x10]
// 004d1b65  d95e1c               fstp dword ptr [esi + 0x1c]
// 004d1b68  8d4e24               lea ecx, [esi + 0x24]
// 004d1b6b  d94014               fld dword ptr [eax + 0x14]
// 004d1b6e  c70100000000         mov dword ptr [ecx], 0
// 004d1b74  d95e20               fstp dword ptr [esi + 0x20]
// 004d1b77  8b5018               mov edx, dword ptr [eax + 0x18]
// 004d1b7a  52                   push edx
// 004d1b7b  e8f033faff           call 0x474f70
// 004d1b80  8a442418             mov al, byte ptr [esp + 0x18]
// 004d1b84  884628               mov byte ptr [esi + 0x28], al
// 004d1b87  c6462900             mov byte ptr [esi + 0x29], 0
// 004d1b8b  8bc6                 mov eax, esi
// 004d1b8d  5e                   pop esi
// 004d1b8e  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
