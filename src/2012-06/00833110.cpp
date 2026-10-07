// roc 2012-06 00833110  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833110
//
// 00833110  55                   push ebp
// 00833111  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00833115  56                   push esi
// 00833116  be01000000           mov esi, 1
// 0083311b  397504               cmp dword ptr [ebp + 4], esi
// 0083311e  7e5d                 jle 0x83317d
// 00833120  53                   push ebx
// 00833121  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00833124  57                   push edi
// 00833125  6aff                 push -1
// 00833127  53                   push ebx
// 00833128  e833eeffff           call 0x831f60
// 0083312d  83c408               add esp, 8
// 00833130  89442414             mov dword ptr [esp + 0x14], eax
// 00833134  bffeffffff           mov edi, 0xfffffffe
// 00833139  8da42400000000       lea esp, [esp]
// 00833140  57                   push edi
// 00833141  53                   push ebx
// 00833142  e819eeffff           call 0x831f60
// 00833147  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0083314a  8bd1                 mov edx, ecx
// 0083314c  2bd6                 sub edx, esi
// 0083314e  42                   inc edx
// 0083314f  83c408               add esp, 8
// 00833152  83fa0a               cmp edx, 0xa
// 00833155  7d06                 jge 0x83315d
// 00833157  39442414             cmp dword ptr [esp + 0x14], eax
// 0083315b  760a                 jbe 0x833167
// 0083315d  01442414             add dword ptr [esp + 0x14], eax
// 00833161  46                   inc esi
// 00833162  4f                   dec edi
// 00833163  3bf1                 cmp esi, ecx
// 00833165  7cd9                 jl 0x833140
// 00833167  56                   push esi
// 00833168  53                   push ebx
// 00833169  e852f9ffff           call 0x832ac0
// 0083316e  83c408               add esp, 8
// 00833171  b801000000           mov eax, 1
// 00833176  2bc6                 sub eax, esi
// 00833178  014504               add dword ptr [ebp + 4], eax
// 0083317b  5f                   pop edi
// 0083317c  5b                   pop ebx
// 0083317d  5e                   pop esi
// 0083317e  5d                   pop ebp
// 0083317f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _adjuststack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
