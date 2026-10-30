// roc 2012-06 00a3de70  unit: CXTPDockingPaneSplitterContainer  size: 574 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3de70
//
// 00a3de70  83ec38               sub esp, 0x38
// 00a3de73  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a3de77  53                   push ebx
// 00a3de78  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00a3de7c  55                   push ebp
// 00a3de7d  56                   push esi
// 00a3de7e  8b742448             mov esi, dword ptr [esp + 0x48]
// 00a3de82  57                   push edi
// 00a3de83  c70000000000         mov dword ptr [eax], 0
// 00a3de89  8bce                 mov ecx, esi
// 00a3de8b  c70300000000         mov dword ptr [ebx], 0
// 00a3de91  33ff                 xor edi, edi
// 00a3de93  e8e886f8ff           call 0x9c6580
// 00a3de98  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00a3de9e  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a3dea1  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a3dea5  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a3dea9  8b6a04               mov ebp, dword ptr [edx + 4]
// 00a3deac  89442418             mov dword ptr [esp + 0x18], eax
// 00a3deb0  85ed                 test ebp, ebp
// 00a3deb2  0f84d8000000         je 0xa3df90
// 00a3deb8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00a3debc  8d442420             lea eax, [esp + 0x20]
// 00a3dec0  53                   push ebx
// 00a3dec1  50                   push eax
// 00a3dec2  e8c9f3ffff           call 0xa3d290
// 00a3dec7  8d4c2428             lea ecx, [esp + 0x28]
// 00a3decb  53                   push ebx
// 00a3decc  51                   push ecx
// 00a3decd  89442424             mov dword ptr [esp + 0x24], eax
// 00a3ded1  e8daf3ffff           call 0xa3d2b0
// 00a3ded6  83c410               add esp, 0x10
// 00a3ded9  89442410             mov dword ptr [esp + 0x10], eax
// 00a3dedd  eb05                 jmp 0xa3dee4
// 00a3dedf  90                   nop 
// 00a3dee0  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00a3dee4  8bc5                 mov eax, ebp
// 00a3dee6  8b6d00               mov ebp, dword ptr [ebp]
// 00a3dee9  8b7008               mov esi, dword ptr [eax + 8]
// 00a3deec  85db                 test ebx, ebx
// 00a3deee  7405                 je 0xa3def5
// 00a3def0  8b4604               mov eax, dword ptr [esi + 4]
// 00a3def3  eb03                 jmp 0xa3def8
// 00a3def5  8b4608               mov eax, dword ptr [esi + 8]
// 00a3def8  8b16                 mov edx, dword ptr [esi]
// 00a3defa  8b5210               mov edx, dword ptr [edx + 0x10]
// 00a3defd  894630               mov dword ptr [esi + 0x30], eax
// 00a3df00  8d442420             lea eax, [esp + 0x20]
// 00a3df04  50                   push eax
// 00a3df05  8bce                 mov ecx, esi
// 00a3df07  ffd2                 call edx
// 00a3df09  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3df0d  8b00                 mov eax, dword ptr [eax]
// 00a3df0f  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00a3df12  3bc1                 cmp eax, ecx
// 00a3df14  8bd8                 mov ebx, eax
// 00a3df16  7c02                 jl 0xa3df1a
// 00a3df18  8bd9                 mov ebx, ecx
// 00a3df1a  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3df1e  8b12                 mov edx, dword ptr [edx]
// 00a3df20  3bd3                 cmp edx, ebx
// 00a3df22  7e04                 jle 0xa3df28
// 00a3df24  8bc2                 mov eax, edx
// 00a3df26  eb06                 jmp 0xa3df2e
// 00a3df28  3bc1                 cmp eax, ecx
// 00a3df2a  7c02                 jl 0xa3df2e
// 00a3df2c  8bc1                 mov eax, ecx
// 00a3df2e  894630               mov dword ptr [esi + 0x30], eax
// 00a3df31  85ff                 test edi, edi
// 00a3df33  7542                 jne 0xa3df77
// 00a3df35  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3df39  8b06                 mov eax, dword ptr [esi]
// 00a3df3b  8b5008               mov edx, dword ptr [eax + 8]
// 00a3df3e  51                   push ecx
// 00a3df3f  8bce                 mov ecx, esi
// 00a3df41  ffd2                 call edx
// 00a3df43  85c0                 test eax, eax
// 00a3df45  7430                 je 0xa3df77
// 00a3df47  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a3df4b  39b8e8000000         cmp dword ptr [eax + 0xe8], edi
// 00a3df51  740a                 je 0xa3df5d
// 00a3df53  397e04               cmp dword ptr [esi + 4], edi
// 00a3df56  751f                 jne 0xa3df77
// 00a3df58  397e08               cmp dword ptr [esi + 8], edi
// 00a3df5b  751a                 jne 0xa3df77
// 00a3df5d  837c246800           cmp dword ptr [esp + 0x68], 0
// 00a3df62  8bfe                 mov edi, esi
// 00a3df64  740a                 je 0xa3df70
// 00a3df66  33c0                 xor eax, eax
// 00a3df68  33c9                 xor ecx, ecx
// 00a3df6a  894604               mov dword ptr [esi + 4], eax
// 00a3df6d  894e08               mov dword ptr [esi + 8], ecx
// 00a3df70  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00a3df77  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00a3df7a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a3df7e  0108                 add dword ptr [eax], ecx
// 00a3df80  85ed                 test ebp, ebp
// 00a3df82  0f8558ffffff         jne 0xa3dee0
// 00a3df88  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 00a3df8c  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a3df90  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00a3df94  85ed                 test ebp, ebp
// 00a3df96  740a                 je 0xa3dfa2
// 00a3df98  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a3df9c  2b442454             sub eax, dword ptr [esp + 0x54]
// 00a3dfa0  eb08                 jmp 0xa3dfaa
// 00a3dfa2  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a3dfa6  2b442458             sub eax, dword ptr [esp + 0x58]
// 00a3dfaa  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00a3dfad  49                   dec ecx
// 00a3dfae  0faf4c241c           imul ecx, dword ptr [esp + 0x1c]
// 00a3dfb3  2bc1                 sub eax, ecx
// 00a3dfb5  8903                 mov dword ptr [ebx], eax
// 00a3dfb7  85ff                 test edi, edi
// 00a3dfb9  7426                 je 0xa3dfe1
// 00a3dfbb  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00a3dfbf  8b0e                 mov ecx, dword ptr [esi]
// 00a3dfc1  3bc8                 cmp ecx, eax
// 00a3dfc3  7d1c                 jge 0xa3dfe1
// 00a3dfc5  2bc1                 sub eax, ecx
// 00a3dfc7  837c246800           cmp dword ptr [esp + 0x68], 0
// 00a3dfcc  894730               mov dword ptr [edi + 0x30], eax
// 00a3dfcf  740c                 je 0xa3dfdd
// 00a3dfd1  85ed                 test ebp, ebp
// 00a3dfd3  7405                 je 0xa3dfda
// 00a3dfd5  894704               mov dword ptr [edi + 4], eax
// 00a3dfd8  eb03                 jmp 0xa3dfdd
// 00a3dfda  894708               mov dword ptr [edi + 8], eax
// 00a3dfdd  8b03                 mov eax, dword ptr [ebx]
// 00a3dfdf  8906                 mov dword ptr [esi], eax
// 00a3dfe1  833b00               cmp dword ptr [ebx], 0
// 00a3dfe4  0f8ebc000000         jle 0xa3e0a6
// 00a3dfea  8b6a04               mov ebp, dword ptr [edx + 4]
// 00a3dfed  85ed                 test ebp, ebp
// 00a3dfef  0f84b1000000         je 0xa3e0a6
// 00a3dff5  8bc5                 mov eax, ebp
// 00a3dff7  8b7008               mov esi, dword ptr [eax + 8]
// 00a3dffa  837e3000             cmp dword ptr [esi + 0x30], 0
// 00a3dffe  8b6d00               mov ebp, dword ptr [ebp]
// 00a3e001  0f8c84000000         jl 0xa3e08b
// 00a3e007  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a3e00b  833900               cmp dword ptr [ecx], 0
// 00a3e00e  0f8477000000         je 0xa3e08b
// 00a3e014  8b16                 mov edx, dword ptr [esi]
// 00a3e016  8b5210               mov edx, dword ptr [edx + 0x10]
// 00a3e019  8d442420             lea eax, [esp + 0x20]
// 00a3e01d  50                   push eax
// 00a3e01e  8bce                 mov ecx, esi
// 00a3e020  ffd2                 call edx
// 00a3e022  8b442470             mov eax, dword ptr [esp + 0x70]
// 00a3e026  8b00                 mov eax, dword ptr [eax]
// 00a3e028  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 00a3e02b  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a3e02f  0fafc3               imul eax, ebx
// 00a3e032  99                   cdq 
// 00a3e033  f739                 idiv dword ptr [ecx]
// 00a3e035  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a3e039  52                   push edx
// 00a3e03a  8bf8                 mov edi, eax
// 00a3e03c  8d442424             lea eax, [esp + 0x24]
// 00a3e040  50                   push eax
// 00a3e041  e84af2ffff           call 0xa3d290
// 00a3e046  8b00                 mov eax, dword ptr [eax]
// 00a3e048  83c408               add esp, 8
// 00a3e04b  3bf8                 cmp edi, eax
// 00a3e04d  7c18                 jl 0xa3e067
// 00a3e04f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a3e053  51                   push ecx
// 00a3e054  8d542424             lea edx, [esp + 0x24]
// 00a3e058  52                   push edx
// 00a3e059  e852f2ffff           call 0xa3d2b0
// 00a3e05e  8b00                 mov eax, dword ptr [eax]
// 00a3e060  83c408               add esp, 8
// 00a3e063  3bf8                 cmp edi, eax
// 00a3e065  7e05                 jle 0xa3e06c
// 00a3e067  f7d8                 neg eax
// 00a3e069  894630               mov dword ptr [esi + 0x30], eax
// 00a3e06c  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a3e06f  85c0                 test eax, eax
// 00a3e071  7d18                 jge 0xa3e08b
// 00a3e073  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a3e077  0101                 add dword ptr [ecx], eax
// 00a3e079  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a3e07d  2918                 sub dword ptr [eax], ebx
// 00a3e07f  833900               cmp dword ptr [ecx], 0
// 00a3e082  7c17                 jl 0xa3e09b
// 00a3e084  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a3e088  8b6804               mov ebp, dword ptr [eax + 4]
// 00a3e08b  85ed                 test ebp, ebp
// 00a3e08d  0f8562ffffff         jne 0xa3dff5
// 00a3e093  5f                   pop edi
// 00a3e094  5e                   pop esi
// 00a3e095  5d                   pop ebp
// 00a3e096  5b                   pop ebx
// 00a3e097  83c438               add esp, 0x38
// 00a3e09a  c3                   ret 
// 00a3e09b  8b11                 mov edx, dword ptr [ecx]
// 00a3e09d  295630               sub dword ptr [esi + 0x30], edx
// 00a3e0a0  c70100000000         mov dword ptr [ecx], 0
// 00a3e0a6  5f                   pop edi
// 00a3e0a7  5e                   pop esi
// 00a3e0a8  5d                   pop ebp
// 00a3e0a9  5b                   pop ebx
// 00a3e0aa  83c438               add esp, 0x38
// 00a3e0ad  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_AdjustPanesLength@CXTPDockingPaneSplitterContainer@@CAXPAVCXTPDockingPaneManager@@AAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@VCRect@@HHAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
