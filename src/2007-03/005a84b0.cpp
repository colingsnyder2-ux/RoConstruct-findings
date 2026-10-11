// roc 2007-03 005a84b0  unit: seg_005a0000  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a84b0
//
// 005a84b0  83ec10               sub esp, 0x10
// 005a84b3  53                   push ebx
// 005a84b4  55                   push ebp
// 005a84b5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a84b9  56                   push esi
// 005a84ba  57                   push edi
// 005a84bb  83c50c               add ebp, 0xc
// 005a84be  8bff                 mov edi, edi
// 005a84c0  8b4504               mov eax, dword ptr [ebp + 4]
// 005a84c3  85c0                 test eax, eax
// 005a84c5  0f84d5000000         je 0x5a85a0
// 005a84cb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005a84ce  2bc8                 sub ecx, eax
// 005a84d0  c1f902               sar ecx, 2
// 005a84d3  0f84c7000000         je 0x5a85a0
// 005a84d9  8b7508               mov esi, dword ptr [ebp + 8]
// 005a84dc  3bc6                 cmp eax, esi
// 005a84de  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 005a84e4  7602                 jbe 0x5a84e8
// 005a84e6  ffd3                 call ebx
// 005a84e8  8d46fc               lea eax, [esi - 4]
// 005a84eb  3b4508               cmp eax, dword ptr [ebp + 8]
// 005a84ee  8bfd                 mov edi, ebp
// 005a84f0  89742414             mov dword ptr [esp + 0x14], esi
// 005a84f4  7705                 ja 0x5a84fb
// 005a84f6  3b4504               cmp eax, dword ptr [ebp + 4]
// 005a84f9  7302                 jae 0x5a84fd
// 005a84fb  ffd3                 call ebx
// 005a84fd  83c6fc               add esi, -4
// 005a8500  3b7708               cmp esi, dword ptr [edi + 8]
// 005a8503  7202                 jb 0x5a8507
// 005a8505  ffd3                 call ebx
// 005a8507  8b3e                 mov edi, dword ptr [esi]
// 005a8509  8b07                 mov eax, dword ptr [edi]
// 005a850b  85c0                 test eax, eax
// 005a850d  741b                 je 0x5a852a
// 005a850f  8d542424             lea edx, [esp + 0x24]
// 005a8513  52                   push edx
// 005a8514  83c00c               add eax, 0xc
// 005a8517  50                   push eax
// 005a8518  897c242c             mov dword ptr [esp + 0x2c], edi
// 005a851c  e84ffeffff           call 0x5a8370
// 005a8521  83c408               add esp, 8
// 005a8524  c70700000000         mov dword ptr [edi], 0
// 005a852a  837c242800           cmp dword ptr [esp + 0x28], 0
// 005a852f  748f                 je 0x5a84c0
// 005a8531  8b742428             mov esi, dword ptr [esp + 0x28]
// 005a8535  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a8538  83c60c               add esi, 0xc
// 005a853b  85c0                 test eax, eax
// 005a853d  897c2424             mov dword ptr [esp + 0x24], edi
// 005a8541  7504                 jne 0x5a8547
// 005a8543  33d2                 xor edx, edx
// 005a8545  eb08                 jmp 0x5a854f
// 005a8547  8b5608               mov edx, dword ptr [esi + 8]
// 005a854a  2bd0                 sub edx, eax
// 005a854c  c1fa02               sar edx, 2
// 005a854f  85c0                 test eax, eax
// 005a8551  7422                 je 0x5a8575
// 005a8553  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005a8556  2bc8                 sub ecx, eax
// 005a8558  c1f902               sar ecx, 2
// 005a855b  3bd1                 cmp edx, ecx
// 005a855d  7316                 jae 0x5a8575
// 005a855f  8b4608               mov eax, dword ptr [esi + 8]
// 005a8562  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a8566  8938                 mov dword ptr [eax], edi
// 005a8568  83c004               add eax, 4
// 005a856b  894608               mov dword ptr [esi + 8], eax
// 005a856e  8917                 mov dword ptr [edi], edx
// 005a8570  e94bffffff           jmp 0x5a84c0
// 005a8575  8b5e08               mov ebx, dword ptr [esi + 8]
// 005a8578  3bc3                 cmp eax, ebx
// 005a857a  7606                 jbe 0x5a8582
// 005a857c  ff1544e97700         call dword ptr [0x77e944]
// 005a8582  8d442424             lea eax, [esp + 0x24]
// 005a8586  50                   push eax
// 005a8587  53                   push ebx
// 005a8588  56                   push esi
// 005a8589  8d4c2424             lea ecx, [esp + 0x24]
// 005a858d  51                   push ecx
// 005a858e  8bce                 mov ecx, esi
// 005a8590  e8db83fcff           call 0x570970
// 005a8595  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a8599  8917                 mov dword ptr [edi], edx
// 005a859b  e920ffffff           jmp 0x5a84c0
// 005a85a0  5f                   pop edi
// 005a85a1  5e                   pop esi
// 005a85a2  5d                   pop ebp
// 005a85a3  5b                   pop ebx
// 005a85a4  83c410               add esp, 0x10
// 005a85a7  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?transferTrackers@MechanismTracker@RBX@@SAXPAVMechanism@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
