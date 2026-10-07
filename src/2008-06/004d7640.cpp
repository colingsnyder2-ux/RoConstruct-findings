// roc 2008-06 004d7640  unit: Ogre::VDataStream::?$SharedPtr  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7640
//
// 004d7640  56                   push esi
// 004d7641  8bf1                 mov esi, ecx
// 004d7643  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d7646  85c0                 test eax, eax
// 004d7648  742c                 je 0x4d7676
// 004d764a  83c004               add eax, 4
// 004d764d  50                   push eax
// 004d764e  ff15ac218000         call dword ptr [0x8021ac]
// 004d7654  85c0                 test eax, eax
// 004d7656  7517                 jne 0x4d766f
// 004d7658  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004d765b  e83037f8ff           call 0x45ad90
// 004d7660  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004d7663  85c9                 test ecx, ecx
// 004d7665  7408                 je 0x4d766f
// 004d7667  8b01                 mov eax, dword ptr [ecx]
// 004d7669  8b10                 mov edx, dword ptr [eax]
// 004d766b  6a01                 push 1
// 004d766d  ffd2                 call edx
// 004d766f  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004d7676  5e                   pop esi
// 004d7677  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1TextureUnit@RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
