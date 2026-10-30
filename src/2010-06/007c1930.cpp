// roc 2010-06 007c1930  unit: CXTPImageManagerIconSet  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c1930
//
// 007c1930  83ec0c               sub esp, 0xc
// 007c1933  53                   push ebx
// 007c1934  56                   push esi
// 007c1935  8bf1                 mov esi, ecx
// 007c1937  8b4634               mov eax, dword ptr [esi + 0x34]
// 007c193a  f7d8                 neg eax
// 007c193c  1bc0                 sbb eax, eax
// 007c193e  57                   push edi
// 007c193f  8944240c             mov dword ptr [esp + 0xc], eax
// 007c1943  743a                 je 0x7c197f
// 007c1945  8d5e28               lea ebx, [esi + 0x28]
// 007c1948  eb06                 jmp 0x7c1950
// 007c194a  8d9b00000000         lea ebx, [ebx]
// 007c1950  8d442410             lea eax, [esp + 0x10]
// 007c1954  50                   push eax
// 007c1955  8d4c2418             lea ecx, [esp + 0x18]
// 007c1959  51                   push ecx
// 007c195a  8d542414             lea edx, [esp + 0x14]
// 007c195e  52                   push edx
// 007c195f  8bcb                 mov ecx, ebx
// 007c1961  e82ae90a00           call 0x870290
// 007c1966  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007c196a  8bcf                 mov ecx, edi
// 007c196c  e8ffeeffff           call 0x7c0870
// 007c1971  8bcf                 mov ecx, edi
// 007c1973  e8a465feff           call 0x7a7f1c
// 007c1978  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007c197d  75d1                 jne 0x7c1950
// 007c197f  8d4e28               lea ecx, [esi + 0x28]
// 007c1982  e839c0ffff           call 0x7bd9c0
// 007c1987  8b4664               mov eax, dword ptr [esi + 0x64]
// 007c198a  f7d8                 neg eax
// 007c198c  1bc0                 sbb eax, eax
// 007c198e  8944240c             mov dword ptr [esp + 0xc], eax
// 007c1992  7438                 je 0x7c19cc
// 007c1994  8d5e58               lea ebx, [esi + 0x58]
// 007c1997  8d442410             lea eax, [esp + 0x10]
// 007c199b  50                   push eax
// 007c199c  8d4c2418             lea ecx, [esp + 0x18]
// 007c19a0  51                   push ecx
// 007c19a1  8d542414             lea edx, [esp + 0x14]
// 007c19a5  52                   push edx
// 007c19a6  8bcb                 mov ecx, ebx
// 007c19a8  e8e3e80a00           call 0x870290
// 007c19ad  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007c19b1  85ff                 test edi, edi
// 007c19b3  7410                 je 0x7c19c5
// 007c19b5  8bcf                 mov ecx, edi
// 007c19b7  e814f1ffff           call 0x7c0ad0
// 007c19bc  57                   push edi
// 007c19bd  e8d85ffeff           call 0x7a799a
// 007c19c2  83c404               add esp, 4
// 007c19c5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007c19ca  75cb                 jne 0x7c1997
// 007c19cc  8d4e58               lea ecx, [esi + 0x58]
// 007c19cf  e8ecbfffff           call 0x7bd9c0
// 007c19d4  33ff                 xor edi, edi
// 007c19d6  397e4c               cmp dword ptr [esi + 0x4c], edi
// 007c19d9  7e2e                 jle 0x7c1a09
// 007c19db  eb03                 jmp 0x7c19e0
// 007c19dd  8d4900               lea ecx, [ecx]
// 007c19e0  85ff                 test edi, edi
// 007c19e2  7c38                 jl 0x7c1a1c
// 007c19e4  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 007c19e7  7d33                 jge 0x7c1a1c
// 007c19e9  8b4648               mov eax, dword ptr [esi + 0x48]
// 007c19ec  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 007c19ef  85db                 test ebx, ebx
// 007c19f1  7410                 je 0x7c1a03
// 007c19f3  8bcb                 mov ecx, ebx
// 007c19f5  e806e0ffff           call 0x7bfa00
// 007c19fa  53                   push ebx
// 007c19fb  e89a5ffeff           call 0x7a799a
// 007c1a00  83c404               add esp, 4
// 007c1a03  47                   inc edi
// 007c1a04  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 007c1a07  7cd7                 jl 0x7c19e0
// 007c1a09  6aff                 push -1
// 007c1a0b  6a00                 push 0
// 007c1a0d  8d4e44               lea ecx, [esi + 0x44]
// 007c1a10  e8ebf80100           call 0x7e1300
// 007c1a15  5f                   pop edi
// 007c1a16  5e                   pop esi
// 007c1a17  5b                   pop ebx
// 007c1a18  83c40c               add esp, 0xc
// 007c1a1b  c3                   ret 
// 007c1a1c  e82b62feff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp