// roc 2010-06 0087e890  unit: CXTPPropertyGridPaintManager  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087e890
//
// 0087e890  6aff                 push -1
// 0087e892  68b9a99b00           push 0x9ba9b9
// 0087e897  64a100000000         mov eax, dword ptr fs:[0]
// 0087e89d  50                   push eax
// 0087e89e  53                   push ebx
// 0087e89f  55                   push ebp
// 0087e8a0  56                   push esi
// 0087e8a1  57                   push edi
// 0087e8a2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087e8a7  33c4                 xor eax, esp
// 0087e8a9  50                   push eax
// 0087e8aa  8d442414             lea eax, [esp + 0x14]
// 0087e8ae  64a300000000         mov dword ptr fs:[0], eax
// 0087e8b4  8bf9                 mov edi, ecx
// 0087e8b6  8b07                 mov eax, dword ptr [edi]
// 0087e8b8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0087e8bc  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087e8c0  8b5004               mov edx, dword ptr [eax + 4]
// 0087e8c3  8b1e                 mov ebx, dword ptr [esi]
// 0087e8c5  6a01                 push 1
// 0087e8c7  55                   push ebp
// 0087e8c8  ffd2                 call edx
// 0087e8ca  50                   push eax
// 0087e8cb  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0087e8ce  8bce                 mov ecx, esi
// 0087e8d0  ffd0                 call eax
// 0087e8d2  8b17                 mov edx, dword ptr [edi]
// 0087e8d4  8b4208               mov eax, dword ptr [edx + 8]
// 0087e8d7  6a01                 push 1
// 0087e8d9  55                   push ebp
// 0087e8da  8bcf                 mov ecx, edi
// 0087e8dc  ffd0                 call eax
// 0087e8de  50                   push eax
// 0087e8df  8d4c2430             lea ecx, [esp + 0x30]
// 0087e8e3  51                   push ecx
// 0087e8e4  8bce                 mov ecx, esi
// 0087e8e6  e8539ef2ff           call 0x7a873e
// 0087e8eb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087e8ef  8b5500               mov edx, dword ptr [ebp]
// 0087e8f2  8b5268               mov edx, dword ptr [edx + 0x68]
// 0087e8f5  83c104               add ecx, 4
// 0087e8f8  83ec10               sub esp, 0x10
// 0087e8fb  8bc4                 mov eax, esp
// 0087e8fd  8908                 mov dword ptr [eax], ecx
// 0087e8ff  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0087e903  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087e907  894804               mov dword ptr [eax + 4], ecx
// 0087e90a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087e90e  894808               mov dword ptr [eax + 8], ecx
// 0087e911  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087e915  89480c               mov dword ptr [eax + 0xc], ecx
// 0087e918  56                   push esi
// 0087e919  8bcd                 mov ecx, ebp
// 0087e91b  ffd2                 call edx
// 0087e91d  85c0                 test eax, eax
// 0087e91f  0f852c010000         jne 0x87ea51
// 0087e925  50                   push eax
// 0087e926  6a01                 push 1
// 0087e928  8bcd                 mov ecx, ebp
// 0087e92a  e8d1a5f9ff           call 0x818f00
// 0087e92f  8bd8                 mov ebx, eax
// 0087e931  895c2428             mov dword ptr [esp + 0x28], ebx
// 0087e935  85db                 test ebx, ebx
// 0087e937  0f8498000000         je 0x87e9d5
// 0087e93d  8b4330               mov eax, dword ptr [ebx + 0x30]
// 0087e940  83f8ff               cmp eax, -1
// 0087e943  0f848c000000         je 0x87e9d5
// 0087e949  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0087e94c  6a00                 push 0
// 0087e94e  50                   push eax
// 0087e94f  e82c33f8ff           call 0x801c80
// 0087e954  8bc8                 mov ecx, eax
// 0087e956  e8c552f4ff           call 0x7c3c20
// 0087e95b  8bf8                 mov edi, eax
// 0087e95d  85ff                 test edi, edi
// 0087e95f  7474                 je 0x87e9d5
// 0087e961  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0087e965  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 0087e969  8bcf                 mov ecx, edi
// 0087e96b  e8e0a1f3ff           call 0x7b8b50
// 0087e970  3bc3                 cmp eax, ebx
// 0087e972  7d09                 jge 0x87e97d
// 0087e974  8bcf                 mov ecx, edi
// 0087e976  e8d5a1f3ff           call 0x7b8b50
// 0087e97b  eb08                 jmp 0x87e985
// 0087e97d  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087e981  2b442430             sub eax, dword ptr [esp + 0x30]
// 0087e985  8bcf                 mov ecx, edi
// 0087e987  89442424             mov dword ptr [esp + 0x24], eax
// 0087e98b  e810f8f4ff           call 0x7ce1a0
// 0087e990  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087e994  8bd8                 mov ebx, eax
// 0087e996  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087e99a  03c1                 add eax, ecx
// 0087e99c  99                   cdq 
// 0087e99d  2bc2                 sub eax, edx
// 0087e99f  8bc8                 mov ecx, eax
// 0087e9a1  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087e9a5  99                   cdq 
// 0087e9a6  2bc2                 sub eax, edx
// 0087e9a8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0087e9ac  d1f8                 sar eax, 1
// 0087e9ae  52                   push edx
// 0087e9af  d1f9                 sar ecx, 1
// 0087e9b1  2bc8                 sub ecx, eax
// 0087e9b3  8b442430             mov eax, dword ptr [esp + 0x30]
// 0087e9b7  53                   push ebx
// 0087e9b8  51                   push ecx
// 0087e9b9  83c0fe               add eax, -2
// 0087e9bc  50                   push eax
// 0087e9bd  56                   push esi
// 0087e9be  8bcf                 mov ecx, edi
// 0087e9c0  e86b67f4ff           call 0x7c5130
// 0087e9c5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087e9c9  8d4c1805             lea ecx, [eax + ebx + 5]
// 0087e9cd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0087e9d1  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0087e9d5  6aff                 push -1
// 0087e9d7  6a00                 push 0
// 0087e9d9  8d542434             lea edx, [esp + 0x34]
// 0087e9dd  52                   push edx
// 0087e9de  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0087e9e4  85db                 test ebx, ebx
// 0087e9e6  7408                 je 0x87e9f0
// 0087e9e8  8bbb94000000         mov edi, dword ptr [ebx + 0x94]
// 0087e9ee  eb05                 jmp 0x87e9f5
// 0087e9f0  bf24000000           mov edi, 0x24
// 0087e9f5  83bd0401000001       cmp dword ptr [ebp + 0x104], 1
// 0087e9fc  7e06                 jle 0x87ea04
// 0087e9fe  83e7df               and edi, 0xffffffdf
// 0087ea01  83cf10               or edi, 0x10
// 0087ea04  8b4500               mov eax, dword ptr [ebp]
// 0087ea07  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0087ea0d  8d4c2424             lea ecx, [esp + 0x24]
// 0087ea11  51                   push ecx
// 0087ea12  8bcd                 mov ecx, ebp
// 0087ea14  ffd2                 call edx
// 0087ea16  8bd8                 mov ebx, eax
// 0087ea18  8b2e                 mov ebp, dword ptr [esi]
// 0087ea1a  81cf00080000         or edi, 0x800
// 0087ea20  57                   push edi
// 0087ea21  8d442430             lea eax, [esp + 0x30]
// 0087ea25  50                   push eax
// 0087ea26  8bcb                 mov ecx, ebx
// 0087ea28  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0087ea30  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ea36  50                   push eax
// 0087ea37  8bcb                 mov ecx, ebx
// 0087ea39  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087ea3f  8b5570               mov edx, dword ptr [ebp + 0x70]
// 0087ea42  50                   push eax
// 0087ea43  8bce                 mov ecx, esi
// 0087ea45  ffd2                 call edx
// 0087ea47  8d4c2424             lea ecx, [esp + 0x24]
// 0087ea4b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ea51  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087ea55  64890d00000000       mov dword ptr fs:[0], ecx
// 0087ea5c  59                   pop ecx
// 0087ea5d  5f                   pop edi
// 0087ea5e  5e                   pop esi
// 0087ea5f  5d                   pop ebp
// 0087ea60  5b                   pop ebx
// 0087ea61  83c40c               add esp, 0xc
// 0087ea64  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemValue@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp