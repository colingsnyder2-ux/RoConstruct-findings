// roc 2007-08 005986e0  unit: RBX::AIController  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005986e0
//
// 005986e0  8b41f4               mov eax, dword ptr [ecx - 0xc]
// 005986e3  d9442408             fld dword ptr [esp + 8]
// 005986e7  8b5014               mov edx, dword ptr [eax + 0x14]
// 005986ea  83c1f4               add ecx, -0xc
// 005986ed  51                   push ecx
// 005986ee  d91c24               fstp dword ptr [esp]
// 005986f1  ffd2                 call edx
// 005986f3  c20c00               ret 0xc
// library rbxgs/v8datamodel\UserController.cpp (function ?onEvent@AIController@RBX@@MAEXPBVRunService@2@VHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
