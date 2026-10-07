// roc 2012-06 005bcef0  unit: RakNet::RakPeer  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bcef0
//
// 005bcef0  56                   push esi
// 005bcef1  8bf1                 mov esi, ecx
// 005bcef3  8b4608               mov eax, dword ptr [esi + 8]
// 005bcef6  394604               cmp dword ptr [esi + 4], eax
// 005bcef9  7561                 jne 0x5bcf5c
// 005bcefb  85c0                 test eax, eax
// 005bcefd  7509                 jne 0x5bcf08
// 005bceff  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005bcf06  eb05                 jmp 0x5bcf0d
// 005bcf08  03c0                 add eax, eax
// 005bcf0a  894608               mov dword ptr [esi + 8], eax
// 005bcf0d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bcf11  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bcf15  8b4608               mov eax, dword ptr [esi + 8]
// 005bcf18  55                   push ebp
// 005bcf19  51                   push ecx
// 005bcf1a  52                   push edx
// 005bcf1b  50                   push eax
// 005bcf1c  e84fecffff           call 0x5bbb70
// 005bcf21  83c40c               add esp, 0xc
// 005bcf24  833e00               cmp dword ptr [esi], 0
// 005bcf27  8be8                 mov ebp, eax
// 005bcf29  742e                 je 0x5bcf59
// 005bcf2b  53                   push ebx
// 005bcf2c  33db                 xor ebx, ebx
// 005bcf2e  395e04               cmp dword ptr [esi + 4], ebx
// 005bcf31  761a                 jbe 0x5bcf4d
// 005bcf33  57                   push edi
// 005bcf34  33ff                 xor edi, edi
// 005bcf36  8b0e                 mov ecx, dword ptr [esi]
// 005bcf38  03cf                 add ecx, edi
// 005bcf3a  51                   push ecx
// 005bcf3b  8d0c2f               lea ecx, [edi + ebp]
// 005bcf3e  e8cd48faff           call 0x561810
// 005bcf43  43                   inc ebx
// 005bcf44  83c714               add edi, 0x14
// 005bcf47  3b5e04               cmp ebx, dword ptr [esi + 4]
// 005bcf4a  72ea                 jb 0x5bcf36
// 005bcf4c  5f                   pop edi
// 005bcf4d  8b16                 mov edx, dword ptr [esi]
// 005bcf4f  52                   push edx
// 005bcf50  e865543c00           call 0x9823ba
// 005bcf55  83c404               add esp, 4
// 005bcf58  5b                   pop ebx
// 005bcf59  892e                 mov dword ptr [esi], ebp
// 005bcf5b  5d                   pop ebp
// 005bcf5c  8b442408             mov eax, dword ptr [esp + 8]
// 005bcf60  8b16                 mov edx, dword ptr [esi]
// 005bcf62  50                   push eax
// 005bcf63  8b4604               mov eax, dword ptr [esi + 4]
// 005bcf66  8d0c80               lea ecx, [eax + eax*4]
// 005bcf69  8d0c8a               lea ecx, [edx + ecx*4]
// 005bcf6c  e89f48faff           call 0x561810
// 005bcf71  ff4604               inc dword ptr [esi + 4]
// 005bcf74  5e                   pop esi
// 005bcf75  c20c00               ret 0xc
// library rbx2016-raknet/NatPunchthroughClient.cpp (function ?Insert@?$List@USystemAddress@RakNet@@@DataStructures@@QAEXABUSystemAddress@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet NatPunchthroughClient.cpp
