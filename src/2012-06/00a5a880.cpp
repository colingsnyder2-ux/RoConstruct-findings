// roc 2012-06 00a5a880  unit: CXTPPropertyGridPaintManager  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5a880
//
// 00a5a880  6aff                 push -1
// 00a5a882  68c91dae00           push 0xae1dc9
// 00a5a887  64a100000000         mov eax, dword ptr fs:[0]
// 00a5a88d  50                   push eax
// 00a5a88e  53                   push ebx
// 00a5a88f  55                   push ebp
// 00a5a890  56                   push esi
// 00a5a891  57                   push edi
// 00a5a892  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5a897  33c4                 xor eax, esp
// 00a5a899  50                   push eax
// 00a5a89a  8d442414             lea eax, [esp + 0x14]
// 00a5a89e  64a300000000         mov dword ptr fs:[0], eax
// 00a5a8a4  8bf9                 mov edi, ecx
// 00a5a8a6  8b07                 mov eax, dword ptr [edi]
// 00a5a8a8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a5a8ac  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a5a8b0  8b5004               mov edx, dword ptr [eax + 4]
// 00a5a8b3  8b1e                 mov ebx, dword ptr [esi]
// 00a5a8b5  6a01                 push 1
// 00a5a8b7  55                   push ebp
// 00a5a8b8  ffd2                 call edx
// 00a5a8ba  50                   push eax
// 00a5a8bb  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00a5a8be  8bce                 mov ecx, esi
// 00a5a8c0  ffd0                 call eax
// 00a5a8c2  8b17                 mov edx, dword ptr [edi]
// 00a5a8c4  8b4208               mov eax, dword ptr [edx + 8]
// 00a5a8c7  6a01                 push 1
// 00a5a8c9  55                   push ebp
// 00a5a8ca  8bcf                 mov ecx, edi
// 00a5a8cc  ffd0                 call eax
// 00a5a8ce  50                   push eax
// 00a5a8cf  8d4c2430             lea ecx, [esp + 0x30]
// 00a5a8d3  51                   push ecx
// 00a5a8d4  8bce                 mov ecx, esi
// 00a5a8d6  e8d185f2ff           call 0x982eac
// 00a5a8db  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5a8df  8b5500               mov edx, dword ptr [ebp]
// 00a5a8e2  8b5268               mov edx, dword ptr [edx + 0x68]
// 00a5a8e5  83c104               add ecx, 4
// 00a5a8e8  83ec10               sub esp, 0x10
// 00a5a8eb  8bc4                 mov eax, esp
// 00a5a8ed  8908                 mov dword ptr [eax], ecx
// 00a5a8ef  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a5a8f3  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5a8f7  894804               mov dword ptr [eax + 4], ecx
// 00a5a8fa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a5a8fe  894808               mov dword ptr [eax + 8], ecx
// 00a5a901  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5a905  89480c               mov dword ptr [eax + 0xc], ecx
// 00a5a908  56                   push esi
// 00a5a909  8bcd                 mov ecx, ebp
// 00a5a90b  ffd2                 call edx
// 00a5a90d  85c0                 test eax, eax
// 00a5a90f  0f852c010000         jne 0xa5aa41
// 00a5a915  50                   push eax
// 00a5a916  6a01                 push 1
// 00a5a918  8bcd                 mov ecx, ebp
// 00a5a91a  e87173f9ff           call 0x9f1c90
// 00a5a91f  8bd8                 mov ebx, eax
// 00a5a921  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a5a925  85db                 test ebx, ebx
// 00a5a927  0f8498000000         je 0xa5a9c5
// 00a5a92d  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00a5a930  83f8ff               cmp eax, -1
// 00a5a933  0f848c000000         je 0xa5a9c5
// 00a5a939  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00a5a93c  6a00                 push 0
// 00a5a93e  50                   push eax
// 00a5a93f  e86c6ff8ff           call 0x9e18b0
// 00a5a944  8bc8                 mov ecx, eax
// 00a5a946  e87537f4ff           call 0x99e0c0
// 00a5a94b  8bf8                 mov edi, eax
// 00a5a94d  85ff                 test edi, edi
// 00a5a94f  7474                 je 0xa5a9c5
// 00a5a951  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00a5a955  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 00a5a959  8bcf                 mov ecx, edi
// 00a5a95b  e8c0d0f3ff           call 0x997a20
// 00a5a960  3bc3                 cmp eax, ebx
// 00a5a962  7d09                 jge 0xa5a96d
// 00a5a964  8bcf                 mov ecx, edi
// 00a5a966  e8b5d0f3ff           call 0x997a20
// 00a5a96b  eb08                 jmp 0xa5a975
// 00a5a96d  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a5a971  2b442430             sub eax, dword ptr [esp + 0x30]
// 00a5a975  8bcf                 mov ecx, edi
// 00a5a977  89442424             mov dword ptr [esp + 0x24], eax
// 00a5a97b  e8e00cfdff           call 0xa2b660
// 00a5a980  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5a984  8bd8                 mov ebx, eax
// 00a5a986  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5a98a  03c1                 add eax, ecx
// 00a5a98c  99                   cdq 
// 00a5a98d  2bc2                 sub eax, edx
// 00a5a98f  8bc8                 mov ecx, eax
// 00a5a991  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5a995  99                   cdq 
// 00a5a996  2bc2                 sub eax, edx
// 00a5a998  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a5a99c  d1f8                 sar eax, 1
// 00a5a99e  52                   push edx
// 00a5a99f  d1f9                 sar ecx, 1
// 00a5a9a1  2bc8                 sub ecx, eax
// 00a5a9a3  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5a9a7  53                   push ebx
// 00a5a9a8  51                   push ecx
// 00a5a9a9  83c0fe               add eax, -2
// 00a5a9ac  50                   push eax
// 00a5a9ad  56                   push esi
// 00a5a9ae  8bcf                 mov ecx, edi
// 00a5a9b0  e8cb48f4ff           call 0x99f280
// 00a5a9b5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5a9b9  8d4c1805             lea ecx, [eax + ebx + 5]
// 00a5a9bd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a5a9c1  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a5a9c5  6aff                 push -1
// 00a5a9c7  6a00                 push 0
// 00a5a9c9  8d542434             lea edx, [esp + 0x34]
// 00a5a9cd  52                   push edx
// 00a5a9ce  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a5a9d4  85db                 test ebx, ebx
// 00a5a9d6  7408                 je 0xa5a9e0
// 00a5a9d8  8bbb94000000         mov edi, dword ptr [ebx + 0x94]
// 00a5a9de  eb05                 jmp 0xa5a9e5
// 00a5a9e0  bf24000000           mov edi, 0x24
// 00a5a9e5  83bd0401000001       cmp dword ptr [ebp + 0x104], 1
// 00a5a9ec  7e06                 jle 0xa5a9f4
// 00a5a9ee  83e7df               and edi, 0xffffffdf
// 00a5a9f1  83cf10               or edi, 0x10
// 00a5a9f4  8b4500               mov eax, dword ptr [ebp]
// 00a5a9f7  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00a5a9fd  8d4c2424             lea ecx, [esp + 0x24]
// 00a5aa01  51                   push ecx
// 00a5aa02  8bcd                 mov ecx, ebp
// 00a5aa04  ffd2                 call edx
// 00a5aa06  8bd8                 mov ebx, eax
// 00a5aa08  8b2e                 mov ebp, dword ptr [esi]
// 00a5aa0a  81cf00080000         or edi, 0x800
// 00a5aa10  57                   push edi
// 00a5aa11  8d442430             lea eax, [esp + 0x30]
// 00a5aa15  50                   push eax
// 00a5aa16  8bcb                 mov ecx, ebx
// 00a5aa18  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00a5aa20  ff155846b200         call dword ptr [0xb24658]
// 00a5aa26  50                   push eax
// 00a5aa27  8bcb                 mov ecx, ebx
// 00a5aa29  ff159847b200         call dword ptr [0xb24798]
// 00a5aa2f  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00a5aa32  50                   push eax
// 00a5aa33  8bce                 mov ecx, esi
// 00a5aa35  ffd2                 call edx
// 00a5aa37  8d4c2424             lea ecx, [esp + 0x24]
// 00a5aa3b  ff15d047b200         call dword ptr [0xb247d0]
// 00a5aa41  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5aa45  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5aa4c  59                   pop ecx
// 00a5aa4d  5f                   pop edi
// 00a5aa4e  5e                   pop esi
// 00a5aa4f  5d                   pop ebp
// 00a5aa50  5b                   pop ebx
// 00a5aa51  83c40c               add esp, 0xc
// 00a5aa54  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawItemValue@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp