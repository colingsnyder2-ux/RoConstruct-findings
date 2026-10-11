// roc 2007-03 0052d770  unit: seg_00520000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052d770
//
// 0052d770  6aff                 push -1
// 0052d772  68c8117500           push 0x7511c8
// 0052d777  64a100000000         mov eax, dword ptr fs:[0]
// 0052d77d  50                   push eax
// 0052d77e  64892500000000       mov dword ptr fs:[0], esp
// 0052d785  83ec0c               sub esp, 0xc
// 0052d788  53                   push ebx
// 0052d789  55                   push ebp
// 0052d78a  56                   push esi
// 0052d78b  8bf1                 mov esi, ecx
// 0052d78d  57                   push edi
// 0052d78e  89742410             mov dword ptr [esp + 0x10], esi
// 0052d792  8b4604               mov eax, dword ptr [esi + 4]
// 0052d795  8b28                 mov ebp, dword ptr [eax]
// 0052d797  8bfe                 mov edi, esi
// 0052d799  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0052d7a1  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052d7a5  897c2414             mov dword ptr [esp + 0x14], edi
// 0052d7a9  8da42400000000       lea esp, [esp]
// 0052d7b0  85ff                 test edi, edi
// 0052d7b2  8b5e04               mov ebx, dword ptr [esi + 4]
// 0052d7b5  7404                 je 0x52d7bb
// 0052d7b7  3bfe                 cmp edi, esi
// 0052d7b9  7406                 je 0x52d7c1
// 0052d7bb  ff1544e97700         call dword ptr [0x77e944]
// 0052d7c1  3beb                 cmp ebp, ebx
// 0052d7c3  7441                 je 0x52d806
// 0052d7c5  85ff                 test edi, edi
// 0052d7c7  7506                 jne 0x52d7cf
// 0052d7c9  ff1544e97700         call dword ptr [0x77e944]
// 0052d7cf  3b6f04               cmp ebp, dword ptr [edi + 4]
// 0052d7d2  7506                 jne 0x52d7da
// 0052d7d4  ff1544e97700         call dword ptr [0x77e944]
// 0052d7da  8b7d28               mov edi, dword ptr [ebp + 0x28]
// 0052d7dd  85ff                 test edi, edi
// 0052d7df  7412                 je 0x52d7f3
// 0052d7e1  8d4f04               lea ecx, [edi + 4]
// 0052d7e4  ff158ce77700         call dword ptr [0x77e78c]
// 0052d7ea  57                   push edi
// 0052d7eb  e800090f00           call 0x61e0f0
// 0052d7f0  83c404               add esp, 4
// 0052d7f3  8d4c2414             lea ecx, [esp + 0x14]
// 0052d7f7  e874feffff           call 0x52d670
// 0052d7fc  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052d800  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052d804  ebaa                 jmp 0x52d7b0
// 0052d806  8b4604               mov eax, dword ptr [esi + 4]
// 0052d809  8b08                 mov ecx, dword ptr [eax]
// 0052d80b  50                   push eax
// 0052d80c  56                   push esi
// 0052d80d  51                   push ecx
// 0052d80e  56                   push esi
// 0052d80f  8d442424             lea eax, [esp + 0x24]
// 0052d813  50                   push eax
// 0052d814  8bce                 mov ecx, esi
// 0052d816  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0052d81e  e8ddaf0d00           call 0x608800
// 0052d823  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052d826  51                   push ecx
// 0052d827  e8c4080f00           call 0x61e0f0
// 0052d82c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052d830  83c404               add esp, 4
// 0052d833  33c0                 xor eax, eax
// 0052d835  5f                   pop edi
// 0052d836  894604               mov dword ptr [esi + 4], eax
// 0052d839  894608               mov dword ptr [esi + 8], eax
// 0052d83c  5e                   pop esi
// 0052d83d  5d                   pop ebp
// 0052d83e  5b                   pop ebx
// 0052d83f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052d846  83c418               add esp, 0x18
// 0052d849  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ??1NamMap@Name@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
