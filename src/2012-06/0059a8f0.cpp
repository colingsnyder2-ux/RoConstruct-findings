// roc 2012-06 0059a8f0  unit: VAuthoringSettings::?$FactoryProduct  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a8f0
//
// 0059a8f0  51                   push ecx
// 0059a8f1  53                   push ebx
// 0059a8f2  894c2404             mov dword ptr [esp + 4], ecx
// 0059a8f6  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0059a8f9  55                   push ebp
// 0059a8fa  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0059a8fe  b809cb3d8d           mov eax, 0x8d3dcb09
// 0059a903  f7e1                 mul ecx
// 0059a905  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059a909  56                   push esi
// 0059a90a  57                   push edi
// 0059a90b  55                   push ebp
// 0059a90c  50                   push eax
// 0059a90d  8bf2                 mov esi, edx
// 0059a90f  51                   push ecx
// 0059a910  33db                 xor ebx, ebx
// 0059a912  c1ee07               shr esi, 7
// 0059a915  ff159404d900         call dword ptr [0xd90494]
// 0059a91b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0059a91f  83c40c               add esp, 0xc
// 0059a922  894708               mov dword ptr [edi + 8], eax
// 0059a925  85c0                 test eax, eax
// 0059a927  7430                 je 0x59a959
// 0059a929  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a92d  55                   push ebp
// 0059a92e  51                   push ecx
// 0059a92f  8d14b500000000       lea edx, [esi*4]
// 0059a936  52                   push edx
// 0059a937  ff159404d900         call dword ptr [0xd90494]
// 0059a93d  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059a940  83c40c               add esp, 0xc
// 0059a943  8907                 mov dword ptr [edi], eax
// 0059a945  85c0                 test eax, eax
// 0059a947  751a                 jne 0x59a963
// 0059a949  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059a94d  55                   push ebp
// 0059a94e  50                   push eax
// 0059a94f  51                   push ecx
// 0059a950  ff159c04d900         call dword ptr [0xd9049c]
// 0059a956  83c40c               add esp, 0xc
// 0059a959  5f                   pop edi
// 0059a95a  5e                   pop esi
// 0059a95b  5d                   pop ebp
// 0059a95c  32c0                 xor al, al
// 0059a95e  5b                   pop ebx
// 0059a95f  59                   pop ecx
// 0059a960  c21000               ret 0x10
// 0059a963  85f6                 test esi, esi
// 0059a965  7e1d                 jle 0x59a984
// 0059a967  eb07                 jmp 0x59a970
// 0059a969  8da42400000000       lea esp, [esp]
// 0059a970  89b9e0000000         mov dword ptr [ecx + 0xe0], edi
// 0059a976  890c98               mov dword ptr [eax + ebx*4], ecx
// 0059a979  43                   inc ebx
// 0059a97a  81c1e8000000         add ecx, 0xe8
// 0059a980  3bde                 cmp ebx, esi
// 0059a982  7cec                 jl 0x59a970
// 0059a984  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a988  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059a98c  897704               mov dword ptr [edi + 4], esi
// 0059a98f  8b02                 mov eax, dword ptr [edx]
// 0059a991  89470c               mov dword ptr [edi + 0xc], eax
// 0059a994  894f10               mov dword ptr [edi + 0x10], ecx
// 0059a997  5f                   pop edi
// 0059a998  5e                   pop esi
// 0059a999  5d                   pop ebp
// 0059a99a  b001                 mov al, 1
// 0059a99c  5b                   pop ebx
// 0059a99d  59                   pop ecx
// 0059a99e  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?InitPage@?$MemoryPool@UInternalPacket@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
