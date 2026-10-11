// roc 2007-03 005a8110  unit: seg_005a0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8110
//
// 005a8110  83ec08               sub esp, 8
// 005a8113  53                   push ebx
// 005a8114  55                   push ebp
// 005a8115  56                   push esi
// 005a8116  57                   push edi
// 005a8117  8bf9                 mov edi, ecx
// 005a8119  8b4704               mov eax, dword ptr [edi + 4]
// 005a811c  8b00                 mov eax, dword ptr [eax]
// 005a811e  8bf7                 mov esi, edi
// 005a8120  8be8                 mov ebp, eax
// 005a8122  89742410             mov dword ptr [esp + 0x10], esi
// 005a8126  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a812a  8d9b00000000         lea ebx, [ebx]
// 005a8130  85f6                 test esi, esi
// 005a8132  8b5f04               mov ebx, dword ptr [edi + 4]
// 005a8135  7404                 je 0x5a813b
// 005a8137  3bf7                 cmp esi, edi
// 005a8139  7406                 je 0x5a8141
// 005a813b  ff1544e97700         call dword ptr [0x77e944]
// 005a8141  3beb                 cmp ebp, ebx
// 005a8143  7430                 je 0x5a8175
// 005a8145  85f6                 test esi, esi
// 005a8147  7506                 jne 0x5a814f
// 005a8149  ff1544e97700         call dword ptr [0x77e944]
// 005a814f  3b6e04               cmp ebp, dword ptr [esi + 4]
// 005a8152  7506                 jne 0x5a815a
// 005a8154  ff1544e97700         call dword ptr [0x77e944]
// 005a815a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005a815d  e8ee420000           call 0x5ac450
// 005a8162  8d4c2410             lea ecx, [esp + 0x10]
// 005a8166  e8553defff           call 0x49bec0
// 005a816b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a816f  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a8173  ebbb                 jmp 0x5a8130
// 005a8175  5f                   pop edi
// 005a8176  5e                   pop esi
// 005a8177  5d                   pop ebp
// 005a8178  5b                   pop ebx
// 005a8179  83c408               add esp, 8
// 005a817c  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?notifyMovingPrimitives@Mechanism@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/Mechanism.cpp
