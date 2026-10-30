// roc 2011-06 008b8f80  unit: CXTRegistryManager  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8f80
//
// 008b8f80  6aff                 push -1
// 008b8f82  6881b9a000           push 0xa0b981
// 008b8f87  64a100000000         mov eax, dword ptr fs:[0]
// 008b8f8d  50                   push eax
// 008b8f8e  51                   push ecx
// 008b8f8f  53                   push ebx
// 008b8f90  55                   push ebp
// 008b8f91  56                   push esi
// 008b8f92  57                   push edi
// 008b8f93  a12058c900           mov eax, dword ptr [0xc95820]
// 008b8f98  33c4                 xor eax, esp
// 008b8f9a  50                   push eax
// 008b8f9b  8d442418             lea eax, [esp + 0x18]
// 008b8f9f  64a300000000         mov dword ptr fs:[0], eax
// 008b8fa5  8bf1                 mov esi, ecx
// 008b8fa7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008b8fab  85ff                 test edi, edi
// 008b8fad  0f84cd000000         je 0x8b9080
// 008b8fb3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008b8fb7  85db                 test ebx, ebx
// 008b8fb9  0f84c1000000         je 0x8b9080
// 008b8fbf  c70700000000         mov dword ptr [edi], 0
// 008b8fc5  b9388fd100           mov ecx, 0xd18f38
// 008b8fca  c70300000000         mov dword ptr [ebx], 0
// 008b8fd0  ff15b026a400         call dword ptr [0xa426b0]
// 008b8fd6  84c0                 test al, al
// 008b8fd8  0f84c8000000         je 0x8b90a6
// 008b8fde  8bce                 mov ecx, esi
// 008b8fe0  e89bfaffff           call 0x8b8a80
// 008b8fe5  85c0                 test eax, eax
// 008b8fe7  0f8493000000         je 0x8b9080
// 008b8fed  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b8ff1  8b06                 mov eax, dword ptr [esi]
// 008b8ff3  8b5008               mov edx, dword ptr [eax + 8]
// 008b8ff6  6819000200           push 0x20019
// 008b8ffb  51                   push ecx
// 008b8ffc  8bce                 mov ecx, esi
// 008b8ffe  ffd2                 call edx
// 008b9000  8be8                 mov ebp, eax
// 008b9002  896c2428             mov dword ptr [esp + 0x28], ebp
// 008b9006  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008b900e  85ed                 test ebp, ebp
// 008b9010  746e                 je 0x8b9080
// 008b9012  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008b9016  8d442430             lea eax, [esp + 0x30]
// 008b901a  50                   push eax
// 008b901b  6a00                 push 0
// 008b901d  8d4c241c             lea ecx, [esp + 0x1c]
// 008b9021  51                   push ecx
// 008b9022  6a00                 push 0
// 008b9024  53                   push ebx
// 008b9025  55                   push ebp
// 008b9026  ff153400a400         call dword ptr [0xa40034]
// 008b902c  894610               mov dword ptr [esi + 0x10], eax
// 008b902f  85c0                 test eax, eax
// 008b9031  7546                 jne 0x8b9079
// 008b9033  8b442430             mov eax, dword ptr [esp + 0x30]
// 008b9037  8b542434             mov edx, dword ptr [esp + 0x34]
// 008b903b  50                   push eax
// 008b903c  8902                 mov dword ptr [edx], eax
// 008b903e  e8fd12f5ff           call 0x80a340
// 008b9043  83c404               add esp, 4
// 008b9046  8d4c2430             lea ecx, [esp + 0x30]
// 008b904a  51                   push ecx
// 008b904b  50                   push eax
// 008b904c  8d54241c             lea edx, [esp + 0x1c]
// 008b9050  52                   push edx
// 008b9051  6a00                 push 0
// 008b9053  53                   push ebx
// 008b9054  55                   push ebp
// 008b9055  8907                 mov dword ptr [edi], eax
// 008b9057  ff153400a400         call dword ptr [0xa40034]
// 008b905d  894610               mov dword ptr [esi + 0x10], eax
// 008b9060  85c0                 test eax, eax
// 008b9062  7434                 je 0x8b9098
// 008b9064  8b07                 mov eax, dword ptr [edi]
// 008b9066  85c0                 test eax, eax
// 008b9068  740f                 je 0x8b9079
// 008b906a  50                   push eax
// 008b906b  e89412f5ff           call 0x80a304
// 008b9070  83c404               add esp, 4
// 008b9073  c70700000000         mov dword ptr [edi], 0
// 008b9079  55                   push ebp
// 008b907a  ff150400a400         call dword ptr [0xa40004]
// 008b9080  33c0                 xor eax, eax
// 008b9082  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b9086  64890d00000000       mov dword ptr fs:[0], ecx
// 008b908d  59                   pop ecx
// 008b908e  5f                   pop edi
// 008b908f  5e                   pop esi
// 008b9090  5d                   pop ebp
// 008b9091  5b                   pop ebx
// 008b9092  83c410               add esp, 0x10
// 008b9095  c21000               ret 0x10
// 008b9098  55                   push ebp
// 008b9099  ff150400a400         call dword ptr [0xa40004]
// 008b909f  b801000000           mov eax, 1
// 008b90a4  ebdc                 jmp 0x8b9082
// 008b90a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b90aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b90ae  6a00                 push 0
// 008b90b0  50                   push eax
// 008b90b1  51                   push ecx
// 008b90b2  8d542440             lea edx, [esp + 0x40]
// 008b90b6  52                   push edx
// 008b90b7  8bce                 mov ecx, esi
// 008b90b9  e812fcffff           call 0x8b8cd0
// 008b90be  8d4c2434             lea ecx, [esp + 0x34]
// 008b90c2  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008b90ca  ff15b026a400         call dword ptr [0xa426b0]
// 008b90d0  8d4c2434             lea ecx, [esp + 0x34]
// 008b90d4  84c0                 test al, al
// 008b90d6  7408                 je 0x8b90e0
// 008b90d8  ff15082ea400         call dword ptr [0xa42e08]
// 008b90de  eba0                 jmp 0x8b9080
// 008b90e0  ff15a826a400         call dword ptr [0xa426a8]
// 008b90e6  8be8                 mov ebp, eax
// 008b90e8  99                   cdq 
// 008b90e9  2bc2                 sub eax, edx
// 008b90eb  d1f8                 sar eax, 1
// 008b90ed  50                   push eax
// 008b90ee  8903                 mov dword ptr [ebx], eax
// 008b90f0  e84b12f5ff           call 0x80a340
// 008b90f5  83c404               add esp, 4
// 008b90f8  33f6                 xor esi, esi
// 008b90fa  8907                 mov dword ptr [edi], eax
// 008b90fc  85ed                 test ebp, ebp
// 008b90fe  7e35                 jle 0x8b9135
// 008b9100  8d4601               lea eax, [esi + 1]
// 008b9103  50                   push eax
// 008b9104  8d4c2438             lea ecx, [esp + 0x38]
// 008b9108  ff153c25a400         call dword ptr [0xa4253c]
// 008b910e  8ad8                 mov bl, al
// 008b9110  fecb                 dec bl
// 008b9112  c0e304               shl bl, 4
// 008b9115  56                   push esi
// 008b9116  8d4c2438             lea ecx, [esp + 0x38]
// 008b911a  80eb41               sub bl, 0x41
// 008b911d  ff153c25a400         call dword ptr [0xa4253c]
// 008b9123  8b17                 mov edx, dword ptr [edi]
// 008b9125  8bce                 mov ecx, esi
// 008b9127  02c3                 add al, bl
// 008b9129  d1e9                 shr ecx, 1
// 008b912b  83c602               add esi, 2
// 008b912e  3bf5                 cmp esi, ebp
// 008b9130  880411               mov byte ptr [ecx + edx], al
// 008b9133  7ccb                 jl 0x8b9100
// 008b9135  8d4c2434             lea ecx, [esp + 0x34]
// 008b9139  ff15082ea400         call dword ptr [0xa42e08]
// 008b913f  b801000000           mov eax, 1
// 008b9144  e939ffffff           jmp 0x8b9082
// copied from an identical function in another client (function ?GetProfileBinary@CXTRegistryManager@@QAEHPBD0PAPAEPAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTRegistryManager.cpp