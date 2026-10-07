// roc 2009-06 006c8b70  unit: seg_006c0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8b70
//
// 006c8b70  8b442408             mov eax, dword ptr [esp + 8]
// 006c8b74  8b4808               mov ecx, dword ptr [eax + 8]
// 006c8b77  8b048d88db8e00       mov eax, dword ptr [ecx*4 + 0x8edb88]
// 006c8b7e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c8b82  8b4a08               mov ecx, dword ptr [edx + 8]
// 006c8b85  8b0c8d88db8e00       mov ecx, dword ptr [ecx*4 + 0x8edb88]
// 006c8b8c  8a5002               mov dl, byte ptr [eax + 2]
// 006c8b8f  3a5102               cmp dl, byte ptr [ecx + 2]
// 006c8b92  7516                 jne 0x6c8baa
// 006c8b94  50                   push eax
// 006c8b95  8b442408             mov eax, dword ptr [esp + 8]
// 006c8b99  6854c38e00           push 0x8ec354
// 006c8b9e  50                   push eax
// 006c8b9f  e89cfcffff           call 0x6c8840
// 006c8ba4  83c40c               add esp, 0xc
// 006c8ba7  33c0                 xor eax, eax
// 006c8ba9  c3                   ret 
// 006c8baa  51                   push ecx
// 006c8bab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c8baf  50                   push eax
// 006c8bb0  6834c38e00           push 0x8ec334
// 006c8bb5  51                   push ecx
// 006c8bb6  e885fcffff           call 0x6c8840
// 006c8bbb  83c410               add esp, 0x10
// 006c8bbe  33c0                 xor eax, eax
// 006c8bc0  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_ordererror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
