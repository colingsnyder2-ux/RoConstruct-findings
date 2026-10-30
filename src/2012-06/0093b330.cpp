// from server: 100% by auto
// roc 2012-06 0093b330  unit: seg_00930000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093b330
//
// 0093b330  51                   push ecx
// 0093b331  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093b334  6a04                 push 4
// 0093b336  8d442404             lea eax, [esp + 4]
// 0093b33a  50                   push eax
// 0093b33b  51                   push ecx
// 0093b33c  e80fb6ffff           call 0x936950
// 0093b341  83c40c               add esp, 0xc
// 0093b344  85c0                 test eax, eax
// 0093b346  7423                 je 0x93b36b
// 0093b348  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093b34b  8b06                 mov eax, dword ptr [esi]
// 0093b34d  68b4fdbf00           push 0xbffdb4
// 0093b352  52                   push edx
// 0093b353  6898fdbf00           push 0xbffd98
// 0093b358  50                   push eax
// 0093b359  e8e24df1ff           call 0x850140
// 0093b35e  8b0e                 mov ecx, dword ptr [esi]
// 0093b360  6a03                 push 3
// 0093b362  51                   push ecx
// 0093b363  e81899f1ff           call 0x854c80
// 0093b368  83c418               add esp, 0x18
// 0093b36b  8b0424               mov eax, dword ptr [esp]
// 0093b36e  85c0                 test eax, eax
// 0093b370  7d27                 jge 0x93b399
// 0093b372  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093b375  8b06                 mov eax, dword ptr [esi]
// 0093b377  68c4fdbf00           push 0xbffdc4
// 0093b37c  52                   push edx
// 0093b37d  6898fdbf00           push 0xbffd98
// 0093b382  50                   push eax
// 0093b383  e8b84df1ff           call 0x850140
// 0093b388  8b0e                 mov ecx, dword ptr [esi]
// 0093b38a  6a03                 push 3
// 0093b38c  51                   push ecx
// 0093b38d  e8ee98f1ff           call 0x854c80
// 0093b392  8b442418             mov eax, dword ptr [esp + 0x18]
// 0093b396  83c418               add esp, 0x18
// 0093b399  59                   pop ecx
// 0093b39a  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadInt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
