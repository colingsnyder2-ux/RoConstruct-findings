// roc 2009-06 007cc9c0  unit: CXTRegistryManager  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cc9c0
//
// 007cc9c0  83ec10               sub esp, 0x10
// 007cc9c3  56                   push esi
// 007cc9c4  8bf1                 mov esi, ecx
// 007cc9c6  e8b5ffffff           call 0x7cc980
// 007cc9cb  85c0                 test eax, eax
// 007cc9cd  7507                 jne 0x7cc9d6
// 007cc9cf  5e                   pop esi
// 007cc9d0  83c410               add esp, 0x10
// 007cc9d3  c20400               ret 4
// 007cc9d6  8b4e04               mov ecx, dword ptr [esi + 4]
// 007cc9d9  55                   push ebp
// 007cc9da  57                   push edi
// 007cc9db  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007cc9df  8d442410             lea eax, [esp + 0x10]
// 007cc9e3  50                   push eax
// 007cc9e4  33ed                 xor ebp, ebp
// 007cc9e6  57                   push edi
// 007cc9e7  55                   push ebp
// 007cc9e8  6870ca8a00           push 0x8aca70
// 007cc9ed  51                   push ecx
// 007cc9ee  896c242c             mov dword ptr [esp + 0x2c], ebp
// 007cc9f2  896c2424             mov dword ptr [esp + 0x24], ebp
// 007cc9f6  896c2420             mov dword ptr [esp + 0x20], ebp
// 007cc9fa  ff1510e08900         call dword ptr [0x89e010]
// 007cca00  894610               mov dword ptr [esi + 0x10], eax
// 007cca03  3bc5                 cmp eax, ebp
// 007cca05  7427                 je 0x7cca2e
// 007cca07  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007cca0b  8b3508e08900         mov esi, dword ptr [0x89e008]
// 007cca11  3bc5                 cmp eax, ebp
// 007cca13  7403                 je 0x7cca18
// 007cca15  50                   push eax
// 007cca16  ffd6                 call esi
// 007cca18  8b442410             mov eax, dword ptr [esp + 0x10]
// 007cca1c  3bc5                 cmp eax, ebp
// 007cca1e  7403                 je 0x7cca23
// 007cca20  50                   push eax
// 007cca21  ffd6                 call esi
// 007cca23  5f                   pop edi
// 007cca24  5d                   pop ebp
// 007cca25  33c0                 xor eax, eax
// 007cca27  5e                   pop esi
// 007cca28  83c410               add esp, 0x10
// 007cca2b  c20400               ret 4
// 007cca2e  8b4e08               mov ecx, dword ptr [esi + 8]
// 007cca31  53                   push ebx
// 007cca32  8b1d0ce08900         mov ebx, dword ptr [0x89e00c]
// 007cca38  8d542418             lea edx, [esp + 0x18]
// 007cca3c  52                   push edx
// 007cca3d  8b542418             mov edx, dword ptr [esp + 0x18]
// 007cca41  8d442414             lea eax, [esp + 0x14]
// 007cca45  50                   push eax
// 007cca46  55                   push ebp
// 007cca47  57                   push edi
// 007cca48  55                   push ebp
// 007cca49  55                   push ebp
// 007cca4a  55                   push ebp
// 007cca4b  51                   push ecx
// 007cca4c  52                   push edx
// 007cca4d  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007cca51  ffd3                 call ebx
// 007cca53  894610               mov dword ptr [esi + 0x10], eax
// 007cca56  3bc5                 cmp eax, ebp
// 007cca58  740c                 je 0x7cca66
// 007cca5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007cca5e  8b3508e08900         mov esi, dword ptr [0x89e008]
// 007cca64  eb2b                 jmp 0x7cca91
// 007cca66  8b560c               mov edx, dword ptr [esi + 0xc]
// 007cca69  8d442418             lea eax, [esp + 0x18]
// 007cca6d  50                   push eax
// 007cca6e  8b442414             mov eax, dword ptr [esp + 0x14]
// 007cca72  8d4c2420             lea ecx, [esp + 0x20]
// 007cca76  51                   push ecx
// 007cca77  55                   push ebp
// 007cca78  57                   push edi
// 007cca79  55                   push ebp
// 007cca7a  55                   push ebp
// 007cca7b  55                   push ebp
// 007cca7c  52                   push edx
// 007cca7d  50                   push eax
// 007cca7e  ffd3                 call ebx
// 007cca80  894610               mov dword ptr [esi + 0x10], eax
// 007cca83  8b3508e08900         mov esi, dword ptr [0x89e008]
// 007cca89  3bc5                 cmp eax, ebp
// 007cca8b  8b442410             mov eax, dword ptr [esp + 0x10]
// 007cca8f  741e                 je 0x7ccaaf
// 007cca91  3bc5                 cmp eax, ebp
// 007cca93  7403                 je 0x7cca98
// 007cca95  50                   push eax
// 007cca96  ffd6                 call esi
// 007cca98  8b442414             mov eax, dword ptr [esp + 0x14]
// 007cca9c  3bc5                 cmp eax, ebp
// 007cca9e  7403                 je 0x7ccaa3
// 007ccaa0  50                   push eax
// 007ccaa1  ffd6                 call esi
// 007ccaa3  5b                   pop ebx
// 007ccaa4  5f                   pop edi
// 007ccaa5  5d                   pop ebp
// 007ccaa6  33c0                 xor eax, eax
// 007ccaa8  5e                   pop esi
// 007ccaa9  83c410               add esp, 0x10
// 007ccaac  c20400               ret 4
// 007ccaaf  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007ccab3  3bc5                 cmp eax, ebp
// 007ccab5  7403                 je 0x7ccaba
// 007ccab7  50                   push eax
// 007ccab8  ffd6                 call esi
// 007ccaba  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ccabe  3bc5                 cmp eax, ebp
// 007ccac0  7403                 je 0x7ccac5
// 007ccac2  50                   push eax
// 007ccac3  ffd6                 call esi
// 007ccac5  5b                   pop ebx
// 007ccac6  8bc7                 mov eax, edi
// 007ccac8  5f                   pop edi
// 007ccac9  5d                   pop ebp
// 007ccaca  5e                   pop esi
// 007ccacb  83c410               add esp, 0x10
// 007ccace  c20400               ret 4
// copied from an identical function in another client (function ?GetAppRegistryKey@CXTRegistryManager@@MAEPAUHKEY__@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp