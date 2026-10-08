// from server: 100% by auto
// roc 2008-06 00663f20  unit: RBX::FilterStairs  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663f20
//
// 00663f20  83ec18               sub esp, 0x18
// 00663f23  8b4e04               mov ecx, dword ptr [esi + 4]
// 00663f26  6a0c                 push 0xc
// 00663f28  8d442410             lea eax, [esp + 0x10]
// 00663f2c  50                   push eax
// 00663f2d  51                   push ecx
// 00663f2e  c744240c1b4c7561     mov dword ptr [esp + 0xc], 0x61754c1b
// 00663f36  c644241051           mov byte ptr [esp + 0x10], 0x51
// 00663f3b  c644241100           mov byte ptr [esp + 0x11], 0
// 00663f40  c644241201           mov byte ptr [esp + 0x12], 1
// 00663f45  c644241304           mov byte ptr [esp + 0x13], 4
// 00663f4a  c644241404           mov byte ptr [esp + 0x14], 4
// 00663f4f  c644241504           mov byte ptr [esp + 0x15], 4
// 00663f54  c644241608           mov byte ptr [esp + 0x16], 8
// 00663f59  c644241700           mov byte ptr [esp + 0x17], 0
// 00663f5e  e89db9ffff           call 0x65f900
// 00663f63  83c40c               add esp, 0xc
// 00663f66  85c0                 test eax, eax
// 00663f68  7423                 je 0x663f8d
// 00663f6a  8b560c               mov edx, dword ptr [esi + 0xc]
// 00663f6d  8b06                 mov eax, dword ptr [esi]
// 00663f6f  6830c78400           push 0x84c730
// 00663f74  52                   push edx
// 00663f75  6814c78400           push 0x84c714
// 00663f7a  50                   push eax
// 00663f7b  e840ebfbff           call 0x622ac0
// 00663f80  8b0e                 mov ecx, dword ptr [esi]
// 00663f82  6a03                 push 3
// 00663f84  51                   push ecx
// 00663f85  e8c6e0fbff           call 0x622050
// 00663f8a  83c418               add esp, 0x18
// 00663f8d  b80c000000           mov eax, 0xc
// 00663f92  33c9                 xor ecx, ecx
// 00663f94  8b140c               mov edx, dword ptr [esp + ecx]
// 00663f97  3b540c0c             cmp edx, dword ptr [esp + ecx + 0xc]
// 00663f9b  750f                 jne 0x663fac
// 00663f9d  83e804               sub eax, 4
// 00663fa0  83c104               add ecx, 4
// 00663fa3  83f804               cmp eax, 4
// 00663fa6  73ec                 jae 0x663f94
// 00663fa8  83c418               add esp, 0x18
// 00663fab  c3                   ret 
// 00663fac  8b460c               mov eax, dword ptr [esi + 0xc]
// 00663faf  8b0e                 mov ecx, dword ptr [esi]
// 00663fb1  6868c78400           push 0x84c768
// 00663fb6  50                   push eax
// 00663fb7  6814c78400           push 0x84c714
// 00663fbc  51                   push ecx
// 00663fbd  e8feeafbff           call 0x622ac0
// 00663fc2  8b16                 mov edx, dword ptr [esi]
// 00663fc4  6a03                 push 3
// 00663fc6  52                   push edx
// 00663fc7  e884e0fbff           call 0x622050
// 00663fcc  83c418               add esp, 0x18
// 00663fcf  83c418               add esp, 0x18
// 00663fd2  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadHeader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
