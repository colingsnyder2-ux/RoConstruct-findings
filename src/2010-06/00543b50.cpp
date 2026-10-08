// roc 2010-06 00543b50  unit: RBX::RbxG3D::RenderScene  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00543b50
//
// 00543b50  8b542404             mov edx, dword ptr [esp + 4]
// 00543b54  d902                 fld dword ptr [edx]
// 00543b56  8bc1                 mov eax, ecx
// 00543b58  d918                 fstp dword ptr [eax]
// 00543b5a  53                   push ebx
// 00543b5b  d94204               fld dword ptr [edx + 4]
// 00543b5e  55                   push ebp
// 00543b5f  d95804               fstp dword ptr [eax + 4]
// 00543b62  56                   push esi
// 00543b63  d94208               fld dword ptr [edx + 8]
// 00543b66  8d9a88000000         lea ebx, [edx + 0x88]
// 00543b6c  d95808               fstp dword ptr [eax + 8]
// 00543b6f  8da888000000         lea ebp, [eax + 0x88]
// 00543b75  d9420c               fld dword ptr [edx + 0xc]
// 00543b78  57                   push edi
// 00543b79  d9580c               fstp dword ptr [eax + 0xc]
// 00543b7c  8bf3                 mov esi, ebx
// 00543b7e  d94210               fld dword ptr [edx + 0x10]
// 00543b81  8bfd                 mov edi, ebp
// 00543b83  d95810               fstp dword ptr [eax + 0x10]
// 00543b86  d94214               fld dword ptr [edx + 0x14]
// 00543b89  d95814               fstp dword ptr [eax + 0x14]
// 00543b8c  d94218               fld dword ptr [edx + 0x18]
// 00543b8f  d95818               fstp dword ptr [eax + 0x18]
// 00543b92  d9421c               fld dword ptr [edx + 0x1c]
// 00543b95  d9581c               fstp dword ptr [eax + 0x1c]
// 00543b98  d94220               fld dword ptr [edx + 0x20]
// 00543b9b  d95820               fstp dword ptr [eax + 0x20]
// 00543b9e  d94224               fld dword ptr [edx + 0x24]
// 00543ba1  d95824               fstp dword ptr [eax + 0x24]
// 00543ba4  d94228               fld dword ptr [edx + 0x28]
// 00543ba7  d95828               fstp dword ptr [eax + 0x28]
// 00543baa  d9422c               fld dword ptr [edx + 0x2c]
// 00543bad  d9582c               fstp dword ptr [eax + 0x2c]
// 00543bb0  d94230               fld dword ptr [edx + 0x30]
// 00543bb3  d95830               fstp dword ptr [eax + 0x30]
// 00543bb6  d94234               fld dword ptr [edx + 0x34]
// 00543bb9  d95834               fstp dword ptr [eax + 0x34]
// 00543bbc  d94238               fld dword ptr [edx + 0x38]
// 00543bbf  d95838               fstp dword ptr [eax + 0x38]
// 00543bc2  d9423c               fld dword ptr [edx + 0x3c]
// 00543bc5  d9583c               fstp dword ptr [eax + 0x3c]
// 00543bc8  d94240               fld dword ptr [edx + 0x40]
// 00543bcb  d95840               fstp dword ptr [eax + 0x40]
// 00543bce  d94244               fld dword ptr [edx + 0x44]
// 00543bd1  d95844               fstp dword ptr [eax + 0x44]
// 00543bd4  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00543bd7  894848               mov dword ptr [eax + 0x48], ecx
// 00543bda  8a4a4c               mov cl, byte ptr [edx + 0x4c]
// 00543bdd  88484c               mov byte ptr [eax + 0x4c], cl
// 00543be0  d94250               fld dword ptr [edx + 0x50]
// 00543be3  d95850               fstp dword ptr [eax + 0x50]
// 00543be6  b909000000           mov ecx, 9
// 00543beb  d94254               fld dword ptr [edx + 0x54]
// 00543bee  d95854               fstp dword ptr [eax + 0x54]
// 00543bf1  d94258               fld dword ptr [edx + 0x58]
// 00543bf4  d95858               fstp dword ptr [eax + 0x58]
// 00543bf7  d9425c               fld dword ptr [edx + 0x5c]
// 00543bfa  d9585c               fstp dword ptr [eax + 0x5c]
// 00543bfd  d94260               fld dword ptr [edx + 0x60]
// 00543c00  d95860               fstp dword ptr [eax + 0x60]
// 00543c03  d94264               fld dword ptr [edx + 0x64]
// 00543c06  d95864               fstp dword ptr [eax + 0x64]
// 00543c09  d94268               fld dword ptr [edx + 0x68]
// 00543c0c  d95868               fstp dword ptr [eax + 0x68]
// 00543c0f  d9426c               fld dword ptr [edx + 0x6c]
// 00543c12  d9586c               fstp dword ptr [eax + 0x6c]
// 00543c15  d94270               fld dword ptr [edx + 0x70]
// 00543c18  d95870               fstp dword ptr [eax + 0x70]
// 00543c1b  d94274               fld dword ptr [edx + 0x74]
// 00543c1e  d95874               fstp dword ptr [eax + 0x74]
// 00543c21  d94278               fld dword ptr [edx + 0x78]
// 00543c24  d95878               fstp dword ptr [eax + 0x78]
// 00543c27  d9427c               fld dword ptr [edx + 0x7c]
// 00543c2a  d9587c               fstp dword ptr [eax + 0x7c]
// 00543c2d  dd8280000000         fld qword ptr [edx + 0x80]
// 00543c33  dd9880000000         fstp qword ptr [eax + 0x80]
// 00543c39  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00543c3b  d94324               fld dword ptr [ebx + 0x24]
// 00543c3e  d95d24               fstp dword ptr [ebp + 0x24]
// 00543c41  d94328               fld dword ptr [ebx + 0x28]
// 00543c44  d95d28               fstp dword ptr [ebp + 0x28]
// 00543c47  b909000000           mov ecx, 9
// 00543c4c  d9432c               fld dword ptr [ebx + 0x2c]
// 00543c4f  8d9ab8000000         lea ebx, [edx + 0xb8]
// 00543c55  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00543c58  8da8b8000000         lea ebp, [eax + 0xb8]
// 00543c5e  8bf3                 mov esi, ebx
// 00543c60  8bfd                 mov edi, ebp
// 00543c62  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00543c64  d94324               fld dword ptr [ebx + 0x24]
// 00543c67  d95d24               fstp dword ptr [ebp + 0x24]
// 00543c6a  d94328               fld dword ptr [ebx + 0x28]
// 00543c6d  d95d28               fstp dword ptr [ebp + 0x28]
// 00543c70  d9432c               fld dword ptr [ebx + 0x2c]
// 00543c73  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00543c76  d982e8000000         fld dword ptr [edx + 0xe8]
// 00543c7c  d998e8000000         fstp dword ptr [eax + 0xe8]
// 00543c82  d982ec000000         fld dword ptr [edx + 0xec]
// 00543c88  d998ec000000         fstp dword ptr [eax + 0xec]
// 00543c8e  d982f0000000         fld dword ptr [edx + 0xf0]
// 00543c94  5f                   pop edi
// 00543c95  d998f0000000         fstp dword ptr [eax + 0xf0]
// 00543c9b  d982f4000000         fld dword ptr [edx + 0xf4]
// 00543ca1  5e                   pop esi
// 00543ca2  5d                   pop ebp
// 00543ca3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 00543ca9  5b                   pop ebx
// 00543caa  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??4LightingParameters@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
