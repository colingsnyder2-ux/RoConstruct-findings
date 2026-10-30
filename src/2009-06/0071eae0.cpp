// roc 2009-06 0071eae0  unit: CPatchedControlComboBox  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071eae0
//
// 0071eae0  6aff                 push -1
// 0071eae2  6891488700           push 0x874891
// 0071eae7  64a100000000         mov eax, dword ptr fs:[0]
// 0071eaed  50                   push eax
// 0071eaee  83ec30               sub esp, 0x30
// 0071eaf1  53                   push ebx
// 0071eaf2  55                   push ebp
// 0071eaf3  56                   push esi
// 0071eaf4  57                   push edi
// 0071eaf5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0071eafa  33c4                 xor eax, esp
// 0071eafc  50                   push eax
// 0071eafd  8d442444             lea eax, [esp + 0x44]
// 0071eb01  64a300000000         mov dword ptr fs:[0], eax
// 0071eb07  8bd9                 mov ebx, ecx
// 0071eb09  895c2418             mov dword ptr [esp + 0x18], ebx
// 0071eb0d  8d4c2414             lea ecx, [esp + 0x14]
// 0071eb11  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0071eb17  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0071eb1b  8b7508               mov esi, dword ptr [ebp + 8]
// 0071eb1e  8bcb                 mov ecx, ebx
// 0071eb20  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0071eb28  e823ddffff           call 0x71c850
// 0071eb2d  8b10                 mov edx, dword ptr [eax]
// 0071eb2f  8b9224020000         mov edx, dword ptr [edx + 0x224]
// 0071eb35  8d4c2414             lea ecx, [esp + 0x14]
// 0071eb39  51                   push ecx
// 0071eb3a  56                   push esi
// 0071eb3b  8bc8                 mov ecx, eax
// 0071eb3d  ffd2                 call edx
// 0071eb3f  8d451c               lea eax, [ebp + 0x1c]
// 0071eb42  50                   push eax
// 0071eb43  8d4c2428             lea ecx, [esp + 0x28]
// 0071eb47  51                   push ecx
// 0071eb48  ff1500ee8900         call dword ptr [0x89ee00]
// 0071eb4e  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0071eb51  52                   push edx
// 0071eb52  e8b5d31200           call 0x84bf0c
// 0071eb57  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0071eb5a  8bcb                 mov ecx, ebx
// 0071eb5c  8bf8                 mov edi, eax
// 0071eb5e  83e601               and esi, 1
// 0071eb61  e8ba0d0000           call 0x71f920
// 0071eb66  6a05                 push 5
// 0071eb68  6a02                 push 2
// 0071eb6a  6a00                 push 0
// 0071eb6c  6a00                 push 0
// 0071eb6e  8bd8                 mov ebx, eax
// 0071eb70  8b07                 mov eax, dword ptr [edi]
// 0071eb72  8b13                 mov edx, dword ptr [ebx]
// 0071eb74  6a01                 push 1
// 0071eb76  6a00                 push 0
// 0071eb78  8944246c             mov dword ptr [esp + 0x6c], eax
// 0071eb7c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0071eb82  56                   push esi
// 0071eb83  8bcb                 mov ecx, ebx
// 0071eb85  ffd0                 call eax
// 0071eb87  8b542454             mov edx, dword ptr [esp + 0x54]
// 0071eb8b  50                   push eax
// 0071eb8c  8b4238               mov eax, dword ptr [edx + 0x38]
// 0071eb8f  8bcf                 mov ecx, edi
// 0071eb91  ffd0                 call eax
// 0071eb93  89442420             mov dword ptr [esp + 0x20], eax
// 0071eb97  6a05                 push 5
// 0071eb99  85f6                 test esi, esi
// 0071eb9b  743b                 je 0x71ebd8
// 0071eb9d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0071eba1  8b13                 mov edx, dword ptr [ebx]
// 0071eba3  6a02                 push 2
// 0071eba5  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0071ebab  6a00                 push 0
// 0071ebad  6a00                 push 0
// 0071ebaf  6a01                 push 1
// 0071ebb1  6a00                 push 0
// 0071ebb3  6a01                 push 1
// 0071ebb5  83ec10               sub esp, 0x10
// 0071ebb8  8bc4                 mov eax, esp
// 0071ebba  8908                 mov dword ptr [eax], ecx
// 0071ebbc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0071ebc0  894804               mov dword ptr [eax + 4], ecx
// 0071ebc3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0071ebc7  894808               mov dword ptr [eax + 8], ecx
// 0071ebca  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0071ebce  89480c               mov dword ptr [eax + 0xc], ecx
// 0071ebd1  57                   push edi
// 0071ebd2  8bcb                 mov ecx, ebx
// 0071ebd4  ffd2                 call edx
// 0071ebd6  eb14                 jmp 0x71ebec
// 0071ebd8  8bcb                 mov ecx, ebx
// 0071ebda  e8a13b0000           call 0x722780
// 0071ebdf  50                   push eax
// 0071ebe0  8d442428             lea eax, [esp + 0x28]
// 0071ebe4  50                   push eax
// 0071ebe5  8bcf                 mov ecx, edi
// 0071ebe7  e8e4abffff           call 0x7197d0
// 0071ebec  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071ebf0  e8cbfeffff           call 0x71eac0
// 0071ebf5  89442454             mov dword ptr [esp + 0x54], eax
// 0071ebf9  83f8ff               cmp eax, -1
// 0071ebfc  0f84a0000000         je 0x71eca2
// 0071ec02  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071ec06  8b11                 mov edx, dword ptr [ecx]
// 0071ec08  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0071ec0e  ffd0                 call eax
// 0071ec10  8bc8                 mov ecx, eax
// 0071ec12  e8b9e80000           call 0x72d4d0
// 0071ec17  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0071ec1a  034c2454             add ecx, dword ptr [esp + 0x54]
// 0071ec1e  6a00                 push 0
// 0071ec20  51                   push ecx
// 0071ec21  8bc8                 mov ecx, eax
// 0071ec23  e8689e0100           call 0x738a90
// 0071ec28  8be8                 mov ebp, eax
// 0071ec2a  85ed                 test ebp, ebp
// 0071ec2c  7474                 je 0x71eca2
// 0071ec2e  83ec08               sub esp, 8
// 0071ec31  8bc4                 mov eax, esp
// 0071ec33  8bcd                 mov ecx, ebp
// 0071ec35  8964245c             mov dword ptr [esp + 0x5c], esp
// 0071ec39  c70000000000         mov dword ptr [eax], 0
// 0071ec3f  c7400400000000       mov dword ptr [eax + 4], 0
// 0071ec46  e865e20200           call 0x74ceb0
// 0071ec4b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0071ec4f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0071ec53  03d1                 add edx, ecx
// 0071ec55  2bd0                 sub edx, eax
// 0071ec57  8bc2                 mov eax, edx
// 0071ec59  99                   cdq 
// 0071ec5a  2bc2                 sub eax, edx
// 0071ec5c  d1f8                 sar eax, 1
// 0071ec5e  8944245c             mov dword ptr [esp + 0x5c], eax
// 0071ec62  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0071ec66  83c002               add eax, 2
// 0071ec69  f7de                 neg esi
// 0071ec6b  1bf6                 sbb esi, esi
// 0071ec6d  83e602               and esi, 2
// 0071ec70  56                   push esi
// 0071ec71  8bcd                 mov ecx, ebp
// 0071ec73  89442424             mov dword ptr [esp + 0x24], eax
// 0071ec77  e8f4a60100           call 0x739370
// 0071ec7c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0071ec80  8b542420             mov edx, dword ptr [esp + 0x20]
// 0071ec84  50                   push eax
// 0071ec85  51                   push ecx
// 0071ec86  52                   push edx
// 0071ec87  57                   push edi
// 0071ec88  8bcd                 mov ecx, ebp
// 0071ec8a  e831b10100           call 0x739dc0
// 0071ec8f  8bcd                 mov ecx, ebp
// 0071ec91  e88a950a00           call 0x7c8220
// 0071ec96  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071ec9a  8d540102             lea edx, [ecx + eax + 2]
// 0071ec9e  89542424             mov dword ptr [esp + 0x24], edx
// 0071eca2  81c3a4000000         add ebx, 0xa4
// 0071eca8  53                   push ebx
// 0071eca9  57                   push edi
// 0071ecaa  8d4c243c             lea ecx, [esp + 0x3c]
// 0071ecae  e8ad1b0500           call 0x770860
// 0071ecb3  6a01                 push 1
// 0071ecb5  8bcf                 mov ecx, edi
// 0071ecb7  c644245001           mov byte ptr [esp + 0x50], 1
// 0071ecbc  e845d21200           call 0x84bf06
// 0071ecc1  8344242403           add dword ptr [esp + 0x24], 3
// 0071ecc6  8b37                 mov esi, dword ptr [edi]
// 0071ecc8  6824080000           push 0x824
// 0071eccd  8d442428             lea eax, [esp + 0x28]
// 0071ecd1  50                   push eax
// 0071ecd2  8d4c241c             lea ecx, [esp + 0x1c]
// 0071ecd6  ff1554fb8900         call dword ptr [0x89fb54]
// 0071ecdc  50                   push eax
// 0071ecdd  8d4c2420             lea ecx, [esp + 0x20]
// 0071ece1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0071ece7  8b5670               mov edx, dword ptr [esi + 0x70]
// 0071ecea  50                   push eax
// 0071eceb  8bcf                 mov ecx, edi
// 0071eced  ffd2                 call edx
// 0071ecef  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071ecf3  8b07                 mov eax, dword ptr [edi]
// 0071ecf5  8b5038               mov edx, dword ptr [eax + 0x38]
// 0071ecf8  51                   push ecx
// 0071ecf9  8bcf                 mov ecx, edi
// 0071ecfb  ffd2                 call edx
// 0071ecfd  8d4c2434             lea ecx, [esp + 0x34]
// 0071ed01  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0071ed06  e8d51b0500           call 0x7708e0
// 0071ed0b  8d4c2414             lea ecx, [esp + 0x14]
// 0071ed0f  ff1510fd8900         call dword ptr [0x89fd10]
// 0071ed15  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0071ed19  64890d00000000       mov dword ptr fs:[0], ecx
// 0071ed20  59                   pop ecx
// 0071ed21  5f                   pop edi
// 0071ed22  5e                   pop esi
// 0071ed23  5d                   pop ebp
// 0071ed24  5b                   pop ebx
// 0071ed25  83c43c               add esp, 0x3c
// 0071ed28  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPControlComboBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControlComboBox.cpp