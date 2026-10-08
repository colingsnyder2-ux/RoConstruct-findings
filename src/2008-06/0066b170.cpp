// from server: 100% by auto
// roc 2008-06 0066b170  unit: RBX::GroupDragTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b170
//
// 0066b170  8b442404             mov eax, dword ptr [esp + 4]
// 0066b174  8b10                 mov edx, dword ptr [eax]
// 0066b176  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0066b179  8b4214               mov eax, dword ptr [edx + 0x14]
// 0066b17c  8b542408             mov edx, dword ptr [esp + 8]
// 0066b180  895488fc             mov dword ptr [eax + ecx*4 - 4], edx
// 0066b184  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_fixline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
