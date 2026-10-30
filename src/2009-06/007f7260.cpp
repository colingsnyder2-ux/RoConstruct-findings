// roc 2009-06 007f7260  unit: CXTPTabPaintManager  size: 2792 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f7260
//
// 007f7260  6aff                 push -1
// 007f7262  68c2108800           push 0x8810c2
// 007f7267  64a100000000         mov eax, dword ptr fs:[0]
// 007f726d  50                   push eax
// 007f726e  83ec60               sub esp, 0x60
// 007f7271  53                   push ebx
// 007f7272  55                   push ebp
// 007f7273  56                   push esi
// 007f7274  57                   push edi
// 007f7275  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f727a  33c4                 xor eax, esp
// 007f727c  50                   push eax
// 007f727d  8d442474             lea eax, [esp + 0x74]
// 007f7281  64a300000000         mov dword ptr fs:[0], eax
// 007f7287  8bf1                 mov esi, ecx
// 007f7289  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 007f7290  8b7b60               mov edi, dword ptr [ebx + 0x60]
// 007f7293  8bcf                 mov ecx, edi
// 007f7295  897c2420             mov dword ptr [esp + 0x20], edi
// 007f7299  e812c5ffff           call 0x7f37b0
// 007f729e  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f72a2  8b07                 mov eax, dword ptr [edi]
// 007f72a4  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f72a7  8bcf                 mov ecx, edi
// 007f72a9  ffd2                 call edx
// 007f72ab  83f802               cmp eax, 2
// 007f72ae  7411                 je 0x7f72c1
// 007f72b0  8b07                 mov eax, dword ptr [edi]
// 007f72b2  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f72b5  8bcf                 mov ecx, edi
// 007f72b7  ffd2                 call edx
// 007f72b9  85c0                 test eax, eax
// 007f72bb  7404                 je 0x7f72c1
// 007f72bd  33c0                 xor eax, eax
// 007f72bf  eb05                 jmp 0x7f72c6
// 007f72c1  b801000000           mov eax, 1
// 007f72c6  33c9                 xor ecx, ecx
// 007f72c8  85c0                 test eax, eax
// 007f72ca  0f94c1               sete cl
// 007f72cd  837c242c05           cmp dword ptr [esp + 0x2c], 5
// 007f72d2  8be9                 mov ebp, ecx
// 007f72d4  896c2418             mov dword ptr [esp + 0x18], ebp
// 007f72d8  750d                 jne 0x7f72e7
// 007f72da  33d2                 xor edx, edx
// 007f72dc  85ed                 test ebp, ebp
// 007f72de  0f94c2               sete dl
// 007f72e1  8bea                 mov ebp, edx
// 007f72e3  89542418             mov dword ptr [esp + 0x18], edx
// 007f72e7  8d442414             lea eax, [esp + 0x14]
// 007f72eb  50                   push eax
// 007f72ec  8bcb                 mov ecx, ebx
// 007f72ee  e82dc1ffff           call 0x7f3420
// 007f72f3  837e2800             cmp dword ptr [esi + 0x28], 0
// 007f72f7  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 007f72ff  7422                 je 0x7f7323
// 007f7301  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 007f7304  395904               cmp dword ptr [ecx + 4], ebx
// 007f7307  751a                 jne 0x7f7323
// 007f7309  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 007f730d  7414                 je 0x7f7323
// 007f730f  85ed                 test ebp, ebp
// 007f7311  7408                 je 0x7f731b
// 007f7313  8d8624010000         lea eax, [esi + 0x124]
// 007f7319  eb18                 jmp 0x7f7333
// 007f731b  8d8614010000         lea eax, [esi + 0x114]
// 007f7321  eb10                 jmp 0x7f7333
// 007f7323  8d861c010000         lea eax, [esi + 0x11c]
// 007f7329  85ed                 test ebp, ebp
// 007f732b  7506                 jne 0x7f7333
// 007f732d  8d860c010000         lea eax, [esi + 0x10c]
// 007f7333  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 007f733a  50                   push eax
// 007f733b  55                   push ebp
// 007f733c  8d4c245c             lea ecx, [esp + 0x5c]
// 007f7340  e81b95f7ff           call 0x770860
// 007f7345  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 007f734b  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 007f7351  8d4c243c             lea ecx, [esp + 0x3c]
// 007f7355  51                   push ecx
// 007f7356  6a00                 push 0
// 007f7358  89442448             mov dword ptr [esp + 0x48], eax
// 007f735c  53                   push ebx
// 007f735d  83ec08               sub esp, 8
// 007f7360  8bc4                 mov eax, esp
// 007f7362  89542450             mov dword ptr [esp + 0x50], edx
// 007f7366  c70000000000         mov dword ptr [eax], 0
// 007f736c  c7400400000000       mov dword ptr [eax + 4], 0
// 007f7373  8b17                 mov edx, dword ptr [edi]
// 007f7375  8b4244               mov eax, dword ptr [edx + 0x44]
// 007f7378  8964243c             mov dword ptr [esp + 0x3c], esp
// 007f737c  55                   push ebp
// 007f737d  8bcf                 mov ecx, edi
// 007f737f  c684249400000001     mov byte ptr [esp + 0x94], 1
// 007f7387  ffd0                 call eax
// 007f7389  837c242c03           cmp dword ptr [esp + 0x2c], 3
// 007f738e  89442424             mov dword ptr [esp + 0x24], eax
// 007f7392  750c                 jne 0x7f73a0
// 007f7394  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 007f7397  395904               cmp dword ptr [ecx + 4], ebx
// 007f739a  7404                 je 0x7f73a0
// 007f739c  33c0                 xor eax, eax
// 007f739e  eb05                 jmp 0x7f73a5
// 007f73a0  b801000000           mov eax, 1
// 007f73a5  89442428             mov dword ptr [esp + 0x28], eax
// 007f73a9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007f73b1  85c0                 test eax, eax
// 007f73b3  7471                 je 0x7f7426
// 007f73b5  8b4374               mov eax, dword ptr [ebx + 0x74]
// 007f73b8  85c0                 test eax, eax
// 007f73ba  7e6a                 jle 0x7f7426
// 007f73bc  33ed                 xor ebp, ebp
// 007f73be  3bc5                 cmp eax, ebp
// 007f73c0  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007f73c4  7e60                 jle 0x7f7426
// 007f73c6  85ed                 test ebp, ebp
// 007f73c8  0f8c98000000         jl 0x7f7466
// 007f73ce  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 007f73d1  0f8d8f000000         jge 0x7f7466
// 007f73d7  8b5370               mov edx, dword ptr [ebx + 0x70]
// 007f73da  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 007f73dd  8d04aa               lea eax, [edx + ebp*4]
// 007f73e0  8b4108               mov eax, dword ptr [ecx + 8]
// 007f73e3  83f802               cmp eax, 2
// 007f73e6  740d                 je 0x7f73f5
// 007f73e8  83f801               cmp eax, 1
// 007f73eb  7527                 jne 0x7f7414
// 007f73ed  8b4360               mov eax, dword ptr [ebx + 0x60]
// 007f73f0  395804               cmp dword ptr [eax + 4], ebx
// 007f73f3  751f                 jne 0x7f7414
// 007f73f5  8b11                 mov edx, dword ptr [ecx]
// 007f73f7  8b5208               mov edx, dword ptr [edx + 8]
// 007f73fa  8d442444             lea eax, [esp + 0x44]
// 007f73fe  50                   push eax
// 007f73ff  ffd2                 call edx
// 007f7401  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f7406  8b442448             mov eax, dword ptr [esp + 0x48]
// 007f740a  7504                 jne 0x7f7410
// 007f740c  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f7410  0144241c             add dword ptr [esp + 0x1c], eax
// 007f7414  45                   inc ebp
// 007f7415  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 007f7418  7cac                 jl 0x7f73c6
// 007f741a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007f741f  7e05                 jle 0x7f7426
// 007f7421  8344241c03           add dword ptr [esp + 0x1c], 3
// 007f7426  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 007f742e  0f8473060000         je 0x7f7aa7
// 007f7434  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007f7439  0f8e93010000         jle 0x7f75d2
// 007f743f  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 007f7445  8b01                 mov eax, dword ptr [ecx]
// 007f7447  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007f744e  8b4008               mov eax, dword ptr [eax + 8]
// 007f7451  53                   push ebx
// 007f7452  52                   push edx
// 007f7453  ffd0                 call eax
// 007f7455  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f745a  740f                 je 0x7f746b
// 007f745c  83ac249800000003     sub dword ptr [esp + 0x98], 3
// 007f7464  eb0d                 jmp 0x7f7473
// 007f7466  e87918f2ff           call 0x718ce4
// 007f746b  83ac249400000003     sub dword ptr [esp + 0x94], 3
// 007f7473  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 007f7476  83c1ff               add ecx, -1
// 007f7479  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 007f7480  0f884c010000         js 0x7f75d2
// 007f7486  85c9                 test ecx, ecx
// 007f7488  7cdc                 jl 0x7f7466
// 007f748a  3b4b74               cmp ecx, dword ptr [ebx + 0x74]
// 007f748d  7dd7                 jge 0x7f7466
// 007f748f  8b4370               mov eax, dword ptr [ebx + 0x70]
// 007f7492  8d148d00000000       lea edx, [ecx*4]
// 007f7499  8b2c10               mov ebp, dword ptr [eax + edx]
// 007f749c  03c2                 add eax, edx
// 007f749e  8b4508               mov eax, dword ptr [ebp + 8]
// 007f74a1  83f802               cmp eax, 2
// 007f74a4  7415                 je 0x7f74bb
// 007f74a6  83f801               cmp eax, 1
// 007f74a9  0f8513010000         jne 0x7f75c2
// 007f74af  8b5360               mov edx, dword ptr [ebx + 0x60]
// 007f74b2  395a04               cmp dword ptr [edx + 4], ebx
// 007f74b5  0f8507010000         jne 0x7f75c2
// 007f74bb  8b4500               mov eax, dword ptr [ebp]
// 007f74be  8b5008               mov edx, dword ptr [eax + 8]
// 007f74c1  8d4c242c             lea ecx, [esp + 0x2c]
// 007f74c5  51                   push ecx
// 007f74c6  8bcd                 mov ecx, ebp
// 007f74c8  ffd2                 call edx
// 007f74ca  83ec10               sub esp, 0x10
// 007f74cd  837c242800           cmp dword ptr [esp + 0x28], 0
// 007f74d2  7557                 jne 0x7f752b
// 007f74d4  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007f74db  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 007f74e2  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 007f74e6  03c1                 add eax, ecx
// 007f74e8  99                   cdq 
// 007f74e9  2bc2                 sub eax, edx
// 007f74eb  8bc8                 mov ecx, eax
// 007f74ed  8bc7                 mov eax, edi
// 007f74ef  99                   cdq 
// 007f74f0  2bc2                 sub eax, edx
// 007f74f2  d1f9                 sar ecx, 1
// 007f74f4  d1f8                 sar eax, 1
// 007f74f6  8d1c08               lea ebx, [eax + ecx]
// 007f74f9  2bc7                 sub eax, edi
// 007f74fb  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 007f7502  03c1                 add eax, ecx
// 007f7504  8bcc                 mov ecx, esp
// 007f7506  8bd7                 mov edx, edi
// 007f7508  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 007f750c  8911                 mov dword ptr [ecx], edx
// 007f750e  894104               mov dword ptr [ecx + 4], eax
// 007f7511  897908               mov dword ptr [ecx + 8], edi
// 007f7514  89590c               mov dword ptr [ecx + 0xc], ebx
// 007f7517  8bcd                 mov ecx, ebp
// 007f7519  e862c0ffff           call 0x7f3580
// 007f751e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007f7522  29942494000000       sub dword ptr [esp + 0x94], edx
// 007f7529  eb56                 jmp 0x7f7581
// 007f752b  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007f7532  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007f7539  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007f753d  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 007f7544  03c1                 add eax, ecx
// 007f7546  99                   cdq 
// 007f7547  2bc2                 sub eax, edx
// 007f7549  8bc8                 mov ecx, eax
// 007f754b  8bc7                 mov eax, edi
// 007f754d  99                   cdq 
// 007f754e  2bc2                 sub eax, edx
// 007f7550  d1f9                 sar ecx, 1
// 007f7552  d1f8                 sar eax, 1
// 007f7554  8bd1                 mov edx, ecx
// 007f7556  2bd0                 sub edx, eax
// 007f7558  03d7                 add edx, edi
// 007f755a  2bc8                 sub ecx, eax
// 007f755c  8bc4                 mov eax, esp
// 007f755e  8bfb                 mov edi, ebx
// 007f7560  2b7c2440             sub edi, dword ptr [esp + 0x40]
// 007f7564  8908                 mov dword ptr [eax], ecx
// 007f7566  897804               mov dword ptr [eax + 4], edi
// 007f7569  895008               mov dword ptr [eax + 8], edx
// 007f756c  8bcd                 mov ecx, ebp
// 007f756e  89580c               mov dword ptr [eax + 0xc], ebx
// 007f7571  e80ac0ffff           call 0x7f3580
// 007f7576  8b542430             mov edx, dword ptr [esp + 0x30]
// 007f757a  29942498000000       sub dword ptr [esp + 0x98], edx
// 007f7581  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 007f7588  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007f758f  3b4174               cmp eax, dword ptr [ecx + 0x74]
// 007f7592  0f8dcefeffff         jge 0x7f7466
// 007f7598  8b4970               mov ecx, dword ptr [ecx + 0x70]
// 007f759b  03c0                 add eax, eax
// 007f759d  03c0                 add eax, eax
// 007f759f  03c8                 add ecx, eax
// 007f75a1  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007f75a8  8b09                 mov ecx, dword ptr [ecx]
// 007f75aa  50                   push eax
// 007f75ab  e850c8ffff           call 0x7f3e00
// 007f75b0  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 007f75b7  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007f75be  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007f75c2  83e901               sub ecx, 1
// 007f75c5  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 007f75cc  0f89b4feffff         jns 0x7f7486
// 007f75d2  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 007f75d8  8b11                 mov edx, dword ptr [ecx]
// 007f75da  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007f75e1  8b5208               mov edx, dword ptr [edx + 8]
// 007f75e4  53                   push ebx
// 007f75e5  50                   push eax
// 007f75e6  ffd2                 call edx
// 007f75e8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007f75ef  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007f75f6  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007f75fd  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f7601  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007f7608  89442438             mov dword ptr [esp + 0x38], eax
// 007f760c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007f760f  2b4324               sub eax, dword ptr [ebx + 0x24]
// 007f7612  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f7617  894c2430             mov dword ptr [esp + 0x30], ecx
// 007f761b  89542434             mov dword ptr [esp + 0x34], edx
// 007f761f  0f8440020000         je 0x7f7865
// 007f7625  85c0                 test eax, eax
// 007f7627  7e18                 jle 0x7f7641
// 007f7629  99                   cdq 
// 007f762a  2bc2                 sub eax, edx
// 007f762c  d1f8                 sar eax, 1
// 007f762e  f7d8                 neg eax
// 007f7630  50                   push eax
// 007f7631  6a00                 push 0
// 007f7633  8d8c2494000000       lea ecx, [esp + 0x94]
// 007f763a  51                   push ecx
// 007f763b  ff15bced8900         call dword ptr [0x89edbc]
// 007f7641  8b5670               mov edx, dword ptr [esi + 0x70]
// 007f7644  035660               add edx, dword ptr [esi + 0x60]
// 007f7647  8bcf                 mov ecx, edi
// 007f7649  01942490000000       add dword ptr [esp + 0x90], edx
// 007f7650  8b07                 mov eax, dword ptr [edi]
// 007f7652  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f7655  ffd2                 call edx
// 007f7657  83f803               cmp eax, 3
// 007f765a  7508                 jne 0x7f7664
// 007f765c  8b4664               mov eax, dword ptr [esi + 0x64]
// 007f765f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007f7662  eb06                 jmp 0x7f766a
// 007f7664  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007f7667  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007f766a  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 007f7671  29842494000000       sub dword ptr [esp + 0x94], eax
// 007f7678  837c242400           cmp dword ptr [esp + 0x24], 0
// 007f767d  7470                 je 0x7f76ef
// 007f767f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007f7686  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007f768d  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 007f7694  03c1                 add eax, ecx
// 007f7696  99                   cdq 
// 007f7697  2bc2                 sub eax, edx
// 007f7699  8bc8                 mov ecx, eax
// 007f769b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f769f  99                   cdq 
// 007f76a0  2bc2                 sub eax, edx
// 007f76a2  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007f76a9  d1f9                 sar ecx, 1
// 007f76ab  d1f8                 sar eax, 1
// 007f76ad  2bd5                 sub edx, ebp
// 007f76af  2bc8                 sub ecx, eax
// 007f76b1  3b542440             cmp edx, dword ptr [esp + 0x40]
// 007f76b5  8d7dff               lea edi, [ebp - 1]
// 007f76b8  7e26                 jle 0x7f76e0
// 007f76ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f76be  8b10                 mov edx, dword ptr [eax]
// 007f76c0  8b5244               mov edx, dword ptr [edx + 0x44]
// 007f76c3  8d6c243c             lea ebp, [esp + 0x3c]
// 007f76c7  55                   push ebp
// 007f76c8  6a01                 push 1
// 007f76ca  53                   push ebx
// 007f76cb  57                   push edi
// 007f76cc  51                   push ecx
// 007f76cd  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007f76d4  51                   push ecx
// 007f76d5  8bc8                 mov ecx, eax
// 007f76d7  ffd2                 call edx
// 007f76d9  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 007f76e0  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f76e4  8d4c2802             lea ecx, [eax + ebp + 2]
// 007f76e8  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 007f76ef  837c242800           cmp dword ptr [esp + 0x28], 0
// 007f76f4  0f8449030000         je 0x7f7a43
// 007f76fa  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007f7701  83c208               add edx, 8
// 007f7704  39942498000000       cmp dword ptr [esp + 0x98], edx
// 007f770b  0f8e32030000         jle 0x7f7a43
// 007f7711  8d442444             lea eax, [esp + 0x44]
// 007f7715  50                   push eax
// 007f7716  8d4c2418             lea ecx, [esp + 0x18]
// 007f771a  ff1554fb8900         call dword ptr [0x89fb54]
// 007f7720  50                   push eax
// 007f7721  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7725  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f772b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007f7732  8b5108               mov edx, dword ptr [ecx + 8]
// 007f7735  50                   push eax
// 007f7736  52                   push edx
// 007f7737  ff1550e18900         call dword ptr [0x89e150]
// 007f773d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f7741  8b01                 mov eax, dword ptr [ecx]
// 007f7743  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 007f774a  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f774d  2bbc248c000000       sub edi, dword ptr [esp + 0x8c]
// 007f7754  ffd2                 call edx
// 007f7756  33c9                 xor ecx, ecx
// 007f7758  83f803               cmp eax, 3
// 007f775b  0f94c1               sete cl
// 007f775e  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 007f7765  8bc7                 mov eax, edi
// 007f7767  8b7e78               mov edi, dword ptr [esi + 0x78]
// 007f776a  83c7fc               add edi, -4
// 007f776d  2bc1                 sub eax, ecx
// 007f776f  2b442448             sub eax, dword ptr [esp + 0x48]
// 007f7773  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007f777a  99                   cdq 
// 007f777b  2bc2                 sub eax, edx
// 007f777d  d1f8                 sar eax, 1
// 007f777f  2bc8                 sub ecx, eax
// 007f7781  8bc1                 mov eax, ecx
// 007f7783  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 007f778a  33d2                 xor edx, edx
// 007f778c  03c5                 add eax, ebp
// 007f778e  85ff                 test edi, edi
// 007f7790  0f9cc2               setl dl
// 007f7793  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 007f779a  89842494000000       mov dword ptr [esp + 0x94], eax
// 007f77a1  4a                   dec edx
// 007f77a2  23d7                 and edx, edi
// 007f77a4  8b7e68               mov edi, dword ptr [esi + 0x68]
// 007f77a7  03fa                 add edi, edx
// 007f77a9  2bef                 sub ebp, edi
// 007f77ab  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 007f77b2  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 007f77b9  751a                 jne 0x7f77d5
// 007f77bb  8d542414             lea edx, [esp + 0x14]
// 007f77bf  52                   push edx
// 007f77c0  8bce                 mov ecx, esi
// 007f77c2  e829e5ffff           call 0x7f5cf0
// 007f77c7  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007f77ce  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007f77d5  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 007f77dc  743c                 je 0x7f781a
// 007f77de  6820090000           push 0x920
// 007f77e3  83ec10               sub esp, 0x10
// 007f77e6  8bd4                 mov edx, esp
// 007f77e8  890a                 mov dword ptr [edx], ecx
// 007f77ea  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007f77f1  894a04               mov dword ptr [edx + 4], ecx
// 007f77f4  894208               mov dword ptr [edx + 8], eax
// 007f77f7  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 007f77fe  8d4c2428             lea ecx, [esp + 0x28]
// 007f7802  89420c               mov dword ptr [edx + 0xc], eax
// 007f7805  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007f780c  51                   push ecx
// 007f780d  52                   push edx
// 007f780e  8bce                 mov ecx, esi
// 007f7810  e8cbecffff           call 0x7f64e0
// 007f7815  e929020000           jmp 0x7f7a43
// 007f781a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 007f7820  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 007f7827  8b7d00               mov edi, dword ptr [ebp]
// 007f782a  f7d8                 neg eax
// 007f782c  1bc0                 sbb eax, eax
// 007f782e  2500800000           and eax, 0x8000
// 007f7833  0d20090000           or eax, 0x920
// 007f7838  50                   push eax
// 007f7839  8d842490000000       lea eax, [esp + 0x90]
// 007f7840  50                   push eax
// 007f7841  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7845  83c770               add edi, 0x70
// 007f7848  ff1554fb8900         call dword ptr [0x89fb54]
// 007f784e  50                   push eax
// 007f784f  8d4c2420             lea ecx, [esp + 0x20]
// 007f7853  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f7859  8b17                 mov edx, dword ptr [edi]
// 007f785b  50                   push eax
// 007f785c  8bcd                 mov ecx, ebp
// 007f785e  ffd2                 call edx
// 007f7860  e9de010000           jmp 0x7f7a43
// 007f7865  85c0                 test eax, eax
// 007f7867  7e18                 jle 0x7f7881
// 007f7869  99                   cdq 
// 007f786a  2bc2                 sub eax, edx
// 007f786c  d1f8                 sar eax, 1
// 007f786e  6a00                 push 0
// 007f7870  f7d8                 neg eax
// 007f7872  50                   push eax
// 007f7873  8d842494000000       lea eax, [esp + 0x94]
// 007f787a  50                   push eax
// 007f787b  ff15bced8900         call dword ptr [0x89edbc]
// 007f7881  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 007f7884  034e60               add ecx, dword ptr [esi + 0x60]
// 007f7887  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 007f788e  8b17                 mov edx, dword ptr [edi]
// 007f7890  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f7893  8bcf                 mov ecx, edi
// 007f7895  ffd0                 call eax
// 007f7897  83f802               cmp eax, 2
// 007f789a  7508                 jne 0x7f78a4
// 007f789c  8b4664               mov eax, dword ptr [esi + 0x64]
// 007f789f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007f78a2  eb06                 jmp 0x7f78aa
// 007f78a4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007f78a7  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007f78aa  29842498000000       sub dword ptr [esp + 0x98], eax
// 007f78b1  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f78b5  018c2490000000       add dword ptr [esp + 0x90], ecx
// 007f78bc  85c0                 test eax, eax
// 007f78be  7473                 je 0x7f7933
// 007f78c0  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007f78c7  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007f78ce  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 007f78d5  8d0411               lea eax, [ecx + edx]
// 007f78d8  99                   cdq 
// 007f78d9  2bc2                 sub eax, edx
// 007f78db  8bc8                 mov ecx, eax
// 007f78dd  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f78e1  99                   cdq 
// 007f78e2  2bc2                 sub eax, edx
// 007f78e4  d1f8                 sar eax, 1
// 007f78e6  d1f9                 sar ecx, 1
// 007f78e8  2bc8                 sub ecx, eax
// 007f78ea  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007f78f1  2be8                 sub ebp, eax
// 007f78f3  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 007f78f7  8d50ff               lea edx, [eax - 1]
// 007f78fa  7e22                 jle 0x7f791e
// 007f78fc  8b07                 mov eax, dword ptr [edi]
// 007f78fe  8d6c243c             lea ebp, [esp + 0x3c]
// 007f7902  55                   push ebp
// 007f7903  6a01                 push 1
// 007f7905  53                   push ebx
// 007f7906  51                   push ecx
// 007f7907  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007f790e  52                   push edx
// 007f790f  8b5044               mov edx, dword ptr [eax + 0x44]
// 007f7912  51                   push ecx
// 007f7913  8bcf                 mov ecx, edi
// 007f7915  ffd2                 call edx
// 007f7917  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007f791e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007f7922  8d4c0802             lea ecx, [eax + ecx + 2]
// 007f7926  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f792a  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 007f7931  eb07                 jmp 0x7f793a
// 007f7933  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007f793a  837c242800           cmp dword ptr [esp + 0x28], 0
// 007f793f  0f84fe000000         je 0x7f7a43
// 007f7945  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 007f794c  3bd1                 cmp edx, ecx
// 007f794e  0f8eef000000         jle 0x7f7a43
// 007f7954  f7d8                 neg eax
// 007f7956  1bc0                 sbb eax, eax
// 007f7958  83e002               and eax, 2
// 007f795b  2b4678               sub eax, dword ptr [esi + 0x78]
// 007f795e  2b4668               sub eax, dword ptr [esi + 0x68]
// 007f7961  03d0                 add edx, eax
// 007f7963  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 007f796a  89942494000000       mov dword ptr [esp + 0x94], edx
// 007f7971  7450                 je 0x7f79c3
// 007f7973  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 007f7979  f7d8                 neg eax
// 007f797b  1bc0                 sbb eax, eax
// 007f797d  2500080000           and eax, 0x800
// 007f7982  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 007f7988  83c820               or eax, 0x20
// 007f798b  50                   push eax
// 007f798c  83ec10               sub esp, 0x10
// 007f798f  8bc4                 mov eax, esp
// 007f7991  8908                 mov dword ptr [eax], ecx
// 007f7993  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 007f799a  894804               mov dword ptr [eax + 4], ecx
// 007f799d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007f79a4  895008               mov dword ptr [eax + 8], edx
// 007f79a7  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 007f79ae  89500c               mov dword ptr [eax + 0xc], edx
// 007f79b1  8d442428             lea eax, [esp + 0x28]
// 007f79b5  50                   push eax
// 007f79b6  51                   push ecx
// 007f79b7  8bce                 mov ecx, esi
// 007f79b9  e822ebffff           call 0x7f64e0
// 007f79be  e980000000           jmp 0x7f7a43
// 007f79c3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 007f79ca  7415                 je 0x7f79e1
// 007f79cc  8d542414             lea edx, [esp + 0x14]
// 007f79d0  52                   push edx
// 007f79d1  8bce                 mov ecx, esi
// 007f79d3  e818e3ffff           call 0x7f5cf0
// 007f79d8  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 007f79df  750d                 jne 0x7f79ee
// 007f79e1  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 007f79e8  7504                 jne 0x7f79ee
// 007f79ea  33c9                 xor ecx, ecx
// 007f79ec  eb05                 jmp 0x7f79f3
// 007f79ee  b900080000           mov ecx, 0x800
// 007f79f3  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 007f79f9  f7d8                 neg eax
// 007f79fb  1bc0                 sbb eax, eax
// 007f79fd  2500800000           and eax, 0x8000
// 007f7a02  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 007f7a08  8d94248c000000       lea edx, [esp + 0x8c]
// 007f7a0f  0bc1                 or eax, ecx
// 007f7a11  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007f7a18  8b39                 mov edi, dword ptr [ecx]
// 007f7a1a  83c820               or eax, 0x20
// 007f7a1d  50                   push eax
// 007f7a1e  52                   push edx
// 007f7a1f  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7a23  83c770               add edi, 0x70
// 007f7a26  ff1554fb8900         call dword ptr [0x89fb54]
// 007f7a2c  50                   push eax
// 007f7a2d  8d4c2420             lea ecx, [esp + 0x20]
// 007f7a31  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f7a37  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007f7a3e  50                   push eax
// 007f7a3f  8b07                 mov eax, dword ptr [edi]
// 007f7a41  ffd0                 call eax
// 007f7a43  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 007f7a46  395904               cmp dword ptr [ecx + 4], ebx
// 007f7a49  753d                 jne 0x7f7a88
// 007f7a4b  8b11                 mov edx, dword ptr [ecx]
// 007f7a4d  8b4278               mov eax, dword ptr [edx + 0x78]
// 007f7a50  ffd0                 call eax
// 007f7a52  85c0                 test eax, eax
// 007f7a54  7432                 je 0x7f7a88
// 007f7a56  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f7a5a  8b16                 mov edx, dword ptr [esi]
// 007f7a5c  8b5274               mov edx, dword ptr [edx + 0x74]
// 007f7a5f  83ec10               sub esp, 0x10
// 007f7a62  8bc4                 mov eax, esp
// 007f7a64  8908                 mov dword ptr [eax], ecx
// 007f7a66  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f7a6a  894804               mov dword ptr [eax + 4], ecx
// 007f7a6d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f7a71  894808               mov dword ptr [eax + 8], ecx
// 007f7a74  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007f7a78  89480c               mov dword ptr [eax + 0xc], ecx
// 007f7a7b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007f7a82  53                   push ebx
// 007f7a83  50                   push eax
// 007f7a84  8bce                 mov ecx, esi
// 007f7a86  ffd2                 call edx
// 007f7a88  8d4c2454             lea ecx, [esp + 0x54]
// 007f7a8c  c644247c00           mov byte ptr [esp + 0x7c], 0
// 007f7a91  e84a8ef7ff           call 0x7708e0
// 007f7a96  8d4c2414             lea ecx, [esp + 0x14]
// 007f7a9a  ff1510fd8900         call dword ptr [0x89fd10]
// 007f7aa0  33c0                 xor eax, eax
// 007f7aa2  e98b020000           jmp 0x7f7d32
// 007f7aa7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007f7aab  83f802               cmp eax, 2
// 007f7aae  751a                 jne 0x7f7aca
// 007f7ab0  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 007f7ab6  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 007f7abc  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 007f7ac2  50                   push eax
// 007f7ac3  51                   push ecx
// 007f7ac4  52                   push edx
// 007f7ac5  e945020000           jmp 0x7f7d0f
// 007f7aca  83f803               cmp eax, 3
// 007f7acd  0f85b4010000         jne 0x7f7c87
// 007f7ad3  837c242800           cmp dword ptr [esp + 0x28], 0
// 007f7ad8  7526                 jne 0x7f7b00
// 007f7ada  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f7adf  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f7ae3  7504                 jne 0x7f7ae9
// 007f7ae5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f7ae9  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 007f7aef  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 007f7af5  51                   push ecx
// 007f7af6  52                   push edx
// 007f7af7  83c008               add eax, 8
// 007f7afa  50                   push eax
// 007f7afb  e90f020000           jmp 0x7f7d0f
// 007f7b00  837e2800             cmp dword ptr [esi + 0x28], 0
// 007f7b04  7414                 je 0x7f7b1a
// 007f7b06  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 007f7b0a  740e                 je 0x7f7b1a
// 007f7b0c  8b442418             mov eax, dword ptr [esp + 0x18]
// 007f7b10  50                   push eax
// 007f7b11  8bce                 mov ecx, esi
// 007f7b13  e848e0ffff           call 0x7f5b60
// 007f7b18  eb13                 jmp 0x7f7b2d
// 007f7b1a  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f7b1f  8d861c010000         lea eax, [esi + 0x11c]
// 007f7b25  7506                 jne 0x7f7b2d
// 007f7b27  8d860c010000         lea eax, [esi + 0x10c]
// 007f7b2d  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007f7b34  50                   push eax
// 007f7b35  51                   push ecx
// 007f7b36  8d4c246c             lea ecx, [esp + 0x6c]
// 007f7b3a  e8218df7ff           call 0x770860
// 007f7b3f  8b475c               mov eax, dword ptr [edi + 0x5c]
// 007f7b42  33d2                 xor edx, edx
// 007f7b44  3bc2                 cmp eax, edx
// 007f7b46  c644247c02           mov byte ptr [esp + 0x7c], 2
// 007f7b4b  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 007f7b52  89942488000000       mov dword ptr [esp + 0x88], edx
// 007f7b59  0f8ed0000000         jle 0x7f7c2f
// 007f7b5f  eb07                 jmp 0x7f7b68
// 007f7b61  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007f7b68  33c9                 xor ecx, ecx
// 007f7b6a  3bd1                 cmp edx, ecx
// 007f7b6c  894c2444             mov dword ptr [esp + 0x44], ecx
// 007f7b70  894c2448             mov dword ptr [esp + 0x48], ecx
// 007f7b74  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007f7b78  894c2450             mov dword ptr [esp + 0x50], ecx
// 007f7b7c  7c1a                 jl 0x7f7b98
// 007f7b7e  3bd0                 cmp edx, eax
// 007f7b80  7d16                 jge 0x7f7b98
// 007f7b82  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f7b86  3b505c               cmp edx, dword ptr [eax + 0x5c]
// 007f7b89  0f8dd7f8ffff         jge 0x7f7466
// 007f7b8f  8b4058               mov eax, dword ptr [eax + 0x58]
// 007f7b92  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 007f7b95  8d0490               lea eax, [eax + edx*4]
// 007f7b98  8d542428             lea edx, [esp + 0x28]
// 007f7b9c  52                   push edx
// 007f7b9d  e87eb8ffff           call 0x7f3420
// 007f7ba2  8be8                 mov ebp, eax
// 007f7ba4  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 007f7baa  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 007f7bb1  8b3b                 mov edi, dword ptr [ebx]
// 007f7bb3  f7d8                 neg eax
// 007f7bb5  1bc0                 sbb eax, eax
// 007f7bb7  2500080000           and eax, 0x800
// 007f7bbc  0d20050000           or eax, 0x520
// 007f7bc1  50                   push eax
// 007f7bc2  8d442448             lea eax, [esp + 0x48]
// 007f7bc6  50                   push eax
// 007f7bc7  8bcd                 mov ecx, ebp
// 007f7bc9  c684248400000003     mov byte ptr [esp + 0x84], 3
// 007f7bd1  83c770               add edi, 0x70
// 007f7bd4  ff1554fb8900         call dword ptr [0x89fb54]
// 007f7bda  50                   push eax
// 007f7bdb  8bcd                 mov ecx, ebp
// 007f7bdd  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f7be3  8b17                 mov edx, dword ptr [edi]
// 007f7be5  50                   push eax
// 007f7be6  8bcb                 mov ecx, ebx
// 007f7be8  ffd2                 call edx
// 007f7bea  8d4c2428             lea ecx, [esp + 0x28]
// 007f7bee  c644247c02           mov byte ptr [esp + 0x7c], 2
// 007f7bf3  ff1510fd8900         call dword ptr [0x89fd10]
// 007f7bf9  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007f7bfd  2b442444             sub eax, dword ptr [esp + 0x44]
// 007f7c01  3984249c000000       cmp dword ptr [esp + 0x9c], eax
// 007f7c08  7f07                 jg 0x7f7c11
// 007f7c0a  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 007f7c11  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007f7c18  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f7c1c  8b405c               mov eax, dword ptr [eax + 0x5c]
// 007f7c1f  41                   inc ecx
// 007f7c20  3bc8                 cmp ecx, eax
// 007f7c22  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 007f7c29  0f8c32ffffff         jl 0x7f7b61
// 007f7c2f  837c242400           cmp dword ptr [esp + 0x24], 0
// 007f7c34  7504                 jne 0x7f7c3a
// 007f7c36  33c0                 xor eax, eax
// 007f7c38  eb0f                 jmp 0x7f7c49
// 007f7c3a  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f7c3f  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f7c43  7504                 jne 0x7f7c49
// 007f7c45  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f7c49  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 007f7c4f  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 007f7c55  51                   push ecx
// 007f7c56  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 007f7c59  034e70               add ecx, dword ptr [esi + 0x70]
// 007f7c5c  52                   push edx
// 007f7c5d  03c8                 add ecx, eax
// 007f7c5f  038c24a4000000       add ecx, dword ptr [esp + 0xa4]
// 007f7c66  034c2424             add ecx, dword ptr [esp + 0x24]
// 007f7c6a  51                   push ecx
// 007f7c6b  8bce                 mov ecx, esi
// 007f7c6d  e84ee0ffff           call 0x7f5cc0
// 007f7c72  8d4c2464             lea ecx, [esp + 0x64]
// 007f7c76  8bf0                 mov esi, eax
// 007f7c78  c644247c01           mov byte ptr [esp + 0x7c], 1
// 007f7c7d  e85e8cf7ff           call 0x7708e0
// 007f7c82  e991000000           jmp 0x7f7d18
// 007f7c87  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 007f7c8d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 007f7c94  8b1f                 mov ebx, dword ptr [edi]
// 007f7c96  f7d8                 neg eax
// 007f7c98  1bc0                 sbb eax, eax
// 007f7c9a  2500080000           and eax, 0x800
// 007f7c9f  0d20050000           or eax, 0x520
// 007f7ca4  50                   push eax
// 007f7ca5  8d942490000000       lea edx, [esp + 0x90]
// 007f7cac  52                   push edx
// 007f7cad  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7cb1  83c370               add ebx, 0x70
// 007f7cb4  ff1554fb8900         call dword ptr [0x89fb54]
// 007f7cba  50                   push eax
// 007f7cbb  8d4c2420             lea ecx, [esp + 0x20]
// 007f7cbf  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f7cc5  50                   push eax
// 007f7cc6  8b03                 mov eax, dword ptr [ebx]
// 007f7cc8  8bcf                 mov ecx, edi
// 007f7cca  ffd0                 call eax
// 007f7ccc  837c242400           cmp dword ptr [esp + 0x24], 0
// 007f7cd1  7504                 jne 0x7f7cd7
// 007f7cd3  33c0                 xor eax, eax
// 007f7cd5  eb0f                 jmp 0x7f7ce6
// 007f7cd7  837c241800           cmp dword ptr [esp + 0x18], 0
// 007f7cdc  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f7ce0  7504                 jne 0x7f7ce6
// 007f7ce2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f7ce6  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 007f7cec  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 007f7cf2  51                   push ecx
// 007f7cf3  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 007f7cf6  034e70               add ecx, dword ptr [esi + 0x70]
// 007f7cf9  52                   push edx
// 007f7cfa  2b8c2494000000       sub ecx, dword ptr [esp + 0x94]
// 007f7d01  03c8                 add ecx, eax
// 007f7d03  038c249c000000       add ecx, dword ptr [esp + 0x9c]
// 007f7d0a  034c2424             add ecx, dword ptr [esp + 0x24]
// 007f7d0e  51                   push ecx
// 007f7d0f  8bce                 mov ecx, esi
// 007f7d11  e8aadfffff           call 0x7f5cc0
// 007f7d16  8bf0                 mov esi, eax
// 007f7d18  8d4c2454             lea ecx, [esp + 0x54]
// 007f7d1c  c644247c00           mov byte ptr [esp + 0x7c], 0
// 007f7d21  e8ba8bf7ff           call 0x7708e0
// 007f7d26  8d4c2414             lea ecx, [esp + 0x14]
// 007f7d2a  ff1510fd8900         call dword ptr [0x89fd10]
// 007f7d30  8bc6                 mov eax, esi
// 007f7d32  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007f7d36  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7d3d  59                   pop ecx
// 007f7d3e  5f                   pop edi
// 007f7d3f  5e                   pop esi
// 007f7d40  5d                   pop ebp
// 007f7d41  5b                   pop ebx
// 007f7d42  83c46c               add esp, 0x6c
// 007f7d45  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSingleButtonIconAndText@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp