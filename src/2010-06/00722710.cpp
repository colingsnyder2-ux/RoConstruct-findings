// roc 2010-06 00722710  unit: RBX::UniversalTool  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722710
//
// 00722710  55                   push ebp
// 00722711  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00722715  56                   push esi
// 00722716  be01000000           mov esi, 1
// 0072271b  397504               cmp dword ptr [ebp + 4], esi
// 0072271e  7e5d                 jle 0x72277d
// 00722720  53                   push ebx
// 00722721  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00722724  57                   push edi
// 00722725  6aff                 push -1
// 00722727  53                   push ebx
// 00722728  e893ecffff           call 0x7213c0
// 0072272d  83c408               add esp, 8
// 00722730  89442414             mov dword ptr [esp + 0x14], eax
// 00722734  bffeffffff           mov edi, 0xfffffffe
// 00722739  8da42400000000       lea esp, [esp]
// 00722740  57                   push edi
// 00722741  53                   push ebx
// 00722742  e879ecffff           call 0x7213c0
// 00722747  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0072274a  8bd1                 mov edx, ecx
// 0072274c  2bd6                 sub edx, esi
// 0072274e  42                   inc edx
// 0072274f  83c408               add esp, 8
// 00722752  83fa0a               cmp edx, 0xa
// 00722755  7d06                 jge 0x72275d
// 00722757  39442414             cmp dword ptr [esp + 0x14], eax
// 0072275b  760a                 jbe 0x722767
// 0072275d  01442414             add dword ptr [esp + 0x14], eax
// 00722761  46                   inc esi
// 00722762  4f                   dec edi
// 00722763  3bf1                 cmp esi, ecx
// 00722765  7cd9                 jl 0x722740
// 00722767  56                   push esi
// 00722768  53                   push ebx
// 00722769  e8b2f7ffff           call 0x721f20
// 0072276e  83c408               add esp, 8
// 00722771  b801000000           mov eax, 1
// 00722776  2bc6                 sub eax, esi
// 00722778  014504               add dword ptr [ebp + 4], eax
// 0072277b  5f                   pop edi
// 0072277c  5b                   pop ebx
// 0072277d  5e                   pop esi
// 0072277e  5d                   pop ebp
// 0072277f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _adjuststack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
