// roc 2012-06 0093bc80  unit: seg_00930000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093bc80
//
// 0093bc80  83ec18               sub esp, 0x18
// 0093bc83  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093bc86  6a0c                 push 0xc
// 0093bc88  8d442410             lea eax, [esp + 0x10]
// 0093bc8c  50                   push eax
// 0093bc8d  51                   push ecx
// 0093bc8e  c744240c1b4c7561     mov dword ptr [esp + 0xc], 0x61754c1b
// 0093bc96  c644241051           mov byte ptr [esp + 0x10], 0x51
// 0093bc9b  c644241100           mov byte ptr [esp + 0x11], 0
// 0093bca0  c644241201           mov byte ptr [esp + 0x12], 1
// 0093bca5  c644241304           mov byte ptr [esp + 0x13], 4
// 0093bcaa  c644241404           mov byte ptr [esp + 0x14], 4
// 0093bcaf  c644241504           mov byte ptr [esp + 0x15], 4
// 0093bcb4  c644241608           mov byte ptr [esp + 0x16], 8
// 0093bcb9  c644241700           mov byte ptr [esp + 0x17], 0
// 0093bcbe  e88dacffff           call 0x936950
// 0093bcc3  83c40c               add esp, 0xc
// 0093bcc6  85c0                 test eax, eax
// 0093bcc8  7423                 je 0x93bced
// 0093bcca  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093bccd  8b06                 mov eax, dword ptr [esi]
// 0093bccf  68b4fdbf00           push 0xbffdb4
// 0093bcd4  52                   push edx
// 0093bcd5  6898fdbf00           push 0xbffd98
// 0093bcda  50                   push eax
// 0093bcdb  e86044f1ff           call 0x850140
// 0093bce0  8b0e                 mov ecx, dword ptr [esi]
// 0093bce2  6a03                 push 3
// 0093bce4  51                   push ecx
// 0093bce5  e8968ff1ff           call 0x854c80
// 0093bcea  83c418               add esp, 0x18
// 0093bced  b80c000000           mov eax, 0xc
// 0093bcf2  33c9                 xor ecx, ecx
// 0093bcf4  8b140c               mov edx, dword ptr [esp + ecx]
// 0093bcf7  3b540c0c             cmp edx, dword ptr [esp + ecx + 0xc]
// 0093bcfb  750f                 jne 0x93bd0c
// 0093bcfd  83e804               sub eax, 4
// 0093bd00  83c104               add ecx, 4
// 0093bd03  83f804               cmp eax, 4
// 0093bd06  73ec                 jae 0x93bcf4
// 0093bd08  83c418               add esp, 0x18
// 0093bd0b  c3                   ret 
// 0093bd0c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093bd0f  8b0e                 mov ecx, dword ptr [esi]
// 0093bd11  68fcfdbf00           push 0xbffdfc
// 0093bd16  50                   push eax
// 0093bd17  6898fdbf00           push 0xbffd98
// 0093bd1c  51                   push ecx
// 0093bd1d  e81e44f1ff           call 0x850140
// 0093bd22  8b16                 mov edx, dword ptr [esi]
// 0093bd24  6a03                 push 3
// 0093bd26  52                   push edx
// 0093bd27  e8548ff1ff           call 0x854c80
// 0093bd2c  83c418               add esp, 0x18
// 0093bd2f  83c418               add esp, 0x18
// 0093bd32  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadHeader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
