// roc 2007-03 00597850  unit: seg_00590000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597850
//
// 00597850  6aff                 push -1
// 00597852  6820bd7500           push 0x75bd20
// 00597857  64a100000000         mov eax, dword ptr fs:[0]
// 0059785d  50                   push eax
// 0059785e  64892500000000       mov dword ptr fs:[0], esp
// 00597865  83ec14               sub esp, 0x14
// 00597868  56                   push esi
// 00597869  57                   push edi
// 0059786a  8bf9                 mov edi, ecx
// 0059786c  c744240800000000     mov dword ptr [esp + 8], 0
// 00597874  8d442408             lea eax, [esp + 8]
// 00597878  50                   push eax
// 00597879  6a01                 push 1
// 0059787b  8d4c2414             lea ecx, [esp + 0x14]
// 0059787f  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00597887  e8541be8ff           call 0x4193e0
// 0059788c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00597890  85f6                 test esi, esi
// 00597892  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0059789a  740b                 je 0x5978a7
// 0059789c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005978a0  2bce                 sub ecx, esi
// 005978a2  c1f902               sar ecx, 2
// 005978a5  750a                 jne 0x5978b1
// 005978a7  ff1544e97700         call dword ptr [0x77e944]
// 005978ad  8b742410             mov esi, dword ptr [esp + 0x10]
// 005978b1  6a08                 push 8
// 005978b3  e850680800           call 0x61e108
// 005978b8  83c404               add esp, 4
// 005978bb  85c0                 test eax, eax
// 005978bd  740f                 je 0x5978ce
// 005978bf  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 005978c3  c7003c987800         mov dword ptr [eax], 0x78983c
// 005978c9  885004               mov byte ptr [eax + 4], dl
// 005978cc  eb02                 jmp 0x5978d0
// 005978ce  33c0                 xor eax, eax
// 005978d0  8b0e                 mov ecx, dword ptr [esi]
// 005978d2  85c9                 test ecx, ecx
// 005978d4  8906                 mov dword ptr [esi], eax
// 005978d6  7408                 je 0x5978e0
// 005978d8  8b01                 mov eax, dword ptr [ecx]
// 005978da  8b10                 mov edx, dword ptr [eax]
// 005978dc  6a01                 push 1
// 005978de  ffd2                 call edx
// 005978e0  8b0f                 mov ecx, dword ptr [edi]
// 005978e2  8b01                 mov eax, dword ptr [ecx]
// 005978e4  8b4004               mov eax, dword ptr [eax + 4]
// 005978e7  8d54240c             lea edx, [esp + 0xc]
// 005978eb  52                   push edx
// 005978ec  ffd0                 call eax
// 005978ee  8b742410             mov esi, dword ptr [esp + 0x10]
// 005978f2  85f6                 test esi, esi
// 005978f4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005978fc  742c                 je 0x59792a
// 005978fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00597902  3bf0                 cmp esi, eax
// 00597904  8bf8                 mov edi, eax
// 00597906  7419                 je 0x597921
// 00597908  8b0e                 mov ecx, dword ptr [esi]
// 0059790a  85c9                 test ecx, ecx
// 0059790c  7408                 je 0x597916
// 0059790e  8b11                 mov edx, dword ptr [ecx]
// 00597910  8b02                 mov eax, dword ptr [edx]
// 00597912  6a01                 push 1
// 00597914  ffd0                 call eax
// 00597916  83c604               add esi, 4
// 00597919  3bf7                 cmp esi, edi
// 0059791b  75eb                 jne 0x597908
// 0059791d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00597921  56                   push esi
// 00597922  e8c9670800           call 0x61e0f0
// 00597927  83c404               add esp, 4
// 0059792a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059792e  5f                   pop edi
// 0059792f  5e                   pop esi
// 00597930  64890d00000000       mov dword ptr fs:[0], ecx
// 00597937  83c420               add esp, 0x20
// 0059793a  c20400               ret 4
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??RGenericSlotAdapter@?$SignalDescImpl@$00$$A6AX_N@Z@Reflection@RBX@@QBEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/humanoid/Humanoid.cpp
