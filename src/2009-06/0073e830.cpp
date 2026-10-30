// roc 2009-06 0073e830  unit: CRobloxReportView  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073e830
//
// 0073e830  6aff                 push -1
// 0073e832  689c668700           push 0x87669c
// 0073e837  64a100000000         mov eax, dword ptr fs:[0]
// 0073e83d  50                   push eax
// 0073e83e  81ec9c000000         sub esp, 0x9c
// 0073e844  53                   push ebx
// 0073e845  55                   push ebp
// 0073e846  56                   push esi
// 0073e847  57                   push edi
// 0073e848  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0073e84d  33c4                 xor eax, esp
// 0073e84f  50                   push eax
// 0073e850  8d8424b0000000       lea eax, [esp + 0xb0]
// 0073e857  64a300000000         mov dword ptr fs:[0], eax
// 0073e85d  8bd9                 mov ebx, ecx
// 0073e85f  33ff                 xor edi, edi
// 0073e861  53                   push ebx
// 0073e862  8d4c2440             lea ecx, [esp + 0x40]
// 0073e866  897c241c             mov dword ptr [esp + 0x1c], edi
// 0073e86a  e8e1420300           call 0x772b50
// 0073e86f  8d4c241c             lea ecx, [esp + 0x1c]
// 0073e873  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 0073e87a  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0073e880  8bcb                 mov ecx, ebx
// 0073e882  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0073e88a  e897a4fdff           call 0x718d26
// 0073e88f  85c0                 test eax, eax
// 0073e891  7413                 je 0x73e8a6
// 0073e893  8d44241c             lea eax, [esp + 0x1c]
// 0073e897  50                   push eax
// 0073e898  8bcb                 mov ecx, ebx
// 0073e89a  e887a4fdff           call 0x718d26
// 0073e89f  8bc8                 mov ecx, eax
// 0073e8a1  e87aa7fdff           call 0x719020
// 0073e8a6  68a0418f00           push 0x8f41a0
// 0073e8ab  8d4c2440             lea ecx, [esp + 0x40]
// 0073e8af  e838a5fdff           call 0x718dec
// 0073e8b4  8d4c241c             lea ecx, [esp + 0x1c]
// 0073e8b8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073e8be  50                   push eax
// 0073e8bf  68c9000000           push 0xc9
// 0073e8c4  8d4c2444             lea ecx, [esp + 0x44]
// 0073e8c8  e81fd81000           call 0x84c0ec
// 0073e8cd  8bb424c4000000       mov esi, dword ptr [esp + 0xc4]
// 0073e8d4  8d4c2414             lea ecx, [esp + 0x14]
// 0073e8d8  51                   push ecx
// 0073e8d9  8b0e                 mov ecx, dword ptr [esi]
// 0073e8db  e806d81000           call 0x84c0e6
// 0073e8e0  8bc8                 mov ecx, eax
// 0073e8e2  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 0073e8ea  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073e8f0  50                   push eax
// 0073e8f1  68ca000000           push 0xca
// 0073e8f6  8d4c2444             lea ecx, [esp + 0x44]
// 0073e8fa  e8edd71000           call 0x84c0ec
// 0073e8ff  8d4c2414             lea ecx, [esp + 0x14]
// 0073e903  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0073e90b  ff1510fd8900         call dword ptr [0x89fd10]
// 0073e911  8b0e                 mov ecx, dword ptr [esi]
// 0073e913  8d542420             lea edx, [esp + 0x20]
// 0073e917  52                   push edx
// 0073e918  e8c3d71000           call 0x84c0e0
// 0073e91d  8bc8                 mov ecx, eax
// 0073e91f  c68424b800000003     mov byte ptr [esp + 0xb8], 3
// 0073e927  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073e92d  50                   push eax
// 0073e92e  68cb000000           push 0xcb
// 0073e933  8d4c2444             lea ecx, [esp + 0x44]
// 0073e937  e8b0d71000           call 0x84c0ec
// 0073e93c  8d4c2420             lea ecx, [esp + 0x20]
// 0073e940  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0073e948  ff1510fd8900         call dword ptr [0x89fd10]
// 0073e94e  6a05                 push 5
// 0073e950  8d4c2440             lea ecx, [esp + 0x40]
// 0073e954  e8c7a3fdff           call 0x718d20
// 0073e959  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0073e95d  50                   push eax
// 0073e95e  ff15b4ee8900         call dword ptr [0x89eeb4]
// 0073e964  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0073e967  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0073e96a  8b5628               mov edx, dword ptr [esi + 0x28]
// 0073e96d  8d6e24               lea ebp, [esi + 0x24]
// 0073e970  894c2428             mov dword ptr [esp + 0x28], ecx
// 0073e974  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0073e977  89442430             mov dword ptr [esp + 0x30], eax
// 0073e97b  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 0073e981  8954242c             mov dword ptr [esp + 0x2c], edx
// 0073e985  8b5614               mov edx, dword ptr [esi + 0x14]
// 0073e988  894c2434             mov dword ptr [esp + 0x34], ecx
// 0073e98c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0073e98f  897830               mov dword ptr [eax + 0x30], edi
// 0073e992  8bbc24c0000000       mov edi, dword ptr [esp + 0xc0]
// 0073e999  89542414             mov dword ptr [esp + 0x14], edx
// 0073e99d  8b17                 mov edx, dword ptr [edi]
// 0073e99f  8b4224               mov eax, dword ptr [edx + 0x24]
// 0073e9a2  894c2424             mov dword ptr [esp + 0x24], ecx
// 0073e9a6  8bcf                 mov ecx, edi
// 0073e9a8  ffd0                 call eax
// 0073e9aa  6a00                 push 0
// 0073e9ac  6a00                 push 0
// 0073e9ae  6a00                 push 0
// 0073e9b0  6a00                 push 0
// 0073e9b2  8bcf                 mov ecx, edi
// 0073e9b4  e849affdff           call 0x719902
// 0073e9b9  8b4368               mov eax, dword ptr [ebx + 0x68]
// 0073e9bc  894614               mov dword ptr [esi + 0x14], eax
// 0073e9bf  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0073e9c3  0f83be000000         jae 0x73ea87
// 0073e9c9  8da42400000000       lea esp, [esp]
// 0073e9d0  8b13                 mov edx, dword ptr [ebx]
// 0073e9d2  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0073e9d8  56                   push esi
// 0073e9d9  57                   push edi
// 0073e9da  8bcb                 mov ecx, ebx
// 0073e9dc  ffd0                 call eax
// 0073e9de  837e1000             cmp dword ptr [esi + 0x10], 0
// 0073e9e2  0f849f000000         je 0x73ea87
// 0073e9e8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0073e9eb  51                   push ecx
// 0073e9ec  8d542420             lea edx, [esp + 0x20]
// 0073e9f0  68683b8b00           push 0x8b3b68
// 0073e9f5  52                   push edx
// 0073e9f6  ff15c4fc8900         call dword ptr [0x89fcc4]
// 0073e9fc  83c40c               add esp, 0xc
// 0073e9ff  8d4c241c             lea ecx, [esp + 0x1c]
// 0073ea03  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073ea09  50                   push eax
// 0073ea0a  68cc000000           push 0xcc
// 0073ea0f  8d4c2444             lea ecx, [esp + 0x44]
// 0073ea13  e8d4d61000           call 0x84c0ec
// 0073ea18  8b4708               mov eax, dword ptr [edi + 8]
// 0073ea1b  6a0a                 push 0xa
// 0073ea1d  50                   push eax
// 0073ea1e  ff1558e18900         call dword ptr [0x89e158]
// 0073ea24  8b4f08               mov ecx, dword ptr [edi + 8]
// 0073ea27  6a08                 push 8
// 0073ea29  51                   push ecx
// 0073ea2a  89442440             mov dword ptr [esp + 0x40], eax
// 0073ea2e  ff1558e18900         call dword ptr [0x89e158]
// 0073ea34  8b542438             mov edx, dword ptr [esp + 0x38]
// 0073ea38  52                   push edx
// 0073ea39  50                   push eax
// 0073ea3a  6a00                 push 0
// 0073ea3c  6a00                 push 0
// 0073ea3e  55                   push ebp
// 0073ea3f  ff15a4ed8900         call dword ptr [0x89eda4]
// 0073ea45  8b4708               mov eax, dword ptr [edi + 8]
// 0073ea48  6a02                 push 2
// 0073ea4a  55                   push ebp
// 0073ea4b  50                   push eax
// 0073ea4c  ff1590e08900         call dword ptr [0x89e090]
// 0073ea52  8b13                 mov edx, dword ptr [ebx]
// 0073ea54  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0073ea5a  56                   push esi
// 0073ea5b  57                   push edi
// 0073ea5c  8bcb                 mov ecx, ebx
// 0073ea5e  ffd0                 call eax
// 0073ea60  ff4614               inc dword ptr [esi + 0x14]
// 0073ea63  6a00                 push 0
// 0073ea65  6a00                 push 0
// 0073ea67  e864400300           call 0x772ad0
// 0073ea6c  85c0                 test eax, eax
// 0073ea6e  740f                 je 0x73ea7f
// 0073ea70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073ea74  394e14               cmp dword ptr [esi + 0x14], ecx
// 0073ea77  0f8253ffffff         jb 0x73e9d0
// 0073ea7d  eb08                 jmp 0x73ea87
// 0073ea7f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0073ea87  8d4c243c             lea ecx, [esp + 0x3c]
// 0073ea8b  e826a0fdff           call 0x718ab6
// 0073ea90  837c241800           cmp dword ptr [esp + 0x18], 0
// 0073ea95  751a                 jne 0x73eab1
// 0073ea97  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073ea9b  394614               cmp dword ptr [esi + 0x14], eax
// 0073ea9e  7407                 je 0x73eaa7
// 0073eaa0  3dffff0000           cmp eax, 0xffff
// 0073eaa5  750a                 jne 0x73eab1
// 0073eaa7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0073eaaf  eb08                 jmp 0x73eab9
// 0073eab1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0073eab9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073eabd  895610               mov dword ptr [esi + 0x10], edx
// 0073eac0  8b07                 mov eax, dword ptr [edi]
// 0073eac2  8b5028               mov edx, dword ptr [eax + 0x28]
// 0073eac5  6aff                 push -1
// 0073eac7  8bcf                 mov ecx, edi
// 0073eac9  ffd2                 call edx
// 0073eacb  8b8360030000         mov eax, dword ptr [ebx + 0x360]
// 0073ead1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073ead5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073ead9  894830               mov dword ptr [eax + 0x30], ecx
// 0073eadc  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073eae0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0073eae4  894500               mov dword ptr [ebp], eax
// 0073eae7  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073eaeb  895614               mov dword ptr [esi + 0x14], edx
// 0073eaee  8b542430             mov edx, dword ptr [esp + 0x30]
// 0073eaf2  894d04               mov dword ptr [ebp + 4], ecx
// 0073eaf5  895508               mov dword ptr [ebp + 8], edx
// 0073eaf8  8d4c241c             lea ecx, [esp + 0x1c]
// 0073eafc  89450c               mov dword ptr [ebp + 0xc], eax
// 0073eaff  ff1510fd8900         call dword ptr [0x89fd10]
// 0073eb05  8d4c243c             lea ecx, [esp + 0x3c]
// 0073eb09  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 0073eb14  c744243cac3c8f00     mov dword ptr [esp + 0x3c], 0x8f3cac
// 0073eb1c  e847a8fdff           call 0x719368
// 0073eb21  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073eb25  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0073eb2c  64890d00000000       mov dword ptr fs:[0], ecx
// 0073eb33  59                   pop ecx
// 0073eb34  5f                   pop edi
// 0073eb35  5e                   pop esi
// 0073eb36  5d                   pop ebp
// 0073eb37  5b                   pop ebx
// 0073eb38  81c4a8000000         add esp, 0xa8
// 0073eb3e  c20800               ret 8
// copied from an identical function in another client (function ?PaginateTo@CXTPReportView@@MAEHPAVCDC@@PAUCPrintInfo@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportView.cpp