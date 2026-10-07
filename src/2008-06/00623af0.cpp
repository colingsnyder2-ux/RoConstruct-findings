// roc 2008-06 00623af0  unit: lua_exception  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623af0
//
// 00623af0  8b442408             mov eax, dword ptr [esp + 8]
// 00623af4  8b4808               mov ecx, dword ptr [eax + 8]
// 00623af7  8b048d64c28400       mov eax, dword ptr [ecx*4 + 0x84c264]
// 00623afe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00623b02  8b4a08               mov ecx, dword ptr [edx + 8]
// 00623b05  8b0c8d64c28400       mov ecx, dword ptr [ecx*4 + 0x84c264]
// 00623b0c  8a5002               mov dl, byte ptr [eax + 2]
// 00623b0f  3a5102               cmp dl, byte ptr [ecx + 2]
// 00623b12  7516                 jne 0x623b2a
// 00623b14  50                   push eax
// 00623b15  8b442408             mov eax, dword ptr [esp + 8]
// 00623b19  68a04a8400           push 0x844aa0
// 00623b1e  50                   push eax
// 00623b1f  e8acfcffff           call 0x6237d0
// 00623b24  83c40c               add esp, 0xc
// 00623b27  33c0                 xor eax, eax
// 00623b29  c3                   ret 
// 00623b2a  51                   push ecx
// 00623b2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00623b2f  50                   push eax
// 00623b30  68804a8400           push 0x844a80
// 00623b35  51                   push ecx
// 00623b36  e895fcffff           call 0x6237d0
// 00623b3b  83c410               add esp, 0x10
// 00623b3e  33c0                 xor eax, eax
// 00623b40  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_ordererror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
