// from server: 100% by auto
// roc 2009-06 0049a1c0  unit: G3D::ReferenceCountedObject  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a1c0
//
// 0049a1c0  d90544d08b00         fld dword ptr [0x8bd044]
// 0049a1c6  8bc1                 mov eax, ecx
// 0049a1c8  b901000000           mov ecx, 1
// 0049a1cd  d9580c               fstp dword ptr [eax + 0xc]
// 0049a1d0  c70003000000         mov dword ptr [eax], 3
// 0049a1d6  894804               mov dword ptr [eax + 4], ecx
// 0049a1d9  c7400800000000       mov dword ptr [eax + 8], 0
// 0049a1e0  884810               mov byte ptr [eax + 0x10], cl
// 0049a1e3  c74014e8030000       mov dword ptr [eax + 0x14], 0x3e8
// 0049a1ea  c7401818fcffff       mov dword ptr [eax + 0x18], 0xfffffc18
// 0049a1f1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??0Settings@Texture@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
