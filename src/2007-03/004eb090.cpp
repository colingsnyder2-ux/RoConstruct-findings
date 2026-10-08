// roc 2007-03 004eb090  unit: seg_004e0000  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb090
//
// 004eb090  8b542404             mov edx, dword ptr [esp + 4]
// 004eb094  d902                 fld dword ptr [edx]
// 004eb096  8bc1                 mov eax, ecx
// 004eb098  d918                 fstp dword ptr [eax]
// 004eb09a  53                   push ebx
// 004eb09b  d94204               fld dword ptr [edx + 4]
// 004eb09e  55                   push ebp
// 004eb09f  d95804               fstp dword ptr [eax + 4]
// 004eb0a2  56                   push esi
// 004eb0a3  d94208               fld dword ptr [edx + 8]
// 004eb0a6  8d9a88000000         lea ebx, [edx + 0x88]
// 004eb0ac  d95808               fstp dword ptr [eax + 8]
// 004eb0af  8da888000000         lea ebp, [eax + 0x88]
// 004eb0b5  d9420c               fld dword ptr [edx + 0xc]
// 004eb0b8  57                   push edi
// 004eb0b9  d9580c               fstp dword ptr [eax + 0xc]
// 004eb0bc  8bf3                 mov esi, ebx
// 004eb0be  d94210               fld dword ptr [edx + 0x10]
// 004eb0c1  8bfd                 mov edi, ebp
// 004eb0c3  d95810               fstp dword ptr [eax + 0x10]
// 004eb0c6  d94214               fld dword ptr [edx + 0x14]
// 004eb0c9  d95814               fstp dword ptr [eax + 0x14]
// 004eb0cc  d94218               fld dword ptr [edx + 0x18]
// 004eb0cf  d95818               fstp dword ptr [eax + 0x18]
// 004eb0d2  d9421c               fld dword ptr [edx + 0x1c]
// 004eb0d5  d9581c               fstp dword ptr [eax + 0x1c]
// 004eb0d8  d94220               fld dword ptr [edx + 0x20]
// 004eb0db  d95820               fstp dword ptr [eax + 0x20]
// 004eb0de  d94224               fld dword ptr [edx + 0x24]
// 004eb0e1  d95824               fstp dword ptr [eax + 0x24]
// 004eb0e4  d94228               fld dword ptr [edx + 0x28]
// 004eb0e7  d95828               fstp dword ptr [eax + 0x28]
// 004eb0ea  d9422c               fld dword ptr [edx + 0x2c]
// 004eb0ed  d9582c               fstp dword ptr [eax + 0x2c]
// 004eb0f0  d94230               fld dword ptr [edx + 0x30]
// 004eb0f3  d95830               fstp dword ptr [eax + 0x30]
// 004eb0f6  d94234               fld dword ptr [edx + 0x34]
// 004eb0f9  d95834               fstp dword ptr [eax + 0x34]
// 004eb0fc  d94238               fld dword ptr [edx + 0x38]
// 004eb0ff  d95838               fstp dword ptr [eax + 0x38]
// 004eb102  d9423c               fld dword ptr [edx + 0x3c]
// 004eb105  d9583c               fstp dword ptr [eax + 0x3c]
// 004eb108  d94240               fld dword ptr [edx + 0x40]
// 004eb10b  d95840               fstp dword ptr [eax + 0x40]
// 004eb10e  d94244               fld dword ptr [edx + 0x44]
// 004eb111  d95844               fstp dword ptr [eax + 0x44]
// 004eb114  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 004eb117  894848               mov dword ptr [eax + 0x48], ecx
// 004eb11a  8a4a4c               mov cl, byte ptr [edx + 0x4c]
// 004eb11d  88484c               mov byte ptr [eax + 0x4c], cl
// 004eb120  d94250               fld dword ptr [edx + 0x50]
// 004eb123  d95850               fstp dword ptr [eax + 0x50]
// 004eb126  b909000000           mov ecx, 9
// 004eb12b  d94254               fld dword ptr [edx + 0x54]
// 004eb12e  d95854               fstp dword ptr [eax + 0x54]
// 004eb131  d94258               fld dword ptr [edx + 0x58]
// 004eb134  d95858               fstp dword ptr [eax + 0x58]
// 004eb137  d9425c               fld dword ptr [edx + 0x5c]
// 004eb13a  d9585c               fstp dword ptr [eax + 0x5c]
// 004eb13d  d94260               fld dword ptr [edx + 0x60]
// 004eb140  d95860               fstp dword ptr [eax + 0x60]
// 004eb143  d94264               fld dword ptr [edx + 0x64]
// 004eb146  d95864               fstp dword ptr [eax + 0x64]
// 004eb149  d94268               fld dword ptr [edx + 0x68]
// 004eb14c  d95868               fstp dword ptr [eax + 0x68]
// 004eb14f  d9426c               fld dword ptr [edx + 0x6c]
// 004eb152  d9586c               fstp dword ptr [eax + 0x6c]
// 004eb155  d94270               fld dword ptr [edx + 0x70]
// 004eb158  d95870               fstp dword ptr [eax + 0x70]
// 004eb15b  d94274               fld dword ptr [edx + 0x74]
// 004eb15e  d95874               fstp dword ptr [eax + 0x74]
// 004eb161  d94278               fld dword ptr [edx + 0x78]
// 004eb164  d95878               fstp dword ptr [eax + 0x78]
// 004eb167  d9427c               fld dword ptr [edx + 0x7c]
// 004eb16a  d9587c               fstp dword ptr [eax + 0x7c]
// 004eb16d  dd8280000000         fld qword ptr [edx + 0x80]
// 004eb173  dd9880000000         fstp qword ptr [eax + 0x80]
// 004eb179  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004eb17b  d94324               fld dword ptr [ebx + 0x24]
// 004eb17e  d95d24               fstp dword ptr [ebp + 0x24]
// 004eb181  d94328               fld dword ptr [ebx + 0x28]
// 004eb184  d95d28               fstp dword ptr [ebp + 0x28]
// 004eb187  b909000000           mov ecx, 9
// 004eb18c  d9432c               fld dword ptr [ebx + 0x2c]
// 004eb18f  8d9ab8000000         lea ebx, [edx + 0xb8]
// 004eb195  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004eb198  8da8b8000000         lea ebp, [eax + 0xb8]
// 004eb19e  8bf3                 mov esi, ebx
// 004eb1a0  8bfd                 mov edi, ebp
// 004eb1a2  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004eb1a4  d94324               fld dword ptr [ebx + 0x24]
// 004eb1a7  d95d24               fstp dword ptr [ebp + 0x24]
// 004eb1aa  d94328               fld dword ptr [ebx + 0x28]
// 004eb1ad  d95d28               fstp dword ptr [ebp + 0x28]
// 004eb1b0  d9432c               fld dword ptr [ebx + 0x2c]
// 004eb1b3  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004eb1b6  d982e8000000         fld dword ptr [edx + 0xe8]
// 004eb1bc  d998e8000000         fstp dword ptr [eax + 0xe8]
// 004eb1c2  d982ec000000         fld dword ptr [edx + 0xec]
// 004eb1c8  d998ec000000         fstp dword ptr [eax + 0xec]
// 004eb1ce  d982f0000000         fld dword ptr [edx + 0xf0]
// 004eb1d4  5f                   pop edi
// 004eb1d5  d998f0000000         fstp dword ptr [eax + 0xf0]
// 004eb1db  d982f4000000         fld dword ptr [edx + 0xf4]
// 004eb1e1  5e                   pop esi
// 004eb1e2  5d                   pop ebp
// 004eb1e3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 004eb1e9  5b                   pop ebx
// 004eb1ea  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??4LightingParameters@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
