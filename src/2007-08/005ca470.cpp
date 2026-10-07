// roc 2007-08 005ca470  unit: seg_005c0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca470
//
// 005ca470  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ca473  83e801               sub eax, 1
// 005ca476  57                   push edi
// 005ca477  7816                 js 0x5ca48f
// 005ca479  8d4cc614             lea ecx, [esi + eax*8 + 0x14]
// 005ca47d  8d4900               lea ecx, [ecx]
// 005ca480  8339ff               cmp dword ptr [ecx], -1
// 005ca483  741b                 je 0x5ca4a0
// 005ca485  83e801               sub eax, 1
// 005ca488  83e908               sub ecx, 8
// 005ca48b  85c0                 test eax, eax
// 005ca48d  7df1                 jge 0x5ca480
// 005ca48f  8b4608               mov eax, dword ptr [esi + 8]
// 005ca492  68d89e7b00           push 0x7b9ed8
// 005ca497  50                   push eax
// 005ca498  e84344ffff           call 0x5be8e0
// 005ca49d  83c408               add esp, 8
// 005ca4a0  8b542408             mov edx, dword ptr [esp + 8]
// 005ca4a4  8bf8                 mov edi, eax
// 005ca4a6  52                   push edx
// 005ca4a7  8bcb                 mov ecx, ebx
// 005ca4a9  2b4cfe10             sub ecx, dword ptr [esi + edi*8 + 0x10]
// 005ca4ad  53                   push ebx
// 005ca4ae  56                   push esi
// 005ca4af  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 005ca4b3  e8e8000000           call 0x5ca5a0
// 005ca4b8  83c40c               add esp, 0xc
// 005ca4bb  85c0                 test eax, eax
// 005ca4bd  7508                 jne 0x5ca4c7
// 005ca4bf  c744fe14ffffffff     mov dword ptr [esi + edi*8 + 0x14], 0xffffffff
// 005ca4c7  5f                   pop edi
// 005ca4c8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _end_capture)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
