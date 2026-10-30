// roc 2011-06 008b8ac0  unit: CXTRegistryManager  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8ac0
//
// 008b8ac0  83ec10               sub esp, 0x10
// 008b8ac3  56                   push esi
// 008b8ac4  8bf1                 mov esi, ecx
// 008b8ac6  e8b5ffffff           call 0x8b8a80
// 008b8acb  85c0                 test eax, eax
// 008b8acd  7507                 jne 0x8b8ad6
// 008b8acf  5e                   pop esi
// 008b8ad0  83c410               add esp, 0x10
// 008b8ad3  c20400               ret 4
// 008b8ad6  8b4e04               mov ecx, dword ptr [esi + 4]
// 008b8ad9  55                   push ebp
// 008b8ada  57                   push edi
// 008b8adb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008b8adf  8d442410             lea eax, [esp + 0x10]
// 008b8ae3  50                   push eax
// 008b8ae4  33ed                 xor ebp, ebp
// 008b8ae6  57                   push edi
// 008b8ae7  55                   push ebp
// 008b8ae8  6820b7a500           push 0xa5b720
// 008b8aed  51                   push ecx
// 008b8aee  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008b8af2  896c2424             mov dword ptr [esp + 0x24], ebp
// 008b8af6  896c2420             mov dword ptr [esp + 0x20], ebp
// 008b8afa  ff154000a400         call dword ptr [0xa40040]
// 008b8b00  894610               mov dword ptr [esi + 0x10], eax
// 008b8b03  3bc5                 cmp eax, ebp
// 008b8b05  7427                 je 0x8b8b2e
// 008b8b07  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b8b0b  8b350400a400         mov esi, dword ptr [0xa40004]
// 008b8b11  3bc5                 cmp eax, ebp
// 008b8b13  7403                 je 0x8b8b18
// 008b8b15  50                   push eax
// 008b8b16  ffd6                 call esi
// 008b8b18  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b8b1c  3bc5                 cmp eax, ebp
// 008b8b1e  7403                 je 0x8b8b23
// 008b8b20  50                   push eax
// 008b8b21  ffd6                 call esi
// 008b8b23  5f                   pop edi
// 008b8b24  5d                   pop ebp
// 008b8b25  33c0                 xor eax, eax
// 008b8b27  5e                   pop esi
// 008b8b28  83c410               add esp, 0x10
// 008b8b2b  c20400               ret 4
// 008b8b2e  8b4e08               mov ecx, dword ptr [esi + 8]
// 008b8b31  53                   push ebx
// 008b8b32  8b1d3c00a400         mov ebx, dword ptr [0xa4003c]
// 008b8b38  8d542418             lea edx, [esp + 0x18]
// 008b8b3c  52                   push edx
// 008b8b3d  8b542418             mov edx, dword ptr [esp + 0x18]
// 008b8b41  8d442414             lea eax, [esp + 0x14]
// 008b8b45  50                   push eax
// 008b8b46  55                   push ebp
// 008b8b47  57                   push edi
// 008b8b48  55                   push ebp
// 008b8b49  55                   push ebp
// 008b8b4a  55                   push ebp
// 008b8b4b  51                   push ecx
// 008b8b4c  52                   push edx
// 008b8b4d  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008b8b51  ffd3                 call ebx
// 008b8b53  894610               mov dword ptr [esi + 0x10], eax
// 008b8b56  3bc5                 cmp eax, ebp
// 008b8b58  740c                 je 0x8b8b66
// 008b8b5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b8b5e  8b350400a400         mov esi, dword ptr [0xa40004]
// 008b8b64  eb2b                 jmp 0x8b8b91
// 008b8b66  8b560c               mov edx, dword ptr [esi + 0xc]
// 008b8b69  8d442418             lea eax, [esp + 0x18]
// 008b8b6d  50                   push eax
// 008b8b6e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b8b72  8d4c2420             lea ecx, [esp + 0x20]
// 008b8b76  51                   push ecx
// 008b8b77  55                   push ebp
// 008b8b78  57                   push edi
// 008b8b79  55                   push ebp
// 008b8b7a  55                   push ebp
// 008b8b7b  55                   push ebp
// 008b8b7c  52                   push edx
// 008b8b7d  50                   push eax
// 008b8b7e  ffd3                 call ebx
// 008b8b80  894610               mov dword ptr [esi + 0x10], eax
// 008b8b83  8b350400a400         mov esi, dword ptr [0xa40004]
// 008b8b89  3bc5                 cmp eax, ebp
// 008b8b8b  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b8b8f  741e                 je 0x8b8baf
// 008b8b91  3bc5                 cmp eax, ebp
// 008b8b93  7403                 je 0x8b8b98
// 008b8b95  50                   push eax
// 008b8b96  ffd6                 call esi
// 008b8b98  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b8b9c  3bc5                 cmp eax, ebp
// 008b8b9e  7403                 je 0x8b8ba3
// 008b8ba0  50                   push eax
// 008b8ba1  ffd6                 call esi
// 008b8ba3  5b                   pop ebx
// 008b8ba4  5f                   pop edi
// 008b8ba5  5d                   pop ebp
// 008b8ba6  33c0                 xor eax, eax
// 008b8ba8  5e                   pop esi
// 008b8ba9  83c410               add esp, 0x10
// 008b8bac  c20400               ret 4
// 008b8baf  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b8bb3  3bc5                 cmp eax, ebp
// 008b8bb5  7403                 je 0x8b8bba
// 008b8bb7  50                   push eax
// 008b8bb8  ffd6                 call esi
// 008b8bba  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b8bbe  3bc5                 cmp eax, ebp
// 008b8bc0  7403                 je 0x8b8bc5
// 008b8bc2  50                   push eax
// 008b8bc3  ffd6                 call esi
// 008b8bc5  5b                   pop ebx
// 008b8bc6  8bc7                 mov eax, edi
// 008b8bc8  5f                   pop edi
// 008b8bc9  5d                   pop ebp
// 008b8bca  5e                   pop esi
// 008b8bcb  83c410               add esp, 0x10
// 008b8bce  c20400               ret 4
// copied from an identical function in another client (function ?GetAppRegistryKey@CXTRegistryManager@@MAEPAUHKEY__@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp