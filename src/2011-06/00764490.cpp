// roc 2011-06 00764490  unit: seg_00760000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764490
//
// 00764490  53                   push ebx
// 00764491  55                   push ebp
// 00764492  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00764496  56                   push esi
// 00764497  8b742418             mov esi, dword ptr [esp + 0x18]
// 0076449b  57                   push edi
// 0076449c  85f6                 test esi, esi
// 0076449e  741b                 je 0x7644bb
// 007644a0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007644a4  57                   push edi
// 007644a5  55                   push ebp
// 007644a6  e8a5e0ffff           call 0x762550
// 007644ab  83c408               add esp, 8
// 007644ae  85c0                 test eax, eax
// 007644b0  7f04                 jg 0x7644b6
// 007644b2  8bc6                 mov eax, esi
// 007644b4  eb15                 jmp 0x7644cb
// 007644b6  6a00                 push 0
// 007644b8  57                   push edi
// 007644b9  eb07                 jmp 0x7644c2
// 007644bb  8b442418             mov eax, dword ptr [esp + 0x18]
// 007644bf  6a00                 push 0
// 007644c1  50                   push eax
// 007644c2  55                   push ebp
// 007644c3  e8c8fcffff           call 0x764190
// 007644c8  83c40c               add esp, 0xc
// 007644cb  8b742420             mov esi, dword ptr [esp + 0x20]
// 007644cf  8b0e                 mov ecx, dword ptr [esi]
// 007644d1  33ff                 xor edi, edi
// 007644d3  85c9                 test ecx, ecx
// 007644d5  743b                 je 0x764512
// 007644d7  8bd0                 mov edx, eax
// 007644d9  8da42400000000       lea esp, [esp]
// 007644e0  8a19                 mov bl, byte ptr [ecx]
// 007644e2  3a1a                 cmp bl, byte ptr [edx]
// 007644e4  751a                 jne 0x764500
// 007644e6  84db                 test bl, bl
// 007644e8  7412                 je 0x7644fc
// 007644ea  8a5901               mov bl, byte ptr [ecx + 1]
// 007644ed  3a5a01               cmp bl, byte ptr [edx + 1]
// 007644f0  750e                 jne 0x764500
// 007644f2  83c102               add ecx, 2
// 007644f5  83c202               add edx, 2
// 007644f8  84db                 test bl, bl
// 007644fa  75e4                 jne 0x7644e0
// 007644fc  33c9                 xor ecx, ecx
// 007644fe  eb05                 jmp 0x764505
// 00764500  1bc9                 sbb ecx, ecx
// 00764502  83d9ff               sbb ecx, -1
// 00764505  85c9                 test ecx, ecx
// 00764507  7429                 je 0x764532
// 00764509  8b4cbe04             mov ecx, dword ptr [esi + edi*4 + 4]
// 0076450d  47                   inc edi
// 0076450e  85c9                 test ecx, ecx
// 00764510  75c5                 jne 0x7644d7
// 00764512  50                   push eax
// 00764513  68fc65ab00           push 0xab65fc
// 00764518  55                   push ebp
// 00764519  e822e5ffff           call 0x762a40
// 0076451e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00764522  50                   push eax
// 00764523  51                   push ecx
// 00764524  55                   push ebp
// 00764525  e876faffff           call 0x763fa0
// 0076452a  83c418               add esp, 0x18
// 0076452d  5f                   pop edi
// 0076452e  5e                   pop esi
// 0076452f  5d                   pop ebp
// 00764530  5b                   pop ebx
// 00764531  c3                   ret 
// 00764532  8bc7                 mov eax, edi
// 00764534  5f                   pop edi
// 00764535  5e                   pop esi
// 00764536  5d                   pop ebp
// 00764537  5b                   pop ebx
// 00764538  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkoption)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
