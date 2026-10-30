// roc 2010-06 0085bdc0  unit: CXTRegistryManager  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085bdc0
//
// 0085bdc0  6aff                 push -1
// 0085bdc2  6881879b00           push 0x9b8781
// 0085bdc7  64a100000000         mov eax, dword ptr fs:[0]
// 0085bdcd  50                   push eax
// 0085bdce  51                   push ecx
// 0085bdcf  53                   push ebx
// 0085bdd0  55                   push ebp
// 0085bdd1  56                   push esi
// 0085bdd2  57                   push edi
// 0085bdd3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085bdd8  33c4                 xor eax, esp
// 0085bdda  50                   push eax
// 0085bddb  8d442418             lea eax, [esp + 0x18]
// 0085bddf  64a300000000         mov dword ptr fs:[0], eax
// 0085bde5  8bf1                 mov esi, ecx
// 0085bde7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0085bdeb  85ff                 test edi, edi
// 0085bded  0f84cd000000         je 0x85bec0
// 0085bdf3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0085bdf7  85db                 test ebx, ebx
// 0085bdf9  0f84c1000000         je 0x85bec0
// 0085bdff  c70700000000         mov dword ptr [edi], 0
// 0085be05  b94c62c200           mov ecx, 0xc2624c
// 0085be0a  c70300000000         mov dword ptr [ebx], 0
// 0085be10  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0085be16  84c0                 test al, al
// 0085be18  0f84c8000000         je 0x85bee6
// 0085be1e  8bce                 mov ecx, esi
// 0085be20  e89bfaffff           call 0x85b8c0
// 0085be25  85c0                 test eax, eax
// 0085be27  0f8493000000         je 0x85bec0
// 0085be2d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085be31  8b06                 mov eax, dword ptr [esi]
// 0085be33  8b5008               mov edx, dword ptr [eax + 8]
// 0085be36  6819000200           push 0x20019
// 0085be3b  51                   push ecx
// 0085be3c  8bce                 mov ecx, esi
// 0085be3e  ffd2                 call edx
// 0085be40  8be8                 mov ebp, eax
// 0085be42  896c2428             mov dword ptr [esp + 0x28], ebp
// 0085be46  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0085be4e  85ed                 test ebp, ebp
// 0085be50  746e                 je 0x85bec0
// 0085be52  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0085be56  8d442430             lea eax, [esp + 0x30]
// 0085be5a  50                   push eax
// 0085be5b  6a00                 push 0
// 0085be5d  8d4c241c             lea ecx, [esp + 0x1c]
// 0085be61  51                   push ecx
// 0085be62  6a00                 push 0
// 0085be64  53                   push ebx
// 0085be65  55                   push ebp
// 0085be66  ff1528a09e00         call dword ptr [0x9ea028]
// 0085be6c  894610               mov dword ptr [esi + 0x10], eax
// 0085be6f  85c0                 test eax, eax
// 0085be71  7546                 jne 0x85beb9
// 0085be73  8b442430             mov eax, dword ptr [esp + 0x30]
// 0085be77  8b542434             mov edx, dword ptr [esp + 0x34]
// 0085be7b  50                   push eax
// 0085be7c  8902                 mov dword ptr [edx], eax
// 0085be7e  e8ffbdf4ff           call 0x7a7c82
// 0085be83  83c404               add esp, 4
// 0085be86  8d4c2430             lea ecx, [esp + 0x30]
// 0085be8a  51                   push ecx
// 0085be8b  50                   push eax
// 0085be8c  8d54241c             lea edx, [esp + 0x1c]
// 0085be90  52                   push edx
// 0085be91  6a00                 push 0
// 0085be93  53                   push ebx
// 0085be94  55                   push ebp
// 0085be95  8907                 mov dword ptr [edi], eax
// 0085be97  ff1528a09e00         call dword ptr [0x9ea028]
// 0085be9d  894610               mov dword ptr [esi + 0x10], eax
// 0085bea0  85c0                 test eax, eax
// 0085bea2  7434                 je 0x85bed8
// 0085bea4  8b07                 mov eax, dword ptr [edi]
// 0085bea6  85c0                 test eax, eax
// 0085bea8  740f                 je 0x85beb9
// 0085beaa  50                   push eax
// 0085beab  e896bdf4ff           call 0x7a7c46
// 0085beb0  83c404               add esp, 4
// 0085beb3  c70700000000         mov dword ptr [edi], 0
// 0085beb9  55                   push ebp
// 0085beba  ff1510a09e00         call dword ptr [0x9ea010]
// 0085bec0  33c0                 xor eax, eax
// 0085bec2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bec6  64890d00000000       mov dword ptr fs:[0], ecx
// 0085becd  59                   pop ecx
// 0085bece  5f                   pop edi
// 0085becf  5e                   pop esi
// 0085bed0  5d                   pop ebp
// 0085bed1  5b                   pop ebx
// 0085bed2  83c410               add esp, 0x10
// 0085bed5  c21000               ret 0x10
// 0085bed8  55                   push ebp
// 0085bed9  ff1510a09e00         call dword ptr [0x9ea010]
// 0085bedf  b801000000           mov eax, 1
// 0085bee4  ebdc                 jmp 0x85bec2
// 0085bee6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085beea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085beee  6a00                 push 0
// 0085bef0  50                   push eax
// 0085bef1  51                   push ecx
// 0085bef2  8d542440             lea edx, [esp + 0x40]
// 0085bef6  52                   push edx
// 0085bef7  8bce                 mov ecx, esi
// 0085bef9  e812fcffff           call 0x85bb10
// 0085befe  8d4c2434             lea ecx, [esp + 0x34]
// 0085bf02  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0085bf0a  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0085bf10  8d4c2434             lea ecx, [esp + 0x34]
// 0085bf14  84c0                 test al, al
// 0085bf16  7408                 je 0x85bf20
// 0085bf18  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085bf1e  eba0                 jmp 0x85bec0
// 0085bf20  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085bf26  8be8                 mov ebp, eax
// 0085bf28  99                   cdq 
// 0085bf29  2bc2                 sub eax, edx
// 0085bf2b  d1f8                 sar eax, 1
// 0085bf2d  50                   push eax
// 0085bf2e  8903                 mov dword ptr [ebx], eax
// 0085bf30  e84dbdf4ff           call 0x7a7c82
// 0085bf35  83c404               add esp, 4
// 0085bf38  33f6                 xor esi, esi
// 0085bf3a  8907                 mov dword ptr [edi], eax
// 0085bf3c  85ed                 test ebp, ebp
// 0085bf3e  7e35                 jle 0x85bf75
// 0085bf40  8d4601               lea eax, [esi + 1]
// 0085bf43  50                   push eax
// 0085bf44  8d4c2438             lea ecx, [esp + 0x38]
// 0085bf48  ff1558c59e00         call dword ptr [0x9ec558]
// 0085bf4e  8ad8                 mov bl, al
// 0085bf50  fecb                 dec bl
// 0085bf52  c0e304               shl bl, 4
// 0085bf55  56                   push esi
// 0085bf56  8d4c2438             lea ecx, [esp + 0x38]
// 0085bf5a  80eb41               sub bl, 0x41
// 0085bf5d  ff1558c59e00         call dword ptr [0x9ec558]
// 0085bf63  8b17                 mov edx, dword ptr [edi]
// 0085bf65  8bce                 mov ecx, esi
// 0085bf67  02c3                 add al, bl
// 0085bf69  d1e9                 shr ecx, 1
// 0085bf6b  83c602               add esi, 2
// 0085bf6e  3bf5                 cmp esi, ebp
// 0085bf70  880411               mov byte ptr [ecx + edx], al
// 0085bf73  7ccb                 jl 0x85bf40
// 0085bf75  8d4c2434             lea ecx, [esp + 0x34]
// 0085bf79  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085bf7f  b801000000           mov eax, 1
// 0085bf84  e939ffffff           jmp 0x85bec2
// copied from an identical function in another client (function ?GetProfileBinary@CXTRegistryManager@@QAEHPBD0PAPAEPAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTRegistryManager.cpp