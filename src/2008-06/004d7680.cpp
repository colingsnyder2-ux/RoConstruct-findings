// roc 2008-06 004d7680  unit: Ogre::VDataStream::?$SharedPtr  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7680
//
// 004d7680  56                   push esi
// 004d7681  8bf1                 mov esi, ecx
// 004d7683  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d7686  85c0                 test eax, eax
// 004d7688  742c                 je 0x4d76b6
// 004d768a  83c004               add eax, 4
// 004d768d  50                   push eax
// 004d768e  ff15ac218000         call dword ptr [0x8021ac]
// 004d7694  85c0                 test eax, eax
// 004d7696  7517                 jne 0x4d76af
// 004d7698  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d769b  e8f036f8ff           call 0x45ad90
// 004d76a0  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004d76a3  85c9                 test ecx, ecx
// 004d76a5  7408                 je 0x4d76af
// 004d76a7  8b01                 mov eax, dword ptr [ecx]
// 004d76a9  8b10                 mov edx, dword ptr [eax]
// 004d76ab  6a01                 push 1
// 004d76ad  ffd2                 call edx
// 004d76af  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004d76b6  5e                   pop esi
// 004d76b7  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??1?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
