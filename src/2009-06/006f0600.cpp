// from server: 100% by auto
// roc 2009-06 006f0600  unit: seg_006f0000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0600
//
// 006f0600  81ec84020000         sub esp, 0x284
// 006f0606  8b842490020000       mov eax, dword ptr [esp + 0x290]
// 006f060d  8b942494020000       mov edx, dword ptr [esp + 0x294]
// 006f0614  53                   push ebx
// 006f0615  89442440             mov dword ptr [esp + 0x40], eax
// 006f0619  8bc2                 mov eax, edx
// 006f061b  56                   push esi
// 006f061c  8d7001               lea esi, [eax + 1]
// 006f061f  90                   nop 
// 006f0620  8a08                 mov cl, byte ptr [eax]
// 006f0622  40                   inc eax
// 006f0623  84c9                 test cl, cl
// 006f0625  75f9                 jne 0x6f0620
// 006f0627  2bc6                 sub eax, esi
// 006f0629  8bb42490020000       mov esi, dword ptr [esp + 0x290]
// 006f0630  50                   push eax
// 006f0631  52                   push edx
// 006f0632  56                   push esi
// 006f0633  e808c5ffff           call 0x6ecb40
// 006f0638  8b8c24a0020000       mov ecx, dword ptr [esp + 0x2a0]
// 006f063f  50                   push eax
// 006f0640  51                   push ecx
// 006f0641  8d54241c             lea edx, [esp + 0x1c]
// 006f0645  52                   push edx
// 006f0646  56                   push esi
// 006f0647  e8a40d0000           call 0x6f13f0
// 006f064c  8d44246c             lea eax, [esp + 0x6c]
// 006f0650  8d5c2424             lea ebx, [esp + 0x24]
// 006f0654  e887d8ffff           call 0x6edee0
// 006f0659  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006f065d  8bcb                 mov ecx, ebx
// 006f065f  51                   push ecx
// 006f0660  c6404a02             mov byte ptr [eax + 0x4a], 2
// 006f0664  e877200000           call 0x6f26e0
// 006f0669  8bd3                 mov edx, ebx
// 006f066b  52                   push edx
// 006f066c  e8dffeffff           call 0x6f0550
// 006f0671  83c424               add esp, 0x24
// 006f0674  817c24181f010000     cmp dword ptr [esp + 0x18], 0x11f
// 006f067c  5e                   pop esi
// 006f067d  5b                   pop ebx
// 006f067e  742c                 je 0x6f06ac
// 006f0680  8d0424               lea eax, [esp]
// 006f0683  681f010000           push 0x11f
// 006f0688  50                   push eax
// 006f0689  e8620b0000           call 0x6f11f0
// 006f068e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006f0692  50                   push eax
// 006f0693  68b8dd8e00           push 0x8eddb8
// 006f0698  51                   push ecx
// 006f0699  e8028afdff           call 0x6c90a0
// 006f069e  50                   push eax
// 006f069f  8d542418             lea edx, [esp + 0x18]
// 006f06a3  52                   push edx
// 006f06a4  e8470c0000           call 0x6f12f0
// 006f06a9  83c41c               add esp, 0x1c
// 006f06ac  8d0424               lea eax, [esp]
// 006f06af  50                   push eax
// 006f06b0  e8dbd8ffff           call 0x6edf90
// 006f06b5  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006f06b9  81c488020000         add esp, 0x288
// 006f06bf  c3                   ret 
// library lua-5.1.4/lparser.c (function _luaY_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
