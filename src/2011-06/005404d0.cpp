// from server: 100% by auto
// roc 2011-06 005404d0  unit: G3D::MemoryManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005404d0
//
// 005404d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005404d4  d9442408             fld dword ptr [esp + 8]
// 005404d8  56                   push esi
// 005404d9  8b742408             mov esi, dword ptr [esp + 8]
// 005404dd  50                   push eax
// 005404de  83ec08               sub esp, 8
// 005404e1  dd1c24               fstp qword ptr [esp]
// 005404e4  56                   push esi
// 005404e5  e896ffffff           call 0x540480
// 005404ea  83c410               add esp, 0x10
// 005404ed  8bc6                 mov eax, esi
// 005404ef  5e                   pop esi
// 005404f0  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DG3D@@YA?AVMatrix3@0@MABV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
