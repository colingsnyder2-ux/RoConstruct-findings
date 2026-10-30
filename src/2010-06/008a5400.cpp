// roc 2010-06 008a5400  unit: CXTPRibbonControlTab  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5400
//
// 008a5400  6aff                 push -1
// 008a5402  6860c79b00           push 0x9bc760
// 008a5407  64a100000000         mov eax, dword ptr fs:[0]
// 008a540d  50                   push eax
// 008a540e  83ec10               sub esp, 0x10
// 008a5411  53                   push ebx
// 008a5412  55                   push ebp
// 008a5413  56                   push esi
// 008a5414  57                   push edi
// 008a5415  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a541a  33c4                 xor eax, esp
// 008a541c  50                   push eax
// 008a541d  8d442424             lea eax, [esp + 0x24]
// 008a5421  64a300000000         mov dword ptr fs:[0], eax
// 008a5427  8be9                 mov ebp, ecx
// 008a5429  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a542d  8b01                 mov eax, dword ptr [ecx]
// 008a542f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a5435  33ff                 xor edi, edi
// 008a5437  68a478a600           push 0xa678a4
// 008a543c  397928               cmp dword ptr [ecx + 0x28], edi
// 008a543f  0f85a1000000         jne 0x8a54e6
// 008a5445  8bb5e0010000         mov esi, dword ptr [ebp + 0x1e0]
// 008a544b  89742420             mov dword ptr [esp + 0x20], esi
// 008a544f  ffd2                 call edx
// 008a5451  8bd8                 mov ebx, eax
// 008a5453  895c2414             mov dword ptr [esp + 0x14], ebx
// 008a5457  8b03                 mov eax, dword ptr [ebx]
// 008a5459  8b5004               mov edx, dword ptr [eax + 4]
// 008a545c  57                   push edi
// 008a545d  56                   push esi
// 008a545e  8bcb                 mov ecx, ebx
// 008a5460  897c2434             mov dword ptr [esp + 0x34], edi
// 008a5464  ffd2                 call edx
// 008a5466  89442418             mov dword ptr [esp + 0x18], eax
// 008a546a  85f6                 test esi, esi
// 008a546c  7e6f                 jle 0x8a54dd
// 008a546e  85ff                 test edi, edi
// 008a5470  7c15                 jl 0x8a5487
// 008a5472  3bbde0010000         cmp edi, dword ptr [ebp + 0x1e0]
// 008a5478  7d0d                 jge 0x8a5487
// 008a547a  8b85dc010000         mov eax, dword ptr [ebp + 0x1dc]
// 008a5480  8d04b8               lea eax, [eax + edi*4]
// 008a5483  8b00                 mov eax, dword ptr [eax]
// 008a5485  eb02                 jmp 0x8a5489
// 008a5487  33c0                 xor eax, eax
// 008a5489  89442434             mov dword ptr [esp + 0x34], eax
// 008a548d  8b13                 mov edx, dword ptr [ebx]
// 008a548f  8b5208               mov edx, dword ptr [edx + 8]
// 008a5492  8d442418             lea eax, [esp + 0x18]
// 008a5496  50                   push eax
// 008a5497  8bcb                 mov ecx, ebx
// 008a5499  ffd2                 call edx
// 008a549b  8bf0                 mov esi, eax
// 008a549d  89742420             mov dword ptr [esp + 0x20], esi
// 008a54a1  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008a54a6  e8a59dffff           call 0x89f250
// 008a54ab  8b16                 mov edx, dword ptr [esi]
// 008a54ad  8b5264               mov edx, dword ptr [edx + 0x64]
// 008a54b0  50                   push eax
// 008a54b1  8d442438             lea eax, [esp + 0x38]
// 008a54b5  50                   push eax
// 008a54b6  8bce                 mov ecx, esi
// 008a54b8  ffd2                 call edx
// 008a54ba  85c0                 test eax, eax
// 008a54bc  740c                 je 0x8a54ca
// 008a54be  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a54c2  8b01                 mov eax, dword ptr [ecx]
// 008a54c4  8b5064               mov edx, dword ptr [eax + 0x64]
// 008a54c7  56                   push esi
// 008a54c8  ffd2                 call edx
// 008a54ca  8bce                 mov ecx, esi
// 008a54cc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008a54d1  e8462af0ff           call 0x7a7f1c
// 008a54d6  47                   inc edi
// 008a54d7  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 008a54db  7c91                 jl 0x8a546e
// 008a54dd  8b03                 mov eax, dword ptr [ebx]
// 008a54df  8bcb                 mov ecx, ebx
// 008a54e1  e9b0000000           jmp 0x8a5596
// 008a54e6  ffd2                 call edx
// 008a54e8  8bf8                 mov edi, eax
// 008a54ea  897c2420             mov dword ptr [esp + 0x20], edi
// 008a54ee  8b07                 mov eax, dword ptr [edi]
// 008a54f0  8b5004               mov edx, dword ptr [eax + 4]
// 008a54f3  6a00                 push 0
// 008a54f5  6a00                 push 0
// 008a54f7  8bcf                 mov ecx, edi
// 008a54f9  c744243402000000     mov dword ptr [esp + 0x34], 2
// 008a5501  ffd2                 call edx
// 008a5503  8d9d84010000         lea ebx, [ebp + 0x184]
// 008a5509  8bcb                 mov ecx, ebx
// 008a550b  89442414             mov dword ptr [esp + 0x14], eax
// 008a550f  e83ce1fdff           call 0x883650
// 008a5514  837c241400           cmp dword ptr [esp + 0x14], 0
// 008a5519  7477                 je 0x8a5592
// 008a551b  eb03                 jmp 0x8a5520
// 008a551d  8d4900               lea ecx, [ecx]
// 008a5520  8b07                 mov eax, dword ptr [edi]
// 008a5522  8b5008               mov edx, dword ptr [eax + 8]
// 008a5525  8d4c2414             lea ecx, [esp + 0x14]
// 008a5529  51                   push ecx
// 008a552a  8bcf                 mov ecx, edi
// 008a552c  ffd2                 call edx
// 008a552e  8bf0                 mov esi, eax
// 008a5530  8974241c             mov dword ptr [esp + 0x1c], esi
// 008a5534  896e24               mov dword ptr [esi + 0x24], ebp
// 008a5537  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008a553c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008a5544  e8079dffff           call 0x89f250
// 008a5549  8b16                 mov edx, dword ptr [esi]
// 008a554b  8b5264               mov edx, dword ptr [edx + 0x64]
// 008a554e  50                   push eax
// 008a554f  8d442438             lea eax, [esp + 0x38]
// 008a5553  50                   push eax
// 008a5554  8bce                 mov ecx, esi
// 008a5556  ffd2                 call edx
// 008a5558  85c0                 test eax, eax
// 008a555a  740c                 je 0x8a5568
// 008a555c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a5560  8b01                 mov eax, dword ptr [ecx]
// 008a5562  8b5064               mov edx, dword ptr [eax + 0x64]
// 008a5565  56                   push esi
// 008a5566  ffd2                 call edx
// 008a5568  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a556c  85c9                 test ecx, ecx
// 008a556e  744a                 je 0x8a55ba
// 008a5570  8b85e0010000         mov eax, dword ptr [ebp + 0x1e0]
// 008a5576  51                   push ecx
// 008a5577  50                   push eax
// 008a5578  8bcb                 mov ecx, ebx
// 008a557a  e841e1fdff           call 0x8836c0
// 008a557f  8bce                 mov ecx, esi
// 008a5581  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008a5586  e89129f0ff           call 0x7a7f1c
// 008a558b  837c241400           cmp dword ptr [esp + 0x14], 0
// 008a5590  758e                 jne 0x8a5520
// 008a5592  8b07                 mov eax, dword ptr [edi]
// 008a5594  8bcf                 mov ecx, edi
// 008a5596  8b10                 mov edx, dword ptr [eax]
// 008a5598  6a01                 push 1
// 008a559a  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008a55a2  ffd2                 call edx
// 008a55a4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a55a8  64890d00000000       mov dword ptr fs:[0], ecx
// 008a55af  59                   pop ecx
// 008a55b0  5f                   pop edi
// 008a55b1  5e                   pop esi
// 008a55b2  5d                   pop ebp
// 008a55b3  5b                   pop ebx
// 008a55b4  83c41c               add esp, 0x1c
// 008a55b7  c20400               ret 4
// 008a55ba  6a00                 push 0
// 008a55bc  6a06                 push 6
// 008a55be  e84d2ff0ff           call 0x7a8510
// copied from an identical function in another client (function ?DoPropExchange@CXTPRibbonControlTab@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp