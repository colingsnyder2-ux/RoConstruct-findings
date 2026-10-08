// from server: 100% by auto
// roc 2011-06 00780510  unit: lua_exception  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00780510
//
// 00780510  51                   push ecx
// 00780511  56                   push esi
// 00780512  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00780516  8d442404             lea eax, [esp + 4]
// 0078051a  50                   push eax
// 0078051b  6a01                 push 1
// 0078051d  56                   push esi
// 0078051e  e86d3cfeff           call 0x764190
// 00780523  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00780527  51                   push ecx
// 00780528  56                   push esi
// 00780529  e81224feff           call 0x762940
// 0078052e  83c414               add esp, 0x14
// 00780531  b801000000           mov eax, 1
// 00780536  5e                   pop esi
// 00780537  59                   pop ecx
// 00780538  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_len)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
