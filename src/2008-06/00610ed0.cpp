// from server: 100% by auto
// roc 2008-06 00610ed0  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00610ed0
//
// 00610ed0  55                   push ebp
// 00610ed1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00610ed5  56                   push esi
// 00610ed6  be01000000           mov esi, 1
// 00610edb  397504               cmp dword ptr [ebp + 4], esi
// 00610ede  7e5d                 jle 0x610f3d
// 00610ee0  53                   push ebx
// 00610ee1  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00610ee4  57                   push edi
// 00610ee5  6aff                 push -1
// 00610ee7  53                   push ebx
// 00610ee8  e893110000           call 0x612080
// 00610eed  83c408               add esp, 8
// 00610ef0  89442414             mov dword ptr [esp + 0x14], eax
// 00610ef4  bffeffffff           mov edi, 0xfffffffe
// 00610ef9  8da42400000000       lea esp, [esp]
// 00610f00  57                   push edi
// 00610f01  53                   push ebx
// 00610f02  e879110000           call 0x612080
// 00610f07  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00610f0a  8bd1                 mov edx, ecx
// 00610f0c  2bd6                 sub edx, esi
// 00610f0e  42                   inc edx
// 00610f0f  83c408               add esp, 8
// 00610f12  83fa0a               cmp edx, 0xa
// 00610f15  7d06                 jge 0x610f1d
// 00610f17  39442414             cmp dword ptr [esp + 0x14], eax
// 00610f1b  760a                 jbe 0x610f27
// 00610f1d  01442414             add dword ptr [esp + 0x14], eax
// 00610f21  46                   inc esi
// 00610f22  4f                   dec edi
// 00610f23  3bf1                 cmp esi, ecx
// 00610f25  7cd9                 jl 0x610f00
// 00610f27  56                   push esi
// 00610f28  53                   push ebx
// 00610f29  e8921c0000           call 0x612bc0
// 00610f2e  83c408               add esp, 8
// 00610f31  b801000000           mov eax, 1
// 00610f36  2bc6                 sub eax, esi
// 00610f38  014504               add dword ptr [ebp + 4], eax
// 00610f3b  5f                   pop edi
// 00610f3c  5b                   pop ebx
// 00610f3d  5e                   pop esi
// 00610f3e  5d                   pop ebp
// 00610f3f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _adjuststack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
