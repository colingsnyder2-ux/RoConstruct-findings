// roc 2010-06 0052e3e0  unit: RBX::PartChunk  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052e3e0
//
// 0052e3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0052e3e4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052e3e8  56                   push esi
// 0052e3e9  8bf1                 mov esi, ecx
// 0052e3eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052e3ef  8906                 mov dword ptr [esi], eax
// 0052e3f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052e3f5  894e04               mov dword ptr [esi + 4], ecx
// 0052e3f8  895608               mov dword ptr [esi + 8], edx
// 0052e3fb  d900                 fld dword ptr [eax]
// 0052e3fd  d95e0c               fstp dword ptr [esi + 0xc]
// 0052e400  d94004               fld dword ptr [eax + 4]
// 0052e403  d95e10               fstp dword ptr [esi + 0x10]
// 0052e406  d94008               fld dword ptr [eax + 8]
// 0052e409  d95e14               fstp dword ptr [esi + 0x14]
// 0052e40c  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0052e40f  894e18               mov dword ptr [esi + 0x18], ecx
// 0052e412  8d4e1c               lea ecx, [esi + 0x1c]
// 0052e415  c70100000000         mov dword ptr [ecx], 0
// 0052e41b  8b5010               mov edx, dword ptr [eax + 0x10]
// 0052e41e  52                   push edx
// 0052e41f  e8fc88f5ff           call 0x486d20
// 0052e424  8a442418             mov al, byte ptr [esp + 0x18]
// 0052e428  884620               mov byte ptr [esi + 0x20], al
// 0052e42b  c6462100             mov byte ptr [esi + 0x21], 0
// 0052e42f  8bc6                 mov eax, esi
// 0052e431  5e                   pop esi
// 0052e432  c21400               ret 0x14
// library openrbx-client/RbxView\PBBMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
