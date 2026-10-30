// roc 2011-06 008ff930  unit: CXTPRibbonSystemPopupBar  size: 541 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ff930
//
// 008ff930  6aff                 push -1
// 008ff932  68c8f5a000           push 0xa0f5c8
// 008ff937  64a100000000         mov eax, dword ptr fs:[0]
// 008ff93d  50                   push eax
// 008ff93e  83ec48               sub esp, 0x48
// 008ff941  53                   push ebx
// 008ff942  55                   push ebp
// 008ff943  56                   push esi
// 008ff944  57                   push edi
// 008ff945  a12058c900           mov eax, dword ptr [0xc95820]
// 008ff94a  33c4                 xor eax, esp
// 008ff94c  50                   push eax
// 008ff94d  8d44245c             lea eax, [esp + 0x5c]
// 008ff951  64a300000000         mov dword ptr fs:[0], eax
// 008ff957  8bd9                 mov ebx, ecx
// 008ff959  8d4c2434             lea ecx, [esp + 0x34]
// 008ff95d  e8eee5f0ff           call 0x80df50
// 008ff962  8bcb                 mov ecx, ebx
// 008ff964  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008ff96c  33ff                 xor edi, edi
// 008ff96e  e89dbef1ff           call 0x81b810
// 008ff973  85c0                 test eax, eax
// 008ff975  7e50                 jle 0x8ff9c7
// 008ff977  57                   push edi
// 008ff978  8bcb                 mov ecx, ebx
// 008ff97a  e8a1bef1ff           call 0x81b820
// 008ff97f  8bf0                 mov esi, eax
// 008ff981  85f6                 test esi, esi
// 008ff983  7436                 je 0x8ff9bb
// 008ff985  e8e6edffff           call 0x8fe770
// 008ff98a  50                   push eax
// 008ff98b  8bce                 mov ecx, esi
// 008ff98d  e854acf0ff           call 0x80a5e6
// 008ff992  85c0                 test eax, eax
// 008ff994  7425                 je 0x8ff9bb
// 008ff996  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008ff99a  56                   push esi
// 008ff99b  50                   push eax
// 008ff99c  8d4c243c             lea ecx, [esp + 0x3c]
// 008ff9a0  e8ebf2f3ff           call 0x83ec90
// 008ff9a5  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008ff9ab  8b16                 mov edx, dword ptr [esi]
// 008ff9ad  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008ff9b3  83c804               or eax, 4
// 008ff9b6  50                   push eax
// 008ff9b7  8bce                 mov ecx, esi
// 008ff9b9  ffd2                 call edx
// 008ff9bb  8bcb                 mov ecx, ebx
// 008ff9bd  47                   inc edi
// 008ff9be  e84dbef1ff           call 0x81b810
// 008ff9c3  3bf8                 cmp edi, eax
// 008ff9c5  7cb0                 jl 0x8ff977
// 008ff9c7  8b442474             mov eax, dword ptr [esp + 0x74]
// 008ff9cb  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008ff9cf  50                   push eax
// 008ff9d0  51                   push ecx
// 008ff9d1  8d54241c             lea edx, [esp + 0x1c]
// 008ff9d5  52                   push edx
// 008ff9d6  8bcb                 mov ecx, ebx
// 008ff9d8  e83346f5ff           call 0x854010
// 008ff9dd  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008ff9e1  85f6                 test esi, esi
// 008ff9e3  7513                 jne 0x8ff9f8
// 008ff9e5  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008ff9e9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ff9ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ff9f1  8906                 mov dword ptr [esi], eax
// 008ff9f3  894e04               mov dword ptr [esi + 4], ecx
// 008ff9f6  eb78                 jmp 0x8ffa70
// 008ff9f8  53                   push ebx
// 008ff9f9  8d4c244c             lea ecx, [esp + 0x4c]
// 008ff9fd  e826b5f0ff           call 0x80af28
// 008ffa02  8bcb                 mov ecx, ebx
// 008ffa04  c644246401           mov byte ptr [esp + 0x64], 1
// 008ffa09  e842b1f1ff           call 0x81ab50
// 008ffa0e  8b10                 mov edx, dword ptr [eax]
// 008ffa10  6a00                 push 0
// 008ffa12  8bc8                 mov ecx, eax
// 008ffa14  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008ffa1a  53                   push ebx
// 008ffa1b  ffd0                 call eax
// 008ffa1d  50                   push eax
// 008ffa1e  8d4c244c             lea ecx, [esp + 0x4c]
// 008ffa22  51                   push ecx
// 008ffa23  8d4c242c             lea ecx, [esp + 0x2c]
// 008ffa27  e8f4d6f5ff           call 0x85d120
// 008ffa2c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008ffa30  2bbb08020000         sub edi, dword ptr [ebx + 0x208]
// 008ffa36  8d6eff               lea ebp, [esi - 1]
// 008ffa39  47                   inc edi
// 008ffa3a  c644246402           mov byte ptr [esp + 0x64], 2
// 008ffa3f  85ed                 test ebp, ebp
// 008ffa41  7d61                 jge 0x8ffaa4
// 008ffa43  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008ffa47  8b542414             mov edx, dword ptr [esp + 0x14]
// 008ffa4b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ffa4f  8d4c2424             lea ecx, [esp + 0x24]
// 008ffa53  8916                 mov dword ptr [esi], edx
// 008ffa55  894604               mov dword ptr [esi + 4], eax
// 008ffa58  c644246401           mov byte ptr [esp + 0x64], 1
// 008ffa5d  e83ed7f5ff           call 0x85d1a0
// 008ffa62  8d4c2448             lea ecx, [esp + 0x48]
// 008ffa66  c644246400           mov byte ptr [esp + 0x64], 0
// 008ffa6b  e8b2b4f0ff           call 0x80af22
// 008ffa70  8d4c2434             lea ecx, [esp + 0x34]
// 008ffa74  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008ffa7c  e8efe4f0ff           call 0x80df70
// 008ffa81  8bc6                 mov eax, esi
// 008ffa83  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008ffa87  64890d00000000       mov dword ptr fs:[0], ecx
// 008ffa8e  59                   pop ecx
// 008ffa8f  5f                   pop edi
// 008ffa90  5e                   pop esi
// 008ffa91  5d                   pop ebp
// 008ffa92  5b                   pop ebx
// 008ffa93  83c454               add esp, 0x54
// 008ffa96  c20c00               ret 0xc
// 008ffa99  8da42400000000       lea esp, [esp]
// 008ffaa0  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008ffaa4  85ed                 test ebp, ebp
// 008ffaa6  0f8c9c000000         jl 0x8ffb48
// 008ffaac  3bee                 cmp ebp, esi
// 008ffaae  0f8d94000000         jge 0x8ffb48
// 008ffab4  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ffab8  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 008ffabb  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008ffac1  8b06                 mov eax, dword ptr [esi]
// 008ffac3  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008ffac9  83e1fb               and ecx, 0xfffffffb
// 008ffacc  51                   push ecx
// 008ffacd  8bce                 mov ecx, esi
// 008ffacf  ffd2                 call edx
// 008ffad1  8b06                 mov eax, dword ptr [esi]
// 008ffad3  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008ffad9  8d4c2448             lea ecx, [esp + 0x48]
// 008ffadd  51                   push ecx
// 008ffade  8d542420             lea edx, [esp + 0x20]
// 008ffae2  52                   push edx
// 008ffae3  8bce                 mov ecx, esi
// 008ffae5  ffd0                 call eax
// 008ffae7  8b442418             mov eax, dword ptr [esp + 0x18]
// 008ffaeb  8d48fd               lea ecx, [eax - 3]
// 008ffaee  2b830c020000         sub eax, dword ptr [ebx + 0x20c]
// 008ffaf4  894c2470             mov dword ptr [esp + 0x70], ecx
// 008ffaf8  83c004               add eax, 4
// 008ffafb  8bd7                 mov edx, edi
// 008ffafd  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 008ffb01  83ec10               sub esp, 0x10
// 008ffb04  8bcc                 mov ecx, esp
// 008ffb06  8911                 mov dword ptr [ecx], edx
// 008ffb08  89842484000000       mov dword ptr [esp + 0x84], eax
// 008ffb0f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008ffb16  8b06                 mov eax, dword ptr [esi]
// 008ffb18  8b407c               mov eax, dword ptr [eax + 0x7c]
// 008ffb1b  895104               mov dword ptr [ecx + 4], edx
// 008ffb1e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008ffb25  897908               mov dword ptr [ecx + 8], edi
// 008ffb28  89510c               mov dword ptr [ecx + 0xc], edx
// 008ffb2b  8bce                 mov ecx, esi
// 008ffb2d  ffd0                 call eax
// 008ffb2f  b9faffffff           mov ecx, 0xfffffffa
// 008ffb34  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008ffb38  03f9                 add edi, ecx
// 008ffb3a  83ed01               sub ebp, 1
// 008ffb3d  0f895dffffff         jns 0x8ffaa0
// 008ffb43  e9fbfeffff           jmp 0x8ffa43
// 008ffb48  e8bda7f0ff           call 0x80a30a
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonSystemPopupBar@@UAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp