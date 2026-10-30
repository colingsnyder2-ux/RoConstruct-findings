// from server: 100% by auto
// roc 2012-06 009683b0  unit: RBX::CellContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009683b0
//
// 009683b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009683b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009683b8  50                   push eax
// 009683b9  51                   push ecx
// 009683ba  e8a1faffff           call 0x967e60
// 009683bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009683c3  83c408               add esp, 8
// 009683c6  89410c               mov dword ptr [ecx + 0xc], eax
// 009683c9  c70109000000         mov dword ptr [ecx], 9
// 009683cf  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_indexed)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
