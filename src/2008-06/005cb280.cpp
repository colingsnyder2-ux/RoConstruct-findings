// roc 2008-06 005cb280  unit: RBX::AIController  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb280
//
// 005cb280  8b41f4               mov eax, dword ptr [ecx - 0xc]
// 005cb283  d9442408             fld dword ptr [esp + 8]
// 005cb287  8b5014               mov edx, dword ptr [eax + 0x14]
// 005cb28a  83c1f4               add ecx, -0xc
// 005cb28d  51                   push ecx
// 005cb28e  d91c24               fstp dword ptr [esp]
// 005cb291  ffd2                 call edx
// 005cb293  c20c00               ret 0xc
// library rbxgs/v8datamodel\UserController.cpp (function ?onEvent@AIController@RBX@@MAEXPBVRunService@2@VHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
