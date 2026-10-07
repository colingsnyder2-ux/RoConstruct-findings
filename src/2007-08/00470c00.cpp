// roc 2007-08 00470c00  unit: G3D::Texture  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470c00
//
// 00470c00  51                   push ecx
// 00470c01  db4168               fild dword ptr [ecx + 0x68]
// 00470c04  56                   push esi
// 00470c05  d9ee                 fldz 
// 00470c07  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00470c0b  dcc1                 fadd st(1), st(0)
// 00470c0d  83ec10               sub esp, 0x10
// 00470c10  d9c9                 fxch st(1)
// 00470c12  d95c2414             fstp dword ptr [esp + 0x14]
// 00470c16  d9442414             fld dword ptr [esp + 0x14]
// 00470c1a  d95c240c             fstp dword ptr [esp + 0xc]
// 00470c1e  da4164               fiadd dword ptr [ecx + 0x64]
// 00470c21  d95c2414             fstp dword ptr [esp + 0x14]
// 00470c25  d9442414             fld dword ptr [esp + 0x14]
// 00470c29  d95c2408             fstp dword ptr [esp + 8]
// 00470c2d  d9ee                 fldz 
// 00470c2f  d9542404             fst dword ptr [esp + 4]
// 00470c33  d91c24               fstp dword ptr [esp]
// 00470c36  56                   push esi
// 00470c37  e8d476feff           call 0x458310
// 00470c3c  83c414               add esp, 0x14
// 00470c3f  8bc6                 mov eax, esi
// 00470c41  5e                   pop esi
// 00470c42  59                   pop ecx
// 00470c43  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?rect2DBounds@Texture@G3D@@QBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
