// roc 2007-03 0058d570  unit: seg_00580000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058d570
//
// 0058d570  8b41f4               mov eax, dword ptr [ecx - 0xc]
// 0058d573  d9442408             fld dword ptr [esp + 8]
// 0058d577  8b5014               mov edx, dword ptr [eax + 0x14]
// 0058d57a  83c1f4               add ecx, -0xc
// 0058d57d  51                   push ecx
// 0058d57e  d91c24               fstp dword ptr [esp]
// 0058d581  ffd2                 call edx
// 0058d583  c20c00               ret 0xc
// library rbxgs/v8datamodel\UserController.cpp (function ?onEvent@AIController@RBX@@MAEXPBVRunService@2@VHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
