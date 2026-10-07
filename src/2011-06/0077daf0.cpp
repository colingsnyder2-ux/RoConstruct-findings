// roc 2011-06 0077daf0  unit: seg_00770000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077daf0
//
// 0077daf0  83ec3c               sub esp, 0x3c
// 0077daf3  56                   push esi
// 0077daf4  8b7714               mov esi, dword ptr [edi + 0x14]
// 0077daf7  8b4604               mov eax, dword ptr [esi + 4]
// 0077dafa  83780806             cmp dword ptr [eax + 8], 6
// 0077dafe  7559                 jne 0x77db59
// 0077db00  8b00                 mov eax, dword ptr [eax]
// 0077db02  80780600             cmp byte ptr [eax + 6], 0
// 0077db06  7551                 jne 0x77db59
// 0077db08  53                   push ebx
// 0077db09  8bc6                 mov eax, esi
// 0077db0b  8bd7                 mov edx, edi
// 0077db0d  e87ef4ffff           call 0x77cf90
// 0077db12  8b7604               mov esi, dword ptr [esi + 4]
// 0077db15  837e0806             cmp dword ptr [esi + 8], 6
// 0077db19  8bd8                 mov ebx, eax
// 0077db1b  750d                 jne 0x77db2a
// 0077db1d  8b36                 mov esi, dword ptr [esi]
// 0077db1f  807e0600             cmp byte ptr [esi + 6], 0
// 0077db23  7505                 jne 0x77db2a
// 0077db25  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077db28  eb02                 jmp 0x77db2c
// 0077db2a  33c0                 xor eax, eax
// 0077db2c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0077db2f  6a3c                 push 0x3c
// 0077db31  83c110               add ecx, 0x10
// 0077db34  51                   push ecx
// 0077db35  8d542410             lea edx, [esp + 0x10]
// 0077db39  52                   push edx
// 0077db3a  e801f3ffff           call 0x77ce40
// 0077db3f  8b442454             mov eax, dword ptr [esp + 0x54]
// 0077db43  50                   push eax
// 0077db44  53                   push ebx
// 0077db45  8d4c241c             lea ecx, [esp + 0x1c]
// 0077db49  51                   push ecx
// 0077db4a  684877ab00           push 0xab7748
// 0077db4f  57                   push edi
// 0077db50  e8cbf2ffff           call 0x77ce20
// 0077db55  83c420               add esp, 0x20
// 0077db58  5b                   pop ebx
// 0077db59  5e                   pop esi
// 0077db5a  83c43c               add esp, 0x3c
// 0077db5d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _addinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
