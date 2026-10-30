// roc 2009-12 008ca6c0  unit: CXTPPropertyGridPaintManager  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ca6c0
//
// 008ca6c0  6aff                 push -1
// 008ca6c2  68494a9600           push 0x964a49
// 008ca6c7  64a100000000         mov eax, dword ptr fs:[0]
// 008ca6cd  50                   push eax
// 008ca6ce  53                   push ebx
// 008ca6cf  55                   push ebp
// 008ca6d0  56                   push esi
// 008ca6d1  57                   push edi
// 008ca6d2  a10052b600           mov eax, dword ptr [0xb65200]
// 008ca6d7  33c4                 xor eax, esp
// 008ca6d9  50                   push eax
// 008ca6da  8d442414             lea eax, [esp + 0x14]
// 008ca6de  64a300000000         mov dword ptr fs:[0], eax
// 008ca6e4  8bf9                 mov edi, ecx
// 008ca6e6  8b07                 mov eax, dword ptr [edi]
// 008ca6e8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008ca6ec  8b742424             mov esi, dword ptr [esp + 0x24]
// 008ca6f0  8b5004               mov edx, dword ptr [eax + 4]
// 008ca6f3  8b1e                 mov ebx, dword ptr [esi]
// 008ca6f5  6a01                 push 1
// 008ca6f7  55                   push ebp
// 008ca6f8  ffd2                 call edx
// 008ca6fa  50                   push eax
// 008ca6fb  8b4338               mov eax, dword ptr [ebx + 0x38]
// 008ca6fe  8bce                 mov ecx, esi
// 008ca700  ffd0                 call eax
// 008ca702  8b17                 mov edx, dword ptr [edi]
// 008ca704  8b4208               mov eax, dword ptr [edx + 8]
// 008ca707  6a01                 push 1
// 008ca709  55                   push ebp
// 008ca70a  8bcf                 mov ecx, edi
// 008ca70c  ffd0                 call eax
// 008ca70e  50                   push eax
// 008ca70f  8d4c2430             lea ecx, [esp + 0x30]
// 008ca713  51                   push ecx
// 008ca714  8bce                 mov ecx, esi
// 008ca716  e8e39ef2ff           call 0x7f45fe
// 008ca71b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008ca71f  8b5500               mov edx, dword ptr [ebp]
// 008ca722  8b5268               mov edx, dword ptr [edx + 0x68]
// 008ca725  83c104               add ecx, 4
// 008ca728  83ec10               sub esp, 0x10
// 008ca72b  8bc4                 mov eax, esp
// 008ca72d  8908                 mov dword ptr [eax], ecx
// 008ca72f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008ca733  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008ca737  894804               mov dword ptr [eax + 4], ecx
// 008ca73a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ca73e  894808               mov dword ptr [eax + 8], ecx
// 008ca741  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008ca745  89480c               mov dword ptr [eax + 0xc], ecx
// 008ca748  56                   push esi
// 008ca749  8bcd                 mov ecx, ebp
// 008ca74b  ffd2                 call edx
// 008ca74d  85c0                 test eax, eax
// 008ca74f  0f852c010000         jne 0x8ca881
// 008ca755  50                   push eax
// 008ca756  6a01                 push 1
// 008ca758  8bcd                 mov ecx, ebp
// 008ca75a  e8e1a7f9ff           call 0x864f40
// 008ca75f  8bd8                 mov ebx, eax
// 008ca761  895c2428             mov dword ptr [esp + 0x28], ebx
// 008ca765  85db                 test ebx, ebx
// 008ca767  0f8498000000         je 0x8ca805
// 008ca76d  8b4330               mov eax, dword ptr [ebx + 0x30]
// 008ca770  83f8ff               cmp eax, -1
// 008ca773  0f848c000000         je 0x8ca805
// 008ca779  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008ca77c  6a00                 push 0
// 008ca77e  50                   push eax
// 008ca77f  e8ac34f8ff           call 0x84dc30
// 008ca784  8bc8                 mov ecx, eax
// 008ca786  e8f553f4ff           call 0x80fb80
// 008ca78b  8bf8                 mov edi, eax
// 008ca78d  85ff                 test edi, edi
// 008ca78f  7474                 je 0x8ca805
// 008ca791  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008ca795  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 008ca799  8bcf                 mov ecx, edi
// 008ca79b  e8d0b0c0ff           call 0x4d5870
// 008ca7a0  3bc3                 cmp eax, ebx
// 008ca7a2  7d09                 jge 0x8ca7ad
// 008ca7a4  8bcf                 mov ecx, edi
// 008ca7a6  e8c5b0c0ff           call 0x4d5870
// 008ca7ab  eb08                 jmp 0x8ca7b5
// 008ca7ad  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ca7b1  2b442430             sub eax, dword ptr [esp + 0x30]
// 008ca7b5  8bcf                 mov ecx, edi
// 008ca7b7  89442424             mov dword ptr [esp + 0x24], eax
// 008ca7bb  e8c034f8ff           call 0x84dc80
// 008ca7c0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ca7c4  8bd8                 mov ebx, eax
// 008ca7c6  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ca7ca  03c1                 add eax, ecx
// 008ca7cc  99                   cdq 
// 008ca7cd  2bc2                 sub eax, edx
// 008ca7cf  8bc8                 mov ecx, eax
// 008ca7d1  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ca7d5  99                   cdq 
// 008ca7d6  2bc2                 sub eax, edx
// 008ca7d8  8b542424             mov edx, dword ptr [esp + 0x24]
// 008ca7dc  d1f8                 sar eax, 1
// 008ca7de  52                   push edx
// 008ca7df  d1f9                 sar ecx, 1
// 008ca7e1  2bc8                 sub ecx, eax
// 008ca7e3  8b442430             mov eax, dword ptr [esp + 0x30]
// 008ca7e7  53                   push ebx
// 008ca7e8  51                   push ecx
// 008ca7e9  83c0fe               add eax, -2
// 008ca7ec  50                   push eax
// 008ca7ed  56                   push esi
// 008ca7ee  8bcf                 mov ecx, edi
// 008ca7f0  e89b68f4ff           call 0x811090
// 008ca7f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ca7f9  8d4c1805             lea ecx, [eax + ebx + 5]
// 008ca7fd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008ca801  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008ca805  6aff                 push -1
// 008ca807  6a00                 push 0
// 008ca809  8d542434             lea edx, [esp + 0x34]
// 008ca80d  52                   push edx
// 008ca80e  ff1558ca9800         call dword ptr [0x98ca58]
// 008ca814  85db                 test ebx, ebx
// 008ca816  7408                 je 0x8ca820
// 008ca818  8bbb94000000         mov edi, dword ptr [ebx + 0x94]
// 008ca81e  eb05                 jmp 0x8ca825
// 008ca820  bf24000000           mov edi, 0x24
// 008ca825  83bd0401000001       cmp dword ptr [ebp + 0x104], 1
// 008ca82c  7e06                 jle 0x8ca834
// 008ca82e  83e7df               and edi, 0xffffffdf
// 008ca831  83cf10               or edi, 0x10
// 008ca834  8b4500               mov eax, dword ptr [ebp]
// 008ca837  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008ca83d  8d4c2424             lea ecx, [esp + 0x24]
// 008ca841  51                   push ecx
// 008ca842  8bcd                 mov ecx, ebp
// 008ca844  ffd2                 call edx
// 008ca846  8bd8                 mov ebx, eax
// 008ca848  8b2e                 mov ebp, dword ptr [esi]
// 008ca84a  81cf00080000         or edi, 0x800
// 008ca850  57                   push edi
// 008ca851  8d442430             lea eax, [esp + 0x30]
// 008ca855  50                   push eax
// 008ca856  8bcb                 mov ecx, ebx
// 008ca858  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008ca860  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008ca866  50                   push eax
// 008ca867  8bcb                 mov ecx, ebx
// 008ca869  ff1580de9800         call dword ptr [0x98de80]
// 008ca86f  8b5570               mov edx, dword ptr [ebp + 0x70]
// 008ca872  50                   push eax
// 008ca873  8bce                 mov ecx, esi
// 008ca875  ffd2                 call edx
// 008ca877  8d4c2424             lea ecx, [esp + 0x24]
// 008ca87b  ff15c0de9800         call dword ptr [0x98dec0]
// 008ca881  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ca885  64890d00000000       mov dword ptr fs:[0], ecx
// 008ca88c  59                   pop ecx
// 008ca88d  5f                   pop edi
// 008ca88e  5e                   pop esi
// 008ca88f  5d                   pop ebp
// 008ca890  5b                   pop ebx
// 008ca891  83c40c               add esp, 0xc
// 008ca894  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemValue@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp