// roc 2007-08 005c7320  unit: lua_exception  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7320
//
// 005c7320  8b442408             mov eax, dword ptr [esp + 8]
// 005c7324  8b4808               mov ecx, dword ptr [eax + 8]
// 005c7327  8b048d48317c00       mov eax, dword ptr [ecx*4 + 0x7c3148]
// 005c732e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c7332  8b4a08               mov ecx, dword ptr [edx + 8]
// 005c7335  8b0c8d48317c00       mov ecx, dword ptr [ecx*4 + 0x7c3148]
// 005c733c  8a5002               mov dl, byte ptr [eax + 2]
// 005c733f  3a5102               cmp dl, byte ptr [ecx + 2]
// 005c7342  7516                 jne 0x5c735a
// 005c7344  50                   push eax
// 005c7345  8b442408             mov eax, dword ptr [esp + 8]
// 005c7349  6808987b00           push 0x7b9808
// 005c734e  50                   push eax
// 005c734f  e8acfcffff           call 0x5c7000
// 005c7354  83c40c               add esp, 0xc
// 005c7357  33c0                 xor eax, eax
// 005c7359  c3                   ret 
// 005c735a  51                   push ecx
// 005c735b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c735f  50                   push eax
// 005c7360  68e8977b00           push 0x7b97e8
// 005c7365  51                   push ecx
// 005c7366  e895fcffff           call 0x5c7000
// 005c736b  83c410               add esp, 0x10
// 005c736e  33c0                 xor eax, eax
// 005c7370  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_ordererror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
