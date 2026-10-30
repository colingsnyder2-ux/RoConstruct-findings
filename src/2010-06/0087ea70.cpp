// roc 2010-06 0087ea70  unit: CXTPPropertyGridPaintManager  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087ea70
//
// 0087ea70  6aff                 push -1
// 0087ea72  68e9a99b00           push 0x9ba9e9
// 0087ea77  64a100000000         mov eax, dword ptr fs:[0]
// 0087ea7d  50                   push eax
// 0087ea7e  83ec10               sub esp, 0x10
// 0087ea81  53                   push ebx
// 0087ea82  55                   push ebp
// 0087ea83  56                   push esi
// 0087ea84  57                   push edi
// 0087ea85  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087ea8a  33c4                 xor eax, esp
// 0087ea8c  50                   push eax
// 0087ea8d  8d442424             lea eax, [esp + 0x24]
// 0087ea91  64a300000000         mov dword ptr fs:[0], eax
// 0087ea97  8bd9                 mov ebx, ecx
// 0087ea99  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087ea9d  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0087eaa1  8bbd98000000         mov edi, dword ptr [ebp + 0x98]
// 0087eaa7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087eaab  8bb584000000         mov esi, dword ptr [ebp + 0x84]
// 0087eab1  8b542448             mov edx, dword ptr [esp + 0x48]
// 0087eab5  89442414             mov dword ptr [esp + 0x14], eax
// 0087eab9  33c0                 xor eax, eax
// 0087eabb  85ff                 test edi, edi
// 0087eabd  0f95c0               setne al
// 0087eac0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087eac4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087eac8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0087eacc  49                   dec ecx
// 0087eacd  6a00                 push 0
// 0087eacf  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087ead3  03c6                 add eax, esi
// 0087ead5  8d34c500000000       lea esi, [eax*8]
// 0087eadc  2bf0                 sub esi, eax
// 0087eade  8d443603             lea eax, [esi + esi + 3]
// 0087eae2  4a                   dec edx
// 0087eae3  6a00                 push 0
// 0087eae5  8bcd                 mov ecx, ebp
// 0087eae7  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087eaeb  89542428             mov dword ptr [esp + 0x28], edx
// 0087eaef  e80ca4f9ff           call 0x818f00
// 0087eaf4  8bf8                 mov edi, eax
// 0087eaf6  897c2438             mov dword ptr [esp + 0x38], edi
// 0087eafa  85ff                 test edi, edi
// 0087eafc  0f849d000000         je 0x87eb9f
// 0087eb02  8b4730               mov eax, dword ptr [edi + 0x30]
// 0087eb05  83f8ff               cmp eax, -1
// 0087eb08  0f8489000000         je 0x87eb97
// 0087eb0e  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 0087eb11  6a00                 push 0
// 0087eb13  50                   push eax
// 0087eb14  e86731f8ff           call 0x801c80
// 0087eb19  8bc8                 mov ecx, eax
// 0087eb1b  e80051f4ff           call 0x7c3c20
// 0087eb20  8bf0                 mov esi, eax
// 0087eb22  85f6                 test esi, esi
// 0087eb24  7471                 je 0x87eb97
// 0087eb26  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0087eb2a  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 0087eb2e  8bce                 mov ecx, esi
// 0087eb30  e81ba0f3ff           call 0x7b8b50
// 0087eb35  3bc7                 cmp eax, edi
// 0087eb37  7d0b                 jge 0x87eb44
// 0087eb39  8bce                 mov ecx, esi
// 0087eb3b  e810a0f3ff           call 0x7b8b50
// 0087eb40  8bd8                 mov ebx, eax
// 0087eb42  eb08                 jmp 0x87eb4c
// 0087eb44  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0087eb48  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 0087eb4c  8bce                 mov ecx, esi
// 0087eb4e  e84df6f4ff           call 0x7ce1a0
// 0087eb53  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087eb57  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087eb5b  8bf8                 mov edi, eax
// 0087eb5d  8d040a               lea eax, [edx + ecx]
// 0087eb60  99                   cdq 
// 0087eb61  2bc2                 sub eax, edx
// 0087eb63  8bc8                 mov ecx, eax
// 0087eb65  8bc3                 mov eax, ebx
// 0087eb67  99                   cdq 
// 0087eb68  2bc2                 sub eax, edx
// 0087eb6a  d1f8                 sar eax, 1
// 0087eb6c  53                   push ebx
// 0087eb6d  d1f9                 sar ecx, 1
// 0087eb6f  2bc8                 sub ecx, eax
// 0087eb71  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087eb75  57                   push edi
// 0087eb76  51                   push ecx
// 0087eb77  83c0fe               add eax, -2
// 0087eb7a  50                   push eax
// 0087eb7b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0087eb7f  50                   push eax
// 0087eb80  8bce                 mov ecx, esi
// 0087eb82  e8a965f4ff           call 0x7c5130
// 0087eb87  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087eb8b  8d543905             lea edx, [ecx + edi + 5]
// 0087eb8f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0087eb93  89542414             mov dword ptr [esp + 0x14], edx
// 0087eb97  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 0087eb9d  eb05                 jmp 0x87eba4
// 0087eb9f  be24000000           mov esi, 0x24
// 0087eba4  8d442438             lea eax, [esp + 0x38]
// 0087eba8  50                   push eax
// 0087eba9  8bcd                 mov ecx, ebp
// 0087ebab  e8104ebbff           call 0x4339c0
// 0087ebb0  8bf8                 mov edi, eax
// 0087ebb2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087ebb6  8b19                 mov ebx, dword ptr [ecx]
// 0087ebb8  81ce00080000         or esi, 0x800
// 0087ebbe  56                   push esi
// 0087ebbf  8d542418             lea edx, [esp + 0x18]
// 0087ebc3  52                   push edx
// 0087ebc4  8bcf                 mov ecx, edi
// 0087ebc6  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0087ebce  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ebd4  50                   push eax
// 0087ebd5  8bcf                 mov ecx, edi
// 0087ebd7  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087ebdd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087ebe1  50                   push eax
// 0087ebe2  8b4370               mov eax, dword ptr [ebx + 0x70]
// 0087ebe5  ffd0                 call eax
// 0087ebe7  8d4c2438             lea ecx, [esp + 0x38]
// 0087ebeb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ebf1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087ebf5  64890d00000000       mov dword ptr fs:[0], ecx
// 0087ebfc  59                   pop ecx
// 0087ebfd  5f                   pop edi
// 0087ebfe  5e                   pop esi
// 0087ebff  5d                   pop ebp
// 0087ec00  5b                   pop ebx
// 0087ec01  83c41c               add esp, 0x1c
// 0087ec04  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemCaption@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp