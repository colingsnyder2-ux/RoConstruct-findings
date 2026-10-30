// from server: 100% by auto
// roc 2012-06 008562f0  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008562f0
//
// 008562f0  51                   push ecx
// 008562f1  56                   push esi
// 008562f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008562f6  8d442404             lea eax, [esp + 4]
// 008562fa  50                   push eax
// 008562fb  6a01                 push 1
// 008562fd  56                   push esi
// 008562fe  e81dd6fdff           call 0x833920
// 00856303  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856307  51                   push ecx
// 00856308  56                   push esi
// 00856309  e8c2bdfdff           call 0x8320d0
// 0085630e  83c414               add esp, 0x14
// 00856311  b801000000           mov eax, 1
// 00856316  5e                   pop esi
// 00856317  59                   pop ecx
// 00856318  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_len)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
