// from server: 100% by auto
// roc 2010-06 0078faa0  unit: RBX::GroupDragTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078faa0
//
// 0078faa0  8b442404             mov eax, dword ptr [esp + 4]
// 0078faa4  8b10                 mov edx, dword ptr [eax]
// 0078faa6  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0078faa9  8b4214               mov eax, dword ptr [edx + 0x14]
// 0078faac  8b542408             mov edx, dword ptr [esp + 8]
// 0078fab0  895488fc             mov dword ptr [eax + ecx*4 - 4], edx
// 0078fab4  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_fixline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
