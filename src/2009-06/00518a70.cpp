// roc 2009-06 00518a70  unit: RBX::PartChunk  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518a70
//
// 00518a70  8b442404             mov eax, dword ptr [esp + 4]
// 00518a74  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00518a78  56                   push esi
// 00518a79  8bf1                 mov esi, ecx
// 00518a7b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00518a7f  8906                 mov dword ptr [esi], eax
// 00518a81  8b442414             mov eax, dword ptr [esp + 0x14]
// 00518a85  894e04               mov dword ptr [esi + 4], ecx
// 00518a88  895608               mov dword ptr [esi + 8], edx
// 00518a8b  d900                 fld dword ptr [eax]
// 00518a8d  d95e0c               fstp dword ptr [esi + 0xc]
// 00518a90  d94004               fld dword ptr [eax + 4]
// 00518a93  d95e10               fstp dword ptr [esi + 0x10]
// 00518a96  d94008               fld dword ptr [eax + 8]
// 00518a99  d95e14               fstp dword ptr [esi + 0x14]
// 00518a9c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00518a9f  894e18               mov dword ptr [esi + 0x18], ecx
// 00518aa2  d94010               fld dword ptr [eax + 0x10]
// 00518aa5  d95e1c               fstp dword ptr [esi + 0x1c]
// 00518aa8  8d4e24               lea ecx, [esi + 0x24]
// 00518aab  d94014               fld dword ptr [eax + 0x14]
// 00518aae  c70100000000         mov dword ptr [ecx], 0
// 00518ab4  d95e20               fstp dword ptr [esi + 0x20]
// 00518ab7  8b5018               mov edx, dword ptr [eax + 0x18]
// 00518aba  52                   push edx
// 00518abb  e8a06df8ff           call 0x49f860
// 00518ac0  8a442418             mov al, byte ptr [esp + 0x18]
// 00518ac4  884628               mov byte ptr [esi + 0x28], al
// 00518ac7  c6462900             mov byte ptr [esi + 0x29], 0
// 00518acb  8bc6                 mov eax, esi
// 00518acd  5e                   pop esi
// 00518ace  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
