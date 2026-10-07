// roc 2012-06 00967690  unit: RBX::CellContact  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967690
//
// 00967690  8b442404             mov eax, dword ptr [esp + 4]
// 00967694  8b10                 mov edx, dword ptr [eax]
// 00967696  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00967699  8b4214               mov eax, dword ptr [edx + 0x14]
// 0096769c  8b542408             mov edx, dword ptr [esp + 8]
// 009676a0  895488fc             mov dword ptr [eax + ecx*4 - 4], edx
// 009676a4  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_fixline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
