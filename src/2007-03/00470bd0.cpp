// roc 2007-03 00470bd0  unit: seg_00470000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470bd0
//
// 00470bd0  51                   push ecx
// 00470bd1  db4168               fild dword ptr [ecx + 0x68]
// 00470bd4  56                   push esi
// 00470bd5  d9ee                 fldz 
// 00470bd7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00470bdb  dcc1                 fadd st(1), st(0)
// 00470bdd  83ec10               sub esp, 0x10
// 00470be0  d9c9                 fxch st(1)
// 00470be2  d95c2414             fstp dword ptr [esp + 0x14]
// 00470be6  d9442414             fld dword ptr [esp + 0x14]
// 00470bea  d95c240c             fstp dword ptr [esp + 0xc]
// 00470bee  da4164               fiadd dword ptr [ecx + 0x64]
// 00470bf1  d95c2414             fstp dword ptr [esp + 0x14]
// 00470bf5  d9442414             fld dword ptr [esp + 0x14]
// 00470bf9  d95c2408             fstp dword ptr [esp + 8]
// 00470bfd  d9ee                 fldz 
// 00470bff  d9542404             fst dword ptr [esp + 4]
// 00470c03  d91c24               fstp dword ptr [esp]
// 00470c06  56                   push esi
// 00470c07  e87451feff           call 0x455d80
// 00470c0c  83c414               add esp, 0x14
// 00470c0f  8bc6                 mov eax, esi
// 00470c11  5e                   pop esi
// 00470c12  59                   pop ecx
// 00470c13  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?rect2DBounds@Texture@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
