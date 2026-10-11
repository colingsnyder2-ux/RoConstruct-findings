// roc 2007-08 004ba530  unit: RakPeer  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba530
//
// 004ba530  6aff                 push -1
// 004ba532  685bb67400           push 0x74b65b
// 004ba537  64a100000000         mov eax, dword ptr fs:[0]
// 004ba53d  50                   push eax
// 004ba53e  81ec24010000         sub esp, 0x124
// 004ba544  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ba549  33c4                 xor eax, esp
// 004ba54b  89842420010000       mov dword ptr [esp + 0x120], eax
// 004ba552  53                   push ebx
// 004ba553  55                   push ebp
// 004ba554  56                   push esi
// 004ba555  57                   push edi
// 004ba556  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ba55b  33c4                 xor eax, esp
// 004ba55d  50                   push eax
// 004ba55e  8d842438010000       lea eax, [esp + 0x138]
// 004ba565  64a300000000         mov dword ptr fs:[0], eax
// 004ba56b  8bac2448010000       mov ebp, dword ptr [esp + 0x148]
// 004ba572  8bb42450010000       mov esi, dword ptr [esp + 0x150]
// 004ba579  8bf9                 mov edi, ecx
// 004ba57b  8b07                 mov eax, dword ptr [edi]
// 004ba57d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004ba580  ffd2                 call edx
// 004ba582  84c0                 test al, al
// 004ba584  0f8416010000         je 0x4ba6a0
// 004ba58a  85ed                 test ebp, ebp
// 004ba58c  0f840e010000         je 0x4ba6a0
// 004ba592  8a4500               mov al, byte ptr [ebp]
// 004ba595  3c30                 cmp al, 0x30
// 004ba597  7c04                 jl 0x4ba59d
// 004ba599  3c32                 cmp al, 0x32
// 004ba59b  7e0d                 jle 0x4ba5aa
// 004ba59d  55                   push ebp
// 004ba59e  b9e9ef8b00           mov ecx, 0x8befe9
// 004ba5a3  e858a10000           call 0x4c4700
// 004ba5a8  8be8                 mov ebp, eax
// 004ba5aa  55                   push ebp
// 004ba5ab  8d4c241c             lea ecx, [esp + 0x1c]
// 004ba5af  e8dc8ffeff           call 0x4a3590
// 004ba5b4  8b9c244c010000       mov ebx, dword ptr [esp + 0x14c]
// 004ba5bb  8d4c2420             lea ecx, [esp + 0x20]
// 004ba5bf  66895c241c           mov word ptr [esp + 0x1c], bx
// 004ba5c4  e85752feff           call 0x49f820
// 004ba5c9  6a01                 push 1
// 004ba5cb  6a08                 push 8
// 004ba5cd  8d44241c             lea eax, [esp + 0x1c]
// 004ba5d1  50                   push eax
// 004ba5d2  8d4c242c             lea ecx, [esp + 0x2c]
// 004ba5d6  c784244c01000000000000 mov dword ptr [esp + 0x14c], 0
// 004ba5e1  c64424201a           mov byte ptr [esp + 0x20], 0x1a
// 004ba5e6  e8a557feff           call 0x49fd90
// 004ba5eb  8b842454010000       mov eax, dword ptr [esp + 0x154]
// 004ba5f2  85c0                 test eax, eax
// 004ba5f4  7e0d                 jle 0x4ba603
// 004ba5f6  50                   push eax
// 004ba5f7  56                   push esi
// 004ba5f8  8d4c2428             lea ecx, [esp + 0x28]
// 004ba5fc  e88f58feff           call 0x49fe90
// 004ba601  eb17                 jmp 0x4ba61a
// 004ba603  6a01                 push 1
// 004ba605  6a08                 push 8
// 004ba607  8d4c241c             lea ecx, [esp + 0x1c]
// 004ba60b  51                   push ecx
// 004ba60c  8d4c242c             lea ecx, [esp + 0x2c]
// 004ba610  c644242000           mov byte ptr [esp + 0x20], 0
// 004ba615  e87657feff           call 0x49fd90
// 004ba61a  33f6                 xor esi, esi
// 004ba61c  39b7ac020000         cmp dword ptr [edi + 0x2ac], esi
// 004ba622  763b                 jbe 0x4ba65f
// 004ba624  eb0a                 jmp 0x4ba630
// 004ba626  8da42400000000       lea esp, [esp]
// 004ba62d  8d4900               lea ecx, [ecx]
// 004ba630  8b97a8020000         mov edx, dword ptr [edi + 0x2a8]
// 004ba636  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 004ba639  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ba63d  8b01                 mov eax, dword ptr [ecx]
// 004ba63f  8b4020               mov eax, dword ptr [eax + 0x20]
// 004ba642  52                   push edx
// 004ba643  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ba647  52                   push edx
// 004ba648  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ba64c  52                   push edx
// 004ba64d  8b542438             mov edx, dword ptr [esp + 0x38]
// 004ba651  52                   push edx
// 004ba652  ffd0                 call eax
// 004ba654  83c601               add esi, 1
// 004ba657  3bb7ac020000         cmp esi, dword ptr [edi + 0x2ac]
// 004ba65d  72d1                 jb 0x4ba630
// 004ba65f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004ba663  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004ba667  8b8714070000         mov eax, dword ptr [edi + 0x714]
// 004ba66d  53                   push ebx
// 004ba66e  83c107               add ecx, 7
// 004ba671  55                   push ebp
// 004ba672  c1f903               sar ecx, 3
// 004ba675  51                   push ecx
// 004ba676  8b8c2464010000       mov ecx, dword ptr [esp + 0x164]
// 004ba67d  52                   push edx
// 004ba67e  8b1488               mov edx, dword ptr [eax + ecx*4]
// 004ba681  52                   push edx
// 004ba682  b9e9ef8b00           mov ecx, 0x8befe9
// 004ba687  e824a20000           call 0x4c48b0
// 004ba68c  8d4c2420             lea ecx, [esp + 0x20]
// 004ba690  c7842440010000ffffffff mov dword ptr [esp + 0x140], 0xffffffff
// 004ba69b  e89052feff           call 0x49f930
// 004ba6a0  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 004ba6a7  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba6ae  59                   pop ecx
// 004ba6af  5f                   pop edi
// 004ba6b0  5e                   pop esi
// 004ba6b1  5d                   pop ebp
// 004ba6b2  5b                   pop ebx
// 004ba6b3  8b8c2420010000       mov ecx, dword ptr [esp + 0x120]
// 004ba6ba  33cc                 xor ecx, esp
// 004ba6bc  e85d631700           call 0x630a1e
// 004ba6c1  81c430010000         add esp, 0x130
// 004ba6c7  c21400               ret 0x14
// library openrbx-raknet/RakPeer.cpp (function ?AdvertiseSystem@RakPeer@@UAEXPBDG0HI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
