// roc 2007-08 004d1ba0  unit: RBX::View::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1ba0
//
// 004d1ba0  8b442404             mov eax, dword ptr [esp + 4]
// 004d1ba4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d1ba8  56                   push esi
// 004d1ba9  8bf1                 mov esi, ecx
// 004d1bab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d1baf  8906                 mov dword ptr [esi], eax
// 004d1bb1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d1bb5  894e04               mov dword ptr [esi + 4], ecx
// 004d1bb8  895608               mov dword ptr [esi + 8], edx
// 004d1bbb  d900                 fld dword ptr [eax]
// 004d1bbd  d95e0c               fstp dword ptr [esi + 0xc]
// 004d1bc0  d94004               fld dword ptr [eax + 4]
// 004d1bc3  d95e10               fstp dword ptr [esi + 0x10]
// 004d1bc6  d94008               fld dword ptr [eax + 8]
// 004d1bc9  d95e14               fstp dword ptr [esi + 0x14]
// 004d1bcc  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004d1bcf  894e18               mov dword ptr [esi + 0x18], ecx
// 004d1bd2  8d4e1c               lea ecx, [esi + 0x1c]
// 004d1bd5  c70100000000         mov dword ptr [ecx], 0
// 004d1bdb  8b5010               mov edx, dword ptr [eax + 0x10]
// 004d1bde  52                   push edx
// 004d1bdf  e88c33faff           call 0x474f70
// 004d1be4  8a442418             mov al, byte ptr [esp + 0x18]
// 004d1be8  884620               mov byte ptr [esi + 0x20], al
// 004d1beb  c6462100             mov byte ptr [esi + 0x21], 0
// 004d1bef  8bc6                 mov eax, esi
// 004d1bf1  5e                   pop esi
// 004d1bf2  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
