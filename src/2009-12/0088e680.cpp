// roc 2009-12 0088e680  unit: CXTPShortcutManager  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e680
//
// 0088e680  6aff                 push -1
// 0088e682  68c20f9600           push 0x960fc2
// 0088e687  64a100000000         mov eax, dword ptr fs:[0]
// 0088e68d  50                   push eax
// 0088e68e  83ec18               sub esp, 0x18
// 0088e691  53                   push ebx
// 0088e692  55                   push ebp
// 0088e693  56                   push esi
// 0088e694  57                   push edi
// 0088e695  a10052b600           mov eax, dword ptr [0xb65200]
// 0088e69a  33c4                 xor eax, esp
// 0088e69c  50                   push eax
// 0088e69d  8d44242c             lea eax, [esp + 0x2c]
// 0088e6a1  64a300000000         mov dword ptr fs:[0], eax
// 0088e6a7  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088e6ab  8b7930               mov edi, dword ptr [ecx + 0x30]
// 0088e6ae  85ff                 test edi, edi
// 0088e6b0  752f                 jne 0x88e6e1
// 0088e6b2  397934               cmp dword ptr [ecx + 0x34], edi
// 0088e6b5  751f                 jne 0x88e6d6
// 0088e6b7  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0088e6ba  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 0088e6c0  50                   push eax
// 0088e6c1  e8027f0900           call 0x9265c8
// 0088e6c6  50                   push eax
// 0088e6c7  e87255f6ff           call 0x7f3c3e
// 0088e6cc  83c408               add esp, 8
// 0088e6cf  85c0                 test eax, eax
// 0088e6d1  7407                 je 0x88e6da
// 0088e6d3  8b7860               mov edi, dword ptr [eax + 0x60]
// 0088e6d6  85ff                 test edi, edi
// 0088e6d8  7507                 jne 0x88e6e1
// 0088e6da  33c0                 xor eax, eax
// 0088e6dc  e941010000           jmp 0x88e822
// 0088e6e1  8b2d1cca9800         mov ebp, dword ptr [0x98ca1c]
// 0088e6e7  6a00                 push 0
// 0088e6e9  6a00                 push 0
// 0088e6eb  57                   push edi
// 0088e6ec  ffd5                 call ebp
// 0088e6ee  33c9                 xor ecx, ecx
// 0088e6f0  8bf0                 mov esi, eax
// 0088e6f2  ba06000000           mov edx, 6
// 0088e6f7  f7e2                 mul edx
// 0088e6f9  0f90c1               seto cl
// 0088e6fc  f7d9                 neg ecx
// 0088e6fe  0bc8                 or ecx, eax
// 0088e700  51                   push ecx
// 0088e701  e83c54f6ff           call 0x7f3b42
// 0088e706  83c404               add esp, 4
// 0088e709  56                   push esi
// 0088e70a  8bd8                 mov ebx, eax
// 0088e70c  53                   push ebx
// 0088e70d  57                   push edi
// 0088e70e  ffd5                 call ebp
// 0088e710  33ff                 xor edi, edi
// 0088e712  6856fd9900           push 0x99fd56
// 0088e717  8d4c2418             lea ecx, [esp + 0x18]
// 0088e71b  33ed                 xor ebp, ebp
// 0088e71d  897c2428             mov dword ptr [esp + 0x28], edi
// 0088e721  ff15b8de9800         call dword ptr [0x98deb8]
// 0088e727  3bf7                 cmp esi, edi
// 0088e729  897c2434             mov dword ptr [esp + 0x34], edi
// 0088e72d  897c2420             mov dword ptr [esp + 0x20], edi
// 0088e731  0f8eac000000         jle 0x88e7e3
// 0088e737  8bfb                 mov edi, ebx
// 0088e739  8da42400000000       lea esp, [esp]
// 0088e740  0fb74704             movzx eax, word ptr [edi + 4]
// 0088e744  3b44243c             cmp eax, dword ptr [esp + 0x3c]
// 0088e748  0f8587000000         jne 0x88e7d5
// 0088e74e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088e752  8b11                 mov edx, dword ptr [ecx]
// 0088e754  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0088e757  8d442418             lea eax, [esp + 0x18]
// 0088e75b  50                   push eax
// 0088e75c  57                   push edi
// 0088e75d  8d442424             lea eax, [esp + 0x24]
// 0088e761  50                   push eax
// 0088e762  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0088e76a  ffd2                 call edx
// 0088e76c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088e770  c644243401           mov byte ptr [esp + 0x34], 1
// 0088e775  ff1580de9800         call dword ptr [0x98de80]
// 0088e77b  50                   push eax
// 0088e77c  8d4c2420             lea ecx, [esp + 0x20]
// 0088e780  ff1584de9800         call dword ptr [0x98de84]
// 0088e786  85c0                 test eax, eax
// 0088e788  7508                 jne 0x88e792
// 0088e78a  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0088e792  8d4c2414             lea ecx, [esp + 0x14]
// 0088e796  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088e79c  84c0                 test al, al
// 0088e79e  750a                 jne 0x88e7aa
// 0088e7a0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088e7a4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0088e7a8  7d17                 jge 0x88e7c1
// 0088e7aa  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e7ae  51                   push ecx
// 0088e7af  8d4c2418             lea ecx, [esp + 0x18]
// 0088e7b3  ff1538d59800         call dword ptr [0x98d538]
// 0088e7b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088e7bd  89542420             mov dword ptr [esp + 0x20], edx
// 0088e7c1  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e7c5  bd01000000           mov ebp, 1
// 0088e7ca  c644243400           mov byte ptr [esp + 0x34], 0
// 0088e7cf  ff15c0de9800         call dword ptr [0x98dec0]
// 0088e7d5  83c706               add edi, 6
// 0088e7d8  83ee01               sub esi, 1
// 0088e7db  0f855fffffff         jne 0x88e740
// 0088e7e1  33ff                 xor edi, edi
// 0088e7e3  53                   push ebx
// 0088e7e4  e81d53f6ff           call 0x7f3b06
// 0088e7e9  83c404               add esp, 4
// 0088e7ec  3bef                 cmp ebp, edi
// 0088e7ee  7511                 jne 0x88e801
// 0088e7f0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088e7f4  6856fd9900           push 0x99fd56
// 0088e7f9  ff155cde9800         call dword ptr [0x98de5c]
// 0088e7ff  eb15                 jmp 0x88e816
// 0088e801  397c2424             cmp dword ptr [esp + 0x24], edi
// 0088e805  750f                 jne 0x88e816
// 0088e807  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088e80b  8d442414             lea eax, [esp + 0x14]
// 0088e80f  50                   push eax
// 0088e810  ff1538d59800         call dword ptr [0x98d538]
// 0088e816  8d4c2414             lea ecx, [esp + 0x14]
// 0088e81a  ff15c0de9800         call dword ptr [0x98dec0]
// 0088e820  8bc5                 mov eax, ebp
// 0088e822  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088e826  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e82d  59                   pop ecx
// 0088e82e  5f                   pop edi
// 0088e82f  5e                   pop esi
// 0088e830  5d                   pop ebp
// 0088e831  5b                   pop ebx
// 0088e832  83c424               add esp, 0x24
// 0088e835  c20800               ret 8
// copied from an identical function in another client (function ?FindDefaultAccelerator@CXTPShortcutManager@@UAEHIAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp