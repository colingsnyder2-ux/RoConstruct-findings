// roc 2009-06 00565760  unit: RBX::RbxG3D::RenderScene  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565760
//
// 00565760  8b542404             mov edx, dword ptr [esp + 4]
// 00565764  d902                 fld dword ptr [edx]
// 00565766  8bc1                 mov eax, ecx
// 00565768  d918                 fstp dword ptr [eax]
// 0056576a  53                   push ebx
// 0056576b  d94204               fld dword ptr [edx + 4]
// 0056576e  55                   push ebp
// 0056576f  d95804               fstp dword ptr [eax + 4]
// 00565772  56                   push esi
// 00565773  d94208               fld dword ptr [edx + 8]
// 00565776  8d9a88000000         lea ebx, [edx + 0x88]
// 0056577c  d95808               fstp dword ptr [eax + 8]
// 0056577f  8da888000000         lea ebp, [eax + 0x88]
// 00565785  d9420c               fld dword ptr [edx + 0xc]
// 00565788  57                   push edi
// 00565789  d9580c               fstp dword ptr [eax + 0xc]
// 0056578c  8bf3                 mov esi, ebx
// 0056578e  d94210               fld dword ptr [edx + 0x10]
// 00565791  8bfd                 mov edi, ebp
// 00565793  d95810               fstp dword ptr [eax + 0x10]
// 00565796  d94214               fld dword ptr [edx + 0x14]
// 00565799  d95814               fstp dword ptr [eax + 0x14]
// 0056579c  d94218               fld dword ptr [edx + 0x18]
// 0056579f  d95818               fstp dword ptr [eax + 0x18]
// 005657a2  d9421c               fld dword ptr [edx + 0x1c]
// 005657a5  d9581c               fstp dword ptr [eax + 0x1c]
// 005657a8  d94220               fld dword ptr [edx + 0x20]
// 005657ab  d95820               fstp dword ptr [eax + 0x20]
// 005657ae  d94224               fld dword ptr [edx + 0x24]
// 005657b1  d95824               fstp dword ptr [eax + 0x24]
// 005657b4  d94228               fld dword ptr [edx + 0x28]
// 005657b7  d95828               fstp dword ptr [eax + 0x28]
// 005657ba  d9422c               fld dword ptr [edx + 0x2c]
// 005657bd  d9582c               fstp dword ptr [eax + 0x2c]
// 005657c0  d94230               fld dword ptr [edx + 0x30]
// 005657c3  d95830               fstp dword ptr [eax + 0x30]
// 005657c6  d94234               fld dword ptr [edx + 0x34]
// 005657c9  d95834               fstp dword ptr [eax + 0x34]
// 005657cc  d94238               fld dword ptr [edx + 0x38]
// 005657cf  d95838               fstp dword ptr [eax + 0x38]
// 005657d2  d9423c               fld dword ptr [edx + 0x3c]
// 005657d5  d9583c               fstp dword ptr [eax + 0x3c]
// 005657d8  d94240               fld dword ptr [edx + 0x40]
// 005657db  d95840               fstp dword ptr [eax + 0x40]
// 005657de  d94244               fld dword ptr [edx + 0x44]
// 005657e1  d95844               fstp dword ptr [eax + 0x44]
// 005657e4  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 005657e7  894848               mov dword ptr [eax + 0x48], ecx
// 005657ea  8a4a4c               mov cl, byte ptr [edx + 0x4c]
// 005657ed  88484c               mov byte ptr [eax + 0x4c], cl
// 005657f0  d94250               fld dword ptr [edx + 0x50]
// 005657f3  d95850               fstp dword ptr [eax + 0x50]
// 005657f6  b909000000           mov ecx, 9
// 005657fb  d94254               fld dword ptr [edx + 0x54]
// 005657fe  d95854               fstp dword ptr [eax + 0x54]
// 00565801  d94258               fld dword ptr [edx + 0x58]
// 00565804  d95858               fstp dword ptr [eax + 0x58]
// 00565807  d9425c               fld dword ptr [edx + 0x5c]
// 0056580a  d9585c               fstp dword ptr [eax + 0x5c]
// 0056580d  d94260               fld dword ptr [edx + 0x60]
// 00565810  d95860               fstp dword ptr [eax + 0x60]
// 00565813  d94264               fld dword ptr [edx + 0x64]
// 00565816  d95864               fstp dword ptr [eax + 0x64]
// 00565819  d94268               fld dword ptr [edx + 0x68]
// 0056581c  d95868               fstp dword ptr [eax + 0x68]
// 0056581f  d9426c               fld dword ptr [edx + 0x6c]
// 00565822  d9586c               fstp dword ptr [eax + 0x6c]
// 00565825  d94270               fld dword ptr [edx + 0x70]
// 00565828  d95870               fstp dword ptr [eax + 0x70]
// 0056582b  d94274               fld dword ptr [edx + 0x74]
// 0056582e  d95874               fstp dword ptr [eax + 0x74]
// 00565831  d94278               fld dword ptr [edx + 0x78]
// 00565834  d95878               fstp dword ptr [eax + 0x78]
// 00565837  d9427c               fld dword ptr [edx + 0x7c]
// 0056583a  d9587c               fstp dword ptr [eax + 0x7c]
// 0056583d  dd8280000000         fld qword ptr [edx + 0x80]
// 00565843  dd9880000000         fstp qword ptr [eax + 0x80]
// 00565849  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0056584b  d94324               fld dword ptr [ebx + 0x24]
// 0056584e  d95d24               fstp dword ptr [ebp + 0x24]
// 00565851  d94328               fld dword ptr [ebx + 0x28]
// 00565854  d95d28               fstp dword ptr [ebp + 0x28]
// 00565857  b909000000           mov ecx, 9
// 0056585c  d9432c               fld dword ptr [ebx + 0x2c]
// 0056585f  8d9ab8000000         lea ebx, [edx + 0xb8]
// 00565865  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00565868  8da8b8000000         lea ebp, [eax + 0xb8]
// 0056586e  8bf3                 mov esi, ebx
// 00565870  8bfd                 mov edi, ebp
// 00565872  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00565874  d94324               fld dword ptr [ebx + 0x24]
// 00565877  d95d24               fstp dword ptr [ebp + 0x24]
// 0056587a  d94328               fld dword ptr [ebx + 0x28]
// 0056587d  d95d28               fstp dword ptr [ebp + 0x28]
// 00565880  d9432c               fld dword ptr [ebx + 0x2c]
// 00565883  d95d2c               fstp dword ptr [ebp + 0x2c]
// 00565886  d982e8000000         fld dword ptr [edx + 0xe8]
// 0056588c  d998e8000000         fstp dword ptr [eax + 0xe8]
// 00565892  d982ec000000         fld dword ptr [edx + 0xec]
// 00565898  d998ec000000         fstp dword ptr [eax + 0xec]
// 0056589e  d982f0000000         fld dword ptr [edx + 0xf0]
// 005658a4  5f                   pop edi
// 005658a5  d998f0000000         fstp dword ptr [eax + 0xf0]
// 005658ab  d982f4000000         fld dword ptr [edx + 0xf4]
// 005658b1  5e                   pop esi
// 005658b2  5d                   pop ebp
// 005658b3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 005658b9  5b                   pop ebx
// 005658ba  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??4LightingParameters@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
