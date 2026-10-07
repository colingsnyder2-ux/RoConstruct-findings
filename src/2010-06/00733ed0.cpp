// roc 2010-06 00733ed0  unit: seg_00730000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733ed0
//
// 00733ed0  8b442408             mov eax, dword ptr [esp + 8]
// 00733ed4  8b4808               mov ecx, dword ptr [eax + 8]
// 00733ed7  8b048d082ea500       mov eax, dword ptr [ecx*4 + 0xa52e08]
// 00733ede  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00733ee2  8b4a08               mov ecx, dword ptr [edx + 8]
// 00733ee5  8b0c8d082ea500       mov ecx, dword ptr [ecx*4 + 0xa52e08]
// 00733eec  8a5002               mov dl, byte ptr [eax + 2]
// 00733eef  3a5102               cmp dl, byte ptr [ecx + 2]
// 00733ef2  7516                 jne 0x733f0a
// 00733ef4  50                   push eax
// 00733ef5  8b442408             mov eax, dword ptr [esp + 8]
// 00733ef9  6898dea400           push 0xa4de98
// 00733efe  50                   push eax
// 00733eff  e89cfcffff           call 0x733ba0
// 00733f04  83c40c               add esp, 0xc
// 00733f07  33c0                 xor eax, eax
// 00733f09  c3                   ret 
// 00733f0a  51                   push ecx
// 00733f0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00733f0f  50                   push eax
// 00733f10  6878dea400           push 0xa4de78
// 00733f15  51                   push ecx
// 00733f16  e885fcffff           call 0x733ba0
// 00733f1b  83c410               add esp, 0x10
// 00733f1e  33c0                 xor eax, eax
// 00733f20  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_ordererror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
