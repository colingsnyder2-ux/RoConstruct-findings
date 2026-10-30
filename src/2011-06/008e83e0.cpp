// roc 2011-06 008e83e0  unit: CXTColorHex  size: 2329 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e83e0
//
// 008e83e0  6aff                 push -1
// 008e83e2  68d8dfa000           push 0xa0dfd8
// 008e83e7  64a100000000         mov eax, dword ptr fs:[0]
// 008e83ed  50                   push eax
// 008e83ee  83ec20               sub esp, 0x20
// 008e83f1  53                   push ebx
// 008e83f2  55                   push ebp
// 008e83f3  56                   push esi
// 008e83f4  57                   push edi
// 008e83f5  a12058c900           mov eax, dword ptr [0xc95820]
// 008e83fa  33c4                 xor eax, esp
// 008e83fc  50                   push eax
// 008e83fd  8d442434             lea eax, [esp + 0x34]
// 008e8401  64a300000000         mov dword ptr fs:[0], eax
// 008e8407  8bf1                 mov esi, ecx
// 008e8409  6a1c                 push 0x1c
// 008e840b  e84e1cf2ff           call 0x80a05e
// 008e8410  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008e8414  83c404               add esp, 4
// 008e8417  53                   push ebx
// 008e8418  6a01                 push 1
// 008e841a  6a00                 push 0
// 008e841c  8d4c2438             lea ecx, [esp + 0x38]
// 008e8420  8bf8                 mov edi, eax
// 008e8422  e8cd470e00           call 0x9ccbf4
// 008e8427  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008e842b  8d44242c             lea eax, [esp + 0x2c]
// 008e842f  50                   push eax
// 008e8430  8bcd                 mov ecx, ebp
// 008e8432  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008e843a  e8af470e00           call 0x9ccbee
// 008e843f  6898150000           push 0x1598
// 008e8444  89442448             mov dword ptr [esp + 0x48], eax
// 008e8448  895f18               mov dword ptr [edi + 0x18], ebx
// 008e844b  c7471000000000       mov dword ptr [edi + 0x10], 0
// 008e8452  e8e91ef2ff           call 0x80a340
// 008e8457  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008e845b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008e845f  890f                 mov dword ptr [edi], ecx
// 008e8461  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e8465  83c404               add esp, 4
// 008e8468  894714               mov dword ptr [edi + 0x14], eax
// 008e846b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008e846f  894f0c               mov dword ptr [edi + 0xc], ecx
// 008e8472  57                   push edi
// 008e8473  8d4e74               lea ecx, [esi + 0x74]
// 008e8476  895704               mov dword ptr [edi + 4], edx
// 008e8479  894708               mov dword ptr [edi + 8], eax
// 008e847c  e8ef800000           call 0x8f0570
// 008e8481  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8485  3b5e70               cmp ebx, dword ptr [esi + 0x70]
// 008e8488  750a                 jne 0x8e8494
// 008e848a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008e848e  894668               mov dword ptr [esi + 0x68], eax
// 008e8491  89566c               mov dword ptr [esi + 0x6c], edx
// 008e8494  33f6                 xor esi, esi
// 008e8496  89742450             mov dword ptr [esp + 0x50], esi
// 008e849a  eb08                 jmp 0x8e84a4
// 008e849c  8d642400             lea esp, [esp]
// 008e84a0  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e84a4  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008e84a8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008e84ac  53                   push ebx
// 008e84ad  03ca                 add ecx, edx
// 008e84af  51                   push ecx
// 008e84b0  50                   push eax
// 008e84b1  89442420             mov dword ptr [esp + 0x20], eax
// 008e84b5  8b4504               mov eax, dword ptr [ebp + 4]
// 008e84b8  50                   push eax
// 008e84b9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e84bd  ff150c01a400         call dword ptr [0xa4010c]
// 008e84c3  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e84c6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e84ca  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e84ce  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e84d1  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e84d5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e84d9  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e84dd  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e84e1  53                   push ebx
// 008e84e2  03ca                 add ecx, edx
// 008e84e4  40                   inc eax
// 008e84e5  51                   push ecx
// 008e84e6  50                   push eax
// 008e84e7  89442428             mov dword ptr [esp + 0x28], eax
// 008e84eb  8b4504               mov eax, dword ptr [ebp + 4]
// 008e84ee  50                   push eax
// 008e84ef  46                   inc esi
// 008e84f0  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e84f4  ff150c01a400         call dword ptr [0xa4010c]
// 008e84fa  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e84fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8501  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8505  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8508  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e850c  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8510  40                   inc eax
// 008e8511  46                   inc esi
// 008e8512  83f811               cmp eax, 0x11
// 008e8515  89442450             mov dword ptr [esp + 0x50], eax
// 008e8519  7c85                 jl 0x8e84a0
// 008e851b  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8523  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8527  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e852b  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e852f  53                   push ebx
// 008e8530  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e8534  83c002               add eax, 2
// 008e8537  51                   push ecx
// 008e8538  50                   push eax
// 008e8539  89442428             mov dword ptr [esp + 0x28], eax
// 008e853d  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8540  50                   push eax
// 008e8541  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8545  ff150c01a400         call dword ptr [0xa4010c]
// 008e854b  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e854e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8552  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8556  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8559  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e855d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8561  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8565  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8569  53                   push ebx
// 008e856a  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e856e  83c003               add eax, 3
// 008e8571  51                   push ecx
// 008e8572  50                   push eax
// 008e8573  89442420             mov dword ptr [esp + 0x20], eax
// 008e8577  8b4504               mov eax, dword ptr [ebp + 4]
// 008e857a  50                   push eax
// 008e857b  46                   inc esi
// 008e857c  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e8580  ff150c01a400         call dword ptr [0xa4010c]
// 008e8586  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8589  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e858d  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8591  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8594  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8598  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e859c  40                   inc eax
// 008e859d  46                   inc esi
// 008e859e  83f813               cmp eax, 0x13
// 008e85a1  89442450             mov dword ptr [esp + 0x50], eax
// 008e85a5  0f8c78ffffff         jl 0x8e8523
// 008e85ab  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e85b3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e85b7  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e85bb  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e85bf  53                   push ebx
// 008e85c0  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e85c4  83c004               add eax, 4
// 008e85c7  51                   push ecx
// 008e85c8  50                   push eax
// 008e85c9  89442428             mov dword ptr [esp + 0x28], eax
// 008e85cd  8b4504               mov eax, dword ptr [ebp + 4]
// 008e85d0  50                   push eax
// 008e85d1  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e85d5  ff150c01a400         call dword ptr [0xa4010c]
// 008e85db  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e85de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e85e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e85e6  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e85e9  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e85ed  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e85f1  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e85f5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e85f9  53                   push ebx
// 008e85fa  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e85fe  83c005               add eax, 5
// 008e8601  51                   push ecx
// 008e8602  50                   push eax
// 008e8603  89442420             mov dword ptr [esp + 0x20], eax
// 008e8607  8b4504               mov eax, dword ptr [ebp + 4]
// 008e860a  50                   push eax
// 008e860b  46                   inc esi
// 008e860c  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e8610  ff150c01a400         call dword ptr [0xa4010c]
// 008e8616  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8619  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e861d  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8621  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8624  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8628  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e862c  40                   inc eax
// 008e862d  46                   inc esi
// 008e862e  83f815               cmp eax, 0x15
// 008e8631  89442450             mov dword ptr [esp + 0x50], eax
// 008e8635  0f8c78ffffff         jl 0x8e85b3
// 008e863b  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8643  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8647  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e864b  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e864f  53                   push ebx
// 008e8650  8d4c0afd             lea ecx, [edx + ecx - 3]
// 008e8654  83c006               add eax, 6
// 008e8657  51                   push ecx
// 008e8658  50                   push eax
// 008e8659  89442428             mov dword ptr [esp + 0x28], eax
// 008e865d  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8660  50                   push eax
// 008e8661  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8665  ff150c01a400         call dword ptr [0xa4010c]
// 008e866b  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e866e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8672  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8676  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8679  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e867d  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8681  40                   inc eax
// 008e8682  46                   inc esi
// 008e8683  83f817               cmp eax, 0x17
// 008e8686  89442450             mov dword ptr [esp + 0x50], eax
// 008e868a  7cb7                 jl 0x8e8643
// 008e868c  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8694  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8698  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e869c  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e86a0  53                   push ebx
// 008e86a1  8d4c0afc             lea ecx, [edx + ecx - 4]
// 008e86a5  83c007               add eax, 7
// 008e86a8  51                   push ecx
// 008e86a9  50                   push eax
// 008e86aa  89442428             mov dword ptr [esp + 0x28], eax
// 008e86ae  8b4504               mov eax, dword ptr [ebp + 4]
// 008e86b1  50                   push eax
// 008e86b2  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e86b6  ff150c01a400         call dword ptr [0xa4010c]
// 008e86bc  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e86bf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e86c3  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e86c7  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e86ca  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e86ce  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e86d2  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e86d6  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e86da  53                   push ebx
// 008e86db  8d4c0afc             lea ecx, [edx + ecx - 4]
// 008e86df  83c008               add eax, 8
// 008e86e2  51                   push ecx
// 008e86e3  50                   push eax
// 008e86e4  89442420             mov dword ptr [esp + 0x20], eax
// 008e86e8  8b4504               mov eax, dword ptr [ebp + 4]
// 008e86eb  50                   push eax
// 008e86ec  46                   inc esi
// 008e86ed  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e86f1  ff150c01a400         call dword ptr [0xa4010c]
// 008e86f7  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e86fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e86fe  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8702  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8705  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8709  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e870d  40                   inc eax
// 008e870e  46                   inc esi
// 008e870f  83f819               cmp eax, 0x19
// 008e8712  89442450             mov dword ptr [esp + 0x50], eax
// 008e8716  0f8c78ffffff         jl 0x8e8694
// 008e871c  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8724  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8728  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e872c  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8730  53                   push ebx
// 008e8731  8d4c0afb             lea ecx, [edx + ecx - 5]
// 008e8735  83c009               add eax, 9
// 008e8738  51                   push ecx
// 008e8739  50                   push eax
// 008e873a  89442428             mov dword ptr [esp + 0x28], eax
// 008e873e  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8741  50                   push eax
// 008e8742  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8746  ff150c01a400         call dword ptr [0xa4010c]
// 008e874c  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e874f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8753  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8757  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e875a  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e875e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8762  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8766  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e876a  53                   push ebx
// 008e876b  8d4c0afb             lea ecx, [edx + ecx - 5]
// 008e876f  83c00a               add eax, 0xa
// 008e8772  51                   push ecx
// 008e8773  50                   push eax
// 008e8774  89442420             mov dword ptr [esp + 0x20], eax
// 008e8778  8b4504               mov eax, dword ptr [ebp + 4]
// 008e877b  50                   push eax
// 008e877c  46                   inc esi
// 008e877d  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e8781  ff150c01a400         call dword ptr [0xa4010c]
// 008e8787  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e878a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e878e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8792  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8795  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8799  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e879d  40                   inc eax
// 008e879e  46                   inc esi
// 008e879f  83f81b               cmp eax, 0x1b
// 008e87a2  89442450             mov dword ptr [esp + 0x50], eax
// 008e87a6  0f8c78ffffff         jl 0x8e8724
// 008e87ac  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e87b4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e87b8  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e87bc  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e87c0  53                   push ebx
// 008e87c1  8d4c0afa             lea ecx, [edx + ecx - 6]
// 008e87c5  83c00b               add eax, 0xb
// 008e87c8  51                   push ecx
// 008e87c9  50                   push eax
// 008e87ca  89442428             mov dword ptr [esp + 0x28], eax
// 008e87ce  8b4504               mov eax, dword ptr [ebp + 4]
// 008e87d1  50                   push eax
// 008e87d2  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e87d6  ff150c01a400         call dword ptr [0xa4010c]
// 008e87dc  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e87df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e87e3  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e87e7  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e87ea  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e87ee  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e87f2  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e87f6  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e87fa  53                   push ebx
// 008e87fb  8d4c0afa             lea ecx, [edx + ecx - 6]
// 008e87ff  83c00c               add eax, 0xc
// 008e8802  51                   push ecx
// 008e8803  50                   push eax
// 008e8804  89442420             mov dword ptr [esp + 0x20], eax
// 008e8808  8b4504               mov eax, dword ptr [ebp + 4]
// 008e880b  50                   push eax
// 008e880c  46                   inc esi
// 008e880d  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e8811  ff150c01a400         call dword ptr [0xa4010c]
// 008e8817  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e881a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e881e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e8822  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8825  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8829  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e882d  40                   inc eax
// 008e882e  46                   inc esi
// 008e882f  83f81d               cmp eax, 0x1d
// 008e8832  89442450             mov dword ptr [esp + 0x50], eax
// 008e8836  0f8c78ffffff         jl 0x8e87b4
// 008e883c  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8844  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8848  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e884c  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8850  53                   push ebx
// 008e8851  8d4c0af9             lea ecx, [edx + ecx - 7]
// 008e8855  83c00d               add eax, 0xd
// 008e8858  51                   push ecx
// 008e8859  50                   push eax
// 008e885a  89442428             mov dword ptr [esp + 0x28], eax
// 008e885e  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8861  50                   push eax
// 008e8862  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8866  ff150c01a400         call dword ptr [0xa4010c]
// 008e886c  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e886f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8873  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8877  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e887a  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e887e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8882  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8886  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e888a  53                   push ebx
// 008e888b  8d4c0af9             lea ecx, [edx + ecx - 7]
// 008e888f  83c00e               add eax, 0xe
// 008e8892  51                   push ecx
// 008e8893  50                   push eax
// 008e8894  89442420             mov dword ptr [esp + 0x20], eax
// 008e8898  8b4504               mov eax, dword ptr [ebp + 4]
// 008e889b  50                   push eax
// 008e889c  46                   inc esi
// 008e889d  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e88a1  ff150c01a400         call dword ptr [0xa4010c]
// 008e88a7  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e88aa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e88ae  8b542418             mov edx, dword ptr [esp + 0x18]
// 008e88b2  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e88b5  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e88b9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e88bd  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e88c1  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e88c5  53                   push ebx
// 008e88c6  8d4c0af9             lea ecx, [edx + ecx - 7]
// 008e88ca  83c00f               add eax, 0xf
// 008e88cd  51                   push ecx
// 008e88ce  50                   push eax
// 008e88cf  89442430             mov dword ptr [esp + 0x30], eax
// 008e88d3  8b4504               mov eax, dword ptr [ebp + 4]
// 008e88d6  50                   push eax
// 008e88d7  46                   inc esi
// 008e88d8  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e88dc  ff150c01a400         call dword ptr [0xa4010c]
// 008e88e2  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e88e5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e88e9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e88ed  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e88f0  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e88f4  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e88f8  40                   inc eax
// 008e88f9  46                   inc esi
// 008e88fa  83f81f               cmp eax, 0x1f
// 008e88fd  89442450             mov dword ptr [esp + 0x50], eax
// 008e8901  0f8c3dffffff         jl 0x8e8844
// 008e8907  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e890f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8913  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8917  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e891b  53                   push ebx
// 008e891c  8d4c0afa             lea ecx, [edx + ecx - 6]
// 008e8920  83c010               add eax, 0x10
// 008e8923  51                   push ecx
// 008e8924  50                   push eax
// 008e8925  89442430             mov dword ptr [esp + 0x30], eax
// 008e8929  8b4504               mov eax, dword ptr [ebp + 4]
// 008e892c  50                   push eax
// 008e892d  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8931  ff150c01a400         call dword ptr [0xa4010c]
// 008e8937  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e893a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e893e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8942  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8945  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8949  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e894d  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8951  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8955  53                   push ebx
// 008e8956  8d4c0afa             lea ecx, [edx + ecx - 6]
// 008e895a  83c011               add eax, 0x11
// 008e895d  51                   push ecx
// 008e895e  50                   push eax
// 008e895f  89442428             mov dword ptr [esp + 0x28], eax
// 008e8963  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8966  50                   push eax
// 008e8967  46                   inc esi
// 008e8968  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e896c  ff150c01a400         call dword ptr [0xa4010c]
// 008e8972  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8975  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8979  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e897d  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8980  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8984  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8988  40                   inc eax
// 008e8989  46                   inc esi
// 008e898a  83f81d               cmp eax, 0x1d
// 008e898d  89442450             mov dword ptr [esp + 0x50], eax
// 008e8991  0f8c78ffffff         jl 0x8e890f
// 008e8997  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e899f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e89a3  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e89a7  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e89ab  53                   push ebx
// 008e89ac  8d4c0afb             lea ecx, [edx + ecx - 5]
// 008e89b0  83c012               add eax, 0x12
// 008e89b3  51                   push ecx
// 008e89b4  50                   push eax
// 008e89b5  89442430             mov dword ptr [esp + 0x30], eax
// 008e89b9  8b4504               mov eax, dword ptr [ebp + 4]
// 008e89bc  50                   push eax
// 008e89bd  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e89c1  ff150c01a400         call dword ptr [0xa4010c]
// 008e89c7  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e89ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e89ce  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e89d2  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e89d5  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e89d9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e89dd  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e89e1  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e89e5  53                   push ebx
// 008e89e6  8d4c0afb             lea ecx, [edx + ecx - 5]
// 008e89ea  83c013               add eax, 0x13
// 008e89ed  51                   push ecx
// 008e89ee  50                   push eax
// 008e89ef  89442428             mov dword ptr [esp + 0x28], eax
// 008e89f3  8b4504               mov eax, dword ptr [ebp + 4]
// 008e89f6  50                   push eax
// 008e89f7  46                   inc esi
// 008e89f8  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e89fc  ff150c01a400         call dword ptr [0xa4010c]
// 008e8a02  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8a05  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8a09  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8a0d  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8a10  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8a14  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8a18  40                   inc eax
// 008e8a19  46                   inc esi
// 008e8a1a  83f81b               cmp eax, 0x1b
// 008e8a1d  89442450             mov dword ptr [esp + 0x50], eax
// 008e8a21  0f8c78ffffff         jl 0x8e899f
// 008e8a27  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8a2f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8a33  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8a37  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8a3b  53                   push ebx
// 008e8a3c  8d4c0afc             lea ecx, [edx + ecx - 4]
// 008e8a40  83c014               add eax, 0x14
// 008e8a43  51                   push ecx
// 008e8a44  50                   push eax
// 008e8a45  89442430             mov dword ptr [esp + 0x30], eax
// 008e8a49  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8a4c  50                   push eax
// 008e8a4d  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8a51  ff150c01a400         call dword ptr [0xa4010c]
// 008e8a57  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8a5a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8a5e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8a62  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8a65  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8a69  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8a6d  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8a71  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8a75  53                   push ebx
// 008e8a76  8d4c0afc             lea ecx, [edx + ecx - 4]
// 008e8a7a  83c015               add eax, 0x15
// 008e8a7d  51                   push ecx
// 008e8a7e  50                   push eax
// 008e8a7f  89442428             mov dword ptr [esp + 0x28], eax
// 008e8a83  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8a86  50                   push eax
// 008e8a87  46                   inc esi
// 008e8a88  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8a8c  ff150c01a400         call dword ptr [0xa4010c]
// 008e8a92  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8a95  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8a99  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8a9d  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8aa0  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8aa4  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8aa8  40                   inc eax
// 008e8aa9  46                   inc esi
// 008e8aaa  83f819               cmp eax, 0x19
// 008e8aad  89442450             mov dword ptr [esp + 0x50], eax
// 008e8ab1  0f8c78ffffff         jl 0x8e8a2f
// 008e8ab7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8abf  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8ac3  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8ac7  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8acb  53                   push ebx
// 008e8acc  8d4c0afd             lea ecx, [edx + ecx - 3]
// 008e8ad0  83c016               add eax, 0x16
// 008e8ad3  51                   push ecx
// 008e8ad4  50                   push eax
// 008e8ad5  89442430             mov dword ptr [esp + 0x30], eax
// 008e8ad9  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8adc  50                   push eax
// 008e8add  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8ae1  ff150c01a400         call dword ptr [0xa4010c]
// 008e8ae7  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8aea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8aee  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8af2  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8af5  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8af9  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8afd  40                   inc eax
// 008e8afe  46                   inc esi
// 008e8aff  83f817               cmp eax, 0x17
// 008e8b02  89442450             mov dword ptr [esp + 0x50], eax
// 008e8b06  7cb7                 jl 0x8e8abf
// 008e8b08  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8b10  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8b14  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8b18  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8b1c  53                   push ebx
// 008e8b1d  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e8b21  83c017               add eax, 0x17
// 008e8b24  51                   push ecx
// 008e8b25  50                   push eax
// 008e8b26  89442430             mov dword ptr [esp + 0x30], eax
// 008e8b2a  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8b2d  50                   push eax
// 008e8b2e  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8b32  ff150c01a400         call dword ptr [0xa4010c]
// 008e8b38  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8b3b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8b3f  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8b43  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8b46  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8b4a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8b4e  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8b52  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8b56  53                   push ebx
// 008e8b57  8d4c0afe             lea ecx, [edx + ecx - 2]
// 008e8b5b  83c018               add eax, 0x18
// 008e8b5e  51                   push ecx
// 008e8b5f  50                   push eax
// 008e8b60  89442428             mov dword ptr [esp + 0x28], eax
// 008e8b64  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8b67  50                   push eax
// 008e8b68  46                   inc esi
// 008e8b69  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8b6d  ff150c01a400         call dword ptr [0xa4010c]
// 008e8b73  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8b76  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8b7a  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8b7e  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8b81  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8b85  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8b89  40                   inc eax
// 008e8b8a  46                   inc esi
// 008e8b8b  83f815               cmp eax, 0x15
// 008e8b8e  89442450             mov dword ptr [esp + 0x50], eax
// 008e8b92  0f8c78ffffff         jl 0x8e8b10
// 008e8b98  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8ba0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8ba4  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8ba8  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8bac  53                   push ebx
// 008e8bad  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e8bb1  83c019               add eax, 0x19
// 008e8bb4  51                   push ecx
// 008e8bb5  50                   push eax
// 008e8bb6  89442430             mov dword ptr [esp + 0x30], eax
// 008e8bba  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8bbd  50                   push eax
// 008e8bbe  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8bc2  ff150c01a400         call dword ptr [0xa4010c]
// 008e8bc8  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8bcb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8bcf  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8bd3  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8bd6  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8bda  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8bde  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8be2  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8be6  53                   push ebx
// 008e8be7  8d4c0aff             lea ecx, [edx + ecx - 1]
// 008e8beb  83c01a               add eax, 0x1a
// 008e8bee  51                   push ecx
// 008e8bef  50                   push eax
// 008e8bf0  89442428             mov dword ptr [esp + 0x28], eax
// 008e8bf4  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8bf7  50                   push eax
// 008e8bf8  46                   inc esi
// 008e8bf9  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8bfd  ff150c01a400         call dword ptr [0xa4010c]
// 008e8c03  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8c06  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8c0a  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8c0e  890cf0               mov dword ptr [eax + esi*8], ecx
// 008e8c11  8954f004             mov dword ptr [eax + esi*8 + 4], edx
// 008e8c15  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8c19  40                   inc eax
// 008e8c1a  46                   inc esi
// 008e8c1b  83f813               cmp eax, 0x13
// 008e8c1e  89442450             mov dword ptr [esp + 0x50], eax
// 008e8c22  0f8c78ffffff         jl 0x8e8ba0
// 008e8c28  03f6                 add esi, esi
// 008e8c2a  03f6                 add esi, esi
// 008e8c2c  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008e8c34  03f6                 add esi, esi
// 008e8c36  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8c3a  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8c3e  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8c42  53                   push ebx
// 008e8c43  03ca                 add ecx, edx
// 008e8c45  83c01b               add eax, 0x1b
// 008e8c48  51                   push ecx
// 008e8c49  50                   push eax
// 008e8c4a  89442430             mov dword ptr [esp + 0x30], eax
// 008e8c4e  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8c51  50                   push eax
// 008e8c52  894c2438             mov dword ptr [esp + 0x38], ecx
// 008e8c56  ff150c01a400         call dword ptr [0xa4010c]
// 008e8c5c  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8c5f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e8c63  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e8c67  890c06               mov dword ptr [esi + eax], ecx
// 008e8c6a  89540604             mov dword ptr [esi + eax + 4], edx
// 008e8c6e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008e8c72  8b542450             mov edx, dword ptr [esp + 0x50]
// 008e8c76  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e8c7a  53                   push ebx
// 008e8c7b  03ca                 add ecx, edx
// 008e8c7d  83c01c               add eax, 0x1c
// 008e8c80  51                   push ecx
// 008e8c81  50                   push eax
// 008e8c82  89442428             mov dword ptr [esp + 0x28], eax
// 008e8c86  8b4504               mov eax, dword ptr [ebp + 4]
// 008e8c89  50                   push eax
// 008e8c8a  83c608               add esi, 8
// 008e8c8d  894c2430             mov dword ptr [esp + 0x30], ecx
// 008e8c91  ff150c01a400         call dword ptr [0xa4010c]
// 008e8c97  8b4714               mov eax, dword ptr [edi + 0x14]
// 008e8c9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e8c9e  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e8ca2  890c06               mov dword ptr [esi + eax], ecx
// 008e8ca5  89540604             mov dword ptr [esi + eax + 4], edx
// 008e8ca9  8b442450             mov eax, dword ptr [esp + 0x50]
// 008e8cad  40                   inc eax
// 008e8cae  83c608               add esi, 8
// 008e8cb1  83f811               cmp eax, 0x11
// 008e8cb4  89442450             mov dword ptr [esp + 0x50], eax
// 008e8cb8  0f8c78ffffff         jl 0x8e8c36
// 008e8cbe  8b442444             mov eax, dword ptr [esp + 0x44]
// 008e8cc2  50                   push eax
// 008e8cc3  8bcd                 mov ecx, ebp
// 008e8cc5  e8243f0e00           call 0x9ccbee
// 008e8cca  8d4c242c             lea ecx, [esp + 0x2c]
// 008e8cce  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008e8cd6  c744242cb8a6ac00     mov dword ptr [esp + 0x2c], 0xaca6b8
// 008e8cde  e84dacb2ff           call 0x413930
// 008e8ce3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e8ce7  64890d00000000       mov dword ptr fs:[0], ecx
// 008e8cee  59                   pop ecx
// 008e8cef  5f                   pop edi
// 008e8cf0  5e                   pop esi
// 008e8cf1  5d                   pop ebp
// 008e8cf2  5b                   pop ebx
// 008e8cf3  83c42c               add esp, 0x2c
// 008e8cf6  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawLargeCell@CXTColorHex@@IAEXPAVCDC@@VCPoint@@KHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp