// from server: 100% by auto
// roc 2007-08 006299b0  unit: RBX::AssemblyStage  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006299b0
//
// 006299b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006299b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006299b8  50                   push eax
// 006299b9  51                   push ecx
// 006299ba  e8c1faffff           call 0x629480
// 006299bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006299c3  83c408               add esp, 8
// 006299c6  89410c               mov dword ptr [ecx + 0xc], eax
// 006299c9  c70109000000         mov dword ptr [ecx], 9
// 006299cf  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_indexed)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
