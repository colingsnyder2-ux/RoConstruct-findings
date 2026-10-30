// roc 2010-06 0082b520  unit: XTPPaintThemes::CXTPDefaultTheme  size: 1636 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082b520
//
// 0082b520  6aff                 push -1
// 0082b522  68f15c9b00           push 0x9b5cf1
// 0082b527  64a100000000         mov eax, dword ptr fs:[0]
// 0082b52d  50                   push eax
// 0082b52e  83ec68               sub esp, 0x68
// 0082b531  53                   push ebx
// 0082b532  55                   push ebp
// 0082b533  56                   push esi
// 0082b534  57                   push edi
// 0082b535  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0082b53a  33c4                 xor eax, esp
// 0082b53c  50                   push eax
// 0082b53d  8d44247c             lea eax, [esp + 0x7c]
// 0082b541  64a300000000         mov dword ptr fs:[0], eax
// 0082b547  8bf9                 mov edi, ecx
// 0082b549  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0082b550  85c0                 test eax, eax
// 0082b552  7414                 je 0x82b568
// 0082b554  8b4074               mov eax, dword ptr [eax + 0x74]
// 0082b557  83787400             cmp dword ptr [eax + 0x74], 0
// 0082b55b  7506                 jne 0x82b563
// 0082b55d  83787800             cmp dword ptr [eax + 0x78], 0
// 0082b561  7405                 je 0x82b568
// 0082b563  83c074               add eax, 0x74
// 0082b566  eb0c                 jmp 0x82b574
// 0082b568  6a00                 push 0
// 0082b56a  8d442428             lea eax, [esp + 0x28]
// 0082b56e  50                   push eax
// 0082b56f  e8ac25f8ff           call 0x7adb20
// 0082b574  8b10                 mov edx, dword ptr [eax]
// 0082b576  8b4004               mov eax, dword ptr [eax + 4]
// 0082b579  8d4804               lea ecx, [eax + 4]
// 0082b57c  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 0082b582  3bc8                 cmp ecx, eax
// 0082b584  8954242c             mov dword ptr [esp + 0x2c], edx
// 0082b588  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082b58c  7f04                 jg 0x82b592
// 0082b58e  89442418             mov dword ptr [esp + 0x18], eax
// 0082b592  8d4a04               lea ecx, [edx + 4]
// 0082b595  3bc8                 cmp ecx, eax
// 0082b597  894c2414             mov dword ptr [esp + 0x14], ecx
// 0082b59b  7f04                 jg 0x82b5a1
// 0082b59d  89442414             mov dword ptr [esp + 0x14], eax
// 0082b5a1  83bc24ac00000000     cmp dword ptr [esp + 0xac], 0
// 0082b5a9  0f84ab050000         je 0x82bb5a
// 0082b5af  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0082b5b6  6a0f                 push 0xf
// 0082b5b8  8bcf                 mov ecx, edi
// 0082b5ba  e8511bf8ff           call 0x7ad110
// 0082b5bf  50                   push eax
// 0082b5c0  85ed                 test ebp, ebp
// 0082b5c2  7525                 jne 0x82b5e9
// 0082b5c4  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0082b5cb  51                   push ecx
// 0082b5cc  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0082b5d3  e866d1f7ff           call 0x7a873e
// 0082b5d8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0082b5df  8928                 mov dword ptr [eax], ebp
// 0082b5e1  896804               mov dword ptr [eax + 4], ebp
// 0082b5e4  e985050000           jmp 0x82bb6e
// 0082b5e9  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 0082b5f0  8d94249c000000       lea edx, [esp + 0x9c]
// 0082b5f7  52                   push edx
// 0082b5f8  8bce                 mov ecx, esi
// 0082b5fa  e83fd1f7ff           call 0x7a873e
// 0082b5ff  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0082b606  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0082b60d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 0082b614  8b9dfc000000         mov ebx, dword ptr [ebp + 0xfc]
// 0082b61a  48                   dec eax
// 0082b61b  41                   inc ecx
// 0082b61c  89442424             mov dword ptr [esp + 0x24], eax
// 0082b620  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0082b627  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0082b62b  8bcd                 mov ecx, ebp
// 0082b62d  89542460             mov dword ptr [esp + 0x60], edx
// 0082b631  89442468             mov dword ptr [esp + 0x68], eax
// 0082b635  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 0082b63c  e88fe7f7ff           call 0x7a9dd0
// 0082b641  85c0                 test eax, eax
// 0082b643  7534                 jne 0x82b679
// 0082b645  83fb02               cmp ebx, 2
// 0082b648  7439                 je 0x82b683
// 0082b64a  ba01000000           mov edx, 1
// 0082b64f  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 0082b655  85c0                 test eax, eax
// 0082b657  753c                 jne 0x82b695
// 0082b659  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 0082b65f  85c0                 test eax, eax
// 0082b661  7f32                 jg 0x82b695
// 0082b663  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 0082b669  85c9                 test ecx, ecx
// 0082b66b  741a                 je 0x82b687
// 0082b66d  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0082b670  85c0                 test eax, eax
// 0082b672  7f21                 jg 0x82b695
// 0082b674  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0082b677  eb14                 jmp 0x82b68d
// 0082b679  83f802               cmp eax, 2
// 0082b67c  74cc                 je 0x82b64a
// 0082b67e  83f803               cmp eax, 3
// 0082b681  74c7                 je 0x82b64a
// 0082b683  33d2                 xor edx, edx
// 0082b685  ebc8                 jmp 0x82b64f
// 0082b687  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 0082b68d  85c0                 test eax, eax
// 0082b68f  0f841c010000         je 0x82b7b1
// 0082b695  85d2                 test edx, edx
// 0082b697  0f8414010000         je 0x82b7b1
// 0082b69d  8b5500               mov edx, dword ptr [ebp]
// 0082b6a0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082b6a4  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 0082b6aa  50                   push eax
// 0082b6ab  8bcd                 mov ecx, ebp
// 0082b6ad  ffd2                 call edx
// 0082b6af  8bd8                 mov ebx, eax
// 0082b6b1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0082b6b5  85db                 test ebx, ebx
// 0082b6b7  0f84f4000000         je 0x82b7b1
// 0082b6bd  8bcb                 mov ecx, ebx
// 0082b6bf  e88cd4f8ff           call 0x7b8b50
// 0082b6c4  8be8                 mov ebp, eax
// 0082b6c6  0faf6c242c           imul ebp, dword ptr [esp + 0x2c]
// 0082b6cb  8bcb                 mov ecx, ebx
// 0082b6cd  e8ce2afaff           call 0x7ce1a0
// 0082b6d2  8bc8                 mov ecx, eax
// 0082b6d4  8bc5                 mov eax, ebp
// 0082b6d6  99                   cdq 
// 0082b6d7  f7f9                 idiv ecx
// 0082b6d9  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 0082b6e0  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0082b6e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082b6eb  6a05                 push 5
// 0082b6ed  6a01                 push 1
// 0082b6ef  6a00                 push 0
// 0082b6f1  6a00                 push 0
// 0082b6f3  6a01                 push 1
// 0082b6f5  6a00                 push 0
// 0082b6f7  8d1c2a               lea ebx, [edx + ebp]
// 0082b6fa  8b17                 mov edx, dword ptr [edi]
// 0082b6fc  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0082b702  894c2468             mov dword ptr [esp + 0x68], ecx
// 0082b706  896c2464             mov dword ptr [esp + 0x64], ebp
// 0082b70a  89442448             mov dword ptr [esp + 0x48], eax
// 0082b70e  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0082b715  89442470             mov dword ptr [esp + 0x70], eax
// 0082b719  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 0082b720  50                   push eax
// 0082b721  83ec10               sub esp, 0x10
// 0082b724  8bc4                 mov eax, esp
// 0082b726  8928                 mov dword ptr [eax], ebp
// 0082b728  894804               mov dword ptr [eax + 4], ecx
// 0082b72b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0082b732  895808               mov dword ptr [eax + 8], ebx
// 0082b735  89480c               mov dword ptr [eax + 0xc], ecx
// 0082b738  56                   push esi
// 0082b739  8bcf                 mov ecx, edi
// 0082b73b  ffd2                 call edx
// 0082b73d  8b442458             mov eax, dword ptr [esp + 0x58]
// 0082b741  2b442450             sub eax, dword ptr [esp + 0x50]
// 0082b745  6a00                 push 0
// 0082b747  99                   cdq 
// 0082b748  2bc2                 sub eax, edx
// 0082b74a  8bc8                 mov ecx, eax
// 0082b74c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0082b750  99                   cdq 
// 0082b751  2bc2                 sub eax, edx
// 0082b753  d1f8                 sar eax, 1
// 0082b755  d1f9                 sar ecx, 1
// 0082b757  2bc8                 sub ecx, eax
// 0082b759  034c2454             add ecx, dword ptr [esp + 0x54]
// 0082b75d  8bc3                 mov eax, ebx
// 0082b75f  2bc5                 sub eax, ebp
// 0082b761  99                   cdq 
// 0082b762  2bc2                 sub eax, edx
// 0082b764  6a00                 push 0
// 0082b766  8be8                 mov ebp, eax
// 0082b768  8b442434             mov eax, dword ptr [esp + 0x34]
// 0082b76c  6a00                 push 0
// 0082b76e  6a01                 push 1
// 0082b770  99                   cdq 
// 0082b771  2bc2                 sub eax, edx
// 0082b773  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0082b77a  6a00                 push 0
// 0082b77c  52                   push edx
// 0082b77d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082b781  52                   push edx
// 0082b782  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0082b786  52                   push edx
// 0082b787  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0082b78b  d1f8                 sar eax, 1
// 0082b78d  d1fd                 sar ebp, 1
// 0082b78f  2be8                 sub ebp, eax
// 0082b791  036c246c             add ebp, dword ptr [esp + 0x6c]
// 0082b795  8b07                 mov eax, dword ptr [edi]
// 0082b797  52                   push edx
// 0082b798  51                   push ecx
// 0082b799  55                   push ebp
// 0082b79a  56                   push esi
// 0082b79b  8bcf                 mov ecx, edi
// 0082b79d  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0082b7a3  ffd0                 call eax
// 0082b7a5  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0082b7ac  43                   inc ebx
// 0082b7ad  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0082b7b1  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 0082b7b8  85db                 test ebx, ebx
// 0082b7ba  742f                 je 0x82b7eb
// 0082b7bc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0082b7c0  8b542460             mov edx, dword ptr [esp + 0x60]
// 0082b7c4  6a0d                 push 0xd
// 0082b7c6  6a0d                 push 0xd
// 0082b7c8  83ec10               sub esp, 0x10
// 0082b7cb  8bc4                 mov eax, esp
// 0082b7cd  8908                 mov dword ptr [eax], ecx
// 0082b7cf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0082b7d3  895004               mov dword ptr [eax + 4], edx
// 0082b7d6  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0082b7dd  894808               mov dword ptr [eax + 8], ecx
// 0082b7e0  56                   push esi
// 0082b7e1  8bcf                 mov ecx, edi
// 0082b7e3  89500c               mov dword ptr [eax + 0xc], edx
// 0082b7e6  e8852af8ff           call 0x7ae270
// 0082b7eb  33c0                 xor eax, eax
// 0082b7ed  85db                 test ebx, ebx
// 0082b7ef  0f94c0               sete al
// 0082b7f2  8bcf                 mov ecx, edi
// 0082b7f4  8d04850e000000       lea eax, [eax*4 + 0xe]
// 0082b7fb  50                   push eax
// 0082b7fc  89442428             mov dword ptr [esp + 0x28], eax
// 0082b800  e80b19f8ff           call 0x7ad110
// 0082b805  8b16                 mov edx, dword ptr [esi]
// 0082b807  89842494000000       mov dword ptr [esp + 0x94], eax
// 0082b80e  50                   push eax
// 0082b80f  8b4238               mov eax, dword ptr [edx + 0x38]
// 0082b812  8bce                 mov ecx, esi
// 0082b814  ffd0                 call eax
// 0082b816  6a01                 push 1
// 0082b818  8bce                 mov ecx, esi
// 0082b81a  e895151500           call 0x97cdb4
// 0082b81f  8b5500               mov edx, dword ptr [ebp]
// 0082b822  8b5258               mov edx, dword ptr [edx + 0x58]
// 0082b825  8d8424ac000000       lea eax, [esp + 0xac]
// 0082b82c  50                   push eax
// 0082b82d  8bcd                 mov ecx, ebp
// 0082b82f  ffd2                 call edx
// 0082b831  8d8424ac000000       lea eax, [esp + 0xac]
// 0082b838  50                   push eax
// 0082b839  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0082b844  e8571bf8ff           call 0x7ad3a0
// 0082b849  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0082b850  83c404               add esp, 4
// 0082b853  85c9                 test ecx, ecx
// 0082b855  741d                 je 0x82b874
// 0082b857  e824ccf9ff           call 0x7c8480
// 0082b85c  85c0                 test eax, eax
// 0082b85e  7414                 je 0x82b874
// 0082b860  8b17                 mov edx, dword ptr [edi]
// 0082b862  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0082b868  8d8424ac000000       lea eax, [esp + 0xac]
// 0082b86f  50                   push eax
// 0082b870  8bcf                 mov ecx, edi
// 0082b872  ffd2                 call edx
// 0082b874  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0082b87b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082b87f  8d540104             lea edx, [ecx + eax + 4]
// 0082b883  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0082b88a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0082b891  89442440             mov dword ptr [esp + 0x40], eax
// 0082b895  8d87f0000000         lea eax, [edi + 0xf0]
// 0082b89b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0082b89f  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 0082b8a6  50                   push eax
// 0082b8a7  894c2448             mov dword ptr [esp + 0x48], ecx
// 0082b8ab  56                   push esi
// 0082b8ac  8d4c2474             lea ecx, [esp + 0x74]
// 0082b8b0  89542450             mov dword ptr [esp + 0x50], edx
// 0082b8b4  e8e73dfdff           call 0x7ff6a0
// 0082b8b9  8b2e                 mov ebp, dword ptr [esi]
// 0082b8bb  6824880000           push 0x8824
// 0082b8c0  8d4c2440             lea ecx, [esp + 0x40]
// 0082b8c4  51                   push ecx
// 0082b8c5  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0082b8cc  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 0082b8d4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0082b8da  50                   push eax
// 0082b8db  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0082b8e2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082b8e8  8b5570               mov edx, dword ptr [ebp + 0x70]
// 0082b8eb  50                   push eax
// 0082b8ec  8bce                 mov ecx, esi
// 0082b8ee  ffd2                 call edx
// 0082b8f0  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0082b8f7  83f802               cmp eax, 2
// 0082b8fa  740e                 je 0x82b90a
// 0082b8fc  83f803               cmp eax, 3
// 0082b8ff  7409                 je 0x82b90a
// 0082b901  83f804               cmp eax, 4
// 0082b904  0f858e000000         jne 0x82b998
// 0082b90a  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0082b911  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0082b918  03c1                 add eax, ecx
// 0082b91a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0082b921  99                   cdq 
// 0082b922  2bc2                 sub eax, edx
// 0082b924  d1f8                 sar eax, 1
// 0082b926  8d58fb               lea ebx, [eax - 5]
// 0082b929  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 0082b930  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0082b937  53                   push ebx
// 0082b938  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 0082b93f  83c1f9               add ecx, -7
// 0082b942  8d6805               lea ebp, [eax + 5]
// 0082b945  55                   push ebp
// 0082b946  8d51fb               lea edx, [ecx - 5]
// 0082b949  52                   push edx
// 0082b94a  53                   push ebx
// 0082b94b  52                   push edx
// 0082b94c  50                   push eax
// 0082b94d  51                   push ecx
// 0082b94e  56                   push esi
// 0082b94f  e84c28f8ff           call 0x7ae1a0
// 0082b954  83c420               add esp, 0x20
// 0082b957  83bc249000000004     cmp dword ptr [esp + 0x90], 4
// 0082b95f  7530                 jne 0x82b991
// 0082b961  8b542424             mov edx, dword ptr [esp + 0x24]
// 0082b965  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0082b96c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0082b973  52                   push edx
// 0082b974  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0082b97b  49                   dec ecx
// 0082b97c  51                   push ecx
// 0082b97d  83c0ec               add eax, -0x14
// 0082b980  50                   push eax
// 0082b981  42                   inc edx
// 0082b982  52                   push edx
// 0082b983  50                   push eax
// 0082b984  56                   push esi
// 0082b985  8bcf                 mov ecx, edi
// 0082b987  e8242df8ff           call 0x7ae6b0
// 0082b98c  e9ab010000           jmp 0x82bb3c
// 0082b991  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0082b998  83f805               cmp eax, 5
// 0082b99b  7409                 je 0x82b9a6
// 0082b99d  83f806               cmp eax, 6
// 0082b9a0  0f8596010000         jne 0x82bb3c
// 0082b9a6  8d44243c             lea eax, [esp + 0x3c]
// 0082b9aa  50                   push eax
// 0082b9ab  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 0082b9b1  8b1e                 mov ebx, dword ptr [esi]
// 0082b9b3  6820040000           push 0x420
// 0082b9b8  8d4c2440             lea ecx, [esp + 0x40]
// 0082b9bc  51                   push ecx
// 0082b9bd  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0082b9c4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0082b9ca  50                   push eax
// 0082b9cb  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0082b9d2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0082b9d8  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0082b9db  50                   push eax
// 0082b9dc  8bce                 mov ecx, esi
// 0082b9de  ffd2                 call edx
// 0082b9e0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0082b9e3  8d44241c             lea eax, [esp + 0x1c]
// 0082b9e7  50                   push eax
// 0082b9e8  6a01                 push 1
// 0082b9ea  68e86ea000           push 0xa06ee8
// 0082b9ef  51                   push ecx
// 0082b9f0  ff1594a19e00         call dword ptr [0x9ea194]
// 0082b9f6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0082b9fa  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 0082b9fe  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0082ba05  03542414             add edx, dword ptr [esp + 0x14]
// 0082ba09  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082ba0d  8d540a09             lea edx, [edx + ecx + 9]
// 0082ba11  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0082ba18  83c002               add eax, 2
// 0082ba1b  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 0082ba22  8be9                 mov ebp, ecx
// 0082ba24  2be8                 sub ebp, eax
// 0082ba26  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 0082ba2d  89442438             mov dword ptr [esp + 0x38], eax
// 0082ba31  33c0                 xor eax, eax
// 0082ba33  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 0082ba3a  6a05                 push 5
// 0082ba3c  0f94c0               sete al
// 0082ba3f  894c2438             mov dword ptr [esp + 0x38], ecx
// 0082ba43  8d44000d             lea eax, [eax + eax + 0xd]
// 0082ba47  50                   push eax
// 0082ba48  83ec10               sub esp, 0x10
// 0082ba4b  8bc4                 mov eax, esp
// 0082ba4d  8910                 mov dword ptr [eax], edx
// 0082ba4f  8bd3                 mov edx, ebx
// 0082ba51  895004               mov dword ptr [eax + 4], edx
// 0082ba54  894808               mov dword ptr [eax + 8], ecx
// 0082ba57  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0082ba5e  89480c               mov dword ptr [eax + 0xc], ecx
// 0082ba61  56                   push esi
// 0082ba62  8bcf                 mov ecx, edi
// 0082ba64  e80728f8ff           call 0x7ae270
// 0082ba69  83bc249000000005     cmp dword ptr [esp + 0x90], 5
// 0082ba71  0f85c5000000         jne 0x82bb3c
// 0082ba77  83bc24a800000000     cmp dword ptr [esp + 0xa8], 0
// 0082ba7f  6a0f                 push 0xf
// 0082ba81  7549                 jne 0x82bacc
// 0082ba83  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082ba87  2bc3                 sub eax, ebx
// 0082ba89  898424ac000000       mov dword ptr [esp + 0xac], eax
// 0082ba90  8b442438             mov eax, dword ptr [esp + 0x38]
// 0082ba94  2bc5                 sub eax, ebp
// 0082ba96  8bcf                 mov ecx, edi
// 0082ba98  89842494000000       mov dword ptr [esp + 0x94], eax
// 0082ba9f  e86c16f8ff           call 0x7ad110
// 0082baa4  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 0082baab  50                   push eax
// 0082baac  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0082bab3  83c2fc               add edx, -4
// 0082bab6  52                   push edx
// 0082bab7  83c0fc               add eax, -4
// 0082baba  50                   push eax
// 0082babb  8d4b02               lea ecx, [ebx + 2]
// 0082babe  51                   push ecx
// 0082babf  8d5502               lea edx, [ebp + 2]
// 0082bac2  52                   push edx
// 0082bac3  8bce                 mov ecx, esi
// 0082bac5  e8c0121500           call 0x97cd8a
// 0082baca  eb22                 jmp 0x82baee
// 0082bacc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082bad0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0082bad4  6a0d                 push 0xd
// 0082bad6  83ec10               sub esp, 0x10
// 0082bad9  8bc4                 mov eax, esp
// 0082badb  8928                 mov dword ptr [eax], ebp
// 0082badd  895804               mov dword ptr [eax + 4], ebx
// 0082bae0  894808               mov dword ptr [eax + 8], ecx
// 0082bae3  56                   push esi
// 0082bae4  8bcf                 mov ecx, edi
// 0082bae6  89500c               mov dword ptr [eax + 0xc], edx
// 0082bae9  e88227f8ff           call 0x7ae270
// 0082baee  b801000000           mov eax, 1
// 0082baf3  29442434             sub dword ptr [esp + 0x34], eax
// 0082baf7  29442438             sub dword ptr [esp + 0x38], eax
// 0082bafb  03e8                 add ebp, eax
// 0082bafd  03d8                 add ebx, eax
// 0082baff  8b07                 mov eax, dword ptr [edi]
// 0082bb01  6a12                 push 0x12
// 0082bb03  8bcf                 mov ecx, edi
// 0082bb05  898424ac000000       mov dword ptr [esp + 0xac], eax
// 0082bb0c  e8ff15f8ff           call 0x7ad110
// 0082bb11  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0082bb15  8b542438             mov edx, dword ptr [esp + 0x38]
// 0082bb19  50                   push eax
// 0082bb1a  83ec10               sub esp, 0x10
// 0082bb1d  8bc4                 mov eax, esp
// 0082bb1f  8928                 mov dword ptr [eax], ebp
// 0082bb21  895804               mov dword ptr [eax + 4], ebx
// 0082bb24  894808               mov dword ptr [eax + 8], ecx
// 0082bb27  89500c               mov dword ptr [eax + 0xc], edx
// 0082bb2a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0082bb31  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 0082bb37  56                   push esi
// 0082bb38  8bcf                 mov ecx, edi
// 0082bb3a  ffd2                 call edx
// 0082bb3c  8d4c246c             lea ecx, [esp + 0x6c]
// 0082bb40  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0082bb48  e8d33bfdff           call 0x7ff720
// 0082bb4d  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0082bb54  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0082bb5a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0082bb61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082bb65  8b542418             mov edx, dword ptr [esp + 0x18]
// 0082bb69  8908                 mov dword ptr [eax], ecx
// 0082bb6b  895004               mov dword ptr [eax + 4], edx
// 0082bb6e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0082bb72  64890d00000000       mov dword ptr fs:[0], ecx
// 0082bb79  59                   pop ecx
// 0082bb7a  5f                   pop edi
// 0082bb7b  5e                   pop esi
// 0082bb7c  5d                   pop ebp
// 0082bb7d  5b                   pop ebx
// 0082bb7e  83c474               add esp, 0x74
// 0082bb81  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDefaultTheme.cpp