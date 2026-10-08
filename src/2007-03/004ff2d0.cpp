// roc 2007-03 004ff2d0  unit: seg_004f0000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ff2d0
//
// 004ff2d0  d9e8                 fld1 
// 004ff2d2  56                   push esi
// 004ff2d3  8bf1                 mov esi, ecx
// 004ff2d5  d85e14               fcomp dword ptr [esi + 0x14]
// 004ff2d8  dfe0                 fnstsw ax
// 004ff2da  f6c441               test ah, 0x41
// 004ff2dd  757a                 jne 0x4ff359
// 004ff2df  d90578587900         fld dword ptr [0x795878]
// 004ff2e5  d85e14               fcomp dword ptr [esi + 0x14]
// 004ff2e8  dfe0                 fnstsw ax
// 004ff2ea  f6c405               test ah, 5
// 004ff2ed  7a40                 jp 0x4ff32f
// 004ff2ef  d94608               fld dword ptr [esi + 8]
// 004ff2f2  d94620               fld dword ptr [esi + 0x20]
// 004ff2f5  e824051200           call 0x61f81e
// 004ff2fa  8b442408             mov eax, dword ptr [esp + 8]
// 004ff2fe  d918                 fstp dword ptr [eax]
// 004ff300  d94614               fld dword ptr [esi + 0x14]
// 004ff303  d9e0                 fchs 
// 004ff305  e80e051200           call 0x61f818
// 004ff30a  d95c2408             fstp dword ptr [esp + 8]
// 004ff30e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ff312  d9442408             fld dword ptr [esp + 8]
// 004ff316  d919                 fstp dword ptr [ecx]
// 004ff318  d9460c               fld dword ptr [esi + 0xc]
// 004ff31b  d94610               fld dword ptr [esi + 0x10]
// 004ff31e  e8fb041200           call 0x61f81e
// 004ff323  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff327  d91a                 fstp dword ptr [edx]
// 004ff329  b001                 mov al, 1
// 004ff32b  5e                   pop esi
// 004ff32c  c20c00               ret 0xc
// 004ff32f  d94604               fld dword ptr [esi + 4]
// 004ff332  d906                 fld dword ptr [esi]
// 004ff334  e8e5041200           call 0x61f81e
// 004ff339  8b442408             mov eax, dword ptr [esp + 8]
// 004ff33d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ff341  d918                 fstp dword ptr [eax]
// 004ff343  d905246f7900         fld dword ptr [0x796f24]
// 004ff349  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff34d  d919                 fstp dword ptr [ecx]
// 004ff34f  32c0                 xor al, al
// 004ff351  d9ee                 fldz 
// 004ff353  5e                   pop esi
// 004ff354  d91a                 fstp dword ptr [edx]
// 004ff356  c20c00               ret 0xc
// 004ff359  d94604               fld dword ptr [esi + 4]
// 004ff35c  d9e0                 fchs 
// 004ff35e  d906                 fld dword ptr [esi]
// 004ff360  e8b9041200           call 0x61f81e
// 004ff365  8b442408             mov eax, dword ptr [esp + 8]
// 004ff369  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ff36d  d918                 fstp dword ptr [eax]
// 004ff36f  d905206f7900         fld dword ptr [0x796f20]
// 004ff375  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ff379  d919                 fstp dword ptr [ecx]
// 004ff37b  32c0                 xor al, al
// 004ff37d  d9ee                 fldz 
// 004ff37f  5e                   pop esi
// 004ff380  d91a                 fstp dword ptr [edx]
// 004ff382  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?toEulerAnglesYXZ@Matrix3@G3D@@QBE_NAAM00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
