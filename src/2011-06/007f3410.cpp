// from server: 100% by auto
// roc 2011-06 007f3410  unit: RBX::AdvLuaDragTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f3410
//
// 007f3410  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f3414  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f3418  50                   push eax
// 007f3419  51                   push ecx
// 007f341a  e8a1faffff           call 0x7f2ec0
// 007f341f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f3423  83c408               add esp, 8
// 007f3426  89410c               mov dword ptr [ecx + 0xc], eax
// 007f3429  c70109000000         mov dword ptr [ecx], 9
// 007f342f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_indexed)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
