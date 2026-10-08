// roc 2008-06 00501d80  unit: G3D::Sphere  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501d80
//
// 00501d80  8b542404             mov edx, dword ptr [esp + 4]
// 00501d84  d902                 fld dword ptr [edx]
// 00501d86  8bc1                 mov eax, ecx
// 00501d88  d918                 fstp dword ptr [eax]
// 00501d8a  53                   push ebx
// 00501d8b  d94204               fld dword ptr [edx + 4]
// 00501d8e  55                   push ebp
// 00501d8f  d95804               fstp dword ptr [eax + 4]
// 00501d92  56                   push esi
// 00501d93  d94208               fld dword ptr [edx + 8]
// 00501d96  8d9a88000000         lea ebx, [edx + 0x88]
// 00501d9c  d95808               fstp dword ptr [eax + 8]
// 00501d9f  8da888000000         lea ebp, [eax + 0x88]
// 00501da5  d9420c               fld dword ptr [edx + 0xc]
// 00501da8  57                   push edi
// 00501da9  d9580c               fstp dword ptr [eax + 0xc]
// 00501dac  8bf3                 mov esi, ebx
// 00501dae  d94210               fld dword ptr [edx + 0x10]
// 00501db1  8bfd                 mov edi, ebp
// 00501db3  d95810               fstp dword ptr [eax + 0x10]
// 00501db6  d94214               fld dword ptr [edx + 0x14]
// 00501db9  d95814               fstp dword ptr [eax + 0x14]
// 00501dbc  d94218               fld dword ptr [edx + 0x18]
// 00501dbf  d95818               fstp dword ptr [eax + 0x18]
// 00501dc2  d9421c               fld dword ptr [edx + 0x1c]
// 00501dc5  d9581c               fstp dword ptr [eax + 0x1c]
// 00501dc8  d94220               fld dword ptr [edx + 0x20]
// 00501dcb  d95820               fstp dword ptr [eax + 0x20]
// 00501dce  d94224               fld dword ptr [edx + 0x24]
// 00501dd1  d95824               fstp dword ptr [eax + 0x24]
// 00501dd4  d94228               fld dword ptr [edx + 0x28]
// 00501dd7  d95828               fstp dword ptr [eax + 0x28]
// 00501dda  d9422c               fld dword ptr [edx + 0x2c]
// 00501ddd  d9582c               fstp dword ptr [eax + 0x2c]
// 00501de0  d94230               fld dword ptr [edx + 0x30]
// 00501de3  d95830               fstp dword ptr [eax + 0x30]
// 00501de6  d94234               fld dword ptr [edx + 0x34]
// 00501de9  d95834               fstp dword ptr [eax + 0x34]
// 00501dec  d94238               fld dword ptr [edx + 0x38]
// 00501def  d95838               fstp dword ptr [eax + 0x38]
// 00501df2  d9423c               fld dword ptr [edx + 0x3c]
// 00501df5  d9583c               fstp dword ptr [eax + 0x3c]
// 00501df8  d94240               fld dword ptr [edx + 0x40]
// 00501dfb  d95840               fstp dword ptr [eax + 0x40]
// 00501dfe  d94244               fld dword ptr [edx + 0x44]
// 00501e01  d95844               fstp dword ptr [eax + 0x44]
// 00501e04  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00501e07  894848               mov dword ptr [eax + 0x48], ecx
// 00501e0a  8a4a4c               mov cl, byte ptr [edx + 0x4c]
// 00501e0d  88484c               mov byte ptr [eax + 0x4c], cl
// 00501e10  d94250               fld dword ptr [edx + 0x50]
// 00501e13  d95850               fstp dword ptr [eax + 0x50]
// 00501e16  b909000000           mov ecx, 9
// 00501e1b  d94254               fld dword ptr [edx + 0x54]
// 00501e1e  d95854               fstp dword ptr [eax + 0x54]
// 00501e21  d94258               fld dword ptr [edx + 0x58]
// 00501e24  d95858               fstp dword ptr [eax + 0x58]
// 00501e27  d9425c               fld dword ptr [edx + 0x5c]
// 00501e2a  d9585c               fstp dword ptr [eax + 0x5c]
// 00501e2d  d94260               fld dword ptr [edx + 0x60]
// 00501e30  d95860               fstp dword ptr [eax + 0x60]
// 00501e33  d94264               fld dword ptr [edx + 0x64]
// 00501e36  d95864               fstp dword ptr [eax + 0x64]
// 00501e39  d94268               fld dword ptr [edx + 0x68]
// 00501e3c  d95868               fstp dword ptr [eax + 0x68]
// 00501e3f  d9426c               fld dword ptr [edx + 0x6c]
// 00501e42  d9586c               fstp dword ptr [eax + 0x6c]
// 00501e45  d94270               fld dword ptr [edx + 0x70]
// 00501e48  d95870               fstp dword ptr [eax + 0x70]
// 00501e4b  d94274               fld dword ptr [edx + 0x74]
// 00501e4e  d95874               fstp dword ptr [eax + 0x74]
// 00501e51  d94278               fld dword ptr [edx + 0x78]
// 00501e54  d95878               fstp dword ptr [eax + 0x78]
// 00501e57  d9427c               fld dword ptr [edx + 0x7c]
// 00501e5a  d9587c               fstp dword ptr [eax + 0x7c]
// 00501e5d  dd8280000000         fld qword ptr [edx + 0x80]
// 00501e63  dd9880000000         fstp qword ptr [eax + 0x80]
// 00501e69  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00501e6b  d94324               fld dword ptr [ebx + 0x24]
// 00501e6e  d95d24               fstp dword ptr [ebp + 0x24]
// 00501e71  d94328               fld dword ptr [ebx + 0x28]
// 00501e74  d95d28               fstp dword ptr [ebp + 0x28]
// 00501e77  b909000000           mov ecx, 9
// 00501e7c  d9432c               fld dword ptr [ebx + 0x2c]
// 00501e7f  8d9ab8000000         lea ebx, [edx + 0xb8]
// 00501e85  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00501e88  8da8b8000000         lea ebp, [eax + 0xb8]
// 00501e8e  8bf3                 mov esi, ebx
// 00501e90  8bfd                 mov edi, ebp
// 00501e92  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00501e94  d94324               fld dword ptr [ebx + 0x24]
// 00501e97  d95d24               fstp dword ptr [ebp + 0x24]
// 00501e9a  d94328               fld dword ptr [ebx + 0x28]
// 00501e9d  d95d28               fstp dword ptr [ebp + 0x28]
// 00501ea0  d9432c               fld dword ptr [ebx + 0x2c]
// 00501ea3  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00501ea6  d982e8000000         fld dword ptr [edx + 0xe8]
// 00501eac  d998e8000000         fstp dword ptr [eax + 0xe8]
// 00501eb2  d982ec000000         fld dword ptr [edx + 0xec]
// 00501eb8  d998ec000000         fstp dword ptr [eax + 0xec]
// 00501ebe  d982f0000000         fld dword ptr [edx + 0xf0]
// 00501ec4  5f                   pop edi
// 00501ec5  d998f0000000         fstp dword ptr [eax + 0xf0]
// 00501ecb  d982f4000000         fld dword ptr [edx + 0xf4]
// 00501ed1  5e                   pop esi
// 00501ed2  5d                   pop ebp
// 00501ed3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 00501ed9  5b                   pop ebx
// 00501eda  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??4LightingParameters@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
