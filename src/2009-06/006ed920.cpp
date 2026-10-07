// roc 2009-06 006ed920  unit: seg_006e0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed920
//
// 006ed920  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006ed927  7424                 je 0x6ed94d
// 006ed929  681d010000           push 0x11d
// 006ed92e  56                   push esi
// 006ed92f  e8bc380000           call 0x6f11f0
// 006ed934  50                   push eax
// 006ed935  8b4634               mov eax, dword ptr [esi + 0x34]
// 006ed938  68b8dd8e00           push 0x8eddb8
// 006ed93d  50                   push eax
// 006ed93e  e85db7fdff           call 0x6c90a0
// 006ed943  50                   push eax
// 006ed944  56                   push esi
// 006ed945  e8a6390000           call 0x6f12f0
// 006ed94a  83c41c               add esp, 0x1c
// 006ed94d  53                   push ebx
// 006ed94e  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 006ed951  56                   push esi
// 006ed952  e8894d0000           call 0x6f26e0
// 006ed957  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006ed95a  53                   push ebx
// 006ed95b  51                   push ecx
// 006ed95c  e81fc50000           call 0x6f9e80
// 006ed961  83c9ff               or ecx, 0xffffffff
// 006ed964  83c40c               add esp, 0xc
// 006ed967  894f10               mov dword ptr [edi + 0x10], ecx
// 006ed96a  894f14               mov dword ptr [edi + 0x14], ecx
// 006ed96d  c70704000000         mov dword ptr [edi], 4
// 006ed973  894708               mov dword ptr [edi + 8], eax
// 006ed976  5b                   pop ebx
// 006ed977  c3                   ret 
// library lua-5.1.4/lparser.c (function _checkname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
