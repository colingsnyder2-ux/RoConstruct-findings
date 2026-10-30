// roc 2010-06 0085b900  unit: CXTRegistryManager  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085b900
//
// 0085b900  83ec10               sub esp, 0x10
// 0085b903  56                   push esi
// 0085b904  8bf1                 mov esi, ecx
// 0085b906  e8b5ffffff           call 0x85b8c0
// 0085b90b  85c0                 test eax, eax
// 0085b90d  7507                 jne 0x85b916
// 0085b90f  5e                   pop esi
// 0085b910  83c410               add esp, 0x10
// 0085b913  c20400               ret 4
// 0085b916  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085b919  55                   push ebp
// 0085b91a  57                   push edi
// 0085b91b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0085b91f  8d442410             lea eax, [esp + 0x10]
// 0085b923  50                   push eax
// 0085b924  33ed                 xor ebp, ebp
// 0085b926  57                   push edi
// 0085b927  55                   push ebp
// 0085b928  685801a000           push 0xa00158
// 0085b92d  51                   push ecx
// 0085b92e  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0085b932  896c2424             mov dword ptr [esp + 0x24], ebp
// 0085b936  896c2420             mov dword ptr [esp + 0x20], ebp
// 0085b93a  ff1518a09e00         call dword ptr [0x9ea018]
// 0085b940  894610               mov dword ptr [esi + 0x10], eax
// 0085b943  3bc5                 cmp eax, ebp
// 0085b945  7427                 je 0x85b96e
// 0085b947  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085b94b  8b3510a09e00         mov esi, dword ptr [0x9ea010]
// 0085b951  3bc5                 cmp eax, ebp
// 0085b953  7403                 je 0x85b958
// 0085b955  50                   push eax
// 0085b956  ffd6                 call esi
// 0085b958  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085b95c  3bc5                 cmp eax, ebp
// 0085b95e  7403                 je 0x85b963
// 0085b960  50                   push eax
// 0085b961  ffd6                 call esi
// 0085b963  5f                   pop edi
// 0085b964  5d                   pop ebp
// 0085b965  33c0                 xor eax, eax
// 0085b967  5e                   pop esi
// 0085b968  83c410               add esp, 0x10
// 0085b96b  c20400               ret 4
// 0085b96e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0085b971  53                   push ebx
// 0085b972  8b1d14a09e00         mov ebx, dword ptr [0x9ea014]
// 0085b978  8d542418             lea edx, [esp + 0x18]
// 0085b97c  52                   push edx
// 0085b97d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085b981  8d442414             lea eax, [esp + 0x14]
// 0085b985  50                   push eax
// 0085b986  55                   push ebp
// 0085b987  57                   push edi
// 0085b988  55                   push ebp
// 0085b989  55                   push ebp
// 0085b98a  55                   push ebp
// 0085b98b  51                   push ecx
// 0085b98c  52                   push edx
// 0085b98d  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0085b991  ffd3                 call ebx
// 0085b993  894610               mov dword ptr [esi + 0x10], eax
// 0085b996  3bc5                 cmp eax, ebp
// 0085b998  740c                 je 0x85b9a6
// 0085b99a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085b99e  8b3510a09e00         mov esi, dword ptr [0x9ea010]
// 0085b9a4  eb2b                 jmp 0x85b9d1
// 0085b9a6  8b560c               mov edx, dword ptr [esi + 0xc]
// 0085b9a9  8d442418             lea eax, [esp + 0x18]
// 0085b9ad  50                   push eax
// 0085b9ae  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085b9b2  8d4c2420             lea ecx, [esp + 0x20]
// 0085b9b6  51                   push ecx
// 0085b9b7  55                   push ebp
// 0085b9b8  57                   push edi
// 0085b9b9  55                   push ebp
// 0085b9ba  55                   push ebp
// 0085b9bb  55                   push ebp
// 0085b9bc  52                   push edx
// 0085b9bd  50                   push eax
// 0085b9be  ffd3                 call ebx
// 0085b9c0  894610               mov dword ptr [esi + 0x10], eax
// 0085b9c3  8b3510a09e00         mov esi, dword ptr [0x9ea010]
// 0085b9c9  3bc5                 cmp eax, ebp
// 0085b9cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085b9cf  741e                 je 0x85b9ef
// 0085b9d1  3bc5                 cmp eax, ebp
// 0085b9d3  7403                 je 0x85b9d8
// 0085b9d5  50                   push eax
// 0085b9d6  ffd6                 call esi
// 0085b9d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085b9dc  3bc5                 cmp eax, ebp
// 0085b9de  7403                 je 0x85b9e3
// 0085b9e0  50                   push eax
// 0085b9e1  ffd6                 call esi
// 0085b9e3  5b                   pop ebx
// 0085b9e4  5f                   pop edi
// 0085b9e5  5d                   pop ebp
// 0085b9e6  33c0                 xor eax, eax
// 0085b9e8  5e                   pop esi
// 0085b9e9  83c410               add esp, 0x10
// 0085b9ec  c20400               ret 4
// 0085b9ef  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085b9f3  3bc5                 cmp eax, ebp
// 0085b9f5  7403                 je 0x85b9fa
// 0085b9f7  50                   push eax
// 0085b9f8  ffd6                 call esi
// 0085b9fa  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085b9fe  3bc5                 cmp eax, ebp
// 0085ba00  7403                 je 0x85ba05
// 0085ba02  50                   push eax
// 0085ba03  ffd6                 call esi
// 0085ba05  5b                   pop ebx
// 0085ba06  8bc7                 mov eax, edi
// 0085ba08  5f                   pop edi
// 0085ba09  5d                   pop ebp
// 0085ba0a  5e                   pop esi
// 0085ba0b  83c410               add esp, 0x10
// 0085ba0e  c20400               ret 4
// copied from an identical function in another client (function ?GetAppRegistryKey@CXTRegistryManager@@MAEPAUHKEY__@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp