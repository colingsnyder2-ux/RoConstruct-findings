// roc 2012-06 005bec70  unit: RakNet::RakPeer  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bec70
//
// 005bec70  64a100000000         mov eax, dword ptr fs:[0]
// 005bec76  6aff                 push -1
// 005bec78  685b0aab00           push 0xab0a5b
// 005bec7d  50                   push eax
// 005bec7e  64892500000000       mov dword ptr fs:[0], esp
// 005bec85  81ec24010000         sub esp, 0x124
// 005bec8b  55                   push ebp
// 005bec8c  56                   push esi
// 005bec8d  8bf1                 mov esi, ecx
// 005bec8f  8b06                 mov eax, dword ptr [esi]
// 005bec91  8b503c               mov edx, dword ptr [eax + 0x3c]
// 005bec94  57                   push edi
// 005bec95  ffd2                 call edx
// 005bec97  84c0                 test al, al
// 005bec99  0f84da000000         je 0x5bed79
// 005bec9f  6a09                 push 9
// 005beca1  8d4c2420             lea ecx, [esp + 0x20]
// 005beca5  e82689faff           call 0x5675d0
// 005becaa  6a01                 push 1
// 005becac  6a08                 push 8
// 005becae  8d442417             lea eax, [esp + 0x17]
// 005becb2  50                   push eax
// 005becb3  8d4c2428             lea ecx, [esp + 0x28]
// 005becb7  c784244401000000000000 mov dword ptr [esp + 0x144], 0
// 005becc2  c644241b00           mov byte ptr [esp + 0x1b], 0
// 005becc7  e8c490faff           call 0x567d90
// 005beccc  e8ff9cffff           call 0x5b89d0
// 005becd1  8d4c2414             lea ecx, [esp + 0x14]
// 005becd5  51                   push ecx
// 005becd6  8d4c2420             lea ecx, [esp + 0x20]
// 005becda  89442418             mov dword ptr [esp + 0x18], eax
// 005becde  8954241c             mov dword ptr [esp + 0x1c], edx
// 005bece2  e889d2faff           call 0x56bf70
// 005bece7  80bc245401000000     cmp byte ptr [esp + 0x154], 0
// 005becef  6a00                 push 0
// 005becf1  7440                 je 0x5bed33
// 005becf3  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005becf7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005becfb  e8c09cffff           call 0x5b89c0
// 005bed00  52                   push edx
// 005bed01  50                   push eax
// 005bed02  6a00                 push 0
// 005bed04  6a00                 push 0
// 005bed06  83ec28               sub esp, 0x28
// 005bed09  8d94247c010000       lea edx, [esp + 0x17c]
// 005bed10  8bcc                 mov ecx, esp
// 005bed12  8964244c             mov dword ptr [esp + 0x4c], esp
// 005bed16  52                   push edx
// 005bed17  e8b411f8ff           call 0x53fed0
// 005bed1c  8b842494010000       mov eax, dword ptr [esp + 0x194]
// 005bed23  6a00                 push 0
// 005bed25  50                   push eax
// 005bed26  6a00                 push 0
// 005bed28  57                   push edi
// 005bed29  55                   push ebp
// 005bed2a  8bce                 mov ecx, esi
// 005bed2c  e88fd3ffff           call 0x5bc0c0
// 005bed31  eb32                 jmp 0x5bed65
// 005bed33  8b3e                 mov edi, dword ptr [esi]
// 005bed35  6a00                 push 0
// 005bed37  83ec28               sub esp, 0x28
// 005bed3a  8d942470010000       lea edx, [esp + 0x170]
// 005bed41  8bcc                 mov ecx, esp
// 005bed43  89642440             mov dword ptr [esp + 0x40], esp
// 005bed47  52                   push edx
// 005bed48  e88311f8ff           call 0x53fed0
// 005bed4d  8b842488010000       mov eax, dword ptr [esp + 0x188]
// 005bed54  8b574c               mov edx, dword ptr [edi + 0x4c]
// 005bed57  6a00                 push 0
// 005bed59  50                   push eax
// 005bed5a  6a00                 push 0
// 005bed5c  8d4c2458             lea ecx, [esp + 0x58]
// 005bed60  51                   push ecx
// 005bed61  8bce                 mov ecx, esi
// 005bed63  ffd2                 call edx
// 005bed65  8d4c241c             lea ecx, [esp + 0x1c]
// 005bed69  c7842438010000ffffffff mov dword ptr [esp + 0x138], 0xffffffff
// 005bed74  e83789faff           call 0x5676b0
// 005bed79  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 005bed80  5f                   pop edi
// 005bed81  5e                   pop esi
// 005bed82  64890d00000000       mov dword ptr fs:[0], ecx
// 005bed89  5d                   pop ebp
// 005bed8a  81c430010000         add esp, 0x130
// 005bed90  c21c00               ret 0x1c
// library rbx2016-raknet/RakPeer.cpp (function ?PingInternal@RakPeer@RakNet@@IAEXUSystemAddress@2@_NW4PacketReliability@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
