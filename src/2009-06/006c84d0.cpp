// roc 2009-06 006c84d0  unit: seg_006c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c84d0
//
// 006c84d0  8b442404             mov eax, dword ptr [esp + 4]
// 006c84d4  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006c84d7  68ff000000           push 0xff
// 006c84dc  51                   push ecx
// 006c84dd  50                   push eax
// 006c84de  e83dfbffff           call 0x6c8020
// 006c84e3  83c40c               add esp, 0xc
// 006c84e6  f7d8                 neg eax
// 006c84e8  1bc0                 sbb eax, eax
// 006c84ea  f7d8                 neg eax
// 006c84ec  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkcode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
