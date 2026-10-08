// from server: 100% by auto
// roc 2009-06 006c8740  unit: seg_006c0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8740
//
// 006c8740  83ec3c               sub esp, 0x3c
// 006c8743  56                   push esi
// 006c8744  8b7714               mov esi, dword ptr [edi + 0x14]
// 006c8747  8b4604               mov eax, dword ptr [esi + 4]
// 006c874a  83780806             cmp dword ptr [eax + 8], 6
// 006c874e  7559                 jne 0x6c87a9
// 006c8750  8b00                 mov eax, dword ptr [eax]
// 006c8752  80780600             cmp byte ptr [eax + 6], 0
// 006c8756  7551                 jne 0x6c87a9
// 006c8758  53                   push ebx
// 006c8759  8bc6                 mov eax, esi
// 006c875b  8bd7                 mov edx, edi
// 006c875d  e88ef4ffff           call 0x6c7bf0
// 006c8762  8b7604               mov esi, dword ptr [esi + 4]
// 006c8765  837e0806             cmp dword ptr [esi + 8], 6
// 006c8769  8bd8                 mov ebx, eax
// 006c876b  750d                 jne 0x6c877a
// 006c876d  8b36                 mov esi, dword ptr [esi]
// 006c876f  807e0600             cmp byte ptr [esi + 6], 0
// 006c8773  7505                 jne 0x6c877a
// 006c8775  8b4610               mov eax, dword ptr [esi + 0x10]
// 006c8778  eb02                 jmp 0x6c877c
// 006c877a  33c0                 xor eax, eax
// 006c877c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006c877f  6a3c                 push 0x3c
// 006c8781  83c110               add ecx, 0x10
// 006c8784  51                   push ecx
// 006c8785  8d542410             lea edx, [esp + 0x10]
// 006c8789  52                   push edx
// 006c878a  e831090000           call 0x6c90c0
// 006c878f  8b442454             mov eax, dword ptr [esp + 0x54]
// 006c8793  50                   push eax
// 006c8794  53                   push ebx
// 006c8795  8d4c241c             lea ecx, [esp + 0x1c]
// 006c8799  51                   push ecx
// 006c879a  68c4c28e00           push 0x8ec2c4
// 006c879f  57                   push edi
// 006c87a0  e8fb080000           call 0x6c90a0
// 006c87a5  83c420               add esp, 0x20
// 006c87a8  5b                   pop ebx
// 006c87a9  5e                   pop esi
// 006c87aa  83c43c               add esp, 0x3c
// 006c87ad  c3                   ret 
// library lua-5.1.4/ldebug.c (function _addinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
