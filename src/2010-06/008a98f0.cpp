// roc 2010-06 008a98f0  unit: CXTButtonThemeOffice2003  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a98f0
//
// 008a98f0  83ec10               sub esp, 0x10
// 008a98f3  53                   push ebx
// 008a98f4  55                   push ebp
// 008a98f5  56                   push esi
// 008a98f6  8b742420             mov esi, dword ptr [esp + 0x20]
// 008a98fa  8b4618               mov eax, dword ptr [esi + 0x18]
// 008a98fd  57                   push edi
// 008a98fe  50                   push eax
// 008a98ff  8bd9                 mov ebx, ecx
// 008a9901  e866340d00           call 0x97cd6c
// 008a9906  8d4e1c               lea ecx, [esi + 0x1c]
// 008a9909  51                   push ecx
// 008a990a  8d542414             lea edx, [esp + 0x14]
// 008a990e  52                   push edx
// 008a990f  8bf8                 mov edi, eax
// 008a9911  ff1548bc9e00         call dword ptr [0x9ebc48]
// 008a9917  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a991b  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 008a9922  8b7610               mov esi, dword ptr [esi + 0x10]
// 008a9925  8b687c               mov ebp, dword ptr [eax + 0x7c]
// 008a9928  7513                 jne 0x8a993d
// 008a992a  ff1584bc9e00         call dword ptr [0x9ebc84]
// 008a9930  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a9934  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 008a9937  7404                 je 0x8a993d
// 008a9939  33c0                 xor eax, eax
// 008a993b  eb05                 jmp 0x8a9942
// 008a993d  b801000000           mov eax, 1
// 008a9942  83e601               and esi, 1
// 008a9945  85ed                 test ebp, ebp
// 008a9947  754d                 jne 0x8a9996
// 008a9949  85c0                 test eax, eax
// 008a994b  7549                 jne 0x8a9996
// 008a994d  85f6                 test esi, esi
// 008a994f  7549                 jne 0x8a999a
// 008a9951  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008a9954  83f8ff               cmp eax, -1
// 008a9957  7503                 jne 0x8a995c
// 008a9959  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008a995c  50                   push eax
// 008a995d  8d542414             lea edx, [esp + 0x14]
// 008a9961  52                   push edx
// 008a9962  8bcf                 mov ecx, edi
// 008a9964  e8d5edefff           call 0x7a873e
// 008a9969  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 008a9970  0f841b010000         je 0x8a9a91
// 008a9976  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008a9979  83f8ff               cmp eax, -1
// 008a997c  7505                 jne 0x8a9983
// 008a997e  8b4b54               mov ecx, dword ptr [ebx + 0x54]
// 008a9981  eb02                 jmp 0x8a9985
// 008a9983  8bc8                 mov ecx, eax
// 008a9985  83f8ff               cmp eax, -1
// 008a9988  7503                 jne 0x8a998d
// 008a998a  8b4354               mov eax, dword ptr [ebx + 0x54]
// 008a998d  51                   push ecx
// 008a998e  50                   push eax
// 008a998f  8d442418             lea eax, [esp + 0x18]
// 008a9993  50                   push eax
// 008a9994  eb77                 jmp 0x8a9a0d
// 008a9996  85f6                 test esi, esi
// 008a9998  7416                 je 0x8a99b0
// 008a999a  e881a1f3ff           call 0x7e3b20
// 008a999f  6a00                 push 0
// 008a99a1  6a00                 push 0
// 008a99a3  0520010000           add eax, 0x120
// 008a99a8  50                   push eax
// 008a99a9  8d4c241c             lea ecx, [esp + 0x1c]
// 008a99ad  51                   push ecx
// 008a99ae  eb32                 jmp 0x8a99e2
// 008a99b0  85c0                 test eax, eax
// 008a99b2  7416                 je 0x8a99ca
// 008a99b4  e867a1f3ff           call 0x7e3b20
// 008a99b9  6a00                 push 0
// 008a99bb  6a00                 push 0
// 008a99bd  0540010000           add eax, 0x140
// 008a99c2  50                   push eax
// 008a99c3  8d54241c             lea edx, [esp + 0x1c]
// 008a99c7  52                   push edx
// 008a99c8  eb18                 jmp 0x8a99e2
// 008a99ca  85ed                 test ebp, ebp
// 008a99cc  7421                 je 0x8a99ef
// 008a99ce  e84da1f3ff           call 0x7e3b20
// 008a99d3  6a00                 push 0
// 008a99d5  6a00                 push 0
// 008a99d7  0500010000           add eax, 0x100
// 008a99dc  50                   push eax
// 008a99dd  8d44241c             lea eax, [esp + 0x1c]
// 008a99e1  50                   push eax
// 008a99e2  57                   push edi
// 008a99e3  e81879f5ff           call 0x801300
// 008a99e8  8bc8                 mov ecx, eax
// 008a99ea  e8317cf5ff           call 0x801620
// 008a99ef  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 008a99f2  83f8ff               cmp eax, -1
// 008a99f5  7505                 jne 0x8a99fc
// 008a99f7  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 008a99fa  eb02                 jmp 0x8a99fe
// 008a99fc  8bc8                 mov ecx, eax
// 008a99fe  83f8ff               cmp eax, -1
// 008a9a01  7503                 jne 0x8a9a06
// 008a9a03  8b4348               mov eax, dword ptr [ebx + 0x48]
// 008a9a06  51                   push ecx
// 008a9a07  50                   push eax
// 008a9a08  8d4c2418             lea ecx, [esp + 0x18]
// 008a9a0c  51                   push ecx
// 008a9a0d  8bcf                 mov ecx, edi
// 008a9a0f  e824edefff           call 0x7a8738
// 008a9a14  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 008a9a1b  7474                 je 0x8a9a91
// 008a9a1d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a9a21  e8eafdfeff           call 0x899810
// 008a9a26  3c01                 cmp al, 1
// 008a9a28  7567                 jne 0x8a9a91
// 008a9a2a  e8f1a0f3ff           call 0x7e3b20
// 008a9a2f  6a0d                 push 0xd
// 008a9a31  8bc8                 mov ecx, eax
// 008a9a33  e87898f3ff           call 0x7e32b0
// 008a9a38  8bf0                 mov esi, eax
// 008a9a3a  e8e1a0f3ff           call 0x7e3b20
// 008a9a3f  6a0d                 push 0xd
// 008a9a41  8bc8                 mov ecx, eax
// 008a9a43  e86898f3ff           call 0x7e32b0
// 008a9a48  56                   push esi
// 008a9a49  50                   push eax
// 008a9a4a  8d542418             lea edx, [esp + 0x18]
// 008a9a4e  52                   push edx
// 008a9a4f  8bcf                 mov ecx, edi
// 008a9a51  e8e2ecefff           call 0x7a8738
// 008a9a56  6aff                 push -1
// 008a9a58  6aff                 push -1
// 008a9a5a  8d442418             lea eax, [esp + 0x18]
// 008a9a5e  50                   push eax
// 008a9a5f  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008a9a65  e8b6a0f3ff           call 0x7e3b20
// 008a9a6a  6a0d                 push 0xd
// 008a9a6c  8bc8                 mov ecx, eax
// 008a9a6e  e83d98f3ff           call 0x7e32b0
// 008a9a73  8bf0                 mov esi, eax
// 008a9a75  e8a6a0f3ff           call 0x7e3b20
// 008a9a7a  6a0d                 push 0xd
// 008a9a7c  8bc8                 mov ecx, eax
// 008a9a7e  e82d98f3ff           call 0x7e32b0
// 008a9a83  56                   push esi
// 008a9a84  50                   push eax
// 008a9a85  8d4c2418             lea ecx, [esp + 0x18]
// 008a9a89  51                   push ecx
// 008a9a8a  8bcf                 mov ecx, edi
// 008a9a8c  e8a7ecefff           call 0x7a8738
// 008a9a91  5f                   pop edi
// 008a9a92  5e                   pop esi
// 008a9a93  5d                   pop ebp
// 008a9a94  b801000000           mov eax, 1
// 008a9a99  5b                   pop ebx
// 008a9a9a  83c410               add esp, 0x10
// 008a9a9d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
