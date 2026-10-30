// roc 2012-06 00a5aa60  unit: CXTPPropertyGridPaintManager  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5aa60
//
// 00a5aa60  6aff                 push -1
// 00a5aa62  68b977ae00           push 0xae77b9
// 00a5aa67  64a100000000         mov eax, dword ptr fs:[0]
// 00a5aa6d  50                   push eax
// 00a5aa6e  83ec10               sub esp, 0x10
// 00a5aa71  53                   push ebx
// 00a5aa72  55                   push ebp
// 00a5aa73  56                   push esi
// 00a5aa74  57                   push edi
// 00a5aa75  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5aa7a  33c4                 xor eax, esp
// 00a5aa7c  50                   push eax
// 00a5aa7d  8d442424             lea eax, [esp + 0x24]
// 00a5aa81  64a300000000         mov dword ptr fs:[0], eax
// 00a5aa87  8bd9                 mov ebx, ecx
// 00a5aa89  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a5aa8d  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00a5aa91  8bbd98000000         mov edi, dword ptr [ebp + 0x98]
// 00a5aa97  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5aa9b  8bb584000000         mov esi, dword ptr [ebp + 0x84]
// 00a5aaa1  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a5aaa5  89442414             mov dword ptr [esp + 0x14], eax
// 00a5aaa9  33c0                 xor eax, eax
// 00a5aaab  85ff                 test edi, edi
// 00a5aaad  0f95c0               setne al
// 00a5aab0  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a5aab4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a5aab8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a5aabc  49                   dec ecx
// 00a5aabd  6a00                 push 0
// 00a5aabf  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a5aac3  03c6                 add eax, esi
// 00a5aac5  8d34c500000000       lea esi, [eax*8]
// 00a5aacc  2bf0                 sub esi, eax
// 00a5aace  8d443603             lea eax, [esi + esi + 3]
// 00a5aad2  4a                   dec edx
// 00a5aad3  6a00                 push 0
// 00a5aad5  8bcd                 mov ecx, ebp
// 00a5aad7  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5aadb  89542428             mov dword ptr [esp + 0x28], edx
// 00a5aadf  e8ac71f9ff           call 0x9f1c90
// 00a5aae4  8bf8                 mov edi, eax
// 00a5aae6  897c2438             mov dword ptr [esp + 0x38], edi
// 00a5aaea  85ff                 test edi, edi
// 00a5aaec  0f849d000000         je 0xa5ab8f
// 00a5aaf2  8b4730               mov eax, dword ptr [edi + 0x30]
// 00a5aaf5  83f8ff               cmp eax, -1
// 00a5aaf8  0f8489000000         je 0xa5ab87
// 00a5aafe  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00a5ab01  6a00                 push 0
// 00a5ab03  50                   push eax
// 00a5ab04  e8a76df8ff           call 0x9e18b0
// 00a5ab09  8bc8                 mov ecx, eax
// 00a5ab0b  e8b035f4ff           call 0x99e0c0
// 00a5ab10  8bf0                 mov esi, eax
// 00a5ab12  85f6                 test esi, esi
// 00a5ab14  7471                 je 0xa5ab87
// 00a5ab16  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a5ab1a  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00a5ab1e  8bce                 mov ecx, esi
// 00a5ab20  e8fbcef3ff           call 0x997a20
// 00a5ab25  3bc7                 cmp eax, edi
// 00a5ab27  7d0b                 jge 0xa5ab34
// 00a5ab29  8bce                 mov ecx, esi
// 00a5ab2b  e8f0cef3ff           call 0x997a20
// 00a5ab30  8bd8                 mov ebx, eax
// 00a5ab32  eb08                 jmp 0xa5ab3c
// 00a5ab34  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a5ab38  2b5c2418             sub ebx, dword ptr [esp + 0x18]
// 00a5ab3c  8bce                 mov ecx, esi
// 00a5ab3e  e81d0bfdff           call 0xa2b660
// 00a5ab43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5ab47  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5ab4b  8bf8                 mov edi, eax
// 00a5ab4d  8d040a               lea eax, [edx + ecx]
// 00a5ab50  99                   cdq 
// 00a5ab51  2bc2                 sub eax, edx
// 00a5ab53  8bc8                 mov ecx, eax
// 00a5ab55  8bc3                 mov eax, ebx
// 00a5ab57  99                   cdq 
// 00a5ab58  2bc2                 sub eax, edx
// 00a5ab5a  d1f8                 sar eax, 1
// 00a5ab5c  53                   push ebx
// 00a5ab5d  d1f9                 sar ecx, 1
// 00a5ab5f  2bc8                 sub ecx, eax
// 00a5ab61  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5ab65  57                   push edi
// 00a5ab66  51                   push ecx
// 00a5ab67  83c0fe               add eax, -2
// 00a5ab6a  50                   push eax
// 00a5ab6b  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a5ab6f  50                   push eax
// 00a5ab70  8bce                 mov ecx, esi
// 00a5ab72  e80947f4ff           call 0x99f280
// 00a5ab77  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5ab7b  8d543905             lea edx, [ecx + edi + 5]
// 00a5ab7f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a5ab83  89542414             mov dword ptr [esp + 0x14], edx
// 00a5ab87  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 00a5ab8d  eb05                 jmp 0xa5ab94
// 00a5ab8f  be24000000           mov esi, 0x24
// 00a5ab94  8d442438             lea eax, [esp + 0x38]
// 00a5ab98  50                   push eax
// 00a5ab99  8bcd                 mov ecx, ebp
// 00a5ab9b  e8709a9fff           call 0x454610
// 00a5aba0  8bf8                 mov edi, eax
// 00a5aba2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5aba6  8b19                 mov ebx, dword ptr [ecx]
// 00a5aba8  81ce00080000         or esi, 0x800
// 00a5abae  56                   push esi
// 00a5abaf  8d542418             lea edx, [esp + 0x18]
// 00a5abb3  52                   push edx
// 00a5abb4  8bcf                 mov ecx, edi
// 00a5abb6  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00a5abbe  ff155846b200         call dword ptr [0xb24658]
// 00a5abc4  50                   push eax
// 00a5abc5  8bcf                 mov ecx, edi
// 00a5abc7  ff159847b200         call dword ptr [0xb24798]
// 00a5abcd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5abd1  50                   push eax
// 00a5abd2  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00a5abd5  ffd0                 call eax
// 00a5abd7  8d4c2438             lea ecx, [esp + 0x38]
// 00a5abdb  ff15d047b200         call dword ptr [0xb247d0]
// 00a5abe1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5abe5  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5abec  59                   pop ecx
// 00a5abed  5f                   pop edi
// 00a5abee  5e                   pop esi
// 00a5abef  5d                   pop ebp
// 00a5abf0  5b                   pop ebx
// 00a5abf1  83c41c               add esp, 0x1c
// 00a5abf4  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemCaption@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp