// from server: 100% by auto
// roc 2007-08 00613bb0  unit: seg_00610000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613bb0
//
// 00613bb0  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00613bb7  7424                 je 0x613bdd
// 00613bb9  681d010000           push 0x11d
// 00613bbe  56                   push esi
// 00613bbf  e8fc380000           call 0x6174c0
// 00613bc4  50                   push eax
// 00613bc5  8b4634               mov eax, dword ptr [esi + 0x34]
// 00613bc8  6870337c00           push 0x7c3370
// 00613bcd  50                   push eax
// 00613bce  e8bdb2ffff           call 0x60ee90
// 00613bd3  50                   push eax
// 00613bd4  56                   push esi
// 00613bd5  e8e6390000           call 0x6175c0
// 00613bda  83c41c               add esp, 0x1c
// 00613bdd  53                   push ebx
// 00613bde  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00613be1  56                   push esi
// 00613be2  e8094e0000           call 0x6189f0
// 00613be7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00613bea  53                   push ebx
// 00613beb  51                   push ecx
// 00613bec  e8ff4d0100           call 0x6289f0
// 00613bf1  83c9ff               or ecx, 0xffffffff
// 00613bf4  83c40c               add esp, 0xc
// 00613bf7  894f10               mov dword ptr [edi + 0x10], ecx
// 00613bfa  894f14               mov dword ptr [edi + 0x14], ecx
// 00613bfd  c70704000000         mov dword ptr [edi], 4
// 00613c03  894708               mov dword ptr [edi + 8], eax
// 00613c06  5b                   pop ebx
// 00613c07  c3                   ret 
// library lua-5.1.4/lparser.c (function _checkname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
