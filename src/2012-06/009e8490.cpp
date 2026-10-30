// roc 2012-06 009e8490  unit: CXTPStatusBarPane  size: 555 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e8490
//
// 009e8490  6aff                 push -1
// 009e8492  68d811ae00           push 0xae11d8
// 009e8497  64a100000000         mov eax, dword ptr fs:[0]
// 009e849d  50                   push eax
// 009e849e  83ec38               sub esp, 0x38
// 009e84a1  53                   push ebx
// 009e84a2  55                   push ebp
// 009e84a3  56                   push esi
// 009e84a4  57                   push edi
// 009e84a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e84aa  33c4                 xor eax, esp
// 009e84ac  50                   push eax
// 009e84ad  8d44244c             lea eax, [esp + 0x4c]
// 009e84b1  64a300000000         mov dword ptr fs:[0], eax
// 009e84b7  8bf1                 mov esi, ecx
// 009e84b9  85f6                 test esi, esi
// 009e84bb  0f84df010000         je 0x9e86a0
// 009e84c1  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e84c4  85c0                 test eax, eax
// 009e84c6  0f84d4010000         je 0x9e86a0
// 009e84cc  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 009e84d1  0f8485010000         je 0x9e865c
// 009e84d7  8d4c2428             lea ecx, [esp + 0x28]
// 009e84db  51                   push ecx
// 009e84dc  50                   push eax
// 009e84dd  ff15f83ab200         call dword ptr [0xb23af8]
// 009e84e3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009e84e7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009e84eb  f7d8                 neg eax
// 009e84ed  50                   push eax
// 009e84ee  f7d9                 neg ecx
// 009e84f0  51                   push ecx
// 009e84f1  8d542430             lea edx, [esp + 0x30]
// 009e84f5  52                   push edx
// 009e84f6  ff15f43ab200         call dword ptr [0xb23af4]
// 009e84fc  8b06                 mov eax, dword ptr [esi]
// 009e84fe  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 009e8504  6a01                 push 1
// 009e8506  8d4c242c             lea ecx, [esp + 0x2c]
// 009e850a  51                   push ecx
// 009e850b  8bce                 mov ecx, esi
// 009e850d  ffd2                 call edx
// 009e850f  8b06                 mov eax, dword ptr [esi]
// 009e8511  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 009e8517  8d4c241c             lea ecx, [esp + 0x1c]
// 009e851b  51                   push ecx
// 009e851c  6a00                 push 0
// 009e851e  6807040000           push 0x407
// 009e8523  8bce                 mov ecx, esi
// 009e8525  ffd2                 call edx
// 009e8527  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 009e852b  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 009e852f  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 009e8535  037c2424             add edi, dword ptr [esp + 0x24]
// 009e8539  33ed                 xor ebp, ebp
// 009e853b  33db                 xor ebx, ebx
// 009e853d  33d2                 xor edx, edx
// 009e853f  896c245c             mov dword ptr [esp + 0x5c], ebp
// 009e8543  895c2418             mov dword ptr [esp + 0x18], ebx
// 009e8547  85c0                 test eax, eax
// 009e8549  7e48                 jle 0x9e8593
// 009e854b  eb03                 jmp 0x9e8550
// 009e854d  8d4900               lea ecx, [ecx]
// 009e8550  52                   push edx
// 009e8551  8bce                 mov ecx, esi
// 009e8553  e898f4ffff           call 0x9e79f0
// 009e8558  8bc8                 mov ecx, eax
// 009e855a  895154               mov dword ptr [ecx + 0x54], edx
// 009e855d  e81ee9ffff           call 0x9e6e80
// 009e8562  85c0                 test eax, eax
// 009e8564  741c                 je 0x9e8582
// 009e8566  895958               mov dword ptr [ecx + 0x58], ebx
// 009e8569  43                   inc ebx
// 009e856a  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 009e8571  7401                 je 0x9e8574
// 009e8573  45                   inc ebp
// 009e8574  b8faffffff           mov eax, 0xfffffffa
// 009e8579  2b4124               sub eax, dword ptr [ecx + 0x24]
// 009e857c  2b442424             sub eax, dword ptr [esp + 0x24]
// 009e8580  03f8                 add edi, eax
// 009e8582  42                   inc edx
// 009e8583  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 009e8589  7cc5                 jl 0x9e8550
// 009e858b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 009e858f  895c2418             mov dword ptr [esp + 0x18], ebx
// 009e8593  8d4c2438             lea ecx, [esp + 0x38]
// 009e8597  e844f2ffff           call 0x9e77e0
// 009e859c  6aff                 push -1
// 009e859e  53                   push ebx
// 009e859f  8d4c2440             lea ecx, [esp + 0x40]
// 009e85a3  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 009e85ab  e8b0fcfaff           call 0x998260
// 009e85b0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009e85b4  33d2                 xor edx, edx
// 009e85b6  33db                 xor ebx, ebx
// 009e85b8  3996a0000000         cmp dword ptr [esi + 0xa0], edx
// 009e85be  89542414             mov dword ptr [esp + 0x14], edx
// 009e85c2  7e65                 jle 0x9e8629
// 009e85c4  52                   push edx
// 009e85c5  8bce                 mov ecx, esi
// 009e85c7  e824f4ffff           call 0x9e79f0
// 009e85cc  8bc8                 mov ecx, eax
// 009e85ce  e8ade8ffff           call 0x9e6e80
// 009e85d3  85c0                 test eax, eax
// 009e85d5  7445                 je 0x9e861c
// 009e85d7  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 009e85de  8b4124               mov eax, dword ptr [ecx + 0x24]
// 009e85e1  8d6c2806             lea ebp, [eax + ebp + 6]
// 009e85e5  7417                 je 0x9e85fe
// 009e85e7  85ff                 test edi, edi
// 009e85e9  7e13                 jle 0x9e85fe
// 009e85eb  8bc7                 mov eax, edi
// 009e85ed  99                   cdq 
// 009e85ee  f77c245c             idiv dword ptr [esp + 0x5c]
// 009e85f2  ff4c245c             dec dword ptr [esp + 0x5c]
// 009e85f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 009e85fa  03e8                 add ebp, eax
// 009e85fc  2bf8                 sub edi, eax
// 009e85fe  85db                 test ebx, ebx
// 009e8600  0f8cb0000000         jl 0x9e86b6
// 009e8606  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 009e860a  0f8da6000000         jge 0x9e86b6
// 009e8610  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 009e8614  892c99               mov dword ptr [ecx + ebx*4], ebp
// 009e8617  43                   inc ebx
// 009e8618  036c2424             add ebp, dword ptr [esp + 0x24]
// 009e861c  42                   inc edx
// 009e861d  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 009e8623  89542414             mov dword ptr [esp + 0x14], edx
// 009e8627  7c9b                 jl 0x9e85c4
// 009e8629  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009e862d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009e8631  8b16                 mov edx, dword ptr [esi]
// 009e8633  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 009e8639  50                   push eax
// 009e863a  51                   push ecx
// 009e863b  6804040000           push 0x404
// 009e8640  8bce                 mov ecx, esi
// 009e8642  ffd2                 call edx
// 009e8644  8bce                 mov ecx, esi
// 009e8646  e8e5fcffff           call 0x9e8330
// 009e864b  8d4c2438             lea ecx, [esp + 0x38]
// 009e864f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 009e8657  e8a4f1ffff           call 0x9e7800
// 009e865c  837c246000           cmp dword ptr [esp + 0x60], 0
// 009e8661  743d                 je 0x9e86a0
// 009e8663  33ff                 xor edi, edi
// 009e8665  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 009e866b  7e33                 jle 0x9e86a0
// 009e866d  8d4900               lea ecx, [ecx]
// 009e8670  57                   push edi
// 009e8671  8bce                 mov ecx, esi
// 009e8673  e878f3ffff           call 0x9e79f0
// 009e8678  8bc8                 mov ecx, eax
// 009e867a  e801e8ffff           call 0x9e6e80
// 009e867f  85c0                 test eax, eax
// 009e8681  7414                 je 0x9e8697
// 009e8683  f6412c01             test byte ptr [ecx + 0x2c], 1
// 009e8687  740e                 je 0x9e8697
// 009e8689  6a01                 push 1
// 009e868b  83c130               add ecx, 0x30
// 009e868e  51                   push ecx
// 009e868f  57                   push edi
// 009e8690  8bce                 mov ecx, esi
// 009e8692  e859f4ffff           call 0x9e7af0
// 009e8697  47                   inc edi
// 009e8698  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 009e869e  7cd0                 jl 0x9e8670
// 009e86a0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009e86a4  64890d00000000       mov dword ptr fs:[0], ecx
// 009e86ab  59                   pop ecx
// 009e86ac  5f                   pop edi
// 009e86ad  5e                   pop esi
// 009e86ae  5d                   pop ebp
// 009e86af  5b                   pop ebx
// 009e86b0  83c444               add esp, 0x44
// 009e86b3  c20800               ret 8
// 009e86b6  e8059df9ff           call 0x9823c0
// copied from an identical function in another client (function ?UpdateAllPanes@CXTPStatusBar@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp