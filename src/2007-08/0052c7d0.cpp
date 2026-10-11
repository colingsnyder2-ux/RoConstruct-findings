// roc 2007-08 0052c7d0  unit: seg_00520000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052c7d0
//
// 0052c7d0  6aff                 push -1
// 0052c7d2  6858027500           push 0x750258
// 0052c7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0052c7dd  50                   push eax
// 0052c7de  64892500000000       mov dword ptr fs:[0], esp
// 0052c7e5  83ec0c               sub esp, 0xc
// 0052c7e8  53                   push ebx
// 0052c7e9  55                   push ebp
// 0052c7ea  56                   push esi
// 0052c7eb  8bf1                 mov esi, ecx
// 0052c7ed  57                   push edi
// 0052c7ee  89742410             mov dword ptr [esp + 0x10], esi
// 0052c7f2  8b4604               mov eax, dword ptr [esi + 4]
// 0052c7f5  8b28                 mov ebp, dword ptr [eax]
// 0052c7f7  8bfe                 mov edi, esi
// 0052c7f9  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0052c801  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052c805  897c2414             mov dword ptr [esp + 0x14], edi
// 0052c809  8da42400000000       lea esp, [esp]
// 0052c810  85ff                 test edi, edi
// 0052c812  8b5e04               mov ebx, dword ptr [esi + 4]
// 0052c815  7404                 je 0x52c81b
// 0052c817  3bfe                 cmp edi, esi
// 0052c819  7406                 je 0x52c821
// 0052c81b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052c821  3beb                 cmp ebp, ebx
// 0052c823  7441                 je 0x52c866
// 0052c825  85ff                 test edi, edi
// 0052c827  7506                 jne 0x52c82f
// 0052c829  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052c82f  3b6f04               cmp ebp, dword ptr [edi + 4]
// 0052c832  7506                 jne 0x52c83a
// 0052c834  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052c83a  8b7d28               mov edi, dword ptr [ebp + 0x28]
// 0052c83d  85ff                 test edi, edi
// 0052c83f  7412                 je 0x52c853
// 0052c841  8d4f04               lea ecx, [edi + 4]
// 0052c844  ff15ace67700         call dword ptr [0x77e6ac]
// 0052c84a  57                   push edi
// 0052c84b  e812341000           call 0x62fc62
// 0052c850  83c404               add esp, 4
// 0052c853  8d4c2414             lea ecx, [esp + 0x14]
// 0052c857  e8c4d60a00           call 0x5d9f20
// 0052c85c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052c860  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052c864  ebaa                 jmp 0x52c810
// 0052c866  8b4604               mov eax, dword ptr [esi + 4]
// 0052c869  8b08                 mov ecx, dword ptr [eax]
// 0052c86b  50                   push eax
// 0052c86c  56                   push esi
// 0052c86d  51                   push ecx
// 0052c86e  56                   push esi
// 0052c86f  8d442424             lea eax, [esp + 0x24]
// 0052c873  50                   push eax
// 0052c874  8bce                 mov ecx, esi
// 0052c876  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0052c87e  e8dd6b0100           call 0x543460
// 0052c883  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052c886  51                   push ecx
// 0052c887  e8d6331000           call 0x62fc62
// 0052c88c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052c890  83c404               add esp, 4
// 0052c893  33c0                 xor eax, eax
// 0052c895  5f                   pop edi
// 0052c896  894604               mov dword ptr [esi + 4], eax
// 0052c899  894608               mov dword ptr [esi + 8], eax
// 0052c89c  5e                   pop esi
// 0052c89d  5d                   pop ebp
// 0052c89e  5b                   pop ebx
// 0052c89f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052c8a6  83c418               add esp, 0x18
// 0052c8a9  c3                   ret 
// library openrbx-client/App\util\Name.cpp (function ??1NamMap@Name@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
