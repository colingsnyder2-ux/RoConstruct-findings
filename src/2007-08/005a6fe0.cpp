// roc 2007-08 005a6fe0  unit: RBX::Humanoid  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6fe0
//
// 005a6fe0  6aff                 push -1
// 005a6fe2  6830057500           push 0x750530
// 005a6fe7  64a100000000         mov eax, dword ptr fs:[0]
// 005a6fed  50                   push eax
// 005a6fee  64892500000000       mov dword ptr fs:[0], esp
// 005a6ff5  83ec14               sub esp, 0x14
// 005a6ff8  56                   push esi
// 005a6ff9  57                   push edi
// 005a6ffa  8bf9                 mov edi, ecx
// 005a6ffc  c744240800000000     mov dword ptr [esp + 8], 0
// 005a7004  8d442408             lea eax, [esp + 8]
// 005a7008  50                   push eax
// 005a7009  6a01                 push 1
// 005a700b  8d4c2414             lea ecx, [esp + 0x14]
// 005a700f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005a7017  e8f40ee7ff           call 0x417f10
// 005a701c  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7020  85f6                 test esi, esi
// 005a7022  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005a702a  740b                 je 0x5a7037
// 005a702c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a7030  2bce                 sub ecx, esi
// 005a7032  c1f902               sar ecx, 2
// 005a7035  750a                 jne 0x5a7041
// 005a7037  ff15d8e67700         call dword ptr [0x77e6d8]
// 005a703d  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7041  6a08                 push 8
// 005a7043  e8ae8e0800           call 0x62fef6
// 005a7048  83c404               add esp, 4
// 005a704b  85c0                 test eax, eax
// 005a704d  740f                 je 0x5a705e
// 005a704f  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 005a7053  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 005a7059  885004               mov byte ptr [eax + 4], dl
// 005a705c  eb02                 jmp 0x5a7060
// 005a705e  33c0                 xor eax, eax
// 005a7060  8b0e                 mov ecx, dword ptr [esi]
// 005a7062  85c9                 test ecx, ecx
// 005a7064  8906                 mov dword ptr [esi], eax
// 005a7066  7408                 je 0x5a7070
// 005a7068  8b01                 mov eax, dword ptr [ecx]
// 005a706a  8b10                 mov edx, dword ptr [eax]
// 005a706c  6a01                 push 1
// 005a706e  ffd2                 call edx
// 005a7070  8b0f                 mov ecx, dword ptr [edi]
// 005a7072  8b01                 mov eax, dword ptr [ecx]
// 005a7074  8b4004               mov eax, dword ptr [eax + 4]
// 005a7077  8d54240c             lea edx, [esp + 0xc]
// 005a707b  52                   push edx
// 005a707c  ffd0                 call eax
// 005a707e  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a7082  85f6                 test esi, esi
// 005a7084  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a708c  742c                 je 0x5a70ba
// 005a708e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a7092  3bf0                 cmp esi, eax
// 005a7094  8bf8                 mov edi, eax
// 005a7096  7419                 je 0x5a70b1
// 005a7098  8b0e                 mov ecx, dword ptr [esi]
// 005a709a  85c9                 test ecx, ecx
// 005a709c  7408                 je 0x5a70a6
// 005a709e  8b11                 mov edx, dword ptr [ecx]
// 005a70a0  8b02                 mov eax, dword ptr [edx]
// 005a70a2  6a01                 push 1
// 005a70a4  ffd0                 call eax
// 005a70a6  83c604               add esi, 4
// 005a70a9  3bf7                 cmp esi, edi
// 005a70ab  75eb                 jne 0x5a7098
// 005a70ad  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a70b1  56                   push esi
// 005a70b2  e8ab8b0800           call 0x62fc62
// 005a70b7  83c404               add esp, 4
// 005a70ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a70be  5f                   pop edi
// 005a70bf  5e                   pop esi
// 005a70c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a70c7  83c420               add esp, 0x20
// 005a70ca  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AX_N@Z@Reflection@RBX@@QBEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
