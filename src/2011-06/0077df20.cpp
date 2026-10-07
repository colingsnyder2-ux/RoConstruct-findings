// roc 2011-06 0077df20  unit: seg_00770000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077df20
//
// 0077df20  8b442408             mov eax, dword ptr [esp + 8]
// 0077df24  8b4808               mov ecx, dword ptr [eax + 8]
// 0077df27  8b048d24ddab00       mov eax, dword ptr [ecx*4 + 0xabdd24]
// 0077df2e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077df32  8b4a08               mov ecx, dword ptr [edx + 8]
// 0077df35  8b0c8d24ddab00       mov ecx, dword ptr [ecx*4 + 0xabdd24]
// 0077df3c  8a5002               mov dl, byte ptr [eax + 2]
// 0077df3f  3a5102               cmp dl, byte ptr [ecx + 2]
// 0077df42  7516                 jne 0x77df5a
// 0077df44  50                   push eax
// 0077df45  8b442408             mov eax, dword ptr [esp + 8]
// 0077df49  68d877ab00           push 0xab77d8
// 0077df4e  50                   push eax
// 0077df4f  e89cfcffff           call 0x77dbf0
// 0077df54  83c40c               add esp, 0xc
// 0077df57  33c0                 xor eax, eax
// 0077df59  c3                   ret 
// 0077df5a  51                   push ecx
// 0077df5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077df5f  50                   push eax
// 0077df60  68b877ab00           push 0xab77b8
// 0077df65  51                   push ecx
// 0077df66  e885fcffff           call 0x77dbf0
// 0077df6b  83c410               add esp, 0x10
// 0077df6e  33c0                 xor eax, eax
// 0077df70  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_ordererror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
