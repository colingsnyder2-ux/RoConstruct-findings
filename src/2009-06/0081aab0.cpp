// roc 2009-06 0081aab0  unit: CXTButtonThemeOffice2003  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081aab0
//
// 0081aab0  83ec10               sub esp, 0x10
// 0081aab3  53                   push ebx
// 0081aab4  55                   push ebp
// 0081aab5  56                   push esi
// 0081aab6  8b742420             mov esi, dword ptr [esp + 0x20]
// 0081aaba  8b4618               mov eax, dword ptr [esi + 0x18]
// 0081aabd  57                   push edi
// 0081aabe  50                   push eax
// 0081aabf  8bd9                 mov ebx, ecx
// 0081aac1  e846140300           call 0x84bf0c
// 0081aac6  8d4e1c               lea ecx, [esi + 0x1c]
// 0081aac9  51                   push ecx
// 0081aaca  8d542414             lea edx, [esp + 0x14]
// 0081aace  52                   push edx
// 0081aacf  8bf8                 mov edi, eax
// 0081aad1  ff1500ee8900         call dword ptr [0x89ee00]
// 0081aad7  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081aadb  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 0081aae2  8b7610               mov esi, dword ptr [esi + 0x10]
// 0081aae5  8b687c               mov ebp, dword ptr [eax + 0x7c]
// 0081aae8  7513                 jne 0x81aafd
// 0081aaea  ff153cee8900         call dword ptr [0x89ee3c]
// 0081aaf0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081aaf4  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 0081aaf7  7404                 je 0x81aafd
// 0081aaf9  33c0                 xor eax, eax
// 0081aafb  eb05                 jmp 0x81ab02
// 0081aafd  b801000000           mov eax, 1
// 0081ab02  83e601               and esi, 1
// 0081ab05  85ed                 test ebp, ebp
// 0081ab07  754d                 jne 0x81ab56
// 0081ab09  85c0                 test eax, eax
// 0081ab0b  7549                 jne 0x81ab56
// 0081ab0d  85f6                 test esi, esi
// 0081ab0f  7549                 jne 0x81ab5a
// 0081ab11  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0081ab14  83f8ff               cmp eax, -1
// 0081ab17  7503                 jne 0x81ab1c
// 0081ab19  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0081ab1c  50                   push eax
// 0081ab1d  8d542414             lea edx, [esp + 0x14]
// 0081ab21  52                   push edx
// 0081ab22  8bcf                 mov ecx, edi
// 0081ab24  e8a7ecefff           call 0x7197d0
// 0081ab29  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 0081ab30  0f841b010000         je 0x81ac51
// 0081ab36  8b4358               mov eax, dword ptr [ebx + 0x58]
// 0081ab39  83f8ff               cmp eax, -1
// 0081ab3c  7505                 jne 0x81ab43
// 0081ab3e  8b4b54               mov ecx, dword ptr [ebx + 0x54]
// 0081ab41  eb02                 jmp 0x81ab45
// 0081ab43  8bc8                 mov ecx, eax
// 0081ab45  83f8ff               cmp eax, -1
// 0081ab48  7503                 jne 0x81ab4d
// 0081ab4a  8b4354               mov eax, dword ptr [ebx + 0x54]
// 0081ab4d  51                   push ecx
// 0081ab4e  50                   push eax
// 0081ab4f  8d442418             lea eax, [esp + 0x18]
// 0081ab53  50                   push eax
// 0081ab54  eb77                 jmp 0x81abcd
// 0081ab56  85f6                 test esi, esi
// 0081ab58  7416                 je 0x81ab70
// 0081ab5a  e8c19ff3ff           call 0x754b20
// 0081ab5f  6a00                 push 0
// 0081ab61  6a00                 push 0
// 0081ab63  0520010000           add eax, 0x120
// 0081ab68  50                   push eax
// 0081ab69  8d4c241c             lea ecx, [esp + 0x1c]
// 0081ab6d  51                   push ecx
// 0081ab6e  eb32                 jmp 0x81aba2
// 0081ab70  85c0                 test eax, eax
// 0081ab72  7416                 je 0x81ab8a
// 0081ab74  e8a79ff3ff           call 0x754b20
// 0081ab79  6a00                 push 0
// 0081ab7b  6a00                 push 0
// 0081ab7d  0540010000           add eax, 0x140
// 0081ab82  50                   push eax
// 0081ab83  8d54241c             lea edx, [esp + 0x1c]
// 0081ab87  52                   push edx
// 0081ab88  eb18                 jmp 0x81aba2
// 0081ab8a  85ed                 test ebp, ebp
// 0081ab8c  7421                 je 0x81abaf
// 0081ab8e  e88d9ff3ff           call 0x754b20
// 0081ab93  6a00                 push 0
// 0081ab95  6a00                 push 0
// 0081ab97  0500010000           add eax, 0x100
// 0081ab9c  50                   push eax
// 0081ab9d  8d44241c             lea eax, [esp + 0x1c]
// 0081aba1  50                   push eax
// 0081aba2  57                   push edi
// 0081aba3  e8c879f5ff           call 0x772570
// 0081aba8  8bc8                 mov ecx, eax
// 0081abaa  e8e17cf5ff           call 0x772890
// 0081abaf  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 0081abb2  83f8ff               cmp eax, -1
// 0081abb5  7505                 jne 0x81abbc
// 0081abb7  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 0081abba  eb02                 jmp 0x81abbe
// 0081abbc  8bc8                 mov ecx, eax
// 0081abbe  83f8ff               cmp eax, -1
// 0081abc1  7503                 jne 0x81abc6
// 0081abc3  8b4348               mov eax, dword ptr [ebx + 0x48]
// 0081abc6  51                   push ecx
// 0081abc7  50                   push eax
// 0081abc8  8d4c2418             lea ecx, [esp + 0x18]
// 0081abcc  51                   push ecx
// 0081abcd  8bcf                 mov ecx, edi
// 0081abcf  e8f6ebefff           call 0x7197ca
// 0081abd4  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 0081abdb  7474                 je 0x81ac51
// 0081abdd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081abe1  e87afefeff           call 0x80aa60
// 0081abe6  3c01                 cmp al, 1
// 0081abe8  7567                 jne 0x81ac51
// 0081abea  e8319ff3ff           call 0x754b20
// 0081abef  6a0d                 push 0xd
// 0081abf1  8bc8                 mov ecx, eax
// 0081abf3  e8a896f3ff           call 0x7542a0
// 0081abf8  8bf0                 mov esi, eax
// 0081abfa  e8219ff3ff           call 0x754b20
// 0081abff  6a0d                 push 0xd
// 0081ac01  8bc8                 mov ecx, eax
// 0081ac03  e89896f3ff           call 0x7542a0
// 0081ac08  56                   push esi
// 0081ac09  50                   push eax
// 0081ac0a  8d542418             lea edx, [esp + 0x18]
// 0081ac0e  52                   push edx
// 0081ac0f  8bcf                 mov ecx, edi
// 0081ac11  e8b4ebefff           call 0x7197ca
// 0081ac16  6aff                 push -1
// 0081ac18  6aff                 push -1
// 0081ac1a  8d442418             lea eax, [esp + 0x18]
// 0081ac1e  50                   push eax
// 0081ac1f  ff15bced8900         call dword ptr [0x89edbc]
// 0081ac25  e8f69ef3ff           call 0x754b20
// 0081ac2a  6a0d                 push 0xd
// 0081ac2c  8bc8                 mov ecx, eax
// 0081ac2e  e86d96f3ff           call 0x7542a0
// 0081ac33  8bf0                 mov esi, eax
// 0081ac35  e8e69ef3ff           call 0x754b20
// 0081ac3a  6a0d                 push 0xd
// 0081ac3c  8bc8                 mov ecx, eax
// 0081ac3e  e85d96f3ff           call 0x7542a0
// 0081ac43  56                   push esi
// 0081ac44  50                   push eax
// 0081ac45  8d4c2418             lea ecx, [esp + 0x18]
// 0081ac49  51                   push ecx
// 0081ac4a  8bcf                 mov ecx, edi
// 0081ac4c  e879ebefff           call 0x7197ca
// 0081ac51  5f                   pop edi
// 0081ac52  5e                   pop esi
// 0081ac53  5d                   pop ebp
// 0081ac54  b801000000           mov eax, 1
// 0081ac59  5b                   pop ebx
// 0081ac5a  83c410               add esp, 0x10
// 0081ac5d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
