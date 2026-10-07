// roc 2007-08 00616a90  unit: seg_00610000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00616a90
//
// 00616a90  56                   push esi
// 00616a91  57                   push edi
// 00616a92  8bf0                 mov esi, eax
// 00616a94  e8d7feffff           call 0x616970
// 00616a99  8bf8                 mov edi, eax
// 00616a9b  8d4701               lea eax, [edi + 1]
// 00616a9e  3dffffff3f           cmp eax, 0x3fffffff
// 00616aa3  7719                 ja 0x616abe
// 00616aa5  8b16                 mov edx, dword ptr [esi]
// 00616aa7  8d0cbd00000000       lea ecx, [edi*4]
// 00616aae  51                   push ecx
// 00616aaf  6a00                 push 0
// 00616ab1  6a00                 push 0
// 00616ab3  52                   push edx
// 00616ab4  e837cfffff           call 0x6139f0
// 00616ab9  83c410               add esp, 0x10
// 00616abc  eb0b                 jmp 0x616ac9
// 00616abe  8b06                 mov eax, dword ptr [esi]
// 00616ac0  50                   push eax
// 00616ac1  e80acfffff           call 0x6139d0
// 00616ac6  83c404               add esp, 4
// 00616ac9  8d0cbd00000000       lea ecx, [edi*4]
// 00616ad0  51                   push ecx
// 00616ad1  89430c               mov dword ptr [ebx + 0xc], eax
// 00616ad4  897b2c               mov dword ptr [ebx + 0x2c], edi
// 00616ad7  8b5604               mov edx, dword ptr [esi + 4]
// 00616ada  50                   push eax
// 00616adb  52                   push edx
// 00616adc  e8dfc8ffff           call 0x6133c0
// 00616ae1  83c40c               add esp, 0xc
// 00616ae4  85c0                 test eax, eax
// 00616ae6  7423                 je 0x616b0b
// 00616ae8  8b460c               mov eax, dword ptr [esi + 0xc]
// 00616aeb  8b0e                 mov ecx, dword ptr [esi]
// 00616aed  68e0357c00           push 0x7c35e0
// 00616af2  50                   push eax
// 00616af3  68c4357c00           push 0x7c35c4
// 00616af8  51                   push ecx
// 00616af9  e89283ffff           call 0x60ee90
// 00616afe  8b16                 mov edx, dword ptr [esi]
// 00616b00  6a03                 push 3
// 00616b02  52                   push edx
// 00616b03  e818f5faff           call 0x5c6020
// 00616b08  83c418               add esp, 0x18
// 00616b0b  5f                   pop edi
// 00616b0c  5e                   pop esi
// 00616b0d  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadCode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
