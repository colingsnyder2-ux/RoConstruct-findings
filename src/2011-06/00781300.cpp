// from server: 100% by auto
// roc 2011-06 00781300  unit: lua_exception  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00781300
//
// 00781300  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 00781303  7c27                 jl 0x78132c
// 00781305  85ff                 test edi, edi
// 00781307  7511                 jne 0x78131a
// 00781309  2bc1                 sub eax, ecx
// 0078130b  50                   push eax
// 0078130c  8b4608               mov eax, dword ptr [esi + 8]
// 0078130f  51                   push ecx
// 00781310  50                   push eax
// 00781311  e84a16feff           call 0x762960
// 00781316  83c40c               add esp, 0xc
// 00781319  c3                   ret 
// 0078131a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0078131d  68187dab00           push 0xab7d18
// 00781322  51                   push ecx
// 00781323  e8e823feff           call 0x763710
// 00781328  83c408               add esp, 8
// 0078132b  c3                   ret 
// 0078132c  53                   push ebx
// 0078132d  8b5cfe14             mov ebx, dword ptr [esi + edi*8 + 0x14]
// 00781331  83fbff               cmp ebx, -1
// 00781334  7525                 jne 0x78135b
// 00781336  8b5608               mov edx, dword ptr [esi + 8]
// 00781339  68d87dab00           push 0xab7dd8
// 0078133e  52                   push edx
// 0078133f  e8cc23feff           call 0x763710
// 00781344  83c408               add esp, 8
// 00781347  8b54fe10             mov edx, dword ptr [esi + edi*8 + 0x10]
// 0078134b  8b4608               mov eax, dword ptr [esi + 8]
// 0078134e  53                   push ebx
// 0078134f  52                   push edx
// 00781350  50                   push eax
// 00781351  e80a16feff           call 0x762960
// 00781356  83c40c               add esp, 0xc
// 00781359  5b                   pop ebx
// 0078135a  c3                   ret 
// 0078135b  83fbfe               cmp ebx, -2
// 0078135e  75e7                 jne 0x781347
// 00781360  8b44fe10             mov eax, dword ptr [esi + edi*8 + 0x10]
// 00781364  2b06                 sub eax, dword ptr [esi]
// 00781366  8b4e08               mov ecx, dword ptr [esi + 8]
// 00781369  40                   inc eax
// 0078136a  50                   push eax
// 0078136b  51                   push ecx
// 0078136c  e8cf15feff           call 0x762940
// 00781371  83c408               add esp, 8
// 00781374  5b                   pop ebx
// 00781375  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_onecapture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
