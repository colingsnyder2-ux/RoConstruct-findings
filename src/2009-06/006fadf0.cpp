// roc 2009-06 006fadf0  unit: RBX::GroupDragTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fadf0
//
// 006fadf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fadf4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fadf8  50                   push eax
// 006fadf9  51                   push ecx
// 006fadfa  e8d1faffff           call 0x6fa8d0
// 006fadff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006fae03  83c408               add esp, 8
// 006fae06  89410c               mov dword ptr [ecx + 0xc], eax
// 006fae09  c70109000000         mov dword ptr [ecx], 9
// 006fae0f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_indexed)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
