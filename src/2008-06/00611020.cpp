// roc 2008-06 00611020  unit: RBX::BlockBlockContact  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00611020
//
// 00611020  53                   push ebx
// 00611021  56                   push esi
// 00611022  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00611026  57                   push edi
// 00611027  8b7e08               mov edi, dword ptr [esi + 8]
// 0061102a  8d442410             lea eax, [esp + 0x10]
// 0061102e  50                   push eax
// 0061102f  6aff                 push -1
// 00611031  57                   push edi
// 00611032  e8d90f0000           call 0x612010
// 00611037  8b0e                 mov ecx, dword ptr [esi]
// 00611039  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061103d  8bde                 mov ebx, esi
// 0061103f  2bd9                 sub ebx, ecx
// 00611041  81c30c020000         add ebx, 0x20c
// 00611047  83c40c               add esp, 0xc
// 0061104a  3bd3                 cmp edx, ebx
// 0061104c  771d                 ja 0x61106b
// 0061104e  52                   push edx
// 0061104f  50                   push eax
// 00611050  51                   push ecx
// 00611051  e88a070900           call 0x6a17e0
// 00611056  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061105a  010e                 add dword ptr [esi], ecx
// 0061105c  6afe                 push -2
// 0061105e  57                   push edi
// 0061105f  e8bc0b0000           call 0x611c20
// 00611064  83c414               add esp, 0x14
// 00611067  5f                   pop edi
// 00611068  5e                   pop esi
// 00611069  5b                   pop ebx
// 0061106a  c3                   ret 
// 0061106b  2bce                 sub ecx, esi
// 0061106d  83e90c               sub ecx, 0xc
// 00611070  741e                 je 0x611090
// 00611072  8b5608               mov edx, dword ptr [esi + 8]
// 00611075  51                   push ecx
// 00611076  8d5e0c               lea ebx, [esi + 0xc]
// 00611079  53                   push ebx
// 0061107a  52                   push edx
// 0061107b  e8c0110000           call 0x612240
// 00611080  ff4604               inc dword ptr [esi + 4]
// 00611083  6afe                 push -2
// 00611085  57                   push edi
// 00611086  891e                 mov dword ptr [esi], ebx
// 00611088  e8330c0000           call 0x611cc0
// 0061108d  83c414               add esp, 0x14
// 00611090  ff4604               inc dword ptr [esi + 4]
// 00611093  56                   push esi
// 00611094  e837feffff           call 0x610ed0
// 00611099  83c404               add esp, 4
// 0061109c  5f                   pop edi
// 0061109d  5e                   pop esi
// 0061109e  5b                   pop ebx
// 0061109f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addvalue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
