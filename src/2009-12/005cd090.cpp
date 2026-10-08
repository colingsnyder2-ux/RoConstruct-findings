// roc 2009-12 005cd090  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cd090
//
// 005cd090  56                   push esi
// 005cd091  8bf1                 mov esi, ecx
// 005cd093  8b4610               mov eax, dword ptr [esi + 0x10]
// 005cd096  85c0                 test eax, eax
// 005cd098  742c                 je 0x5cd0c6
// 005cd09a  83c004               add eax, 4
// 005cd09d  50                   push eax
// 005cd09e  ff1508b29800         call dword ptr [0x98b208]
// 005cd0a4  85c0                 test eax, eax
// 005cd0a6  7517                 jne 0x5cd0bf
// 005cd0a8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005cd0ab  e870dfe7ff           call 0x44b020
// 005cd0b0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005cd0b3  85c9                 test ecx, ecx
// 005cd0b5  7408                 je 0x5cd0bf
// 005cd0b7  8b01                 mov eax, dword ptr [ecx]
// 005cd0b9  8b10                 mov edx, dword ptr [eax]
// 005cd0bb  6a01                 push 1
// 005cd0bd  ffd2                 call edx
// 005cd0bf  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005cd0c6  5e                   pop esi
// 005cd0c7  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
