// roc 2008-06 0064d750  unit: RBX::SimJobStage  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d750
//
// 0064d750  6aff                 push -1
// 0064d752  6849b27d00           push 0x7db249
// 0064d757  64a100000000         mov eax, dword ptr fs:[0]
// 0064d75d  50                   push eax
// 0064d75e  64892500000000       mov dword ptr fs:[0], esp
// 0064d765  83ec20               sub esp, 0x20
// 0064d768  53                   push ebx
// 0064d769  55                   push ebp
// 0064d76a  56                   push esi
// 0064d76b  57                   push edi
// 0064d76c  68005e9500           push 0x955e00
// 0064d771  8bf1                 mov esi, ecx
// 0064d773  68e0b18400           push 0x84b1e0
// 0064d778  89742434             mov dword ptr [esp + 0x34], esi
// 0064d77c  e80feef1ff           call 0x56c590
// 0064d781  8d442427             lea eax, [esp + 0x27]
// 0064d785  50                   push eax
// 0064d786  8d54242b             lea edx, [esp + 0x2b]
// 0064d78a  33ff                 xor edi, edi
// 0064d78c  8d4e30               lea ecx, [esi + 0x30]
// 0064d78f  52                   push edx
// 0064d790  897c2440             mov dword ptr [esp + 0x40], edi
// 0064d794  c7067cfe8300         mov dword ptr [esi], 0x83fe7c
// 0064d79a  e87189dfff           call 0x446110
// 0064d79f  8d442427             lea eax, [esp + 0x27]
// 0064d7a3  50                   push eax
// 0064d7a4  8d4c242b             lea ecx, [esp + 0x2b]
// 0064d7a8  8d6e50               lea ebp, [esi + 0x50]
// 0064d7ab  51                   push ecx
// 0064d7ac  8bcd                 mov ecx, ebp
// 0064d7ae  c644244001           mov byte ptr [esp + 0x40], 1
// 0064d7b3  e85889dfff           call 0x446110
// 0064d7b8  6a04                 push 4
// 0064d7ba  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0064d7bf  8d5e70               lea ebx, [esi + 0x70]
// 0064d7c2  e859310500           call 0x6a0920
// 0064d7c7  83c404               add esp, 4
// 0064d7ca  3bc7                 cmp eax, edi
// 0064d7cc  7404                 je 0x64d7d2
// 0064d7ce  8918                 mov dword ptr [eax], ebx
// 0064d7d0  eb02                 jmp 0x64d7d4
// 0064d7d2  33c0                 xor eax, eax
// 0064d7d4  8903                 mov dword ptr [ebx], eax
// 0064d7d6  897b0c               mov dword ptr [ebx + 0xc], edi
// 0064d7d9  897b10               mov dword ptr [ebx + 0x10], edi
// 0064d7dc  897b14               mov dword ptr [ebx + 0x14], edi
// 0064d7df  6a04                 push 4
// 0064d7e1  c644243c04           mov byte ptr [esp + 0x3c], 4
// 0064d7e6  8d9e88000000         lea ebx, [esi + 0x88]
// 0064d7ec  e82f310500           call 0x6a0920
// 0064d7f1  83c404               add esp, 4
// 0064d7f4  3bc7                 cmp eax, edi
// 0064d7f6  7404                 je 0x64d7fc
// 0064d7f8  8918                 mov dword ptr [eax], ebx
// 0064d7fa  eb02                 jmp 0x64d7fe
// 0064d7fc  33c0                 xor eax, eax
// 0064d7fe  8903                 mov dword ptr [ebx], eax
// 0064d800  897b0c               mov dword ptr [ebx + 0xc], edi
// 0064d803  897b10               mov dword ptr [ebx + 0x10], edi
// 0064d806  897b14               mov dword ptr [ebx + 0x14], edi
// 0064d809  6a04                 push 4
// 0064d80b  c644243c06           mov byte ptr [esp + 0x3c], 6
// 0064d810  8d9ea0000000         lea ebx, [esi + 0xa0]
// 0064d816  e805310500           call 0x6a0920
// 0064d81b  83c404               add esp, 4
// 0064d81e  3bc7                 cmp eax, edi
// 0064d820  7404                 je 0x64d826
// 0064d822  8918                 mov dword ptr [eax], ebx
// 0064d824  eb02                 jmp 0x64d828
// 0064d826  33c0                 xor eax, eax
// 0064d828  8903                 mov dword ptr [ebx], eax
// 0064d82a  897b0c               mov dword ptr [ebx + 0xc], edi
// 0064d82d  897b10               mov dword ptr [ebx + 0x10], edi
// 0064d830  897b14               mov dword ptr [ebx + 0x14], edi
// 0064d833  6a04                 push 4
// 0064d835  c644243c08           mov byte ptr [esp + 0x3c], 8
// 0064d83a  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0064d840  e8db300500           call 0x6a0920
// 0064d845  83c404               add esp, 4
// 0064d848  3bc7                 cmp eax, edi
// 0064d84a  7404                 je 0x64d850
// 0064d84c  8918                 mov dword ptr [eax], ebx
// 0064d84e  eb02                 jmp 0x64d852
// 0064d850  33c0                 xor eax, eax
// 0064d852  8903                 mov dword ptr [ebx], eax
// 0064d854  897b0c               mov dword ptr [ebx + 0xc], edi
// 0064d857  897b10               mov dword ptr [ebx + 0x10], edi
// 0064d85a  897b14               mov dword ptr [ebx + 0x14], edi
// 0064d85d  6a04                 push 4
// 0064d85f  c644243c0a           mov byte ptr [esp + 0x3c], 0xa
// 0064d864  8d9ed0000000         lea ebx, [esi + 0xd0]
// 0064d86a  e8b1300500           call 0x6a0920
// 0064d86f  83c404               add esp, 4
// 0064d872  3bc7                 cmp eax, edi
// 0064d874  7404                 je 0x64d87a
// 0064d876  8918                 mov dword ptr [eax], ebx
// 0064d878  eb02                 jmp 0x64d87c
// 0064d87a  33c0                 xor eax, eax
// 0064d87c  8903                 mov dword ptr [ebx], eax
// 0064d87e  897b0c               mov dword ptr [ebx + 0xc], edi
// 0064d881  897b10               mov dword ptr [ebx + 0x10], edi
// 0064d884  897b14               mov dword ptr [ebx + 0x14], edi
// 0064d887  68d8b18400           push 0x84b1d8
// 0064d88c  57                   push edi
// 0064d88d  8bce                 mov ecx, esi
// 0064d88f  c64424400c           mov byte ptr [esp + 0x40], 0xc
// 0064d894  e897fcffff           call 0x64d530
// 0064d899  6880ad8400           push 0x84ad80
// 0064d89e  6a01                 push 1
// 0064d8a0  8bce                 mov ecx, esi
// 0064d8a2  e889fcffff           call 0x64d530
// 0064d8a7  688cf28300           push 0x83f28c
// 0064d8ac  6a02                 push 2
// 0064d8ae  8bce                 mov ecx, esi
// 0064d8b0  e87bfcffff           call 0x64d530
// 0064d8b5  68d0b18400           push 0x84b1d0
// 0064d8ba  6a03                 push 3
// 0064d8bc  8bce                 mov ecx, esi
// 0064d8be  e86dfcffff           call 0x64d530
// 0064d8c3  68c8b18400           push 0x84b1c8
// 0064d8c8  6a04                 push 4
// 0064d8ca  8bce                 mov ecx, esi
// 0064d8cc  e85ffcffff           call 0x64d530
// 0064d8d1  6aff                 push -1
// 0064d8d3  68c0b18400           push 0x84b1c0
// 0064d8d8  e8b366f0ff           call 0x553f90
// 0064d8dd  83c408               add esp, 8
// 0064d8e0  8d542428             lea edx, [esp + 0x28]
// 0064d8e4  52                   push edx
// 0064d8e5  8bcd                 mov ecx, ebp
// 0064d8e7  8944242c             mov dword ptr [esp + 0x2c], eax
// 0064d8eb  e8b06bf1ff           call 0x5644a0
// 0064d8f0  68b8b18400           push 0x84b1b8
// 0064d8f5  6a06                 push 6
// 0064d8f7  8bce                 mov ecx, esi
// 0064d8f9  8938                 mov dword ptr [eax], edi
// 0064d8fb  e830fcffff           call 0x64d530
// 0064d900  68ccf68300           push 0x83f6cc
// 0064d905  6a07                 push 7
// 0064d907  8bce                 mov ecx, esi
// 0064d909  e822fcffff           call 0x64d530
// 0064d90e  68a8b18400           push 0x84b1a8
// 0064d913  6a08                 push 8
// 0064d915  8bce                 mov ecx, esi
// 0064d917  e814fcffff           call 0x64d530
// 0064d91c  6aff                 push -1
// 0064d91e  68a0b18400           push 0x84b1a0
// 0064d923  e86866f0ff           call 0x553f90
// 0064d928  89442430             mov dword ptr [esp + 0x30], eax
// 0064d92c  83c408               add esp, 8
// 0064d92f  8d442428             lea eax, [esp + 0x28]
// 0064d933  50                   push eax
// 0064d934  8bcd                 mov ecx, ebp
// 0064d936  e8656bf1ff           call 0x5644a0
// 0064d93b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064d93f  5f                   pop edi
// 0064d940  c70001000000         mov dword ptr [eax], 1
// 0064d946  8bc6                 mov eax, esi
// 0064d948  5e                   pop esi
// 0064d949  5d                   pop ebp
// 0064d94a  5b                   pop ebx
// 0064d94b  64890d00000000       mov dword ptr fs:[0], ecx
// 0064d952  83c42c               add esp, 0x2c
// 0064d955  c3                   ret 
// library rbxgs/roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp (function ??0?$EnumDesc@W4SurfaceType@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_default_1_80c5431f1ad732bf.cpp
