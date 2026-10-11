// roc 2007-08 004bc7a0  unit: RakPeer  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc7a0
//
// 004bc7a0  56                   push esi
// 004bc7a1  57                   push edi
// 004bc7a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004bc7a6  8b07                 mov eax, dword ptr [edi]
// 004bc7a8  83c007               add eax, 7
// 004bc7ab  a9f8ffffff           test eax, 0xfffffff8
// 004bc7b0  8bf1                 mov esi, ecx
// 004bc7b2  7507                 jne 0x4bc7bb
// 004bc7b4  5f                   pop edi
// 004bc7b5  32c0                 xor al, al
// 004bc7b7  5e                   pop esi
// 004bc7b8  c21c00               ret 0x1c
// 004bc7bb  83be2c02000000       cmp dword ptr [esi + 0x22c], 0
// 004bc7c2  74f0                 je 0x4bc7b4
// 004bc7c4  8a4e04               mov cl, byte ptr [esi + 4]
// 004bc7c7  80f901               cmp cl, 1
// 004bc7ca  74e8                 je 0x4bc7b4
// 004bc7cc  53                   push ebx
// 004bc7cd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004bc7d1  84db                 test bl, bl
// 004bc7d3  756c                 jne 0x4bc841
// 004bc7d5  685c2f8900           push 0x892f5c
// 004bc7da  8d4c2424             lea ecx, [esp + 0x24]
// 004bc7de  e89d6cfeff           call 0x4a3480
// 004bc7e3  84c0                 test al, al
// 004bc7e5  7408                 je 0x4bc7ef
// 004bc7e7  5b                   pop ebx
// 004bc7e8  5f                   pop edi
// 004bc7e9  32c0                 xor al, al
// 004bc7eb  5e                   pop esi
// 004bc7ec  c21c00               ret 0x1c
// 004bc7ef  83be2c07000000       cmp dword ptr [esi + 0x72c], 0
// 004bc7f6  7449                 je 0x4bc841
// 004bc7f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bc7fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bc800  8b16                 mov edx, dword ptr [esi]
// 004bc802  8b5268               mov edx, dword ptr [edx + 0x68]
// 004bc805  50                   push eax
// 004bc806  51                   push ecx
// 004bc807  8bce                 mov ecx, esi
// 004bc809  ffd2                 call edx
// 004bc80b  84c0                 test al, al
// 004bc80d  7532                 jne 0x4bc841
// 004bc80f  8b8e2c070000         mov ecx, dword ptr [esi + 0x72c]
// 004bc815  8b742424             mov esi, dword ptr [esp + 0x24]
// 004bc819  8b07                 mov eax, dword ptr [edi]
// 004bc81b  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 004bc81e  8b11                 mov edx, dword ptr [ecx]
// 004bc820  56                   push esi
// 004bc821  8b742424             mov esi, dword ptr [esp + 0x24]
// 004bc825  56                   push esi
// 004bc826  8b742424             mov esi, dword ptr [esp + 0x24]
// 004bc82a  56                   push esi
// 004bc82b  8b742424             mov esi, dword ptr [esp + 0x24]
// 004bc82f  56                   push esi
// 004bc830  8b742424             mov esi, dword ptr [esp + 0x24]
// 004bc834  56                   push esi
// 004bc835  50                   push eax
// 004bc836  8b02                 mov eax, dword ptr [edx]
// 004bc838  57                   push edi
// 004bc839  ffd0                 call eax
// 004bc83b  5b                   pop ebx
// 004bc83c  5f                   pop edi
// 004bc83d  5e                   pop esi
// 004bc83e  c21c00               ret 0x1c
// 004bc841  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004bc845  8b542420             mov edx, dword ptr [esp + 0x20]
// 004bc849  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004bc84d  6a00                 push 0
// 004bc84f  53                   push ebx
// 004bc850  51                   push ecx
// 004bc851  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004bc855  52                   push edx
// 004bc856  8b542424             mov edx, dword ptr [esp + 0x24]
// 004bc85a  50                   push eax
// 004bc85b  8b07                 mov eax, dword ptr [edi]
// 004bc85d  51                   push ecx
// 004bc85e  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004bc861  52                   push edx
// 004bc862  50                   push eax
// 004bc863  51                   push ecx
// 004bc864  8bce                 mov ecx, esi
// 004bc866  e8d5dfffff           call 0x4ba840
// 004bc86b  5b                   pop ebx
// 004bc86c  5f                   pop edi
// 004bc86d  b001                 mov al, 1
// 004bc86f  5e                   pop esi
// 004bc870  c21c00               ret 0x1c
// library openrbx-raknet/RakPeer.cpp (function ?Send@RakPeer@@UAE_NPBVBitStream@RakNet@@W4PacketPriority@@W4PacketReliability@@DUSystemAddress@@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
