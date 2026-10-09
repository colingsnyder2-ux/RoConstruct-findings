// roc 2007-03 004c5fb0  unit: seg_004c0000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c5fb0
//
// 004c5fb0  8b442404             mov eax, dword ptr [esp + 4]
// 004c5fb4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004c5fb8  56                   push esi
// 004c5fb9  8bf1                 mov esi, ecx
// 004c5fbb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c5fbf  8906                 mov dword ptr [esi], eax
// 004c5fc1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c5fc5  894e04               mov dword ptr [esi + 4], ecx
// 004c5fc8  895608               mov dword ptr [esi + 8], edx
// 004c5fcb  d900                 fld dword ptr [eax]
// 004c5fcd  d95e0c               fstp dword ptr [esi + 0xc]
// 004c5fd0  d94004               fld dword ptr [eax + 4]
// 004c5fd3  d95e10               fstp dword ptr [esi + 0x10]
// 004c5fd6  d94008               fld dword ptr [eax + 8]
// 004c5fd9  d95e14               fstp dword ptr [esi + 0x14]
// 004c5fdc  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004c5fdf  894e18               mov dword ptr [esi + 0x18], ecx
// 004c5fe2  8d4e1c               lea ecx, [esi + 0x1c]
// 004c5fe5  c70100000000         mov dword ptr [ecx], 0
// 004c5feb  8b5010               mov edx, dword ptr [eax + 0x10]
// 004c5fee  52                   push edx
// 004c5fef  e89cf0faff           call 0x475090
// 004c5ff4  8a442418             mov al, byte ptr [esp + 0x18]
// 004c5ff8  884620               mov byte ptr [esi + 0x20], al
// 004c5ffb  c6462100             mov byte ptr [esi + 0x21], 0
// 004c5fff  8bc6                 mov eax, esi
// 004c6001  5e                   pop esi
// 004c6002  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
