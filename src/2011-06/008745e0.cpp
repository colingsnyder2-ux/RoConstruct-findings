// roc 2011-06 008745e0  unit: CXTPToolTipContext  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008745e0
//
// 008745e0  6aff                 push -1
// 008745e2  68897aa000           push 0xa07a89
// 008745e7  64a100000000         mov eax, dword ptr fs:[0]
// 008745ed  50                   push eax
// 008745ee  51                   push ecx
// 008745ef  53                   push ebx
// 008745f0  56                   push esi
// 008745f1  57                   push edi
// 008745f2  a12058c900           mov eax, dword ptr [0xc95820]
// 008745f7  33c4                 xor eax, esp
// 008745f9  50                   push eax
// 008745fa  8d442414             lea eax, [esp + 0x14]
// 008745fe  64a300000000         mov dword ptr fs:[0], eax
// 00874604  8bf1                 mov esi, ecx
// 00874606  89742410             mov dword ptr [esp + 0x10], esi
// 0087460a  c706c4cbac00         mov dword ptr [esi], 0xaccbc4
// 00874610  33ff                 xor edi, edi
// 00874612  397e5c               cmp dword ptr [esi + 0x5c], edi
// 00874615  c744241c05000000     mov dword ptr [esp + 0x1c], 5
// 0087461d  7e36                 jle 0x874655
// 0087461f  90                   nop 
// 00874620  85ff                 test edi, edi
// 00874622  0f8c9f000000         jl 0x8746c7
// 00874628  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 0087462b  0f8d96000000         jge 0x8746c7
// 00874631  8b4658               mov eax, dword ptr [esi + 0x58]
// 00874634  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00874637  8d04b8               lea eax, [eax + edi*4]
// 0087463a  85db                 test ebx, ebx
// 0087463c  7411                 je 0x87464f
// 0087463e  8bcb                 mov ecx, ebx
// 00874640  ff15082ea400         call dword ptr [0xa42e08]
// 00874646  53                   push ebx
// 00874647  e80c5af9ff           call 0x80a058
// 0087464c  83c404               add esp, 4
// 0087464f  47                   inc edi
// 00874650  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00874653  7ccb                 jl 0x874620
// 00874655  6aff                 push -1
// 00874657  8d7e54               lea edi, [esi + 0x54]
// 0087465a  6a00                 push 0
// 0087465c  8bcf                 mov ecx, edi
// 0087465e  e8dda4fcff           call 0x83eb40
// 00874663  6a00                 push 0
// 00874665  8bce                 mov ecx, esi
// 00874667  e8d4feffff           call 0x874540
// 0087466c  8d8e28010000         lea ecx, [esi + 0x128]
// 00874672  ff15082ea400         call dword ptr [0xa42e08]
// 00874678  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0087467e  ff15082ea400         call dword ptr [0xa42e08]
// 00874684  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0087468a  ff15082ea400         call dword ptr [0xa42e08]
// 00874690  8d4e70               lea ecx, [esi + 0x70]
// 00874693  ff15082ea400         call dword ptr [0xa42e08]
// 00874699  8bcf                 mov ecx, edi
// 0087469b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 008746a0  e82befffff           call 0x8735d0
// 008746a5  8bce                 mov ecx, esi
// 008746a7  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008746af  e86664f9ff           call 0x80ab1a
// 008746b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008746b8  64890d00000000       mov dword ptr fs:[0], ecx
// 008746bf  59                   pop ecx
// 008746c0  5f                   pop edi
// 008746c1  5e                   pop esi
// 008746c2  5b                   pop ebx
// 008746c3  83c410               add esp, 0x10
// 008746c6  c3                   ret 
// 008746c7  e83e5cf9ff           call 0x80a30a
// copied from an identical function in another client (function ??1CXTPToolTipContextToolTip@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp