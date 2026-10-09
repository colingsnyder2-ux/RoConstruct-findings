// roc 2009-12 005ce4a0  unit: RBX::PartChunk  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce4a0
//
// 005ce4a0  8b442404             mov eax, dword ptr [esp + 4]
// 005ce4a4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ce4a8  56                   push esi
// 005ce4a9  8bf1                 mov esi, ecx
// 005ce4ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ce4af  8906                 mov dword ptr [esi], eax
// 005ce4b1  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ce4b5  894e04               mov dword ptr [esi + 4], ecx
// 005ce4b8  895608               mov dword ptr [esi + 8], edx
// 005ce4bb  d900                 fld dword ptr [eax]
// 005ce4bd  d95e0c               fstp dword ptr [esi + 0xc]
// 005ce4c0  d94004               fld dword ptr [eax + 4]
// 005ce4c3  d95e10               fstp dword ptr [esi + 0x10]
// 005ce4c6  d94008               fld dword ptr [eax + 8]
// 005ce4c9  d95e14               fstp dword ptr [esi + 0x14]
// 005ce4cc  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005ce4cf  894e18               mov dword ptr [esi + 0x18], ecx
// 005ce4d2  d94010               fld dword ptr [eax + 0x10]
// 005ce4d5  d95e1c               fstp dword ptr [esi + 0x1c]
// 005ce4d8  8d4e24               lea ecx, [esi + 0x24]
// 005ce4db  d94014               fld dword ptr [eax + 0x14]
// 005ce4de  c70100000000         mov dword ptr [ecx], 0
// 005ce4e4  d95e20               fstp dword ptr [esi + 0x20]
// 005ce4e7  8b5018               mov edx, dword ptr [eax + 0x18]
// 005ce4ea  52                   push edx
// 005ce4eb  e8007bf1ff           call 0x4e5ff0
// 005ce4f0  8a442418             mov al, byte ptr [esp + 0x18]
// 005ce4f4  884628               mov byte ptr [esi + 0x28], al
// 005ce4f7  c6462900             mov byte ptr [esi + 0x29], 0
// 005ce4fb  8bc6                 mov eax, esi
// 005ce4fd  5e                   pop esi
// 005ce4fe  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
