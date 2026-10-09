// roc 2007-03 006968c0  unit: seg_00690000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006968c0
//
// 006968c0  53                   push ebx
// 006968c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006968c5  56                   push esi
// 006968c6  57                   push edi
// 006968c7  33ff                 xor edi, edi
// 006968c9  3bdf                 cmp ebx, edi
// 006968cb  8bf1                 mov esi, ecx
// 006968cd  7d05                 jge 0x6968d4
// 006968cf  e8da7af8ff           call 0x61e3ae
// 006968d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006968d8  3bc7                 cmp eax, edi
// 006968da  7c03                 jl 0x6968df
// 006968dc  894610               mov dword ptr [esi + 0x10], eax
// 006968df  3bdf                 cmp ebx, edi
// 006968e1  751f                 jne 0x696902
// 006968e3  8b4604               mov eax, dword ptr [esi + 4]
// 006968e6  3bc7                 cmp eax, edi
// 006968e8  740c                 je 0x6968f6
// 006968ea  50                   push eax
// 006968eb  e8c47af8ff           call 0x61e3b4
// 006968f0  83c404               add esp, 4
// 006968f3  897e04               mov dword ptr [esi + 4], edi
// 006968f6  897e0c               mov dword ptr [esi + 0xc], edi
// 006968f9  897e08               mov dword ptr [esi + 8], edi
// 006968fc  5f                   pop edi
// 006968fd  5e                   pop esi
// 006968fe  5b                   pop ebx
// 006968ff  c20800               ret 8
// 00696902  8b5604               mov edx, dword ptr [esi + 4]
// 00696905  3bd7                 cmp edx, edi
// 00696907  55                   push ebp
// 00696908  7531                 jne 0x69693b
// 0069690a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0069690d  3bdd                 cmp ebx, ebp
// 0069690f  7e02                 jle 0x696913
// 00696911  8beb                 mov ebp, ebx
// 00696913  8d7c6d00             lea edi, [ebp + ebp*2]
// 00696917  03ff                 add edi, edi
// 00696919  57                   push edi
// 0069691a  e8a17af8ff           call 0x61e3c0
// 0069691f  57                   push edi
// 00696920  6a00                 push 0
// 00696922  50                   push eax
// 00696923  894604               mov dword ptr [esi + 4], eax
// 00696926  e8f186f8ff           call 0x61f01c
// 0069692b  83c410               add esp, 0x10
// 0069692e  896e0c               mov dword ptr [esi + 0xc], ebp
// 00696931  5d                   pop ebp
// 00696932  5f                   pop edi
// 00696933  895e08               mov dword ptr [esi + 8], ebx
// 00696936  5e                   pop esi
// 00696937  5b                   pop ebx
// 00696938  c20800               ret 8
// 0069693b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0069693e  3bd9                 cmp ebx, ecx
// 00696940  7f2f                 jg 0x696971
// 00696942  8b4e08               mov ecx, dword ptr [esi + 8]
// 00696945  3bd9                 cmp ebx, ecx
// 00696947  0f8ebe000000         jle 0x696a0b
// 0069694d  8bc3                 mov eax, ebx
// 0069694f  2bc1                 sub eax, ecx
// 00696951  8d0440               lea eax, [eax + eax*2]
// 00696954  03c0                 add eax, eax
// 00696956  50                   push eax
// 00696957  8d0c49               lea ecx, [ecx + ecx*2]
// 0069695a  8d144a               lea edx, [edx + ecx*2]
// 0069695d  57                   push edi
// 0069695e  52                   push edx
// 0069695f  e8b886f8ff           call 0x61f01c
// 00696964  83c40c               add esp, 0xc
// 00696967  5d                   pop ebp
// 00696968  5f                   pop edi
// 00696969  895e08               mov dword ptr [esi + 8], ebx
// 0069696c  5e                   pop esi
// 0069696d  5b                   pop ebx
// 0069696e  c20800               ret 8
// 00696971  8b4610               mov eax, dword ptr [esi + 0x10]
// 00696974  3bc7                 cmp eax, edi
// 00696976  7524                 jne 0x69699c
// 00696978  8b4608               mov eax, dword ptr [esi + 8]
// 0069697b  99                   cdq 
// 0069697c  83e207               and edx, 7
// 0069697f  03c2                 add eax, edx
// 00696981  c1f803               sar eax, 3
// 00696984  83f804               cmp eax, 4
// 00696987  7d07                 jge 0x696990
// 00696989  b804000000           mov eax, 4
// 0069698e  eb0c                 jmp 0x69699c
// 00696990  3d00040000           cmp eax, 0x400
// 00696995  7e05                 jle 0x69699c
// 00696997  b800040000           mov eax, 0x400
// 0069699c  8d3c01               lea edi, [ecx + eax]
// 0069699f  3bdf                 cmp ebx, edi
// 006969a1  7d06                 jge 0x6969a9
// 006969a3  897c2414             mov dword ptr [esp + 0x14], edi
// 006969a7  eb06                 jmp 0x6969af
// 006969a9  895c2414             mov dword ptr [esp + 0x14], ebx
// 006969ad  8bfb                 mov edi, ebx
// 006969af  3bf9                 cmp edi, ecx
// 006969b1  7d05                 jge 0x6969b8
// 006969b3  e8f679f8ff           call 0x61e3ae
// 006969b8  8d3c7f               lea edi, [edi + edi*2]
// 006969bb  03ff                 add edi, edi
// 006969bd  57                   push edi
// 006969be  e8fd79f8ff           call 0x61e3c0
// 006969c3  8b4e04               mov ecx, dword ptr [esi + 4]
// 006969c6  8be8                 mov ebp, eax
// 006969c8  8b4608               mov eax, dword ptr [esi + 8]
// 006969cb  8d0440               lea eax, [eax + eax*2]
// 006969ce  03c0                 add eax, eax
// 006969d0  50                   push eax
// 006969d1  51                   push ecx
// 006969d2  57                   push edi
// 006969d3  55                   push ebp
// 006969d4  e8b7aed6ff           call 0x401890
// 006969d9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006969dc  8bc3                 mov eax, ebx
// 006969de  2bc1                 sub eax, ecx
// 006969e0  8d1440               lea edx, [eax + eax*2]
// 006969e3  03d2                 add edx, edx
// 006969e5  52                   push edx
// 006969e6  8d0449               lea eax, [ecx + ecx*2]
// 006969e9  8d4c4500             lea ecx, [ebp + eax*2]
// 006969ed  6a00                 push 0
// 006969ef  51                   push ecx
// 006969f0  e82786f8ff           call 0x61f01c
// 006969f5  8b5604               mov edx, dword ptr [esi + 4]
// 006969f8  52                   push edx
// 006969f9  e8b679f8ff           call 0x61e3b4
// 006969fe  8b442438             mov eax, dword ptr [esp + 0x38]
// 00696a02  83c424               add esp, 0x24
// 00696a05  896e04               mov dword ptr [esi + 4], ebp
// 00696a08  89460c               mov dword ptr [esi + 0xc], eax
// 00696a0b  5d                   pop ebp
// 00696a0c  5f                   pop edi
// 00696a0d  895e08               mov dword ptr [esi + 8], ebx
// 00696a10  5e                   pop esi
// 00696a11  5b                   pop ebx
// 00696a12  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?SetSize@?$CArray@UtagACCEL@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
