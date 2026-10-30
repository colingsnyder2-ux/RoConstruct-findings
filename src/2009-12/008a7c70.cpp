// roc 2009-12 008a7c70  unit: CXTRegistryManager  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a7c70
//
// 008a7c70  6aff                 push -1
// 008a7c72  68d1279600           push 0x9627d1
// 008a7c77  64a100000000         mov eax, dword ptr fs:[0]
// 008a7c7d  50                   push eax
// 008a7c7e  51                   push ecx
// 008a7c7f  53                   push ebx
// 008a7c80  55                   push ebp
// 008a7c81  56                   push esi
// 008a7c82  57                   push edi
// 008a7c83  a10052b600           mov eax, dword ptr [0xb65200]
// 008a7c88  33c4                 xor eax, esp
// 008a7c8a  50                   push eax
// 008a7c8b  8d442418             lea eax, [esp + 0x18]
// 008a7c8f  64a300000000         mov dword ptr fs:[0], eax
// 008a7c95  8bf1                 mov esi, ecx
// 008a7c97  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008a7c9b  85ff                 test edi, edi
// 008a7c9d  0f84cd000000         je 0x8a7d70
// 008a7ca3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008a7ca7  85db                 test ebx, ebx
// 008a7ca9  0f84c1000000         je 0x8a7d70
// 008a7caf  c70700000000         mov dword ptr [edi], 0
// 008a7cb5  b91cbbb900           mov ecx, 0xb9bb1c
// 008a7cba  c70300000000         mov dword ptr [ebx], 0
// 008a7cc0  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a7cc6  84c0                 test al, al
// 008a7cc8  0f84c8000000         je 0x8a7d96
// 008a7cce  8bce                 mov ecx, esi
// 008a7cd0  e89bfaffff           call 0x8a7770
// 008a7cd5  85c0                 test eax, eax
// 008a7cd7  0f8493000000         je 0x8a7d70
// 008a7cdd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a7ce1  8b06                 mov eax, dword ptr [esi]
// 008a7ce3  8b5008               mov edx, dword ptr [eax + 8]
// 008a7ce6  6819000200           push 0x20019
// 008a7ceb  51                   push ecx
// 008a7cec  8bce                 mov ecx, esi
// 008a7cee  ffd2                 call edx
// 008a7cf0  8be8                 mov ebp, eax
// 008a7cf2  896c2428             mov dword ptr [esp + 0x28], ebp
// 008a7cf6  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008a7cfe  85ed                 test ebp, ebp
// 008a7d00  746e                 je 0x8a7d70
// 008a7d02  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008a7d06  8d442430             lea eax, [esp + 0x30]
// 008a7d0a  50                   push eax
// 008a7d0b  6a00                 push 0
// 008a7d0d  8d4c241c             lea ecx, [esp + 0x1c]
// 008a7d11  51                   push ecx
// 008a7d12  6a00                 push 0
// 008a7d14  53                   push ebx
// 008a7d15  55                   push ebp
// 008a7d16  ff1520b09800         call dword ptr [0x98b020]
// 008a7d1c  894610               mov dword ptr [esi + 0x10], eax
// 008a7d1f  85c0                 test eax, eax
// 008a7d21  7546                 jne 0x8a7d69
// 008a7d23  8b442430             mov eax, dword ptr [esp + 0x30]
// 008a7d27  8b542434             mov edx, dword ptr [esp + 0x34]
// 008a7d2b  50                   push eax
// 008a7d2c  8902                 mov dword ptr [edx], eax
// 008a7d2e  e80fbef4ff           call 0x7f3b42
// 008a7d33  83c404               add esp, 4
// 008a7d36  8d4c2430             lea ecx, [esp + 0x30]
// 008a7d3a  51                   push ecx
// 008a7d3b  50                   push eax
// 008a7d3c  8d54241c             lea edx, [esp + 0x1c]
// 008a7d40  52                   push edx
// 008a7d41  6a00                 push 0
// 008a7d43  53                   push ebx
// 008a7d44  55                   push ebp
// 008a7d45  8907                 mov dword ptr [edi], eax
// 008a7d47  ff1520b09800         call dword ptr [0x98b020]
// 008a7d4d  894610               mov dword ptr [esi + 0x10], eax
// 008a7d50  85c0                 test eax, eax
// 008a7d52  7434                 je 0x8a7d88
// 008a7d54  8b07                 mov eax, dword ptr [edi]
// 008a7d56  85c0                 test eax, eax
// 008a7d58  740f                 je 0x8a7d69
// 008a7d5a  50                   push eax
// 008a7d5b  e8a6bdf4ff           call 0x7f3b06
// 008a7d60  83c404               add esp, 4
// 008a7d63  c70700000000         mov dword ptr [edi], 0
// 008a7d69  55                   push ebp
// 008a7d6a  ff1508b09800         call dword ptr [0x98b008]
// 008a7d70  33c0                 xor eax, eax
// 008a7d72  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a7d76  64890d00000000       mov dword ptr fs:[0], ecx
// 008a7d7d  59                   pop ecx
// 008a7d7e  5f                   pop edi
// 008a7d7f  5e                   pop esi
// 008a7d80  5d                   pop ebp
// 008a7d81  5b                   pop ebx
// 008a7d82  83c410               add esp, 0x10
// 008a7d85  c21000               ret 0x10
// 008a7d88  55                   push ebp
// 008a7d89  ff1508b09800         call dword ptr [0x98b008]
// 008a7d8f  b801000000           mov eax, 1
// 008a7d94  ebdc                 jmp 0x8a7d72
// 008a7d96  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a7d9a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a7d9e  6a00                 push 0
// 008a7da0  50                   push eax
// 008a7da1  51                   push ecx
// 008a7da2  8d542440             lea edx, [esp + 0x40]
// 008a7da6  52                   push edx
// 008a7da7  8bce                 mov ecx, esi
// 008a7da9  e812fcffff           call 0x8a79c0
// 008a7dae  8d4c2434             lea ecx, [esp + 0x34]
// 008a7db2  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008a7dba  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a7dc0  8d4c2434             lea ecx, [esp + 0x34]
// 008a7dc4  84c0                 test al, al
// 008a7dc6  7408                 je 0x8a7dd0
// 008a7dc8  ff15c0de9800         call dword ptr [0x98dec0]
// 008a7dce  eba0                 jmp 0x8a7d70
// 008a7dd0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a7dd6  8be8                 mov ebp, eax
// 008a7dd8  99                   cdq 
// 008a7dd9  2bc2                 sub eax, edx
// 008a7ddb  d1f8                 sar eax, 1
// 008a7ddd  50                   push eax
// 008a7dde  8903                 mov dword ptr [ebx], eax
// 008a7de0  e85dbdf4ff           call 0x7f3b42
// 008a7de5  83c404               add esp, 4
// 008a7de8  33f6                 xor esi, esi
// 008a7dea  8907                 mov dword ptr [edi], eax
// 008a7dec  85ed                 test ebp, ebp
// 008a7dee  7e35                 jle 0x8a7e25
// 008a7df0  8d4601               lea eax, [esi + 1]
// 008a7df3  50                   push eax
// 008a7df4  8d4c2438             lea ecx, [esp + 0x38]
// 008a7df8  ff1510d59800         call dword ptr [0x98d510]
// 008a7dfe  8ad8                 mov bl, al
// 008a7e00  fecb                 dec bl
// 008a7e02  c0e304               shl bl, 4
// 008a7e05  56                   push esi
// 008a7e06  8d4c2438             lea ecx, [esp + 0x38]
// 008a7e0a  80eb41               sub bl, 0x41
// 008a7e0d  ff1510d59800         call dword ptr [0x98d510]
// 008a7e13  8b17                 mov edx, dword ptr [edi]
// 008a7e15  8bce                 mov ecx, esi
// 008a7e17  02c3                 add al, bl
// 008a7e19  d1e9                 shr ecx, 1
// 008a7e1b  83c602               add esi, 2
// 008a7e1e  3bf5                 cmp esi, ebp
// 008a7e20  880411               mov byte ptr [ecx + edx], al
// 008a7e23  7ccb                 jl 0x8a7df0
// 008a7e25  8d4c2434             lea ecx, [esp + 0x34]
// 008a7e29  ff15c0de9800         call dword ptr [0x98dec0]
// 008a7e2f  b801000000           mov eax, 1
// 008a7e34  e939ffffff           jmp 0x8a7d72
// copied from an identical function in another client (function ?GetProfileBinary@CXTRegistryManager@@QAEHPBD0PAPAEPAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTRegistryManager.cpp