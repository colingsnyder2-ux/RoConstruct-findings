// roc 2009-12 00815140  unit: CXTPCommandBarsOptions  size: 537 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815140
//
// 00815140  6aff                 push -1
// 00815142  68d7a49500           push 0x95a4d7
// 00815147  64a100000000         mov eax, dword ptr fs:[0]
// 0081514d  50                   push eax
// 0081514e  83ec08               sub esp, 8
// 00815151  53                   push ebx
// 00815152  56                   push esi
// 00815153  57                   push edi
// 00815154  a10052b600           mov eax, dword ptr [0xb65200]
// 00815159  33c4                 xor eax, esp
// 0081515b  50                   push eax
// 0081515c  8d442418             lea eax, [esp + 0x18]
// 00815160  64a300000000         mov dword ptr fs:[0], eax
// 00815166  8bf1                 mov esi, ecx
// 00815168  89742410             mov dword ptr [esp + 0x10], esi
// 0081516c  e8d1121100           call 0x926442
// 00815171  33ff                 xor edi, edi
// 00815173  8d4e2c               lea ecx, [esi + 0x2c]
// 00815176  897c2420             mov dword ptr [esp + 0x20], edi
// 0081517a  c7066c3e9f00         mov dword ptr [esi], 0x9f3e6c
// 00815180  e8fbf5ffff           call 0x814780
// 00815185  8d4e70               lea ecx, [esi + 0x70]
// 00815188  897e64               mov dword ptr [esi + 0x64], edi
// 0081518b  ff1574de9800         call dword ptr [0x98de74]
// 00815191  8d4e7c               lea ecx, [esi + 0x7c]
// 00815194  e887f5ffff           call 0x814720
// 00815199  33c0                 xor eax, eax
// 0081519b  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 008151a1  898690000000         mov dword ptr [esi + 0x90], eax
// 008151a7  898694000000         mov dword ptr [esi + 0x94], eax
// 008151ad  898698000000         mov dword ptr [esi + 0x98], eax
// 008151b3  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008151b9  b303                 mov bl, 3
// 008151bb  6a44                 push 0x44
// 008151bd  885c2424             mov byte ptr [esp + 0x24], bl
// 008151c1  897e58               mov dword ptr [esi + 0x58], edi
// 008151c4  897e5c               mov dword ptr [esi + 0x5c], edi
// 008151c7  897e6c               mov dword ptr [esi + 0x6c], edi
// 008151ca  897e60               mov dword ptr [esi + 0x60], edi
// 008151cd  e88ee6fdff           call 0x7f3860
// 008151d2  83c404               add esp, 4
// 008151d5  89442414             mov dword ptr [esp + 0x14], eax
// 008151d9  c644242004           mov byte ptr [esp + 0x20], 4
// 008151de  3bc7                 cmp eax, edi
// 008151e0  740a                 je 0x8151ec
// 008151e2  56                   push esi
// 008151e3  8bc8                 mov ecx, eax
// 008151e5  e8a6aa0500           call 0x86fc90
// 008151ea  eb02                 jmp 0x8151ee
// 008151ec  33c0                 xor eax, eax
// 008151ee  68d0000000           push 0xd0
// 008151f3  885c2424             mov byte ptr [esp + 0x24], bl
// 008151f7  89464c               mov dword ptr [esi + 0x4c], eax
// 008151fa  897e50               mov dword ptr [esi + 0x50], edi
// 008151fd  897e54               mov dword ptr [esi + 0x54], edi
// 00815200  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 00815206  89beac000000         mov dword ptr [esi + 0xac], edi
// 0081520c  e84fe6fdff           call 0x7f3860
// 00815211  83c404               add esp, 4
// 00815214  89442414             mov dword ptr [esp + 0x14], eax
// 00815218  c644242005           mov byte ptr [esp + 0x20], 5
// 0081521d  3bc7                 cmp eax, edi
// 0081521f  7409                 je 0x81522a
// 00815221  8bc8                 mov ecx, eax
// 00815223  e808f6ffff           call 0x814830
// 00815228  eb02                 jmp 0x81522c
// 0081522a  33c0                 xor eax, eax
// 0081522c  894674               mov dword ptr [esi + 0x74], eax
// 0081522f  89b0c8000000         mov dword ptr [eax + 0xc8], esi
// 00815235  8bce                 mov ecx, esi
// 00815237  885c2420             mov byte ptr [esp + 0x20], bl
// 0081523b  897e20               mov dword ptr [esi + 0x20], edi
// 0081523e  897e24               mov dword ptr [esi + 0x24], edi
// 00815241  e802121100           call 0x926448
// 00815246  68a8000000           push 0xa8
// 0081524b  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 00815251  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 00815257  e804e6fdff           call 0x7f3860
// 0081525c  83c404               add esp, 4
// 0081525f  89442414             mov dword ptr [esp + 0x14], eax
// 00815263  c644242006           mov byte ptr [esp + 0x20], 6
// 00815268  3bc7                 cmp eax, edi
// 0081526a  7409                 je 0x815275
// 0081526c  8bc8                 mov ecx, eax
// 0081526e  e87dc70400           call 0x8619f0
// 00815273  eb02                 jmp 0x815277
// 00815275  33c0                 xor eax, eax
// 00815277  57                   push edi
// 00815278  6a02                 push 2
// 0081527a  8bc8                 mov ecx, eax
// 0081527c  885c2428             mov byte ptr [esp + 0x28], bl
// 00815280  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00815286  e855af0400           call 0x8601e0
// 0081528b  6a3c                 push 0x3c
// 0081528d  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 00815293  c786b000000001000000 mov dword ptr [esi + 0xb0], 1
// 0081529d  e8bee5fdff           call 0x7f3860
// 008152a2  83c404               add esp, 4
// 008152a5  89442414             mov dword ptr [esp + 0x14], eax
// 008152a9  c644242007           mov byte ptr [esp + 0x20], 7
// 008152ae  3bc7                 cmp eax, edi
// 008152b0  740a                 je 0x8152bc
// 008152b2  56                   push esi
// 008152b3  8bc8                 mov ecx, eax
// 008152b5  e8d6a50700           call 0x88f890
// 008152ba  eb02                 jmp 0x8152be
// 008152bc  33c0                 xor eax, eax
// 008152be  6a38                 push 0x38
// 008152c0  885c2424             mov byte ptr [esp + 0x24], bl
// 008152c4  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008152ca  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 008152d0  897e28               mov dword ptr [esi + 0x28], edi
// 008152d3  897e40               mov dword ptr [esi + 0x40], edi
// 008152d6  897e44               mov dword ptr [esi + 0x44], edi
// 008152d9  897e48               mov dword ptr [esi + 0x48], edi
// 008152dc  e87fe5fdff           call 0x7f3860
// 008152e1  83c404               add esp, 4
// 008152e4  89442414             mov dword ptr [esp + 0x14], eax
// 008152e8  c644242008           mov byte ptr [esp + 0x20], 8
// 008152ed  3bc7                 cmp eax, edi
// 008152ef  740a                 je 0x8152fb
// 008152f1  56                   push esi
// 008152f2  8bc8                 mov ecx, eax
// 008152f4  e8d72afeff           call 0x7f7dd0
// 008152f9  eb02                 jmp 0x8152fd
// 008152fb  33c0                 xor eax, eax
// 008152fd  6a38                 push 0x38
// 008152ff  885c2424             mov byte ptr [esp + 0x24], bl
// 00815303  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00815309  897e68               mov dword ptr [esi + 0x68], edi
// 0081530c  e84fe5fdff           call 0x7f3860
// 00815311  83c404               add esp, 4
// 00815314  89442414             mov dword ptr [esp + 0x14], eax
// 00815318  c644242009           mov byte ptr [esp + 0x20], 9
// 0081531d  3bc7                 cmp eax, edi
// 0081531f  7420                 je 0x815341
// 00815321  56                   push esi
// 00815322  8bc8                 mov ecx, eax
// 00815324  e8d7f4ffff           call 0x814800
// 00815329  894678               mov dword ptr [esi + 0x78], eax
// 0081532c  8bc6                 mov eax, esi
// 0081532e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00815332  64890d00000000       mov dword ptr fs:[0], ecx
// 00815339  59                   pop ecx
// 0081533a  5f                   pop edi
// 0081533b  5e                   pop esi
// 0081533c  5b                   pop ebx
// 0081533d  83c414               add esp, 0x14
// 00815340  c3                   ret 
// 00815341  897e78               mov dword ptr [esi + 0x78], edi
// 00815344  8bc6                 mov eax, esi
// 00815346  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081534a  64890d00000000       mov dword ptr fs:[0], ecx
// 00815351  59                   pop ecx
// 00815352  5f                   pop edi
// 00815353  5e                   pop esi
// 00815354  5b                   pop ebx
// 00815355  83c414               add esp, 0x14
// 00815358  c3                   ret 
// copied from an identical function in another client (function ??0CXTPCommandBars@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp