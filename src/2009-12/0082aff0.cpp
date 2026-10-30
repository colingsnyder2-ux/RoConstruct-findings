// roc 2009-12 0082aff0  unit: CInstanceRecord  size: 734 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082aff0
//
// 0082aff0  6aff                 push -1
// 0082aff2  68b8b99500           push 0x95b9b8
// 0082aff7  64a100000000         mov eax, dword ptr fs:[0]
// 0082affd  50                   push eax
// 0082affe  83ec18               sub esp, 0x18
// 0082b001  53                   push ebx
// 0082b002  55                   push ebp
// 0082b003  56                   push esi
// 0082b004  57                   push edi
// 0082b005  a10052b600           mov eax, dword ptr [0xb65200]
// 0082b00a  33c4                 xor eax, esp
// 0082b00c  50                   push eax
// 0082b00d  8d44242c             lea eax, [esp + 0x2c]
// 0082b011  64a300000000         mov dword ptr fs:[0], eax
// 0082b017  8be9                 mov ebp, ecx
// 0082b019  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0082b01d  8d4538               lea eax, [ebp + 0x38]
// 0082b020  50                   push eax
// 0082b021  68187f9d00           push 0x9d7f18
// 0082b026  56                   push esi
// 0082b027  e8045a0200           call 0x850a30
// 0082b02c  8d4d48               lea ecx, [ebp + 0x48]
// 0082b02f  51                   push ecx
// 0082b030  681c4b9f00           push 0x9f4b1c
// 0082b035  56                   push esi
// 0082b036  e8f5590200           call 0x850a30
// 0082b03b  33d2                 xor edx, edx
// 0082b03d  39553c               cmp dword ptr [ebp + 0x3c], edx
// 0082b040  8d442434             lea eax, [esp + 0x34]
// 0082b044  0f95c2               setne dl
// 0082b047  50                   push eax
// 0082b048  68145a9f00           push 0x9f5a14
// 0082b04d  56                   push esi
// 0082b04e  89542440             mov dword ptr [esp + 0x40], edx
// 0082b052  e8d9590200           call 0x850a30
// 0082b057  8b16                 mov edx, dword ptr [esi]
// 0082b059  8b7d28               mov edi, dword ptr [ebp + 0x28]
// 0082b05c  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 0082b062  83c424               add esp, 0x24
// 0082b065  6888f99c00           push 0x9cf988
// 0082b06a  8bce                 mov ecx, esi
// 0082b06c  897c241c             mov dword ptr [esp + 0x1c], edi
// 0082b070  ffd0                 call eax
// 0082b072  8bd8                 mov ebx, eax
// 0082b074  895c2424             mov dword ptr [esp + 0x24], ebx
// 0082b078  837e2800             cmp dword ptr [esi + 0x28], 0
// 0082b07c  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0082b084  0f859a000000         jne 0x82b124
// 0082b08a  8b13                 mov edx, dword ptr [ebx]
// 0082b08c  8b4204               mov eax, dword ptr [edx + 4]
// 0082b08f  6a01                 push 1
// 0082b091  57                   push edi
// 0082b092  8bcb                 mov ecx, ebx
// 0082b094  ffd0                 call eax
// 0082b096  33ff                 xor edi, edi
// 0082b098  397c2418             cmp dword ptr [esp + 0x18], edi
// 0082b09c  89442420             mov dword ptr [esp + 0x20], eax
// 0082b0a0  0f8e09010000         jle 0x82b1af
// 0082b0a6  85ff                 test edi, edi
// 0082b0a8  7c0f                 jl 0x82b0b9
// 0082b0aa  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 0082b0ad  7d0a                 jge 0x82b0b9
// 0082b0af  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082b0b2  8d04b9               lea eax, [ecx + edi*4]
// 0082b0b5  8b00                 mov eax, dword ptr [eax]
// 0082b0b7  eb02                 jmp 0x82b0bb
// 0082b0b9  33c0                 xor eax, eax
// 0082b0bb  89442414             mov dword ptr [esp + 0x14], eax
// 0082b0bf  85c0                 test eax, eax
// 0082b0c1  7458                 je 0x82b11b
// 0082b0c3  8b13                 mov edx, dword ptr [ebx]
// 0082b0c5  8b5208               mov edx, dword ptr [edx + 8]
// 0082b0c8  8d442420             lea eax, [esp + 0x20]
// 0082b0cc  50                   push eax
// 0082b0cd  8bcb                 mov ecx, ebx
// 0082b0cf  ffd2                 call edx
// 0082b0d1  8bf0                 mov esi, eax
// 0082b0d3  89742428             mov dword ptr [esp + 0x28], esi
// 0082b0d7  c644243401           mov byte ptr [esp + 0x34], 1
// 0082b0dc  e8ffeffeff           call 0x81a0e0
// 0082b0e1  8b16                 mov edx, dword ptr [esi]
// 0082b0e3  8b5264               mov edx, dword ptr [edx + 0x64]
// 0082b0e6  50                   push eax
// 0082b0e7  8d442418             lea eax, [esp + 0x18]
// 0082b0eb  50                   push eax
// 0082b0ec  8bce                 mov ecx, esi
// 0082b0ee  ffd2                 call edx
// 0082b0f0  85c0                 test eax, eax
// 0082b0f2  740f                 je 0x82b103
// 0082b0f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082b0f8  8b01                 mov eax, dword ptr [ecx]
// 0082b0fa  8b900c010000         mov edx, dword ptr [eax + 0x10c]
// 0082b100  56                   push esi
// 0082b101  ffd2                 call edx
// 0082b103  8bce                 mov ecx, esi
// 0082b105  c644243400           mov byte ptr [esp + 0x34], 0
// 0082b10a  e8cd8cfcff           call 0x7f3ddc
// 0082b10f  47                   inc edi
// 0082b110  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0082b114  7c90                 jl 0x82b0a6
// 0082b116  e990000000           jmp 0x82b1ab
// 0082b11b  6a00                 push 0
// 0082b11d  6a06                 push 6
// 0082b11f  e8ac92fcff           call 0x7f43d0
// 0082b124  8bcd                 mov ecx, ebp
// 0082b126  e8e5fcffff           call 0x82ae10
// 0082b12b  8b03                 mov eax, dword ptr [ebx]
// 0082b12d  8b5004               mov edx, dword ptr [eax + 4]
// 0082b130  6a01                 push 1
// 0082b132  6a00                 push 0
// 0082b134  8bcb                 mov ecx, ebx
// 0082b136  ffd2                 call edx
// 0082b138  89442418             mov dword ptr [esp + 0x18], eax
// 0082b13c  85c0                 test eax, eax
// 0082b13e  746f                 je 0x82b1af
// 0082b140  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0082b148  8b03                 mov eax, dword ptr [ebx]
// 0082b14a  8b5008               mov edx, dword ptr [eax + 8]
// 0082b14d  8d4c2418             lea ecx, [esp + 0x18]
// 0082b151  51                   push ecx
// 0082b152  8bcb                 mov ecx, ebx
// 0082b154  ffd2                 call edx
// 0082b156  8bf0                 mov esi, eax
// 0082b158  89742428             mov dword ptr [esp + 0x28], esi
// 0082b15c  c644243402           mov byte ptr [esp + 0x34], 2
// 0082b161  e87aeffeff           call 0x81a0e0
// 0082b166  8b16                 mov edx, dword ptr [esi]
// 0082b168  8b5264               mov edx, dword ptr [edx + 0x64]
// 0082b16b  50                   push eax
// 0082b16c  8d442418             lea eax, [esp + 0x18]
// 0082b170  50                   push eax
// 0082b171  8bce                 mov ecx, esi
// 0082b173  ffd2                 call edx
// 0082b175  85c0                 test eax, eax
// 0082b177  740f                 je 0x82b188
// 0082b179  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082b17d  8b01                 mov eax, dword ptr [ecx]
// 0082b17f  8b900c010000         mov edx, dword ptr [eax + 0x10c]
// 0082b185  56                   push esi
// 0082b186  ffd2                 call edx
// 0082b188  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082b18c  85c0                 test eax, eax
// 0082b18e  748b                 je 0x82b11b
// 0082b190  50                   push eax
// 0082b191  8bcd                 mov ecx, ebp
// 0082b193  e8d8fcffff           call 0x82ae70
// 0082b198  8bce                 mov ecx, esi
// 0082b19a  c644243400           mov byte ptr [esp + 0x34], 0
// 0082b19f  e8388cfcff           call 0x7f3ddc
// 0082b1a4  837c241800           cmp dword ptr [esp + 0x18], 0
// 0082b1a9  7595                 jne 0x82b140
// 0082b1ab  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0082b1af  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0082b1b4  7479                 je 0x82b22f
// 0082b1b6  8b06                 mov eax, dword ptr [esi]
// 0082b1b8  8b5070               mov edx, dword ptr [eax + 0x70]
// 0082b1bb  68085a9f00           push 0x9f5a08
// 0082b1c0  8bce                 mov ecx, esi
// 0082b1c2  ffd2                 call edx
// 0082b1c4  8bf8                 mov edi, eax
// 0082b1c6  897c243c             mov dword ptr [esp + 0x3c], edi
// 0082b1ca  837e2800             cmp dword ptr [esi + 0x28], 0
// 0082b1ce  c644243403           mov byte ptr [esp + 0x34], 3
// 0082b1d3  7413                 je 0x82b1e8
// 0082b1d5  8b4d3c               mov ecx, dword ptr [ebp + 0x3c]
// 0082b1d8  85c9                 test ecx, ecx
// 0082b1da  740c                 je 0x82b1e8
// 0082b1dc  e8fb8bfcff           call 0x7f3ddc
// 0082b1e1  c7453c00000000       mov dword ptr [ebp + 0x3c], 0
// 0082b1e8  e8c3040000           call 0x82b6b0
// 0082b1ed  8b17                 mov edx, dword ptr [edi]
// 0082b1ef  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0082b1f3  50                   push eax
// 0082b1f4  8b4264               mov eax, dword ptr [edx + 0x64]
// 0082b1f7  8d7d3c               lea edi, [ebp + 0x3c]
// 0082b1fa  57                   push edi
// 0082b1fb  ffd0                 call eax
// 0082b1fd  85c0                 test eax, eax
// 0082b1ff  7411                 je 0x82b212
// 0082b201  8b0f                 mov ecx, dword ptr [edi]
// 0082b203  8b11                 mov edx, dword ptr [ecx]
// 0082b205  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0082b209  8b920c010000         mov edx, dword ptr [edx + 0x10c]
// 0082b20f  50                   push eax
// 0082b210  ffd2                 call edx
// 0082b212  8b3f                 mov edi, dword ptr [edi]
// 0082b214  85ff                 test edi, edi
// 0082b216  7409                 je 0x82b221
// 0082b218  837e2800             cmp dword ptr [esi + 0x28], 0
// 0082b21c  7403                 je 0x82b221
// 0082b21e  896f4c               mov dword ptr [edi + 0x4c], ebp
// 0082b221  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0082b225  c644243400           mov byte ptr [esp + 0x34], 0
// 0082b22a  e8ad8bfcff           call 0x7f3ddc
// 0082b22f  837e2c15             cmp dword ptr [esi + 0x2c], 0x15
// 0082b233  7671                 jbe 0x82b2a6
// 0082b235  8bcd                 mov ecx, ebp
// 0082b237  e8e4faffff           call 0x82ad20
// 0082b23c  8944243c             mov dword ptr [esp + 0x3c], eax
// 0082b240  6a00                 push 0
// 0082b242  8d442440             lea eax, [esp + 0x40]
// 0082b246  50                   push eax
// 0082b247  68fc599f00           push 0x9f59fc
// 0082b24c  56                   push esi
// 0082b24d  e80e580200           call 0x850a60
// 0082b252  83c410               add esp, 0x10
// 0082b255  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0082b25a  743c                 je 0x82b298
// 0082b25c  8b16                 mov edx, dword ptr [esi]
// 0082b25e  8b4270               mov eax, dword ptr [edx + 0x70]
// 0082b261  68f0599f00           push 0x9f59f0
// 0082b266  8bce                 mov ecx, esi
// 0082b268  ffd0                 call eax
// 0082b26a  8bf0                 mov esi, eax
// 0082b26c  89742428             mov dword ptr [esp + 0x28], esi
// 0082b270  8bcd                 mov ecx, ebp
// 0082b272  c644243404           mov byte ptr [esp + 0x34], 4
// 0082b277  e804fdffff           call 0x82af80
// 0082b27c  8b10                 mov edx, dword ptr [eax]
// 0082b27e  8bc8                 mov ecx, eax
// 0082b280  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0082b283  56                   push esi
// 0082b284  ffd0                 call eax
// 0082b286  c644243400           mov byte ptr [esp + 0x34], 0
// 0082b28b  85f6                 test esi, esi
// 0082b28d  7417                 je 0x82b2a6
// 0082b28f  8bce                 mov ecx, esi
// 0082b291  e8468bfcff           call 0x7f3ddc
// 0082b296  eb0e                 jmp 0x82b2a6
// 0082b298  8b6d40               mov ebp, dword ptr [ebp + 0x40]
// 0082b29b  85ed                 test ebp, ebp
// 0082b29d  7407                 je 0x82b2a6
// 0082b29f  8bcd                 mov ecx, ebp
// 0082b2a1  e8aa180000           call 0x82cb50
// 0082b2a6  8b13                 mov edx, dword ptr [ebx]
// 0082b2a8  8b02                 mov eax, dword ptr [edx]
// 0082b2aa  6a01                 push 1
// 0082b2ac  8bcb                 mov ecx, ebx
// 0082b2ae  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0082b2b6  ffd0                 call eax
// 0082b2b8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082b2bc  64890d00000000       mov dword ptr fs:[0], ecx
// 0082b2c3  59                   pop ecx
// 0082b2c4  5f                   pop edi
// 0082b2c5  5e                   pop esi
// 0082b2c6  5d                   pop ebp
// 0082b2c7  5b                   pop ebx
// 0082b2c8  83c424               add esp, 0x24
// 0082b2cb  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportRecord@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp