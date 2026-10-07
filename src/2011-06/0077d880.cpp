// roc 2011-06 0077d880  unit: seg_00770000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d880
//
// 0077d880  8b442404             mov eax, dword ptr [esp + 4]
// 0077d884  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0077d887  68ff000000           push 0xff
// 0077d88c  51                   push ecx
// 0077d88d  50                   push eax
// 0077d88e  e82dfbffff           call 0x77d3c0
// 0077d893  83c40c               add esp, 0xc
// 0077d896  f7d8                 neg eax
// 0077d898  1bc0                 sbb eax, eax
// 0077d89a  f7d8                 neg eax
// 0077d89c  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkcode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
