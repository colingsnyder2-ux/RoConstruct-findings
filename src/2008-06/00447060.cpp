// roc 2008-06 00447060  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447060
//
// 00447060  6aff                 push -1
// 00447062  68c98e7d00           push 0x7d8ec9
// 00447067  64a100000000         mov eax, dword ptr fs:[0]
// 0044706d  50                   push eax
// 0044706e  64892500000000       mov dword ptr fs:[0], esp
// 00447075  83ec1c               sub esp, 0x1c
// 00447078  53                   push ebx
// 00447079  56                   push esi
// 0044707a  57                   push edi
// 0044707b  6808149300           push 0x931408
// 00447080  8bf1                 mov esi, ecx
// 00447082  681c5f8100           push 0x815f1c
// 00447087  8974242c             mov dword ptr [esp + 0x2c], esi
// 0044708b  e800551200           call 0x56c590
// 00447090  8d442423             lea eax, [esp + 0x23]
// 00447094  50                   push eax
// 00447095  8d542427             lea edx, [esp + 0x27]
// 00447099  33ff                 xor edi, edi
// 0044709b  8d4e30               lea ecx, [esi + 0x30]
// 0044709e  52                   push edx
// 0044709f  897c2438             mov dword ptr [esp + 0x38], edi
// 004470a3  c706c85e8100         mov dword ptr [esi], 0x815ec8
// 004470a9  e862f0ffff           call 0x446110
// 004470ae  8d442423             lea eax, [esp + 0x23]
// 004470b2  50                   push eax
// 004470b3  8d542427             lea edx, [esp + 0x27]
// 004470b7  8d4e50               lea ecx, [esi + 0x50]
// 004470ba  52                   push edx
// 004470bb  c644243801           mov byte ptr [esp + 0x38], 1
// 004470c0  e84bf0ffff           call 0x446110
// 004470c5  6a04                 push 4
// 004470c7  c644243402           mov byte ptr [esp + 0x34], 2
// 004470cc  8d5e70               lea ebx, [esi + 0x70]
// 004470cf  e84c982500           call 0x6a0920
// 004470d4  83c404               add esp, 4
// 004470d7  3bc7                 cmp eax, edi
// 004470d9  7404                 je 0x4470df
// 004470db  8918                 mov dword ptr [eax], ebx
// 004470dd  eb02                 jmp 0x4470e1
// 004470df  33c0                 xor eax, eax
// 004470e1  8903                 mov dword ptr [ebx], eax
// 004470e3  897b0c               mov dword ptr [ebx + 0xc], edi
// 004470e6  897b10               mov dword ptr [ebx + 0x10], edi
// 004470e9  897b14               mov dword ptr [ebx + 0x14], edi
// 004470ec  6a04                 push 4
// 004470ee  c644243404           mov byte ptr [esp + 0x34], 4
// 004470f3  8d9e88000000         lea ebx, [esi + 0x88]
// 004470f9  e822982500           call 0x6a0920
// 004470fe  83c404               add esp, 4
// 00447101  3bc7                 cmp eax, edi
// 00447103  7404                 je 0x447109
// 00447105  8918                 mov dword ptr [eax], ebx
// 00447107  eb02                 jmp 0x44710b
// 00447109  33c0                 xor eax, eax
// 0044710b  8903                 mov dword ptr [ebx], eax
// 0044710d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447110  897b10               mov dword ptr [ebx + 0x10], edi
// 00447113  897b14               mov dword ptr [ebx + 0x14], edi
// 00447116  6a04                 push 4
// 00447118  c644243406           mov byte ptr [esp + 0x34], 6
// 0044711d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00447123  e8f8972500           call 0x6a0920
// 00447128  83c404               add esp, 4
// 0044712b  3bc7                 cmp eax, edi
// 0044712d  7404                 je 0x447133
// 0044712f  8918                 mov dword ptr [eax], ebx
// 00447131  eb02                 jmp 0x447135
// 00447133  33c0                 xor eax, eax
// 00447135  8903                 mov dword ptr [ebx], eax
// 00447137  897b0c               mov dword ptr [ebx + 0xc], edi
// 0044713a  897b10               mov dword ptr [ebx + 0x10], edi
// 0044713d  897b14               mov dword ptr [ebx + 0x14], edi
// 00447140  6a04                 push 4
// 00447142  c644243408           mov byte ptr [esp + 0x34], 8
// 00447147  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0044714d  e8ce972500           call 0x6a0920
// 00447152  83c404               add esp, 4
// 00447155  3bc7                 cmp eax, edi
// 00447157  7404                 je 0x44715d
// 00447159  8918                 mov dword ptr [eax], ebx
// 0044715b  eb02                 jmp 0x44715f
// 0044715d  33c0                 xor eax, eax
// 0044715f  8903                 mov dword ptr [ebx], eax
// 00447161  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447164  897b10               mov dword ptr [ebx + 0x10], edi
// 00447167  897b14               mov dword ptr [ebx + 0x14], edi
// 0044716a  6a04                 push 4
// 0044716c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00447171  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00447177  e8a4972500           call 0x6a0920
// 0044717c  83c404               add esp, 4
// 0044717f  3bc7                 cmp eax, edi
// 00447181  7404                 je 0x447187
// 00447183  8918                 mov dword ptr [eax], ebx
// 00447185  eb02                 jmp 0x447189
// 00447187  33c0                 xor eax, eax
// 00447189  8903                 mov dword ptr [ebx], eax
// 0044718b  897b0c               mov dword ptr [ebx + 0xc], edi
// 0044718e  897b10               mov dword ptr [ebx + 0x10], edi
// 00447191  897b14               mov dword ptr [ebx + 0x14], edi
// 00447194  68145f8100           push 0x815f14
// 00447199  6a01                 push 1
// 0044719b  8bce                 mov ecx, esi
// 0044719d  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 004471a2  e889632000           call 0x64d530
// 004471a7  68105f8100           push 0x815f10
// 004471ac  6a04                 push 4
// 004471ae  8bce                 mov ecx, esi
// 004471b0  e87b632000           call 0x64d530
// 004471b5  680c5f8100           push 0x815f0c
// 004471ba  6a08                 push 8
// 004471bc  8bce                 mov ecx, esi
// 004471be  e86d632000           call 0x64d530
// 004471c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004471c7  5f                   pop edi
// 004471c8  8bc6                 mov eax, esi
// 004471ca  5e                   pop esi
// 004471cb  5b                   pop ebx
// 004471cc  64890d00000000       mov dword ptr fs:[0], ecx
// 004471d3  83c428               add esp, 0x28
// 004471d6  c3                   ret 
// library rbxgs/roc_unit_17a2063a9f68116b.cpp (function ??0?$EnumDesc@W4AASamples@CRenderSettings@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_17a2063a9f68116b.cpp
