// roc 2009-12 008f5790  unit: CXTButtonThemeOffice2003  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5790
//
// 008f5790  83ec10               sub esp, 0x10
// 008f5793  53                   push ebx
// 008f5794  55                   push ebp
// 008f5795  56                   push esi
// 008f5796  8b742420             mov esi, dword ptr [esp + 0x20]
// 008f579a  8b4618               mov eax, dword ptr [esi + 0x18]
// 008f579d  57                   push edi
// 008f579e  50                   push eax
// 008f579f  8bd9                 mov ebx, ecx
// 008f57a1  e88a0c0300           call 0x926430
// 008f57a6  8d4e1c               lea ecx, [esi + 0x1c]
// 008f57a9  51                   push ecx
// 008f57aa  8d542414             lea edx, [esp + 0x14]
// 008f57ae  52                   push edx
// 008f57af  8bf8                 mov edi, eax
// 008f57b1  ff1564cc9800         call dword ptr [0x98cc64]
// 008f57b7  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f57bb  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 008f57c2  8b7610               mov esi, dword ptr [esi + 0x10]
// 008f57c5  8b687c               mov ebp, dword ptr [eax + 0x7c]
// 008f57c8  7513                 jne 0x8f57dd
// 008f57ca  ff1528cc9800         call dword ptr [0x98cc28]
// 008f57d0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f57d4  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 008f57d7  7404                 je 0x8f57dd
// 008f57d9  33c0                 xor eax, eax
// 008f57db  eb05                 jmp 0x8f57e2
// 008f57dd  b801000000           mov eax, 1
// 008f57e2  83e601               and esi, 1
// 008f57e5  85ed                 test ebp, ebp
// 008f57e7  754d                 jne 0x8f5836
// 008f57e9  85c0                 test eax, eax
// 008f57eb  7549                 jne 0x8f5836
// 008f57ed  85f6                 test esi, esi
// 008f57ef  7549                 jne 0x8f583a
// 008f57f1  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008f57f4  83f8ff               cmp eax, -1
// 008f57f7  7503                 jne 0x8f57fc
// 008f57f9  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008f57fc  50                   push eax
// 008f57fd  8d542414             lea edx, [esp + 0x14]
// 008f5801  52                   push edx
// 008f5802  8bcf                 mov ecx, edi
// 008f5804  e8f5edefff           call 0x7f45fe
// 008f5809  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 008f5810  0f841b010000         je 0x8f5931
// 008f5816  8b4358               mov eax, dword ptr [ebx + 0x58]
// 008f5819  83f8ff               cmp eax, -1
// 008f581c  7505                 jne 0x8f5823
// 008f581e  8b4b54               mov ecx, dword ptr [ebx + 0x54]
// 008f5821  eb02                 jmp 0x8f5825
// 008f5823  8bc8                 mov ecx, eax
// 008f5825  83f8ff               cmp eax, -1
// 008f5828  7503                 jne 0x8f582d
// 008f582a  8b4354               mov eax, dword ptr [ebx + 0x54]
// 008f582d  51                   push ecx
// 008f582e  50                   push eax
// 008f582f  8d442418             lea eax, [esp + 0x18]
// 008f5833  50                   push eax
// 008f5834  eb77                 jmp 0x8f58ad
// 008f5836  85f6                 test esi, esi
// 008f5838  7416                 je 0x8f5850
// 008f583a  e891a1f3ff           call 0x82f9d0
// 008f583f  6a00                 push 0
// 008f5841  6a00                 push 0
// 008f5843  0520010000           add eax, 0x120
// 008f5848  50                   push eax
// 008f5849  8d4c241c             lea ecx, [esp + 0x1c]
// 008f584d  51                   push ecx
// 008f584e  eb32                 jmp 0x8f5882
// 008f5850  85c0                 test eax, eax
// 008f5852  7416                 je 0x8f586a
// 008f5854  e877a1f3ff           call 0x82f9d0
// 008f5859  6a00                 push 0
// 008f585b  6a00                 push 0
// 008f585d  0540010000           add eax, 0x140
// 008f5862  50                   push eax
// 008f5863  8d54241c             lea edx, [esp + 0x1c]
// 008f5867  52                   push edx
// 008f5868  eb18                 jmp 0x8f5882
// 008f586a  85ed                 test ebp, ebp
// 008f586c  7421                 je 0x8f588f
// 008f586e  e85da1f3ff           call 0x82f9d0
// 008f5873  6a00                 push 0
// 008f5875  6a00                 push 0
// 008f5877  0500010000           add eax, 0x100
// 008f587c  50                   push eax
// 008f587d  8d44241c             lea eax, [esp + 0x1c]
// 008f5881  50                   push eax
// 008f5882  57                   push edi
// 008f5883  e8187af5ff           call 0x84d2a0
// 008f5888  8bc8                 mov ecx, eax
// 008f588a  e8317df5ff           call 0x84d5c0
// 008f588f  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 008f5892  83f8ff               cmp eax, -1
// 008f5895  7505                 jne 0x8f589c
// 008f5897  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 008f589a  eb02                 jmp 0x8f589e
// 008f589c  8bc8                 mov ecx, eax
// 008f589e  83f8ff               cmp eax, -1
// 008f58a1  7503                 jne 0x8f58a6
// 008f58a3  8b4348               mov eax, dword ptr [ebx + 0x48]
// 008f58a6  51                   push ecx
// 008f58a7  50                   push eax
// 008f58a8  8d4c2418             lea ecx, [esp + 0x18]
// 008f58ac  51                   push ecx
// 008f58ad  8bcf                 mov ecx, edi
// 008f58af  e844edefff           call 0x7f45f8
// 008f58b4  83bb8000000000       cmp dword ptr [ebx + 0x80], 0
// 008f58bb  7474                 je 0x8f5931
// 008f58bd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f58c1  e83afcfeff           call 0x8e5500
// 008f58c6  3c01                 cmp al, 1
// 008f58c8  7567                 jne 0x8f5931
// 008f58ca  e801a1f3ff           call 0x82f9d0
// 008f58cf  6a0d                 push 0xd
// 008f58d1  8bc8                 mov ecx, eax
// 008f58d3  e82898f3ff           call 0x82f100
// 008f58d8  8bf0                 mov esi, eax
// 008f58da  e8f1a0f3ff           call 0x82f9d0
// 008f58df  6a0d                 push 0xd
// 008f58e1  8bc8                 mov ecx, eax
// 008f58e3  e81898f3ff           call 0x82f100
// 008f58e8  56                   push esi
// 008f58e9  50                   push eax
// 008f58ea  8d542418             lea edx, [esp + 0x18]
// 008f58ee  52                   push edx
// 008f58ef  8bcf                 mov ecx, edi
// 008f58f1  e802edefff           call 0x7f45f8
// 008f58f6  6aff                 push -1
// 008f58f8  6aff                 push -1
// 008f58fa  8d442418             lea eax, [esp + 0x18]
// 008f58fe  50                   push eax
// 008f58ff  ff1558ca9800         call dword ptr [0x98ca58]
// 008f5905  e8c6a0f3ff           call 0x82f9d0
// 008f590a  6a0d                 push 0xd
// 008f590c  8bc8                 mov ecx, eax
// 008f590e  e8ed97f3ff           call 0x82f100
// 008f5913  8bf0                 mov esi, eax
// 008f5915  e8b6a0f3ff           call 0x82f9d0
// 008f591a  6a0d                 push 0xd
// 008f591c  8bc8                 mov ecx, eax
// 008f591e  e8dd97f3ff           call 0x82f100
// 008f5923  56                   push esi
// 008f5924  50                   push eax
// 008f5925  8d4c2418             lea ecx, [esp + 0x18]
// 008f5929  51                   push ecx
// 008f592a  8bcf                 mov ecx, edi
// 008f592c  e8c7ecefff           call 0x7f45f8
// 008f5931  5f                   pop edi
// 008f5932  5e                   pop esi
// 008f5933  5d                   pop ebp
// 008f5934  b801000000           mov eax, 1
// 008f5939  5b                   pop ebx
// 008f593a  83c410               add esp, 0x10
// 008f593d  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
