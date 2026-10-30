// roc 2012-06 00a30fb0  unit: CXTRegistryManager  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30fb0
//
// 00a30fb0  83ec10               sub esp, 0x10
// 00a30fb3  56                   push esi
// 00a30fb4  8bf1                 mov esi, ecx
// 00a30fb6  e8b5ffffff           call 0xa30f70
// 00a30fbb  85c0                 test eax, eax
// 00a30fbd  7507                 jne 0xa30fc6
// 00a30fbf  5e                   pop esi
// 00a30fc0  83c410               add esp, 0x10
// 00a30fc3  c20400               ret 4
// 00a30fc6  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a30fc9  55                   push ebp
// 00a30fca  57                   push edi
// 00a30fcb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a30fcf  8d442410             lea eax, [esp + 0x10]
// 00a30fd3  50                   push eax
// 00a30fd4  33ed                 xor ebp, ebp
// 00a30fd6  57                   push edi
// 00a30fd7  55                   push ebp
// 00a30fd8  684c35b400           push 0xb4354c
// 00a30fdd  51                   push ecx
// 00a30fde  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00a30fe2  896c2424             mov dword ptr [esp + 0x24], ebp
// 00a30fe6  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a30fea  ff150c20b200         call dword ptr [0xb2200c]
// 00a30ff0  894610               mov dword ptr [esi + 0x10], eax
// 00a30ff3  3bc5                 cmp eax, ebp
// 00a30ff5  7427                 je 0xa3101e
// 00a30ff7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a30ffb  8b350420b200         mov esi, dword ptr [0xb22004]
// 00a31001  3bc5                 cmp eax, ebp
// 00a31003  7403                 je 0xa31008
// 00a31005  50                   push eax
// 00a31006  ffd6                 call esi
// 00a31008  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3100c  3bc5                 cmp eax, ebp
// 00a3100e  7403                 je 0xa31013
// 00a31010  50                   push eax
// 00a31011  ffd6                 call esi
// 00a31013  5f                   pop edi
// 00a31014  5d                   pop ebp
// 00a31015  33c0                 xor eax, eax
// 00a31017  5e                   pop esi
// 00a31018  83c410               add esp, 0x10
// 00a3101b  c20400               ret 4
// 00a3101e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a31021  53                   push ebx
// 00a31022  8b1d0820b200         mov ebx, dword ptr [0xb22008]
// 00a31028  8d542418             lea edx, [esp + 0x18]
// 00a3102c  52                   push edx
// 00a3102d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a31031  8d442414             lea eax, [esp + 0x14]
// 00a31035  50                   push eax
// 00a31036  55                   push ebp
// 00a31037  57                   push edi
// 00a31038  55                   push ebp
// 00a31039  55                   push ebp
// 00a3103a  55                   push ebp
// 00a3103b  51                   push ecx
// 00a3103c  52                   push edx
// 00a3103d  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00a31041  ffd3                 call ebx
// 00a31043  894610               mov dword ptr [esi + 0x10], eax
// 00a31046  3bc5                 cmp eax, ebp
// 00a31048  740c                 je 0xa31056
// 00a3104a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3104e  8b350420b200         mov esi, dword ptr [0xb22004]
// 00a31054  eb2b                 jmp 0xa31081
// 00a31056  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a31059  8d442418             lea eax, [esp + 0x18]
// 00a3105d  50                   push eax
// 00a3105e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a31062  8d4c2420             lea ecx, [esp + 0x20]
// 00a31066  51                   push ecx
// 00a31067  55                   push ebp
// 00a31068  57                   push edi
// 00a31069  55                   push ebp
// 00a3106a  55                   push ebp
// 00a3106b  55                   push ebp
// 00a3106c  52                   push edx
// 00a3106d  50                   push eax
// 00a3106e  ffd3                 call ebx
// 00a31070  894610               mov dword ptr [esi + 0x10], eax
// 00a31073  8b350420b200         mov esi, dword ptr [0xb22004]
// 00a31079  3bc5                 cmp eax, ebp
// 00a3107b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3107f  741e                 je 0xa3109f
// 00a31081  3bc5                 cmp eax, ebp
// 00a31083  7403                 je 0xa31088
// 00a31085  50                   push eax
// 00a31086  ffd6                 call esi
// 00a31088  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3108c  3bc5                 cmp eax, ebp
// 00a3108e  7403                 je 0xa31093
// 00a31090  50                   push eax
// 00a31091  ffd6                 call esi
// 00a31093  5b                   pop ebx
// 00a31094  5f                   pop edi
// 00a31095  5d                   pop ebp
// 00a31096  33c0                 xor eax, eax
// 00a31098  5e                   pop esi
// 00a31099  83c410               add esp, 0x10
// 00a3109c  c20400               ret 4
// 00a3109f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a310a3  3bc5                 cmp eax, ebp
// 00a310a5  7403                 je 0xa310aa
// 00a310a7  50                   push eax
// 00a310a8  ffd6                 call esi
// 00a310aa  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a310ae  3bc5                 cmp eax, ebp
// 00a310b0  7403                 je 0xa310b5
// 00a310b2  50                   push eax
// 00a310b3  ffd6                 call esi
// 00a310b5  5b                   pop ebx
// 00a310b6  8bc7                 mov eax, edi
// 00a310b8  5f                   pop edi
// 00a310b9  5d                   pop ebp
// 00a310ba  5e                   pop esi
// 00a310bb  83c410               add esp, 0x10
// 00a310be  c20400               ret 4
// copied from an identical function in another client (function ?GetAppRegistryKey@CXTRegistryManager@@MAEPAUHKEY__@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp