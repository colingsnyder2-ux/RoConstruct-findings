// roc 2007-08 0056c0a0  unit: ArchiveBinder  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056c0a0
//
// 0056c0a0  6aff                 push -1
// 0056c0a2  68a1477500           push 0x7547a1
// 0056c0a7  64a100000000         mov eax, dword ptr fs:[0]
// 0056c0ad  50                   push eax
// 0056c0ae  64892500000000       mov dword ptr fs:[0], esp
// 0056c0b5  83ec24               sub esp, 0x24
// 0056c0b8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0056c0bc  55                   push ebp
// 0056c0bd  56                   push esi
// 0056c0be  57                   push edi
// 0056c0bf  8d44244c             lea eax, [esp + 0x4c]
// 0056c0c3  50                   push eax
// 0056c0c4  51                   push ecx
// 0056c0c5  8d54241c             lea edx, [esp + 0x1c]
// 0056c0c9  52                   push edx
// 0056c0ca  e8b155f9ff           call 0x501680
// 0056c0cf  83c40c               add esp, 0xc
// 0056c0d2  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 0056c0d8  85c9                 test ecx, ecx
// 0056c0da  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0056c0e2  bf10000000           mov edi, 0x10
// 0056c0e7  0f84a1000000         je 0x56c18e
// 0056c0ed  8b01                 mov eax, dword ptr [ecx]
// 0056c0ef  8b10                 mov edx, dword ptr [eax]
// 0056c0f1  ffd2                 call edx
// 0056c0f3  85c0                 test eax, eax
// 0056c0f5  0f8493000000         je 0x56c18e
// 0056c0fb  8b442444             mov eax, dword ptr [esp + 0x44]
// 0056c0ff  83f803               cmp eax, 3
// 0056c102  752a                 jne 0x56c12e
// 0056c104  397c242c             cmp dword ptr [esp + 0x2c], edi
// 0056c108  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056c10c  7304                 jae 0x56c112
// 0056c10e  8d742418             lea esi, [esp + 0x18]
// 0056c112  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 0056c118  85c9                 test ecx, ecx
// 0056c11a  740b                 je 0x56c127
// 0056c11c  8b01                 mov eax, dword ptr [ecx]
// 0056c11e  8b10                 mov edx, dword ptr [eax]
// 0056c120  ffd2                 call edx
// 0056c122  56                   push esi
// 0056c123  6a02                 push 2
// 0056c125  eb60                 jmp 0x56c187
// 0056c127  56                   push esi
// 0056c128  33c0                 xor eax, eax
// 0056c12a  6a02                 push 2
// 0056c12c  eb59                 jmp 0x56c187
// 0056c12e  83f802               cmp eax, 2
// 0056c131  752a                 jne 0x56c15d
// 0056c133  397c242c             cmp dword ptr [esp + 0x2c], edi
// 0056c137  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056c13b  7304                 jae 0x56c141
// 0056c13d  8d742418             lea esi, [esp + 0x18]
// 0056c141  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 0056c147  85c9                 test ecx, ecx
// 0056c149  740b                 je 0x56c156
// 0056c14b  8b01                 mov eax, dword ptr [ecx]
// 0056c14d  8b10                 mov edx, dword ptr [eax]
// 0056c14f  ffd2                 call edx
// 0056c151  56                   push esi
// 0056c152  6a01                 push 1
// 0056c154  eb31                 jmp 0x56c187
// 0056c156  56                   push esi
// 0056c157  33c0                 xor eax, eax
// 0056c159  6a01                 push 1
// 0056c15b  eb2a                 jmp 0x56c187
// 0056c15d  83f801               cmp eax, 1
// 0056c160  752c                 jne 0x56c18e
// 0056c162  397c242c             cmp dword ptr [esp + 0x2c], edi
// 0056c166  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056c16a  7304                 jae 0x56c170
// 0056c16c  8d742418             lea esi, [esp + 0x18]
// 0056c170  8b0dec308c00         mov ecx, dword ptr [0x8c30ec]
// 0056c176  85c9                 test ecx, ecx
// 0056c178  7408                 je 0x56c182
// 0056c17a  8b01                 mov eax, dword ptr [ecx]
// 0056c17c  8b10                 mov edx, dword ptr [eax]
// 0056c17e  ffd2                 call edx
// 0056c180  eb02                 jmp 0x56c184
// 0056c182  33c0                 xor eax, eax
// 0056c184  56                   push esi
// 0056c185  6a00                 push 0
// 0056c187  8bc8                 mov ecx, eax
// 0056c189  e852400100           call 0x5801e0
// 0056c18e  8b742440             mov esi, dword ptr [esp + 0x40]
// 0056c192  8b4608               mov eax, dword ptr [esi + 8]
// 0056c195  85c0                 test eax, eax
// 0056c197  747a                 je 0x56c213
// 0056c199  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056c19c  2bc8                 sub ecx, eax
// 0056c19e  c1f902               sar ecx, 2
// 0056c1a1  7470                 je 0x56c213
// 0056c1a3  8d6e20               lea ebp, [esi + 0x20]
// 0056c1a6  8bcd                 mov ecx, ebp
// 0056c1a8  896c240c             mov dword ptr [esp + 0xc], ebp
// 0056c1ac  e89f951b00           call 0x725750
// 0056c1b1  c644241001           mov byte ptr [esp + 0x10], 1
// 0056c1b6  8b4608               mov eax, dword ptr [esi + 8]
// 0056c1b9  85c0                 test eax, eax
// 0056c1bb  c644243801           mov byte ptr [esp + 0x38], 1
// 0056c1c0  7445                 je 0x56c207
// 0056c1c2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0056c1c5  2bd0                 sub edx, eax
// 0056c1c7  c1fa02               sar edx, 2
// 0056c1ca  743b                 je 0x56c207
// 0056c1cc  397c242c             cmp dword ptr [esp + 0x2c], edi
// 0056c1d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056c1d4  7304                 jae 0x56c1da
// 0056c1d6  8d442418             lea eax, [esp + 0x18]
// 0056c1da  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0056c1de  83ec28               sub esp, 0x28
// 0056c1e1  8bfc                 mov edi, esp
// 0056c1e3  89642468             mov dword ptr [esp + 0x68], esp
// 0056c1e7  890f                 mov dword ptr [edi], ecx
// 0056c1e9  50                   push eax
// 0056c1ea  8d4f04               lea ecx, [edi + 4]
// 0056c1ed  ff1598e67700         call dword ptr [0x77e698]
// 0056c1f3  83c720               add edi, 0x20
// 0056c1f6  57                   push edi
// 0056c1f7  ff1548e97700         call dword ptr [0x77e948]
// 0056c1fd  83c404               add esp, 4
// 0056c200  8bce                 mov ecx, esi
// 0056c202  e899fcffff           call 0x56bea0
// 0056c207  8bcd                 mov ecx, ebp
// 0056c209  c644243800           mov byte ptr [esp + 0x38], 0
// 0056c20e  e85d951b00           call 0x725770
// 0056c213  8d4c2414             lea ecx, [esp + 0x14]
// 0056c217  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0056c21f  ff15ace67700         call dword ptr [0x77e6ac]
// 0056c225  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056c229  5f                   pop edi
// 0056c22a  5e                   pop esi
// 0056c22b  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c232  5d                   pop ebp
// 0056c233  83c430               add esp, 0x30
// 0056c236  c3                   ret 
// library openrbx-client/App\util\standardout.cpp (function ?print@StandardOut@RBX@@QAAXW4MessageType@2@PBDZZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/standardout.cpp
