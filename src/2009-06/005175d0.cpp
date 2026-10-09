// roc 2009-06 005175d0  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005175d0
//
// 005175d0  56                   push esi
// 005175d1  8bf1                 mov esi, ecx
// 005175d3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005175d6  85c0                 test eax, eax
// 005175d8  742c                 je 0x517606
// 005175da  83c004               add eax, 4
// 005175dd  50                   push eax
// 005175de  ff15a4e18900         call dword ptr [0x89e1a4]
// 005175e4  85c0                 test eax, eax
// 005175e6  7517                 jne 0x5175ff
// 005175e8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005175eb  e890d7f2ff           call 0x444d80
// 005175f0  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005175f3  85c9                 test ecx, ecx
// 005175f5  7408                 je 0x5175ff
// 005175f7  8b01                 mov eax, dword ptr [ecx]
// 005175f9  8b10                 mov edx, dword ptr [eax]
// 005175fb  6a01                 push 1
// 005175fd  ffd2                 call edx
// 005175ff  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00517606  5e                   pop esi
// 00517607  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??1?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
