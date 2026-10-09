// roc 2008-06 004e7050  unit: RBX::ViewNew::PartChunk  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7050
//
// 004e7050  8b442404             mov eax, dword ptr [esp + 4]
// 004e7054  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004e7058  56                   push esi
// 004e7059  8bf1                 mov esi, ecx
// 004e705b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e705f  8906                 mov dword ptr [esi], eax
// 004e7061  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e7065  894e04               mov dword ptr [esi + 4], ecx
// 004e7068  895608               mov dword ptr [esi + 8], edx
// 004e706b  d900                 fld dword ptr [eax]
// 004e706d  d95e0c               fstp dword ptr [esi + 0xc]
// 004e7070  d94004               fld dword ptr [eax + 4]
// 004e7073  d95e10               fstp dword ptr [esi + 0x10]
// 004e7076  d94008               fld dword ptr [eax + 8]
// 004e7079  d95e14               fstp dword ptr [esi + 0x14]
// 004e707c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004e707f  894e18               mov dword ptr [esi + 0x18], ecx
// 004e7082  d94010               fld dword ptr [eax + 0x10]
// 004e7085  d95e1c               fstp dword ptr [esi + 0x1c]
// 004e7088  8d4e24               lea ecx, [esi + 0x24]
// 004e708b  d94014               fld dword ptr [eax + 0x14]
// 004e708e  c70100000000         mov dword ptr [ecx], 0
// 004e7094  d95e20               fstp dword ptr [esi + 0x20]
// 004e7097  8b5018               mov edx, dword ptr [eax + 0x18]
// 004e709a  52                   push edx
// 004e709b  e8001f0b00           call 0x598fa0
// 004e70a0  8a442418             mov al, byte ptr [esp + 0x18]
// 004e70a4  884628               mov byte ptr [esi + 0x28], al
// 004e70a7  c6462900             mov byte ptr [esi + 0x29], 0
// 004e70ab  8bc6                 mov eax, esi
// 004e70ad  5e                   pop esi
// 004e70ae  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
