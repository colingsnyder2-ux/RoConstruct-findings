// roc 2009-06 0081a900  unit: CXTButtonThemeOfficeXP  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081a900
//
// 0081a900  83ec10               sub esp, 0x10
// 0081a903  53                   push ebx
// 0081a904  55                   push ebp
// 0081a905  56                   push esi
// 0081a906  57                   push edi
// 0081a907  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0081a90b  8b4718               mov eax, dword ptr [edi + 0x18]
// 0081a90e  50                   push eax
// 0081a90f  8bf1                 mov esi, ecx
// 0081a911  e8f6150300           call 0x84bf0c
// 0081a916  8d4f1c               lea ecx, [edi + 0x1c]
// 0081a919  51                   push ecx
// 0081a91a  8d542414             lea edx, [esp + 0x14]
// 0081a91e  52                   push edx
// 0081a91f  8bd8                 mov ebx, eax
// 0081a921  ff1500ee8900         call dword ptr [0x89ee00]
// 0081a927  8b7f10               mov edi, dword ptr [edi + 0x10]
// 0081a92a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081a92e  8b2d3cee8900         mov ebp, dword ptr [0x89ee3c]
// 0081a934  83e701               and edi, 1
// 0081a937  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 0081a93e  7556                 jne 0x81a996
// 0081a940  ffd5                 call ebp
// 0081a942  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081a946  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 0081a949  744b                 je 0x81a996
// 0081a94b  85ff                 test edi, edi
// 0081a94d  754b                 jne 0x81a99a
// 0081a94f  8bd1                 mov edx, ecx
// 0081a951  397a7c               cmp dword ptr [edx + 0x7c], edi
// 0081a954  754c                 jne 0x81a9a2
// 0081a956  8b4628               mov eax, dword ptr [esi + 0x28]
// 0081a959  83f8ff               cmp eax, -1
// 0081a95c  7503                 jne 0x81a961
// 0081a95e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0081a961  50                   push eax
// 0081a962  8d442414             lea eax, [esp + 0x14]
// 0081a966  50                   push eax
// 0081a967  8bcb                 mov ecx, ebx
// 0081a969  e862eeefff           call 0x7197d0
// 0081a96e  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 0081a975  0f8414010000         je 0x81aa8f
// 0081a97b  8b4658               mov eax, dword ptr [esi + 0x58]
// 0081a97e  83f8ff               cmp eax, -1
// 0081a981  7505                 jne 0x81a988
// 0081a983  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0081a986  eb02                 jmp 0x81a98a
// 0081a988  8bc8                 mov ecx, eax
// 0081a98a  83f8ff               cmp eax, -1
// 0081a98d  7503                 jne 0x81a992
// 0081a98f  8b4654               mov eax, dword ptr [esi + 0x54]
// 0081a992  51                   push ecx
// 0081a993  50                   push eax
// 0081a994  eb70                 jmp 0x81aa06
// 0081a996  85ff                 test edi, edi
// 0081a998  7408                 je 0x81a9a2
// 0081a99a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0081a9a0  eb34                 jmp 0x81a9d6
// 0081a9a2  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081a9a6  83787c00             cmp dword ptr [eax + 0x7c], 0
// 0081a9aa  7424                 je 0x81a9d0
// 0081a9ac  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 0081a9b3  750b                 jne 0x81a9c0
// 0081a9b5  ffd5                 call ebp
// 0081a9b7  8b542428             mov edx, dword ptr [esp + 0x28]
// 0081a9bb  3b4220               cmp eax, dword ptr [edx + 0x20]
// 0081a9be  7508                 jne 0x81a9c8
// 0081a9c0  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0081a9c6  eb0e                 jmp 0x81a9d6
// 0081a9c8  8d8ebc000000         lea ecx, [esi + 0xbc]
// 0081a9ce  eb06                 jmp 0x81a9d6
// 0081a9d0  8d8e98000000         lea ecx, [esi + 0x98]
// 0081a9d6  8b4108               mov eax, dword ptr [ecx + 8]
// 0081a9d9  83f8ff               cmp eax, -1
// 0081a9dc  7503                 jne 0x81a9e1
// 0081a9de  8b4104               mov eax, dword ptr [ecx + 4]
// 0081a9e1  50                   push eax
// 0081a9e2  8d442414             lea eax, [esp + 0x14]
// 0081a9e6  50                   push eax
// 0081a9e7  8bcb                 mov ecx, ebx
// 0081a9e9  e8e2edefff           call 0x7197d0
// 0081a9ee  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0081a9f1  83f8ff               cmp eax, -1
// 0081a9f4  7503                 jne 0x81a9f9
// 0081a9f6  8b4648               mov eax, dword ptr [esi + 0x48]
// 0081a9f9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0081a9fc  83f9ff               cmp ecx, -1
// 0081a9ff  7503                 jne 0x81aa04
// 0081aa01  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0081aa04  50                   push eax
// 0081aa05  51                   push ecx
// 0081aa06  8d4c2418             lea ecx, [esp + 0x18]
// 0081aa0a  51                   push ecx
// 0081aa0b  8bcb                 mov ecx, ebx
// 0081aa0d  e8b8edefff           call 0x7197ca
// 0081aa12  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 0081aa19  7474                 je 0x81aa8f
// 0081aa1b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081aa1f  e83c00ffff           call 0x80aa60
// 0081aa24  3c01                 cmp al, 1
// 0081aa26  7567                 jne 0x81aa8f
// 0081aa28  e8f3a0f3ff           call 0x754b20
// 0081aa2d  6a0d                 push 0xd
// 0081aa2f  8bc8                 mov ecx, eax
// 0081aa31  e86a98f3ff           call 0x7542a0
// 0081aa36  8bf0                 mov esi, eax
// 0081aa38  e8e3a0f3ff           call 0x754b20
// 0081aa3d  6a0d                 push 0xd
// 0081aa3f  8bc8                 mov ecx, eax
// 0081aa41  e85a98f3ff           call 0x7542a0
// 0081aa46  56                   push esi
// 0081aa47  50                   push eax
// 0081aa48  8d542418             lea edx, [esp + 0x18]
// 0081aa4c  52                   push edx
// 0081aa4d  8bcb                 mov ecx, ebx
// 0081aa4f  e876edefff           call 0x7197ca
// 0081aa54  6aff                 push -1
// 0081aa56  6aff                 push -1
// 0081aa58  8d442418             lea eax, [esp + 0x18]
// 0081aa5c  50                   push eax
// 0081aa5d  ff15bced8900         call dword ptr [0x89edbc]
// 0081aa63  e8b8a0f3ff           call 0x754b20
// 0081aa68  6a0d                 push 0xd
// 0081aa6a  8bc8                 mov ecx, eax
// 0081aa6c  e82f98f3ff           call 0x7542a0
// 0081aa71  8bf0                 mov esi, eax
// 0081aa73  e8a8a0f3ff           call 0x754b20
// 0081aa78  6a0d                 push 0xd
// 0081aa7a  8bc8                 mov ecx, eax
// 0081aa7c  e81f98f3ff           call 0x7542a0
// 0081aa81  56                   push esi
// 0081aa82  50                   push eax
// 0081aa83  8d4c2418             lea ecx, [esp + 0x18]
// 0081aa87  51                   push ecx
// 0081aa88  8bcb                 mov ecx, ebx
// 0081aa8a  e83bedefff           call 0x7197ca
// 0081aa8f  5f                   pop edi
// 0081aa90  5e                   pop esi
// 0081aa91  5d                   pop ebp
// 0081aa92  b801000000           mov eax, 1
// 0081aa97  5b                   pop ebx
// 0081aa98  83c410               add esp, 0x10
// 0081aa9b  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
