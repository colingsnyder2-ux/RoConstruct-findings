// roc 2009-12 005e0350  unit: RBX::RbxG3D::RenderScene  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0350
//
// 005e0350  8b542404             mov edx, dword ptr [esp + 4]
// 005e0354  d902                 fld dword ptr [edx]
// 005e0356  8bc1                 mov eax, ecx
// 005e0358  d918                 fstp dword ptr [eax]
// 005e035a  53                   push ebx
// 005e035b  d94204               fld dword ptr [edx + 4]
// 005e035e  55                   push ebp
// 005e035f  d95804               fstp dword ptr [eax + 4]
// 005e0362  56                   push esi
// 005e0363  d94208               fld dword ptr [edx + 8]
// 005e0366  8d9a88000000         lea ebx, [edx + 0x88]
// 005e036c  d95808               fstp dword ptr [eax + 8]
// 005e036f  8da888000000         lea ebp, [eax + 0x88]
// 005e0375  d9420c               fld dword ptr [edx + 0xc]
// 005e0378  57                   push edi
// 005e0379  d9580c               fstp dword ptr [eax + 0xc]
// 005e037c  8bf3                 mov esi, ebx
// 005e037e  d94210               fld dword ptr [edx + 0x10]
// 005e0381  8bfd                 mov edi, ebp
// 005e0383  d95810               fstp dword ptr [eax + 0x10]
// 005e0386  d94214               fld dword ptr [edx + 0x14]
// 005e0389  d95814               fstp dword ptr [eax + 0x14]
// 005e038c  d94218               fld dword ptr [edx + 0x18]
// 005e038f  d95818               fstp dword ptr [eax + 0x18]
// 005e0392  d9421c               fld dword ptr [edx + 0x1c]
// 005e0395  d9581c               fstp dword ptr [eax + 0x1c]
// 005e0398  d94220               fld dword ptr [edx + 0x20]
// 005e039b  d95820               fstp dword ptr [eax + 0x20]
// 005e039e  d94224               fld dword ptr [edx + 0x24]
// 005e03a1  d95824               fstp dword ptr [eax + 0x24]
// 005e03a4  d94228               fld dword ptr [edx + 0x28]
// 005e03a7  d95828               fstp dword ptr [eax + 0x28]
// 005e03aa  d9422c               fld dword ptr [edx + 0x2c]
// 005e03ad  d9582c               fstp dword ptr [eax + 0x2c]
// 005e03b0  d94230               fld dword ptr [edx + 0x30]
// 005e03b3  d95830               fstp dword ptr [eax + 0x30]
// 005e03b6  d94234               fld dword ptr [edx + 0x34]
// 005e03b9  d95834               fstp dword ptr [eax + 0x34]
// 005e03bc  d94238               fld dword ptr [edx + 0x38]
// 005e03bf  d95838               fstp dword ptr [eax + 0x38]
// 005e03c2  d9423c               fld dword ptr [edx + 0x3c]
// 005e03c5  d9583c               fstp dword ptr [eax + 0x3c]
// 005e03c8  d94240               fld dword ptr [edx + 0x40]
// 005e03cb  d95840               fstp dword ptr [eax + 0x40]
// 005e03ce  d94244               fld dword ptr [edx + 0x44]
// 005e03d1  d95844               fstp dword ptr [eax + 0x44]
// 005e03d4  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 005e03d7  894848               mov dword ptr [eax + 0x48], ecx
// 005e03da  8a4a4c               mov cl, byte ptr [edx + 0x4c]
// 005e03dd  88484c               mov byte ptr [eax + 0x4c], cl
// 005e03e0  d94250               fld dword ptr [edx + 0x50]
// 005e03e3  d95850               fstp dword ptr [eax + 0x50]
// 005e03e6  b909000000           mov ecx, 9
// 005e03eb  d94254               fld dword ptr [edx + 0x54]
// 005e03ee  d95854               fstp dword ptr [eax + 0x54]
// 005e03f1  d94258               fld dword ptr [edx + 0x58]
// 005e03f4  d95858               fstp dword ptr [eax + 0x58]
// 005e03f7  d9425c               fld dword ptr [edx + 0x5c]
// 005e03fa  d9585c               fstp dword ptr [eax + 0x5c]
// 005e03fd  d94260               fld dword ptr [edx + 0x60]
// 005e0400  d95860               fstp dword ptr [eax + 0x60]
// 005e0403  d94264               fld dword ptr [edx + 0x64]
// 005e0406  d95864               fstp dword ptr [eax + 0x64]
// 005e0409  d94268               fld dword ptr [edx + 0x68]
// 005e040c  d95868               fstp dword ptr [eax + 0x68]
// 005e040f  d9426c               fld dword ptr [edx + 0x6c]
// 005e0412  d9586c               fstp dword ptr [eax + 0x6c]
// 005e0415  d94270               fld dword ptr [edx + 0x70]
// 005e0418  d95870               fstp dword ptr [eax + 0x70]
// 005e041b  d94274               fld dword ptr [edx + 0x74]
// 005e041e  d95874               fstp dword ptr [eax + 0x74]
// 005e0421  d94278               fld dword ptr [edx + 0x78]
// 005e0424  d95878               fstp dword ptr [eax + 0x78]
// 005e0427  d9427c               fld dword ptr [edx + 0x7c]
// 005e042a  d9587c               fstp dword ptr [eax + 0x7c]
// 005e042d  dd8280000000         fld qword ptr [edx + 0x80]
// 005e0433  dd9880000000         fstp qword ptr [eax + 0x80]
// 005e0439  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005e043b  d94324               fld dword ptr [ebx + 0x24]
// 005e043e  d95d24               fstp dword ptr [ebp + 0x24]
// 005e0441  d94328               fld dword ptr [ebx + 0x28]
// 005e0444  d95d28               fstp dword ptr [ebp + 0x28]
// 005e0447  b909000000           mov ecx, 9
// 005e044c  d9432c               fld dword ptr [ebx + 0x2c]
// 005e044f  8d9ab8000000         lea ebx, [edx + 0xb8]
// 005e0455  d95d2c               fstp dword ptr [ebp + 0x2c]
// 005e0458  8da8b8000000         lea ebp, [eax + 0xb8]
// 005e045e  8bf3                 mov esi, ebx
// 005e0460  8bfd                 mov edi, ebp
// 005e0462  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005e0464  d94324               fld dword ptr [ebx + 0x24]
// 005e0467  d95d24               fstp dword ptr [ebp + 0x24]
// 005e046a  d94328               fld dword ptr [ebx + 0x28]
// 005e046d  d95d28               fstp dword ptr [ebp + 0x28]
// 005e0470  d9432c               fld dword ptr [ebx + 0x2c]
// 005e0473  d95d2c               fstp dword ptr [ebp + 0x2c]
// 005e0476  d982e8000000         fld dword ptr [edx + 0xe8]
// 005e047c  d998e8000000         fstp dword ptr [eax + 0xe8]
// 005e0482  d982ec000000         fld dword ptr [edx + 0xec]
// 005e0488  d998ec000000         fstp dword ptr [eax + 0xec]
// 005e048e  d982f0000000         fld dword ptr [edx + 0xf0]
// 005e0494  5f                   pop edi
// 005e0495  d998f0000000         fstp dword ptr [eax + 0xf0]
// 005e049b  d982f4000000         fld dword ptr [edx + 0xf4]
// 005e04a1  5e                   pop esi
// 005e04a2  5d                   pop ebp
// 005e04a3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 005e04a9  5b                   pop ebx
// 005e04aa  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??4LightingParameters@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
