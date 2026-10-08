// from server: 100% by auto
// roc 2010-06 0052d770  unit: RBX::MaterialBaseRefMaterialAdapter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052d770
//
// 0052d770  a1e88fc000           mov eax, dword ptr [0xc08fe8]
// 0052d775  85c0                 test eax, eax
// 0052d777  7435                 je 0x52d7ae
// 0052d779  83c004               add eax, 4
// 0052d77c  50                   push eax
// 0052d77d  ff157ca39e00         call dword ptr [0x9ea37c]
// 0052d783  85c0                 test eax, eax
// 0052d785  751d                 jne 0x52d7a4
// 0052d787  8b0de88fc000         mov ecx, dword ptr [0xc08fe8]
// 0052d78d  e88e63f5ff           call 0x483b20
// 0052d792  8b0de88fc000         mov ecx, dword ptr [0xc08fe8]
// 0052d798  85c9                 test ecx, ecx
// 0052d79a  7408                 je 0x52d7a4
// 0052d79c  8b01                 mov eax, dword ptr [ecx]
// 0052d79e  8b10                 mov edx, dword ptr [eax]
// 0052d7a0  6a01                 push 1
// 0052d7a2  ffd2                 call edx
// 0052d7a4  c705e88fc00000000000 mov dword ptr [0xc08fe8], 0
// 0052d7ae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??__Fvbuffer@?4??sphereSection@Draw@G3D@@CAXABVSphere@2@PAVRenderDevice@2@ABVColor4@2@_N3@Z@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
