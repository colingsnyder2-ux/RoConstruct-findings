// from server: 100% by auto
// roc 2010-06 0077fc10  unit: seg_00770000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077fc10
//
// 0077fc10  53                   push ebx
// 0077fc11  56                   push esi
// 0077fc12  8bf1                 mov esi, ecx
// 0077fc14  8bd8                 mov ebx, eax
// 0077fc16  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077fc19  83f828               cmp eax, 0x28
// 0077fc1c  7422                 je 0x77fc40
// 0077fc1e  3d1d010000           cmp eax, 0x11d
// 0077fc23  7411                 je 0x77fc36
// 0077fc25  68c031a500           push 0xa531c0
// 0077fc2a  56                   push esi
// 0077fc2b  e860290000           call 0x782590
// 0077fc30  83c408               add esp, 8
// 0077fc33  5e                   pop esi
// 0077fc34  5b                   pop ebx
// 0077fc35  c3                   ret 
// 0077fc36  8bc6                 mov eax, esi
// 0077fc38  e823f3ffff           call 0x77ef60
// 0077fc3d  5e                   pop esi
// 0077fc3e  5b                   pop ebx
// 0077fc3f  c3                   ret 
// 0077fc40  57                   push edi
// 0077fc41  8b7e04               mov edi, dword ptr [esi + 4]
// 0077fc44  56                   push esi
// 0077fc45  e8363d0000           call 0x783980
// 0077fc4a  6a00                 push 0
// 0077fc4c  53                   push ebx
// 0077fc4d  56                   push esi
// 0077fc4e  e8ad060000           call 0x780300
// 0077fc53  8bc7                 mov eax, edi
// 0077fc55  6a28                 push 0x28
// 0077fc57  bf29000000           mov edi, 0x29
// 0077fc5c  e8cfeeffff           call 0x77eb30
// 0077fc61  8b4630               mov eax, dword ptr [esi + 0x30]
// 0077fc64  53                   push ebx
// 0077fc65  50                   push eax
// 0077fc66  e875010100           call 0x78fde0
// 0077fc6b  83c41c               add esp, 0x1c
// 0077fc6e  5f                   pop edi
// 0077fc6f  5e                   pop esi
// 0077fc70  5b                   pop ebx
// 0077fc71  c3                   ret 
// library lua-5.1.4/lparser.c (function _prefixexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
