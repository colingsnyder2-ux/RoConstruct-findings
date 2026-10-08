// from server: 100% by auto
// roc 2010-06 007822a0  unit: seg_00780000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007822a0
//
// 007822a0  83ec18               sub esp, 0x18
// 007822a3  8b4e04               mov ecx, dword ptr [esi + 4]
// 007822a6  6a0c                 push 0xc
// 007822a8  8d442410             lea eax, [esp + 0x10]
// 007822ac  50                   push eax
// 007822ad  51                   push ecx
// 007822ae  c744240c1b4c7561     mov dword ptr [esp + 0xc], 0x61754c1b
// 007822b6  c644241051           mov byte ptr [esp + 0x10], 0x51
// 007822bb  c644241100           mov byte ptr [esp + 0x11], 0
// 007822c0  c644241201           mov byte ptr [esp + 0x12], 1
// 007822c5  c644241304           mov byte ptr [esp + 0x13], 4
// 007822ca  c644241404           mov byte ptr [esp + 0x14], 4
// 007822cf  c644241504           mov byte ptr [esp + 0x15], 4
// 007822d4  c644241608           mov byte ptr [esp + 0x16], 8
// 007822d9  c644241700           mov byte ptr [esp + 0x17], 0
// 007822de  e80dc1ffff           call 0x77e3f0
// 007822e3  83c40c               add esp, 0xc
// 007822e6  85c0                 test eax, eax
// 007822e8  7423                 je 0x78230d
// 007822ea  8b560c               mov edx, dword ptr [esi + 0xc]
// 007822ed  8b06                 mov eax, dword ptr [esi]
// 007822ef  68c032a500           push 0xa532c0
// 007822f4  52                   push edx
// 007822f5  68a432a500           push 0xa532a4
// 007822fa  50                   push eax
// 007822fb  e8e00afbff           call 0x732de0
// 00782300  8b0e                 mov ecx, dword ptr [esi]
// 00782302  6a03                 push 3
// 00782304  51                   push ecx
// 00782305  e8a6ddfaff           call 0x7300b0
// 0078230a  83c418               add esp, 0x18
// 0078230d  b80c000000           mov eax, 0xc
// 00782312  33c9                 xor ecx, ecx
// 00782314  8b140c               mov edx, dword ptr [esp + ecx]
// 00782317  3b540c0c             cmp edx, dword ptr [esp + ecx + 0xc]
// 0078231b  750f                 jne 0x78232c
// 0078231d  83e804               sub eax, 4
// 00782320  83c104               add ecx, 4
// 00782323  83f804               cmp eax, 4
// 00782326  73ec                 jae 0x782314
// 00782328  83c418               add esp, 0x18
// 0078232b  c3                   ret 
// 0078232c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078232f  8b0e                 mov ecx, dword ptr [esi]
// 00782331  680833a500           push 0xa53308
// 00782336  50                   push eax
// 00782337  68a432a500           push 0xa532a4
// 0078233c  51                   push ecx
// 0078233d  e89e0afbff           call 0x732de0
// 00782342  8b16                 mov edx, dword ptr [esi]
// 00782344  6a03                 push 3
// 00782346  52                   push edx
// 00782347  e864ddfaff           call 0x7300b0
// 0078234c  83c418               add esp, 0x18
// 0078234f  83c418               add esp, 0x18
// 00782352  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadHeader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
