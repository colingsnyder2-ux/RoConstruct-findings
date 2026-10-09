// roc 2009-06 00518a10  unit: RBX::PartChunk  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518a10
//
// 00518a10  8b442404             mov eax, dword ptr [esp + 4]
// 00518a14  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00518a18  56                   push esi
// 00518a19  8bf1                 mov esi, ecx
// 00518a1b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00518a1f  8906                 mov dword ptr [esi], eax
// 00518a21  8b442414             mov eax, dword ptr [esp + 0x14]
// 00518a25  894e04               mov dword ptr [esi + 4], ecx
// 00518a28  895608               mov dword ptr [esi + 8], edx
// 00518a2b  d900                 fld dword ptr [eax]
// 00518a2d  d95e0c               fstp dword ptr [esi + 0xc]
// 00518a30  d94004               fld dword ptr [eax + 4]
// 00518a33  d95e10               fstp dword ptr [esi + 0x10]
// 00518a36  d94008               fld dword ptr [eax + 8]
// 00518a39  d95e14               fstp dword ptr [esi + 0x14]
// 00518a3c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00518a3f  894e18               mov dword ptr [esi + 0x18], ecx
// 00518a42  8d4e1c               lea ecx, [esi + 0x1c]
// 00518a45  c70100000000         mov dword ptr [ecx], 0
// 00518a4b  8b5010               mov edx, dword ptr [eax + 0x10]
// 00518a4e  52                   push edx
// 00518a4f  e80c6ef8ff           call 0x49f860
// 00518a54  8a442418             mov al, byte ptr [esp + 0x18]
// 00518a58  884620               mov byte ptr [esi + 0x20], al
// 00518a5b  c6462100             mov byte ptr [esi + 0x21], 0
// 00518a5f  8bc6                 mov eax, esi
// 00518a61  5e                   pop esi
// 00518a62  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
