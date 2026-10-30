// roc 2009-06 007efb40  unit: CXTPPropertyGridPaintManager  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007efb40
//
// 007efb40  6aff                 push -1
// 007efb42  6849098800           push 0x880949
// 007efb47  64a100000000         mov eax, dword ptr fs:[0]
// 007efb4d  50                   push eax
// 007efb4e  53                   push ebx
// 007efb4f  55                   push ebp
// 007efb50  56                   push esi
// 007efb51  57                   push edi
// 007efb52  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007efb57  33c4                 xor eax, esp
// 007efb59  50                   push eax
// 007efb5a  8d442414             lea eax, [esp + 0x14]
// 007efb5e  64a300000000         mov dword ptr fs:[0], eax
// 007efb64  8bf9                 mov edi, ecx
// 007efb66  8b07                 mov eax, dword ptr [edi]
// 007efb68  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007efb6c  8b742424             mov esi, dword ptr [esp + 0x24]
// 007efb70  8b5004               mov edx, dword ptr [eax + 4]
// 007efb73  8b1e                 mov ebx, dword ptr [esi]
// 007efb75  6a01                 push 1
// 007efb77  55                   push ebp
// 007efb78  ffd2                 call edx
// 007efb7a  50                   push eax
// 007efb7b  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007efb7e  8bce                 mov ecx, esi
// 007efb80  ffd0                 call eax
// 007efb82  8b17                 mov edx, dword ptr [edi]
// 007efb84  8b4208               mov eax, dword ptr [edx + 8]
// 007efb87  6a01                 push 1
// 007efb89  55                   push ebp
// 007efb8a  8bcf                 mov ecx, edi
// 007efb8c  ffd0                 call eax
// 007efb8e  50                   push eax
// 007efb8f  8d4c2430             lea ecx, [esp + 0x30]
// 007efb93  51                   push ecx
// 007efb94  8bce                 mov ecx, esi
// 007efb96  e8359cf2ff           call 0x7197d0
// 007efb9b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007efb9f  8b5500               mov edx, dword ptr [ebp]
// 007efba2  8b5268               mov edx, dword ptr [edx + 0x68]
// 007efba5  83c104               add ecx, 4
// 007efba8  83ec10               sub esp, 0x10
// 007efbab  8bc4                 mov eax, esp
// 007efbad  8908                 mov dword ptr [eax], ecx
// 007efbaf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007efbb3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007efbb7  894804               mov dword ptr [eax + 4], ecx
// 007efbba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007efbbe  894808               mov dword ptr [eax + 8], ecx
// 007efbc1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007efbc5  89480c               mov dword ptr [eax + 0xc], ecx
// 007efbc8  56                   push esi
// 007efbc9  8bcd                 mov ecx, ebp
// 007efbcb  ffd2                 call edx
// 007efbcd  85c0                 test eax, eax
// 007efbcf  0f852c010000         jne 0x7efd01
// 007efbd5  50                   push eax
// 007efbd6  6a01                 push 1
// 007efbd8  8bcd                 mov ecx, ebp
// 007efbda  e851a3f9ff           call 0x789f30
// 007efbdf  8bd8                 mov ebx, eax
// 007efbe1  895c2428             mov dword ptr [esp + 0x28], ebx
// 007efbe5  85db                 test ebx, ebx
// 007efbe7  0f8498000000         je 0x7efc85
// 007efbed  8b4330               mov eax, dword ptr [ebx + 0x30]
// 007efbf0  83f8ff               cmp eax, -1
// 007efbf3  0f848c000000         je 0x7efc85
// 007efbf9  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007efbfc  6a00                 push 0
// 007efbfe  50                   push eax
// 007efbff  e8dc32f8ff           call 0x772ee0
// 007efc04  8bc8                 mov ecx, eax
// 007efc06  e8858ef4ff           call 0x738a90
// 007efc0b  8bf8                 mov edi, eax
// 007efc0d  85ff                 test edi, edi
// 007efc0f  7474                 je 0x7efc85
// 007efc11  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007efc15  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 007efc19  8bcf                 mov ecx, edi
// 007efc1b  e890d2f5ff           call 0x74ceb0
// 007efc20  3bc3                 cmp eax, ebx
// 007efc22  7d09                 jge 0x7efc2d
// 007efc24  8bcf                 mov ecx, edi
// 007efc26  e885d2f5ff           call 0x74ceb0
// 007efc2b  eb08                 jmp 0x7efc35
// 007efc2d  8b442438             mov eax, dword ptr [esp + 0x38]
// 007efc31  2b442430             sub eax, dword ptr [esp + 0x30]
// 007efc35  8bcf                 mov ecx, edi
// 007efc37  89442424             mov dword ptr [esp + 0x24], eax
// 007efc3b  e8e085fdff           call 0x7c8220
// 007efc40  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007efc44  8bd8                 mov ebx, eax
// 007efc46  8b442430             mov eax, dword ptr [esp + 0x30]
// 007efc4a  03c1                 add eax, ecx
// 007efc4c  99                   cdq 
// 007efc4d  2bc2                 sub eax, edx
// 007efc4f  8bc8                 mov ecx, eax
// 007efc51  8b442424             mov eax, dword ptr [esp + 0x24]
// 007efc55  99                   cdq 
// 007efc56  2bc2                 sub eax, edx
// 007efc58  8b542424             mov edx, dword ptr [esp + 0x24]
// 007efc5c  d1f8                 sar eax, 1
// 007efc5e  52                   push edx
// 007efc5f  d1f9                 sar ecx, 1
// 007efc61  2bc8                 sub ecx, eax
// 007efc63  8b442430             mov eax, dword ptr [esp + 0x30]
// 007efc67  53                   push ebx
// 007efc68  51                   push ecx
// 007efc69  83c0fe               add eax, -2
// 007efc6c  50                   push eax
// 007efc6d  56                   push esi
// 007efc6e  8bcf                 mov ecx, edi
// 007efc70  e82ba3f4ff           call 0x739fa0
// 007efc75  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007efc79  8d4c1805             lea ecx, [eax + ebx + 5]
// 007efc7d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007efc81  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007efc85  6aff                 push -1
// 007efc87  6a00                 push 0
// 007efc89  8d542434             lea edx, [esp + 0x34]
// 007efc8d  52                   push edx
// 007efc8e  ff15bced8900         call dword ptr [0x89edbc]
// 007efc94  85db                 test ebx, ebx
// 007efc96  7408                 je 0x7efca0
// 007efc98  8bbb94000000         mov edi, dword ptr [ebx + 0x94]
// 007efc9e  eb05                 jmp 0x7efca5
// 007efca0  bf24000000           mov edi, 0x24
// 007efca5  83bd0401000001       cmp dword ptr [ebp + 0x104], 1
// 007efcac  7e06                 jle 0x7efcb4
// 007efcae  83e7df               and edi, 0xffffffdf
// 007efcb1  83cf10               or edi, 0x10
// 007efcb4  8b4500               mov eax, dword ptr [ebp]
// 007efcb7  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 007efcbd  8d4c2424             lea ecx, [esp + 0x24]
// 007efcc1  51                   push ecx
// 007efcc2  8bcd                 mov ecx, ebp
// 007efcc4  ffd2                 call edx
// 007efcc6  8bd8                 mov ebx, eax
// 007efcc8  8b2e                 mov ebp, dword ptr [esi]
// 007efcca  81cf00080000         or edi, 0x800
// 007efcd0  57                   push edi
// 007efcd1  8d442430             lea eax, [esp + 0x30]
// 007efcd5  50                   push eax
// 007efcd6  8bcb                 mov ecx, ebx
// 007efcd8  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007efce0  ff1554fb8900         call dword ptr [0x89fb54]
// 007efce6  50                   push eax
// 007efce7  8bcb                 mov ecx, ebx
// 007efce9  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007efcef  8b5570               mov edx, dword ptr [ebp + 0x70]
// 007efcf2  50                   push eax
// 007efcf3  8bce                 mov ecx, esi
// 007efcf5  ffd2                 call edx
// 007efcf7  8d4c2424             lea ecx, [esp + 0x24]
// 007efcfb  ff1510fd8900         call dword ptr [0x89fd10]
// 007efd01  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007efd05  64890d00000000       mov dword ptr fs:[0], ecx
// 007efd0c  59                   pop ecx
// 007efd0d  5f                   pop edi
// 007efd0e  5e                   pop esi
// 007efd0f  5d                   pop ebp
// 007efd10  5b                   pop ebx
// 007efd11  83c40c               add esp, 0xc
// 007efd14  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemValue@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp