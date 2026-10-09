// roc 2008-06 004e6ff0  unit: RBX::ViewNew::PartChunk  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6ff0
//
// 004e6ff0  8b442404             mov eax, dword ptr [esp + 4]
// 004e6ff4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e6ff8  56                   push esi
// 004e6ff9  8bf1                 mov esi, ecx
// 004e6ffb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e6fff  8906                 mov dword ptr [esi], eax
// 004e7001  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e7005  894e04               mov dword ptr [esi + 4], ecx
// 004e7008  895608               mov dword ptr [esi + 8], edx
// 004e700b  d900                 fld dword ptr [eax]
// 004e700d  d95e0c               fstp dword ptr [esi + 0xc]
// 004e7010  d94004               fld dword ptr [eax + 4]
// 004e7013  d95e10               fstp dword ptr [esi + 0x10]
// 004e7016  d94008               fld dword ptr [eax + 8]
// 004e7019  d95e14               fstp dword ptr [esi + 0x14]
// 004e701c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004e701f  894e18               mov dword ptr [esi + 0x18], ecx
// 004e7022  8d4e1c               lea ecx, [esi + 0x1c]
// 004e7025  c70100000000         mov dword ptr [ecx], 0
// 004e702b  8b5010               mov edx, dword ptr [eax + 0x10]
// 004e702e  52                   push edx
// 004e702f  e86c1f0b00           call 0x598fa0
// 004e7034  8a442418             mov al, byte ptr [esp + 0x18]
// 004e7038  884620               mov byte ptr [esi + 0x20], al
// 004e703b  c6462100             mov byte ptr [esi + 0x21], 0
// 004e703f  8bc6                 mov eax, esi
// 004e7041  5e                   pop esi
// 004e7042  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
