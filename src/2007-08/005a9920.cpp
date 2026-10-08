// roc 2007-08 005a9920  unit: RBX::VHumanoid::?$SignalDesc  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9920
//
// 005a9920  83ec0c               sub esp, 0xc
// 005a9923  56                   push esi
// 005a9924  8bf1                 mov esi, ecx
// 005a9926  8b5608               mov edx, dword ptr [esi + 8]
// 005a9929  33c0                 xor eax, eax
// 005a992b  85d2                 test edx, edx
// 005a992d  57                   push edi
// 005a992e  89442408             mov dword ptr [esp + 8], eax
// 005a9932  7504                 jne 0x5a9938
// 005a9934  33c9                 xor ecx, ecx
// 005a9936  eb08                 jmp 0x5a9940
// 005a9938  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005a993b  2bca                 sub ecx, edx
// 005a993d  c1f902               sar ecx, 2
// 005a9940  85c9                 test ecx, ecx
// 005a9942  8b5614               mov edx, dword ptr [esi + 0x14]
// 005a9945  8d7c2408             lea edi, [esp + 8]
// 005a9949  894c240c             mov dword ptr [esp + 0xc], ecx
// 005a994d  89542410             mov dword ptr [esp + 0x10], edx
// 005a9951  897e14               mov dword ptr [esi + 0x14], edi
// 005a9954  7654                 jbe 0x5a99aa
// 005a9956  53                   push ebx
// 005a9957  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a995b  55                   push ebp
// 005a995c  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005a9962  8b5608               mov edx, dword ptr [esi + 8]
// 005a9965  85d2                 test edx, edx
// 005a9967  8bf8                 mov edi, eax
// 005a9969  740c                 je 0x5a9977
// 005a996b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005a996e  2bca                 sub ecx, edx
// 005a9970  c1f902               sar ecx, 2
// 005a9973  3bc1                 cmp eax, ecx
// 005a9975  7202                 jb 0x5a9979
// 005a9977  ffd5                 call ebp
// 005a9979  8b4608               mov eax, dword ptr [esi + 8]
// 005a997c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005a997f  50                   push eax
// 005a9980  53                   push ebx
// 005a9981  8bce                 mov ecx, esi
// 005a9983  e868faffff           call 0x5a93f0
// 005a9988  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a998c  83c001               add eax, 1
// 005a998f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005a9993  89442410             mov dword ptr [esp + 0x10], eax
// 005a9997  72c9                 jb 0x5a9962
// 005a9999  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a999d  5d                   pop ebp
// 005a999e  5b                   pop ebx
// 005a999f  5f                   pop edi
// 005a99a0  894e14               mov dword ptr [esi + 0x14], ecx
// 005a99a3  5e                   pop esi
// 005a99a4  83c40c               add esp, 0xc
// 005a99a7  c20400               ret 4
// 005a99aa  5f                   pop edi
// 005a99ab  895614               mov dword ptr [esi + 0x14], edx
// 005a99ae  5e                   pop esi
// 005a99af  83c40c               add esp, 0xc
// 005a99b2  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
