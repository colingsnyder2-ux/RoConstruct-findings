// roc 2008-06 00724f00  unit: CXTPRibbonBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00724f00
//
// 00724f00  83ec10               sub esp, 0x10
// 00724f03  53                   push ebx
// 00724f04  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00724f08  56                   push esi
// 00724f09  8bf1                 mov esi, ecx
// 00724f0b  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00724f11  57                   push edi
// 00724f12  85c0                 test eax, eax
// 00724f14  0f849a000000         je 0x724fb4
// 00724f1a  83fb7b               cmp ebx, 0x7b
// 00724f1d  7546                 jne 0x724f65
// 00724f1f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00724f23  8338ff               cmp dword ptr [eax], -1
// 00724f26  752f                 jne 0x724f57
// 00724f28  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00724f2b  8d7eac               lea edi, [esi - 0x54]
// 00724f2e  51                   push ecx
// 00724f2f  8bcf                 mov ecx, edi
// 00724f31  e87a0cf9ff           call 0x6b5bb0
// 00724f36  8bf0                 mov esi, eax
// 00724f38  85f6                 test esi, esi
// 00724f3a  741b                 je 0x724f57
// 00724f3c  8d54240c             lea edx, [esp + 0xc]
// 00724f40  52                   push edx
// 00724f41  8bce                 mov ecx, esi
// 00724f43  e8c8d7f7ff           call 0x6a2710
// 00724f48  8b4804               mov ecx, dword ptr [eax + 4]
// 00724f4b  8b10                 mov edx, dword ptr [eax]
// 00724f4d  56                   push esi
// 00724f4e  51                   push ecx
// 00724f4f  52                   push edx
// 00724f50  8bcf                 mov ecx, edi
// 00724f52  e8a9f8ffff           call 0x724800
// 00724f57  5f                   pop edi
// 00724f58  5e                   pop esi
// 00724f59  b801000000           mov eax, 1
// 00724f5e  5b                   pop ebx
// 00724f5f  83c410               add esp, 0x10
// 00724f62  c21400               ret 0x14
// 00724f65  85c0                 test eax, eax
// 00724f67  744b                 je 0x724fb4
// 00724f69  81fb0a020000         cmp ebx, 0x20a
// 00724f6f  7543                 jne 0x724fb4
// 00724f71  8d7eac               lea edi, [esi - 0x54]
// 00724f74  8bcf                 mov ecx, edi
// 00724f76  e895fef8ff           call 0x6b4e10
// 00724f7b  8bc8                 mov ecx, eax
// 00724f7d  e85ef6f7ff           call 0x6a45e0
// 00724f82  83780400             cmp dword ptr [eax + 4], 0
// 00724f86  7f2c                 jg 0x724fb4
// 00724f88  8bcf                 mov ecx, edi
// 00724f8a  e861dcf7ff           call 0x6a2bf0
// 00724f8f  85c0                 test eax, eax
// 00724f91  7521                 jne 0x724fb4
// 00724f93  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00724f97  66394102             cmp word ptr [ecx + 2], ax
// 00724f9b  8bcf                 mov ecx, edi
// 00724f9d  0f9ec0               setle al
// 00724fa0  50                   push eax
// 00724fa1  e8aad9ffff           call 0x722950
// 00724fa6  5f                   pop edi
// 00724fa7  5e                   pop esi
// 00724fa8  b801000000           mov eax, 1
// 00724fad  5b                   pop ebx
// 00724fae  83c410               add esp, 0x10
// 00724fb1  c21400               ret 0x14
// 00724fb4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00724fb8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00724fbc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00724fc0  52                   push edx
// 00724fc1  8b542424             mov edx, dword ptr [esp + 0x24]
// 00724fc5  50                   push eax
// 00724fc6  51                   push ecx
// 00724fc7  53                   push ebx
// 00724fc8  52                   push edx
// 00724fc9  8bce                 mov ecx, esi
// 00724fcb  e8d0c9ffff           call 0x7219a0
// 00724fd0  5f                   pop edi
// 00724fd1  5e                   pop esi
// 00724fd2  5b                   pop ebx
// 00724fd3  83c410               add esp, 0x10
// 00724fd6  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnHookMessage@CXTPRibbonBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
