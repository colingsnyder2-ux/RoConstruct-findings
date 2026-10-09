// roc 2010-06 00527060  unit: RBX::ViewG3D  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527060
//
// 00527060  56                   push esi
// 00527061  8bf1                 mov esi, ecx
// 00527063  8b4618               mov eax, dword ptr [esi + 0x18]
// 00527066  85c0                 test eax, eax
// 00527068  742c                 je 0x527096
// 0052706a  83c004               add eax, 4
// 0052706d  50                   push eax
// 0052706e  ff157ca39e00         call dword ptr [0x9ea37c]
// 00527074  85c0                 test eax, eax
// 00527076  7517                 jne 0x52708f
// 00527078  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0052707b  e8a0caf5ff           call 0x483b20
// 00527080  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00527083  85c9                 test ecx, ecx
// 00527085  7408                 je 0x52708f
// 00527087  8b01                 mov eax, dword ptr [ecx]
// 00527089  8b10                 mov edx, dword ptr [eax]
// 0052708b  6a01                 push 1
// 0052708d  ffd2                 call edx
// 0052708f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527096  5e                   pop esi
// 00527097  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??1?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
