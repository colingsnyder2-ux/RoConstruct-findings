// roc 2009-12 0083f690  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f690
//
// 0083f690  6aff                 push -1
// 0083f692  68a7cb9500           push 0x95cba7
// 0083f697  64a100000000         mov eax, dword ptr fs:[0]
// 0083f69d  50                   push eax
// 0083f69e  83ec28               sub esp, 0x28
// 0083f6a1  53                   push ebx
// 0083f6a2  55                   push ebp
// 0083f6a3  56                   push esi
// 0083f6a4  57                   push edi
// 0083f6a5  a10052b600           mov eax, dword ptr [0xb65200]
// 0083f6aa  33c4                 xor eax, esp
// 0083f6ac  50                   push eax
// 0083f6ad  8d44243c             lea eax, [esp + 0x3c]
// 0083f6b1  64a300000000         mov dword ptr fs:[0], eax
// 0083f6b7  8bf1                 mov esi, ecx
// 0083f6b9  89742418             mov dword ptr [esp + 0x18], esi
// 0083f6bd  e876710e00           call 0x926838
// 0083f6c2  33ed                 xor ebp, ebp
// 0083f6c4  8d4c2414             lea ecx, [esp + 0x14]
// 0083f6c8  896c2444             mov dword ptr [esp + 0x44], ebp
// 0083f6cc  c706ac8a9f00         mov dword ptr [esi], 0x9f8aac
// 0083f6d2  ff1574de9800         call dword ptr [0x98de74]
// 0083f6d8  c644244401           mov byte ptr [esp + 0x44], 1
// 0083f6dd  e8bef10200           call 0x86e8a0
// 0083f6e2  8b10                 mov edx, dword ptr [eax]
// 0083f6e4  8b5208               mov edx, dword ptr [edx + 8]
// 0083f6e7  68c9230000           push 0x23c9
// 0083f6ec  8d4c2418             lea ecx, [esp + 0x18]
// 0083f6f0  51                   push ecx
// 0083f6f1  8bc8                 mov ecx, eax
// 0083f6f3  ffd2                 call edx
// 0083f6f5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0083f6f9  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0083f6fd  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 0083f703  51                   push ecx
// 0083f704  50                   push eax
// 0083f705  8d4c241c             lea ecx, [esp + 0x1c]
// 0083f709  ff1580de9800         call dword ptr [0x98de80]
// 0083f70f  50                   push eax
// 0083f710  8bce                 mov ecx, esi
// 0083f712  e81b710e00           call 0x926832
// 0083f717  684c020000           push 0x24c
// 0083f71c  e83f41fbff           call 0x7f3860
// 0083f721  83c404               add esp, 4
// 0083f724  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083f728  c644244402           mov byte ptr [esp + 0x44], 2
// 0083f72d  3bc5                 cmp eax, ebp
// 0083f72f  740a                 je 0x83f73b
// 0083f731  56                   push esi
// 0083f732  8bc8                 mov ecx, eax
// 0083f734  e8b7570800           call 0x8c4ef0
// 0083f739  eb02                 jmp 0x83f73d
// 0083f73b  33c0                 xor eax, eax
// 0083f73d  50                   push eax
// 0083f73e  8bce                 mov ecx, esi
// 0083f740  c644244801           mov byte ptr [esp + 0x48], 1
// 0083f745  8986ac000000         mov dword ptr [esi + 0xac], eax
// 0083f74b  e870e2ffff           call 0x83d9c0
// 0083f750  6850010000           push 0x150
// 0083f755  e80641fbff           call 0x7f3860
// 0083f75a  83c404               add esp, 4
// 0083f75d  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083f761  c644244403           mov byte ptr [esp + 0x44], 3
// 0083f766  3bc5                 cmp eax, ebp
// 0083f768  740a                 je 0x83f774
// 0083f76a  56                   push esi
// 0083f76b  8bc8                 mov ecx, eax
// 0083f76d  e86e150000           call 0x840ce0
// 0083f772  eb02                 jmp 0x83f776
// 0083f774  33c0                 xor eax, eax
// 0083f776  50                   push eax
// 0083f777  8bce                 mov ecx, esi
// 0083f779  c644244801           mov byte ptr [esp + 0x48], 1
// 0083f77e  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 0083f784  e837e2ffff           call 0x83d9c0
// 0083f789  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 0083f78f  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0083f795  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0083f79b  896c2420             mov dword ptr [esp + 0x20], ebp
// 0083f79f  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 0083f7a7  bb04000000           mov ebx, 4
// 0083f7ac  885c2444             mov byte ptr [esp + 0x44], bl
// 0083f7b0  e8ebf00200           call 0x86e8a0
// 0083f7b5  8b10                 mov edx, dword ptr [eax]
// 0083f7b7  8b5214               mov edx, dword ptr [edx + 0x14]
// 0083f7ba  688f230000           push 0x238f
// 0083f7bf  8d4c2420             lea ecx, [esp + 0x20]
// 0083f7c3  51                   push ecx
// 0083f7c4  8bc8                 mov ecx, eax
// 0083f7c6  ffd2                 call edx
// 0083f7c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083f7cc  8d442424             lea eax, [esp + 0x24]
// 0083f7d0  50                   push eax
// 0083f7d1  6a18                 push 0x18
// 0083f7d3  51                   push ecx
// 0083f7d4  ff155cb19800         call dword ptr [0x98b15c]
// 0083f7da  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083f7de  99                   cdq 
// 0083f7df  83e20f               and edx, 0xf
// 0083f7e2  03c2                 add eax, edx
// 0083f7e4  8bf8                 mov edi, eax
// 0083f7e6  6a7c                 push 0x7c
// 0083f7e8  c1ff04               sar edi, 4
// 0083f7eb  e87040fbff           call 0x7f3860
// 0083f7f0  83c404               add esp, 4
// 0083f7f3  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083f7f7  c644244405           mov byte ptr [esp + 0x44], 5
// 0083f7fc  3bc5                 cmp eax, ebp
// 0083f7fe  7409                 je 0x83f809
// 0083f800  8bc8                 mov ecx, eax
// 0083f802  e819d0fcff           call 0x80c820
// 0083f807  eb02                 jmp 0x83f80b
// 0083f809  33c0                 xor eax, eax
// 0083f80b  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0083f811  33c9                 xor ecx, ecx
// 0083f813  8bc7                 mov eax, edi
// 0083f815  f7e3                 mul ebx
// 0083f817  0f90c1               seto cl
// 0083f81a  885c2444             mov byte ptr [esp + 0x44], bl
// 0083f81e  f7d9                 neg ecx
// 0083f820  0bc8                 or ecx, eax
// 0083f822  51                   push ecx
// 0083f823  e81a43fbff           call 0x7f3b42
// 0083f828  8be8                 mov ebp, eax
// 0083f82a  83c404               add esp, 4
// 0083f82d  33c0                 xor eax, eax
// 0083f82f  85ff                 test edi, edi
// 0083f831  7e0d                 jle 0x83f840
// 0083f833  8d4801               lea ecx, [eax + 1]
// 0083f836  894c8500             mov dword ptr [ebp + eax*4], ecx
// 0083f83a  8bc1                 mov eax, ecx
// 0083f83c  3bc7                 cmp eax, edi
// 0083f83e  7cf3                 jl 0x83f833
// 0083f840  6a00                 push 0
// 0083f842  6a00                 push 0
// 0083f844  b810000000           mov eax, 0x10
// 0083f849  8bc8                 mov ecx, eax
// 0083f84b  51                   push ecx
// 0083f84c  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0083f852  50                   push eax
// 0083f853  57                   push edi
// 0083f854  55                   push ebp
// 0083f855  8d542434             lea edx, [esp + 0x34]
// 0083f859  52                   push edx
// 0083f85a  e841fefcff           call 0x80f6a0
// 0083f85f  55                   push ebp
// 0083f860  e8a142fbff           call 0x7f3b06
// 0083f865  814e5880000000       or dword ptr [esi + 0x58], 0x80
// 0083f86c  83c404               add esp, 4
// 0083f86f  8bce                 mov ecx, esi
// 0083f871  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 0083f87b  e840eaffff           call 0x83e2c0
// 0083f880  8d4c241c             lea ecx, [esp + 0x1c]
// 0083f884  c644244401           mov byte ptr [esp + 0x44], 1
// 0083f889  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 0083f891  e89af9bcff           call 0x40f230
// 0083f896  8d4c2414             lea ecx, [esp + 0x14]
// 0083f89a  ff15c0de9800         call dword ptr [0x98dec0]
// 0083f8a0  8bc6                 mov eax, esi
// 0083f8a2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083f8a6  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f8ad  59                   pop ecx
// 0083f8ae  5f                   pop edi
// 0083f8af  5e                   pop esi
// 0083f8b0  5d                   pop ebp
// 0083f8b1  5b                   pop ebx
// 0083f8b2  83c434               add esp, 0x34
// 0083f8b5  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPCustomizeSheet@@QAE@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals-string-calls Source\CommandBars\XTPCustomizeSheet.cpp