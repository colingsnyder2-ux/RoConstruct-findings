// roc 2012-06 009a4690  unit: CXTPCommandBar  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a4690
//
// 009a4690  56                   push esi
// 009a4691  8b742408             mov esi, dword ptr [esp + 8]
// 009a4695  57                   push edi
// 009a4696  33ff                 xor edi, edi
// 009a4698  3bf7                 cmp esi, edi
// 009a469a  7505                 jne 0x9a46a1
// 009a469c  5f                   pop edi
// 009a469d  33c0                 xor eax, eax
// 009a469f  5e                   pop esi
// 009a46a0  c3                   ret 
// 009a46a1  e81c500f00           call 0xa996c2
// 009a46a6  83c058               add eax, 0x58
// 009a46a9  8378047b             cmp dword ptr [eax + 4], 0x7b
// 009a46ad  7521                 jne 0x9a46d0
// 009a46af  83780cff             cmp dword ptr [eax + 0xc], -1
// 009a46b3  751b                 jne 0x9a46d0
// 009a46b5  8bce                 mov ecx, esi
// 009a46b7  e834e6feff           call 0x992cf0
// 009a46bc  85c0                 test eax, eax
// 009a46be  7410                 je 0x9a46d0
// 009a46c0  6a01                 push 1
// 009a46c2  8bce                 mov ecx, esi
// 009a46c4  e827e6feff           call 0x992cf0
// 009a46c9  8bc8                 mov ecx, eax
// 009a46cb  e8c0f5ffff           call 0x9a3c90
// 009a46d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a46d4  3bc7                 cmp eax, edi
// 009a46d6  7507                 jne 0x9a46df
// 009a46d8  8bce                 mov ecx, esi
// 009a46da  e86112ffff           call 0x995940
// 009a46df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009a46e3  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 009a46e9  898e08010000         mov dword ptr [esi + 0x108], ecx
// 009a46ef  3bc7                 cmp eax, edi
// 009a46f1  7417                 je 0x9a470a
// 009a46f3  8bc8                 mov ecx, eax
// 009a46f5  e8de4e0f00           call 0xa995d8
// 009a46fa  a900104000           test eax, 0x401000
// 009a46ff  7409                 je 0x9a470a
// 009a4701  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a4705  83c808               or eax, 8
// 009a4708  eb04                 jmp 0x9a470e
// 009a470a  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a470e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 009a4716  89be54010000         mov dword ptr [esi + 0x154], edi
// 009a471c  a900010000           test eax, 0x100
// 009a4721  740e                 je 0x9a4731
// 009a4723  8d54240c             lea edx, [esp + 0xc]
// 009a4727  899654010000         mov dword ptr [esi + 0x154], edx
// 009a472d  897c240c             mov dword ptr [esp + 0xc], edi
// 009a4731  8bc8                 mov ecx, eax
// 009a4733  83e102               and ecx, 2
// 009a4736  898e20010000         mov dword ptr [esi + 0x120], ecx
// 009a473c  8bc8                 mov ecx, eax
// 009a473e  83e108               and ecx, 8
// 009a4741  83c910               or ecx, 0x10
// 009a4744  8bd0                 mov edx, eax
// 009a4746  c1e903               shr ecx, 3
// 009a4749  53                   push ebx
// 009a474a  83e001               and eax, 1
// 009a474d  81e280000000         and edx, 0x80
// 009a4753  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 009a4759  8bd8                 mov ebx, eax
// 009a475b  68704e9800           push 0x984e70
// 009a4760  b958a0e500           mov ecx, 0xe5a058
// 009a4765  899624010000         mov dword ptr [esi + 0x124], edx
// 009a476b  899e28010000         mov dword ptr [esi + 0x128], ebx
// 009a4771  e8084e0f00           call 0xa9957e
// 009a4776  8bf8                 mov edi, eax
// 009a4778  85ff                 test edi, edi
// 009a477a  7505                 jne 0x9a4781
// 009a477c  e83fdcfdff           call 0x9823c0
// 009a4781  8bcf                 mov ecx, edi
// 009a4783  85db                 test ebx, ebx
// 009a4785  750d                 jne 0x9a4794
// 009a4787  e8e4450500           call 0x9f8d70
// 009a478c  ff15743ab200         call dword ptr [0xb23a74]
// 009a4792  eb0e                 jmp 0x9a47a2
// 009a4794  e857460500           call 0x9f8df0
// 009a4799  6a01                 push 1
// 009a479b  8bcf                 mov ecx, edi
// 009a479d  e8fe450500           call 0x9f8da0
// 009a47a2  8b542424             mov edx, dword ptr [esp + 0x24]
// 009a47a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a47aa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a47ae  52                   push edx
// 009a47af  50                   push eax
// 009a47b0  51                   push ecx
// 009a47b1  8bce                 mov ecx, esi
// 009a47b3  c7474001000000       mov dword ptr [edi + 0x40], 1
// 009a47ba  e8618c0200           call 0x9cd420
// 009a47bf  85c0                 test eax, eax
// 009a47c1  7504                 jne 0x9a47c7
// 009a47c3  5b                   pop ebx
// 009a47c4  5f                   pop edi
// 009a47c5  5e                   pop esi
// 009a47c6  c3                   ret 
// 009a47c7  8bce                 mov ecx, esi
// 009a47c9  e882ddffff           call 0x9a2550
// 009a47ce  85db                 test ebx, ebx
// 009a47d0  7409                 je 0x9a47db
// 009a47d2  6a00                 push 0
// 009a47d4  8bcf                 mov ecx, edi
// 009a47d6  e8c5450500           call 0x9f8da0
// 009a47db  8b442410             mov eax, dword ptr [esp + 0x10]
// 009a47df  5b                   pop ebx
// 009a47e0  5f                   pop edi
// 009a47e1  5e                   pop esi
// 009a47e2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCXTPPopupBar@@IHHPAVCWnd@@PBUtagRECT@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
