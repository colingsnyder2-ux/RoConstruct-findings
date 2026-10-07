// roc 2009-06 006fa110  unit: RBX::GroupDragTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa110
//
// 006fa110  8b442404             mov eax, dword ptr [esp + 4]
// 006fa114  8b10                 mov edx, dword ptr [eax]
// 006fa116  8b4818               mov ecx, dword ptr [eax + 0x18]
// 006fa119  8b4214               mov eax, dword ptr [edx + 0x14]
// 006fa11c  8b542408             mov edx, dword ptr [esp + 8]
// 006fa120  895488fc             mov dword ptr [eax + ecx*4 - 4], edx
// 006fa124  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_fixline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
