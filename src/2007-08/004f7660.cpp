// roc 2007-08 004f7660  unit: G3D::Sphere  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7660
//
// 004f7660  8b542404             mov edx, dword ptr [esp + 4]
// 004f7664  d902                 fld dword ptr [edx]
// 004f7666  8bc1                 mov eax, ecx
// 004f7668  d918                 fstp dword ptr [eax]
// 004f766a  53                   push ebx
// 004f766b  d94204               fld dword ptr [edx + 4]
// 004f766e  55                   push ebp
// 004f766f  d95804               fstp dword ptr [eax + 4]
// 004f7672  56                   push esi
// 004f7673  d94208               fld dword ptr [edx + 8]
// 004f7676  8d9a88000000         lea ebx, [edx + 0x88]
// 004f767c  d95808               fstp dword ptr [eax + 8]
// 004f767f  8da888000000         lea ebp, [eax + 0x88]
// 004f7685  d9420c               fld dword ptr [edx + 0xc]
// 004f7688  57                   push edi
// 004f7689  d9580c               fstp dword ptr [eax + 0xc]
// 004f768c  8bf3                 mov esi, ebx
// 004f768e  d94210               fld dword ptr [edx + 0x10]
// 004f7691  8bfd                 mov edi, ebp
// 004f7693  d95810               fstp dword ptr [eax + 0x10]
// 004f7696  d94214               fld dword ptr [edx + 0x14]
// 004f7699  d95814               fstp dword ptr [eax + 0x14]
// 004f769c  d94218               fld dword ptr [edx + 0x18]
// 004f769f  d95818               fstp dword ptr [eax + 0x18]
// 004f76a2  d9421c               fld dword ptr [edx + 0x1c]
// 004f76a5  d9581c               fstp dword ptr [eax + 0x1c]
// 004f76a8  d94220               fld dword ptr [edx + 0x20]
// 004f76ab  d95820               fstp dword ptr [eax + 0x20]
// 004f76ae  d94224               fld dword ptr [edx + 0x24]
// 004f76b1  d95824               fstp dword ptr [eax + 0x24]
// 004f76b4  d94228               fld dword ptr [edx + 0x28]
// 004f76b7  d95828               fstp dword ptr [eax + 0x28]
// 004f76ba  d9422c               fld dword ptr [edx + 0x2c]
// 004f76bd  d9582c               fstp dword ptr [eax + 0x2c]
// 004f76c0  d94230               fld dword ptr [edx + 0x30]
// 004f76c3  d95830               fstp dword ptr [eax + 0x30]
// 004f76c6  d94234               fld dword ptr [edx + 0x34]
// 004f76c9  d95834               fstp dword ptr [eax + 0x34]
// 004f76cc  d94238               fld dword ptr [edx + 0x38]
// 004f76cf  d95838               fstp dword ptr [eax + 0x38]
// 004f76d2  d9423c               fld dword ptr [edx + 0x3c]
// 004f76d5  d9583c               fstp dword ptr [eax + 0x3c]
// 004f76d8  d94240               fld dword ptr [edx + 0x40]
// 004f76db  d95840               fstp dword ptr [eax + 0x40]
// 004f76de  d94244               fld dword ptr [edx + 0x44]
// 004f76e1  d95844               fstp dword ptr [eax + 0x44]
// 004f76e4  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 004f76e7  894848               mov dword ptr [eax + 0x48], ecx
// 004f76ea  8a4a4c               mov cl, byte ptr [edx + 0x4c]
// 004f76ed  88484c               mov byte ptr [eax + 0x4c], cl
// 004f76f0  d94250               fld dword ptr [edx + 0x50]
// 004f76f3  d95850               fstp dword ptr [eax + 0x50]
// 004f76f6  b909000000           mov ecx, 9
// 004f76fb  d94254               fld dword ptr [edx + 0x54]
// 004f76fe  d95854               fstp dword ptr [eax + 0x54]
// 004f7701  d94258               fld dword ptr [edx + 0x58]
// 004f7704  d95858               fstp dword ptr [eax + 0x58]
// 004f7707  d9425c               fld dword ptr [edx + 0x5c]
// 004f770a  d9585c               fstp dword ptr [eax + 0x5c]
// 004f770d  d94260               fld dword ptr [edx + 0x60]
// 004f7710  d95860               fstp dword ptr [eax + 0x60]
// 004f7713  d94264               fld dword ptr [edx + 0x64]
// 004f7716  d95864               fstp dword ptr [eax + 0x64]
// 004f7719  d94268               fld dword ptr [edx + 0x68]
// 004f771c  d95868               fstp dword ptr [eax + 0x68]
// 004f771f  d9426c               fld dword ptr [edx + 0x6c]
// 004f7722  d9586c               fstp dword ptr [eax + 0x6c]
// 004f7725  d94270               fld dword ptr [edx + 0x70]
// 004f7728  d95870               fstp dword ptr [eax + 0x70]
// 004f772b  d94274               fld dword ptr [edx + 0x74]
// 004f772e  d95874               fstp dword ptr [eax + 0x74]
// 004f7731  d94278               fld dword ptr [edx + 0x78]
// 004f7734  d95878               fstp dword ptr [eax + 0x78]
// 004f7737  d9427c               fld dword ptr [edx + 0x7c]
// 004f773a  d9587c               fstp dword ptr [eax + 0x7c]
// 004f773d  dd8280000000         fld qword ptr [edx + 0x80]
// 004f7743  dd9880000000         fstp qword ptr [eax + 0x80]
// 004f7749  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004f774b  d94324               fld dword ptr [ebx + 0x24]
// 004f774e  d95d24               fstp dword ptr [ebp + 0x24]
// 004f7751  d94328               fld dword ptr [ebx + 0x28]
// 004f7754  d95d28               fstp dword ptr [ebp + 0x28]
// 004f7757  b909000000           mov ecx, 9
// 004f775c  d9432c               fld dword ptr [ebx + 0x2c]
// 004f775f  8d9ab8000000         lea ebx, [edx + 0xb8]
// 004f7765  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004f7768  8da8b8000000         lea ebp, [eax + 0xb8]
// 004f776e  8bf3                 mov esi, ebx
// 004f7770  8bfd                 mov edi, ebp
// 004f7772  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004f7774  d94324               fld dword ptr [ebx + 0x24]
// 004f7777  d95d24               fstp dword ptr [ebp + 0x24]
// 004f777a  d94328               fld dword ptr [ebx + 0x28]
// 004f777d  d95d28               fstp dword ptr [ebp + 0x28]
// 004f7780  d9432c               fld dword ptr [ebx + 0x2c]
// 004f7783  d95d2c               fstp dword ptr [ebp + 0x2c]
// 004f7786  d982e8000000         fld dword ptr [edx + 0xe8]
// 004f778c  d998e8000000         fstp dword ptr [eax + 0xe8]
// 004f7792  d982ec000000         fld dword ptr [edx + 0xec]
// 004f7798  d998ec000000         fstp dword ptr [eax + 0xec]
// 004f779e  d982f0000000         fld dword ptr [edx + 0xf0]
// 004f77a4  5f                   pop edi
// 004f77a5  d998f0000000         fstp dword ptr [eax + 0xf0]
// 004f77ab  d982f4000000         fld dword ptr [edx + 0xf4]
// 004f77b1  5e                   pop esi
// 004f77b2  5d                   pop ebp
// 004f77b3  d998f4000000         fstp dword ptr [eax + 0xf4]
// 004f77b9  5b                   pop ebx
// 004f77ba  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ??4LightingParameters@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
