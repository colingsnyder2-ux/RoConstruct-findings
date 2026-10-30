// roc 2009-06 0072b890  unit: CXTPCommandBar  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072b890
//
// 0072b890  56                   push esi
// 0072b891  8b742408             mov esi, dword ptr [esp + 8]
// 0072b895  57                   push edi
// 0072b896  33ff                 xor edi, edi
// 0072b898  3bf7                 cmp esi, edi
// 0072b89a  7505                 jne 0x72b8a1
// 0072b89c  5f                   pop edi
// 0072b89d  33c0                 xor eax, eax
// 0072b89f  5e                   pop esi
// 0072b8a0  c3                   ret 
// 0072b8a1  e8d8061200           call 0x84bf7e
// 0072b8a6  83c058               add eax, 0x58
// 0072b8a9  8378047b             cmp dword ptr [eax + 4], 0x7b
// 0072b8ad  7521                 jne 0x72b8d0
// 0072b8af  83780cff             cmp dword ptr [eax + 0xc], -1
// 0072b8b3  751b                 jne 0x72b8d0
// 0072b8b5  8bce                 mov ecx, esi
// 0072b8b7  e8d41a0000           call 0x72d390
// 0072b8bc  85c0                 test eax, eax
// 0072b8be  7410                 je 0x72b8d0
// 0072b8c0  6a01                 push 1
// 0072b8c2  8bce                 mov ecx, esi
// 0072b8c4  e8c71a0000           call 0x72d390
// 0072b8c9  8bc8                 mov ecx, eax
// 0072b8cb  e8c0f5ffff           call 0x72ae90
// 0072b8d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072b8d4  3bc7                 cmp eax, edi
// 0072b8d6  7507                 jne 0x72b8df
// 0072b8d8  8bce                 mov ecx, esi
// 0072b8da  e851460000           call 0x72ff30
// 0072b8df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072b8e3  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 0072b8e9  898e08010000         mov dword ptr [esi + 0x108], ecx
// 0072b8ef  3bc7                 cmp eax, edi
// 0072b8f1  7417                 je 0x72b90a
// 0072b8f3  8bc8                 mov ecx, eax
// 0072b8f5  e8e8051200           call 0x84bee2
// 0072b8fa  a900104000           test eax, 0x401000
// 0072b8ff  7409                 je 0x72b90a
// 0072b901  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072b905  83c808               or eax, 8
// 0072b908  eb04                 jmp 0x72b90e
// 0072b90a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072b90e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0072b916  89be54010000         mov dword ptr [esi + 0x154], edi
// 0072b91c  a900010000           test eax, 0x100
// 0072b921  740e                 je 0x72b931
// 0072b923  8d54240c             lea edx, [esp + 0xc]
// 0072b927  899654010000         mov dword ptr [esi + 0x154], edx
// 0072b92d  897c240c             mov dword ptr [esp + 0xc], edi
// 0072b931  8bc8                 mov ecx, eax
// 0072b933  83e102               and ecx, 2
// 0072b936  898e20010000         mov dword ptr [esi + 0x120], ecx
// 0072b93c  8bc8                 mov ecx, eax
// 0072b93e  83e108               and ecx, 8
// 0072b941  83c910               or ecx, 0x10
// 0072b944  8bd0                 mov edx, eax
// 0072b946  c1e903               shr ecx, 3
// 0072b949  53                   push ebx
// 0072b94a  83e001               and eax, 1
// 0072b94d  81e280000000         and edx, 0x80
// 0072b953  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 0072b959  8bd8                 mov ebx, eax
// 0072b95b  68f0b87100           push 0x71b8f0
// 0072b960  b99426a500           mov ecx, 0xa52694
// 0072b965  899624010000         mov dword ptr [esi + 0x124], edx
// 0072b96b  899e28010000         mov dword ptr [esi + 0x128], ebx
// 0072b971  e88a051200           call 0x84bf00
// 0072b976  8bf8                 mov edi, eax
// 0072b978  85ff                 test edi, edi
// 0072b97a  7505                 jne 0x72b981
// 0072b97c  e863d3feff           call 0x718ce4
// 0072b981  8bcf                 mov ecx, edi
// 0072b983  85db                 test ebx, ebx
// 0072b985  750d                 jne 0x72b994
// 0072b987  e834860600           call 0x793fc0
// 0072b98c  ff1544ee8900         call dword ptr [0x89ee44]
// 0072b992  eb0e                 jmp 0x72b9a2
// 0072b994  e8a7860600           call 0x794040
// 0072b999  6a01                 push 1
// 0072b99b  8bcf                 mov ecx, edi
// 0072b99d  e84e860600           call 0x793ff0
// 0072b9a2  8b542424             mov edx, dword ptr [esp + 0x24]
// 0072b9a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072b9aa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072b9ae  52                   push edx
// 0072b9af  50                   push eax
// 0072b9b0  51                   push ecx
// 0072b9b1  8bce                 mov ecx, esi
// 0072b9b3  c7474001000000       mov dword ptr [edi + 0x40], 1
// 0072b9ba  e821ce0300           call 0x7687e0
// 0072b9bf  85c0                 test eax, eax
// 0072b9c1  7504                 jne 0x72b9c7
// 0072b9c3  5b                   pop ebx
// 0072b9c4  5f                   pop edi
// 0072b9c5  5e                   pop esi
// 0072b9c6  c3                   ret 
// 0072b9c7  8bce                 mov ecx, esi
// 0072b9c9  e812ddffff           call 0x7296e0
// 0072b9ce  85db                 test ebx, ebx
// 0072b9d0  7409                 je 0x72b9db
// 0072b9d2  6a00                 push 0
// 0072b9d4  8bcf                 mov ecx, edi
// 0072b9d6  e815860600           call 0x793ff0
// 0072b9db  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072b9df  5b                   pop ebx
// 0072b9e0  5f                   pop edi
// 0072b9e1  5e                   pop esi
// 0072b9e2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCXTPPopupBar@@IHHPAVCWnd@@PBUtagRECT@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
