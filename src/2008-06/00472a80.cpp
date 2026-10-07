// roc 2008-06 00472a80  unit: G3D::ReferenceCountedObject  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00472a80
//
// 00472a80  d90534c48100         fld dword ptr [0x81c434]
// 00472a86  8bc1                 mov eax, ecx
// 00472a88  b901000000           mov ecx, 1
// 00472a8d  d9580c               fstp dword ptr [eax + 0xc]
// 00472a90  c70003000000         mov dword ptr [eax], 3
// 00472a96  894804               mov dword ptr [eax + 4], ecx
// 00472a99  c7400800000000       mov dword ptr [eax + 8], 0
// 00472aa0  884810               mov byte ptr [eax + 0x10], cl
// 00472aa3  c74014e8030000       mov dword ptr [eax + 0x14], 0x3e8
// 00472aaa  c7401818fcffff       mov dword ptr [eax + 0x18], 0xfffffc18
// 00472ab1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Settings@Texture@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
