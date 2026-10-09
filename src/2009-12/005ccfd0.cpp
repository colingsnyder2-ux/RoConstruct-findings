// roc 2009-12 005ccfd0  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ccfd0
//
// 005ccfd0  56                   push esi
// 005ccfd1  8bf1                 mov esi, ecx
// 005ccfd3  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ccfd6  85c0                 test eax, eax
// 005ccfd8  742c                 je 0x5cd006
// 005ccfda  83c004               add eax, 4
// 005ccfdd  50                   push eax
// 005ccfde  ff1508b29800         call dword ptr [0x98b208]
// 005ccfe4  85c0                 test eax, eax
// 005ccfe6  7517                 jne 0x5ccfff
// 005ccfe8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005ccfeb  e830e0e7ff           call 0x44b020
// 005ccff0  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005ccff3  85c9                 test ecx, ecx
// 005ccff5  7408                 je 0x5ccfff
// 005ccff7  8b01                 mov eax, dword ptr [ecx]
// 005ccff9  8b10                 mov edx, dword ptr [eax]
// 005ccffb  6a01                 push 1
// 005ccffd  ffd2                 call edx
// 005ccfff  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005cd006  5e                   pop esi
// 005cd007  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??1?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
