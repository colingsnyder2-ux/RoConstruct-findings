// roc 2007-03 00686f40  unit: seg_00680000  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686f40
//
// 00686f40  53                   push ebx
// 00686f41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00686f45  56                   push esi
// 00686f46  57                   push edi
// 00686f47  33ff                 xor edi, edi
// 00686f49  3bdf                 cmp ebx, edi
// 00686f4b  8bf1                 mov esi, ecx
// 00686f4d  7d05                 jge 0x686f54
// 00686f4f  e85a74f9ff           call 0x61e3ae
// 00686f54  8b442414             mov eax, dword ptr [esp + 0x14]
// 00686f58  3bc7                 cmp eax, edi
// 00686f5a  7c03                 jl 0x686f5f
// 00686f5c  894610               mov dword ptr [esi + 0x10], eax
// 00686f5f  3bdf                 cmp ebx, edi
// 00686f61  751f                 jne 0x686f82
// 00686f63  8b4604               mov eax, dword ptr [esi + 4]
// 00686f66  3bc7                 cmp eax, edi
// 00686f68  740c                 je 0x686f76
// 00686f6a  50                   push eax
// 00686f6b  e84474f9ff           call 0x61e3b4
// 00686f70  83c404               add esp, 4
// 00686f73  897e04               mov dword ptr [esi + 4], edi
// 00686f76  897e0c               mov dword ptr [esi + 0xc], edi
// 00686f79  897e08               mov dword ptr [esi + 8], edi
// 00686f7c  5f                   pop edi
// 00686f7d  5e                   pop esi
// 00686f7e  5b                   pop ebx
// 00686f7f  c20800               ret 8
// 00686f82  8b5604               mov edx, dword ptr [esi + 4]
// 00686f85  3bd7                 cmp edx, edi
// 00686f87  55                   push ebp
// 00686f88  7533                 jne 0x686fbd
// 00686f8a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00686f8d  3bdd                 cmp ebx, ebp
// 00686f8f  7e02                 jle 0x686f93
// 00686f91  8beb                 mov ebp, ebx
// 00686f93  8d7cad00             lea edi, [ebp + ebp*4]
// 00686f97  03ff                 add edi, edi
// 00686f99  03ff                 add edi, edi
// 00686f9b  57                   push edi
// 00686f9c  e81f74f9ff           call 0x61e3c0
// 00686fa1  57                   push edi
// 00686fa2  6a00                 push 0
// 00686fa4  50                   push eax
// 00686fa5  894604               mov dword ptr [esi + 4], eax
// 00686fa8  e86f80f9ff           call 0x61f01c
// 00686fad  83c410               add esp, 0x10
// 00686fb0  896e0c               mov dword ptr [esi + 0xc], ebp
// 00686fb3  5d                   pop ebp
// 00686fb4  5f                   pop edi
// 00686fb5  895e08               mov dword ptr [esi + 8], ebx
// 00686fb8  5e                   pop esi
// 00686fb9  5b                   pop ebx
// 00686fba  c20800               ret 8
// 00686fbd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00686fc0  3bd9                 cmp ebx, ecx
// 00686fc2  7f31                 jg 0x686ff5
// 00686fc4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00686fc7  3bd9                 cmp ebx, ecx
// 00686fc9  0f8ec6000000         jle 0x687095
// 00686fcf  8bc3                 mov eax, ebx
// 00686fd1  2bc1                 sub eax, ecx
// 00686fd3  8d0480               lea eax, [eax + eax*4]
// 00686fd6  03c0                 add eax, eax
// 00686fd8  03c0                 add eax, eax
// 00686fda  50                   push eax
// 00686fdb  8d0c89               lea ecx, [ecx + ecx*4]
// 00686fde  8d148a               lea edx, [edx + ecx*4]
// 00686fe1  57                   push edi
// 00686fe2  52                   push edx
// 00686fe3  e83480f9ff           call 0x61f01c
// 00686fe8  83c40c               add esp, 0xc
// 00686feb  5d                   pop ebp
// 00686fec  5f                   pop edi
// 00686fed  895e08               mov dword ptr [esi + 8], ebx
// 00686ff0  5e                   pop esi
// 00686ff1  5b                   pop ebx
// 00686ff2  c20800               ret 8
// 00686ff5  8b4610               mov eax, dword ptr [esi + 0x10]
// 00686ff8  3bc7                 cmp eax, edi
// 00686ffa  7524                 jne 0x687020
// 00686ffc  8b4608               mov eax, dword ptr [esi + 8]
// 00686fff  99                   cdq 
// 00687000  83e207               and edx, 7
// 00687003  03c2                 add eax, edx
// 00687005  c1f803               sar eax, 3
// 00687008  83f804               cmp eax, 4
// 0068700b  7d07                 jge 0x687014
// 0068700d  b804000000           mov eax, 4
// 00687012  eb0c                 jmp 0x687020
// 00687014  3d00040000           cmp eax, 0x400
// 00687019  7e05                 jle 0x687020
// 0068701b  b800040000           mov eax, 0x400
// 00687020  8d3c01               lea edi, [ecx + eax]
// 00687023  3bdf                 cmp ebx, edi
// 00687025  7d06                 jge 0x68702d
// 00687027  897c2414             mov dword ptr [esp + 0x14], edi
// 0068702b  eb06                 jmp 0x687033
// 0068702d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00687031  8bfb                 mov edi, ebx
// 00687033  3bf9                 cmp edi, ecx
// 00687035  7d05                 jge 0x68703c
// 00687037  e87273f9ff           call 0x61e3ae
// 0068703c  8d3cbf               lea edi, [edi + edi*4]
// 0068703f  03ff                 add edi, edi
// 00687041  03ff                 add edi, edi
// 00687043  57                   push edi
// 00687044  e87773f9ff           call 0x61e3c0
// 00687049  8b4e04               mov ecx, dword ptr [esi + 4]
// 0068704c  8be8                 mov ebp, eax
// 0068704e  8b4608               mov eax, dword ptr [esi + 8]
// 00687051  8d0480               lea eax, [eax + eax*4]
// 00687054  03c0                 add eax, eax
// 00687056  03c0                 add eax, eax
// 00687058  50                   push eax
// 00687059  51                   push ecx
// 0068705a  57                   push edi
// 0068705b  55                   push ebp
// 0068705c  e82fa8d7ff           call 0x401890
// 00687061  8b4e08               mov ecx, dword ptr [esi + 8]
// 00687064  8bc3                 mov eax, ebx
// 00687066  2bc1                 sub eax, ecx
// 00687068  8d1480               lea edx, [eax + eax*4]
// 0068706b  03d2                 add edx, edx
// 0068706d  03d2                 add edx, edx
// 0068706f  52                   push edx
// 00687070  8d0489               lea eax, [ecx + ecx*4]
// 00687073  8d4c8500             lea ecx, [ebp + eax*4]
// 00687077  6a00                 push 0
// 00687079  51                   push ecx
// 0068707a  e89d7ff9ff           call 0x61f01c
// 0068707f  8b5604               mov edx, dword ptr [esi + 4]
// 00687082  52                   push edx
// 00687083  e82c73f9ff           call 0x61e3b4
// 00687088  8b442438             mov eax, dword ptr [esp + 0x38]
// 0068708c  83c424               add esp, 0x24
// 0068708f  896e04               mov dword ptr [esi + 4], ebp
// 00687092  89460c               mov dword ptr [esi + 0xc], eax
// 00687095  5d                   pop ebp
// 00687096  5f                   pop edi
// 00687097  895e08               mov dword ptr [esi + 8], ebx
// 0068709a  5e                   pop esi
// 0068709b  5b                   pop ebx
// 0068709c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetSize@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
