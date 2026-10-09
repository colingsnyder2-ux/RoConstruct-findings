// roc 2010-06 0052e440  unit: RBX::PartChunk  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052e440
//
// 0052e440  8b442404             mov eax, dword ptr [esp + 4]
// 0052e444  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052e448  56                   push esi
// 0052e449  8bf1                 mov esi, ecx
// 0052e44b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052e44f  8906                 mov dword ptr [esi], eax
// 0052e451  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052e455  894e04               mov dword ptr [esi + 4], ecx
// 0052e458  895608               mov dword ptr [esi + 8], edx
// 0052e45b  d900                 fld dword ptr [eax]
// 0052e45d  d95e0c               fstp dword ptr [esi + 0xc]
// 0052e460  d94004               fld dword ptr [eax + 4]
// 0052e463  d95e10               fstp dword ptr [esi + 0x10]
// 0052e466  d94008               fld dword ptr [eax + 8]
// 0052e469  d95e14               fstp dword ptr [esi + 0x14]
// 0052e46c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0052e46f  894e18               mov dword ptr [esi + 0x18], ecx
// 0052e472  d94010               fld dword ptr [eax + 0x10]
// 0052e475  d95e1c               fstp dword ptr [esi + 0x1c]
// 0052e478  8d4e24               lea ecx, [esi + 0x24]
// 0052e47b  d94014               fld dword ptr [eax + 0x14]
// 0052e47e  c70100000000         mov dword ptr [ecx], 0
// 0052e484  d95e20               fstp dword ptr [esi + 0x20]
// 0052e487  8b5018               mov edx, dword ptr [eax + 0x18]
// 0052e48a  52                   push edx
// 0052e48b  e89088f5ff           call 0x486d20
// 0052e490  8a442418             mov al, byte ptr [esp + 0x18]
// 0052e494  884628               mov byte ptr [esi + 0x28], al
// 0052e497  c6462900             mov byte ptr [esi + 0x29], 0
// 0052e49b  8bc6                 mov eax, esi
// 0052e49d  5e                   pop esi
// 0052e49e  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
