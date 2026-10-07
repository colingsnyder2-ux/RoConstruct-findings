// roc 2008-06 00660cb0  unit: RBX::FilterStairs  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660cb0
//
// 00660cb0  56                   push esi
// 00660cb1  57                   push edi
// 00660cb2  8b7830               mov edi, dword ptr [eax + 0x30]
// 00660cb5  8b01                 mov eax, dword ptr [ecx]
// 00660cb7  8bf2                 mov esi, edx
// 00660cb9  2b74240c             sub esi, dword ptr [esp + 0xc]
// 00660cbd  83f80d               cmp eax, 0xd
// 00660cc0  7431                 je 0x660cf3
// 00660cc2  83f80e               cmp eax, 0xe
// 00660cc5  742c                 je 0x660cf3
// 00660cc7  85c0                 test eax, eax
// 00660cc9  740a                 je 0x660cd5
// 00660ccb  51                   push ecx
// 00660ccc  57                   push edi
// 00660ccd  e85eab0000           call 0x66b830
// 00660cd2  83c408               add esp, 8
// 00660cd5  85f6                 test esi, esi
// 00660cd7  7e3c                 jle 0x660d15
// 00660cd9  53                   push ebx
// 00660cda  8b5f24               mov ebx, dword ptr [edi + 0x24]
// 00660cdd  56                   push esi
// 00660cde  57                   push edi
// 00660cdf  e8bca00000           call 0x66ada0
// 00660ce4  56                   push esi
// 00660ce5  53                   push ebx
// 00660ce6  57                   push edi
// 00660ce7  e834a60000           call 0x66b320
// 00660cec  83c414               add esp, 0x14
// 00660cef  5b                   pop ebx
// 00660cf0  5f                   pop edi
// 00660cf1  5e                   pop esi
// 00660cf2  c3                   ret 
// 00660cf3  83c601               add esi, 1
// 00660cf6  7902                 jns 0x660cfa
// 00660cf8  33f6                 xor esi, esi
// 00660cfa  56                   push esi
// 00660cfb  51                   push ecx
// 00660cfc  57                   push edi
// 00660cfd  e83ea20000           call 0x66af40
// 00660d02  83c40c               add esp, 0xc
// 00660d05  83fe01               cmp esi, 1
// 00660d08  7e0b                 jle 0x660d15
// 00660d0a  4e                   dec esi
// 00660d0b  56                   push esi
// 00660d0c  57                   push edi
// 00660d0d  e88ea00000           call 0x66ada0
// 00660d12  83c408               add esp, 8
// 00660d15  5f                   pop edi
// 00660d16  5e                   pop esi
// 00660d17  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjust_assign)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
