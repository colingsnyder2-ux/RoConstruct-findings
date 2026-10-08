// from server: 100% by auto
// roc 2010-06 00723220  unit: RBX::UniversalTool  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723220
//
// 00723220  53                   push ebx
// 00723221  55                   push ebp
// 00723222  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00723226  56                   push esi
// 00723227  8b742418             mov esi, dword ptr [esp + 0x18]
// 0072322b  57                   push edi
// 0072322c  85f6                 test esi, esi
// 0072322e  741b                 je 0x72324b
// 00723230  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00723234  57                   push edi
// 00723235  55                   push ebp
// 00723236  e805dfffff           call 0x721140
// 0072323b  83c408               add esp, 8
// 0072323e  85c0                 test eax, eax
// 00723240  7f04                 jg 0x723246
// 00723242  8bc6                 mov eax, esi
// 00723244  eb15                 jmp 0x72325b
// 00723246  6a00                 push 0
// 00723248  57                   push edi
// 00723249  eb07                 jmp 0x723252
// 0072324b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072324f  6a00                 push 0
// 00723251  50                   push eax
// 00723252  55                   push ebp
// 00723253  e8c8fcffff           call 0x722f20
// 00723258  83c40c               add esp, 0xc
// 0072325b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0072325f  8b0e                 mov ecx, dword ptr [esi]
// 00723261  33ff                 xor edi, edi
// 00723263  85c9                 test ecx, ecx
// 00723265  743b                 je 0x7232a2
// 00723267  8bd0                 mov edx, eax
// 00723269  8da42400000000       lea esp, [esp]
// 00723270  8a19                 mov bl, byte ptr [ecx]
// 00723272  3a1a                 cmp bl, byte ptr [edx]
// 00723274  751a                 jne 0x723290
// 00723276  84db                 test bl, bl
// 00723278  7412                 je 0x72328c
// 0072327a  8a5901               mov bl, byte ptr [ecx + 1]
// 0072327d  3a5a01               cmp bl, byte ptr [edx + 1]
// 00723280  750e                 jne 0x723290
// 00723282  83c102               add ecx, 2
// 00723285  83c202               add edx, 2
// 00723288  84db                 test bl, bl
// 0072328a  75e4                 jne 0x723270
// 0072328c  33c9                 xor ecx, ecx
// 0072328e  eb05                 jmp 0x723295
// 00723290  1bc9                 sbb ecx, ecx
// 00723292  83d9ff               sbb ecx, -1
// 00723295  85c9                 test ecx, ecx
// 00723297  7429                 je 0x7232c2
// 00723299  8b4cbe04             mov ecx, dword ptr [esi + edi*4 + 4]
// 0072329d  47                   inc edi
// 0072329e  85c9                 test ecx, ecx
// 007232a0  75c5                 jne 0x723267
// 007232a2  50                   push eax
// 007232a3  68e0cfa400           push 0xa4cfe0
// 007232a8  55                   push ebp
// 007232a9  e882e3ffff           call 0x721630
// 007232ae  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007232b2  50                   push eax
// 007232b3  51                   push ecx
// 007232b4  55                   push ebp
// 007232b5  e876faffff           call 0x722d30
// 007232ba  83c418               add esp, 0x18
// 007232bd  5f                   pop edi
// 007232be  5e                   pop esi
// 007232bf  5d                   pop ebp
// 007232c0  5b                   pop ebx
// 007232c1  c3                   ret 
// 007232c2  8bc7                 mov eax, edi
// 007232c4  5f                   pop edi
// 007232c5  5e                   pop esi
// 007232c6  5d                   pop ebp
// 007232c7  5b                   pop ebx
// 007232c8  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkoption)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
