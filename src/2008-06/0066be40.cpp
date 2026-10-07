// roc 2008-06 0066be40  unit: RBX::GroupDragTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066be40
//
// 0066be40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066be44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066be48  50                   push eax
// 0066be49  51                   push ecx
// 0066be4a  e8d1faffff           call 0x66b920
// 0066be4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066be53  83c408               add esp, 8
// 0066be56  89410c               mov dword ptr [ecx + 0xc], eax
// 0066be59  c70109000000         mov dword ptr [ecx], 9
// 0066be5f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_indexed)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
