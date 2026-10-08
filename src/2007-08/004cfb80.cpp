// roc 2007-08 004cfb80  unit: 0RBX::View  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cfb80
//
// 004cfb80  6aff                 push -1
// 004cfb82  68cbc27400           push 0x74c2cb
// 004cfb87  64a100000000         mov eax, dword ptr fs:[0]
// 004cfb8d  50                   push eax
// 004cfb8e  64892500000000       mov dword ptr fs:[0], esp
// 004cfb95  83ec0c               sub esp, 0xc
// 004cfb98  53                   push ebx
// 004cfb99  56                   push esi
// 004cfb9a  8bf1                 mov esi, ecx
// 004cfb9c  89742408             mov dword ptr [esp + 8], esi
// 004cfba0  c706b8f07900         mov dword ptr [esi], 0x79f0b8
// 004cfba6  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 004cfba9  8b01                 mov eax, dword ptr [ecx]
// 004cfbab  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cfbae  c744241c09000000     mov dword ptr [esp + 0x1c], 9
// 004cfbb6  ffd2                 call edx
// 004cfbb8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cfbbb  33db                 xor ebx, ebx
// 004cfbbd  3bcb                 cmp ecx, ebx
// 004cfbbf  7405                 je 0x4cfbc6
// 004cfbc1  e8fafefdff           call 0x4afac0
// 004cfbc6  57                   push edi
// 004cfbc7  e814f6ffff           call 0x4cf1e0
// 004cfbcc  e88ff5ffff           call 0x4cf160
// 004cfbd1  e80af5ffff           call 0x4cf0e0
// 004cfbd6  e865e90000           call 0x4de540
// 004cfbdb  8b7e54               mov edi, dword ptr [esi + 0x54]
// 004cfbde  3bfb                 cmp edi, ebx
// 004cfbe0  c644242008           mov byte ptr [esp + 0x20], 8
// 004cfbe5  7410                 je 0x4cfbf7
// 004cfbe7  8bcf                 mov ecx, edi
// 004cfbe9  e8d2faffff           call 0x4cf6c0
// 004cfbee  57                   push edi
// 004cfbef  e86e001600           call 0x62fc62
// 004cfbf4  83c404               add esp, 4
// 004cfbf7  8b7e50               mov edi, dword ptr [esi + 0x50]
// 004cfbfa  3bfb                 cmp edi, ebx
// 004cfbfc  c644242007           mov byte ptr [esp + 0x20], 7
// 004cfc01  7416                 je 0x4cfc19
// 004cfc03  8bcf                 mov ecx, edi
// 004cfc05  c70724367900         mov dword ptr [edi], 0x793624
// 004cfc0b  e8f09af8ff           call 0x459700
// 004cfc10  57                   push edi
// 004cfc11  e84c001600           call 0x62fc62
// 004cfc16  83c404               add esp, 4
// 004cfc19  8b7e4c               mov edi, dword ptr [esi + 0x4c]
// 004cfc1c  3bfb                 cmp edi, ebx
// 004cfc1e  c644242006           mov byte ptr [esp + 0x20], 6
// 004cfc23  7410                 je 0x4cfc35
// 004cfc25  8bcf                 mov ecx, edi
// 004cfc27  e8f4930200           call 0x4f9020
// 004cfc2c  57                   push edi
// 004cfc2d  e830001600           call 0x62fc62
// 004cfc32  83c404               add esp, 4
// 004cfc35  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 004cfc38  3bcb                 cmp ecx, ebx
// 004cfc3a  c644242005           mov byte ptr [esp + 0x20], 5
// 004cfc3f  7409                 je 0x4cfc4a
// 004cfc41  8b01                 mov eax, dword ptr [ecx]
// 004cfc43  8b5018               mov edx, dword ptr [eax + 0x18]
// 004cfc46  6a01                 push 1
// 004cfc48  ffd2                 call edx
// 004cfc4a  8d4e30               lea ecx, [esi + 0x30]
// 004cfc4d  c644242004           mov byte ptr [esp + 0x20], 4
// 004cfc52  e849892500           call 0x7285a0
// 004cfc57  8d4e1c               lea ecx, [esi + 0x1c]
// 004cfc5a  c644242003           mov byte ptr [esp + 0x20], 3
// 004cfc5f  e83c892500           call 0x7285a0
// 004cfc64  8b4614               mov eax, dword ptr [esi + 0x14]
// 004cfc67  8b08                 mov ecx, dword ptr [eax]
// 004cfc69  8d7e10               lea edi, [esi + 0x10]
// 004cfc6c  50                   push eax
// 004cfc6d  57                   push edi
// 004cfc6e  51                   push ecx
// 004cfc6f  57                   push edi
// 004cfc70  8d442420             lea eax, [esp + 0x20]
// 004cfc74  50                   push eax
// 004cfc75  8bcf                 mov ecx, edi
// 004cfc77  c644243402           mov byte ptr [esp + 0x34], 2
// 004cfc7c  e8af770e00           call 0x5b7430
// 004cfc81  8b4704               mov eax, dword ptr [edi + 4]
// 004cfc84  50                   push eax
// 004cfc85  e8d8ff1500           call 0x62fc62
// 004cfc8a  895f04               mov dword ptr [edi + 4], ebx
// 004cfc8d  895f08               mov dword ptr [edi + 8], ebx
// 004cfc90  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004cfc93  83c404               add esp, 4
// 004cfc96  3bfb                 cmp edi, ebx
// 004cfc98  c644242001           mov byte ptr [esp + 0x20], 1
// 004cfc9d  742a                 je 0x4cfcc9
// 004cfc9f  8d4f04               lea ecx, [edi + 4]
// 004cfca2  83caff               or edx, 0xffffffff
// 004cfca5  f00fc111             lock xadd dword ptr [ecx], edx
// 004cfca9  751e                 jne 0x4cfcc9
// 004cfcab  8b07                 mov eax, dword ptr [edi]
// 004cfcad  8b5004               mov edx, dword ptr [eax + 4]
// 004cfcb0  8bcf                 mov ecx, edi
// 004cfcb2  ffd2                 call edx
// 004cfcb4  8d4708               lea eax, [edi + 8]
// 004cfcb7  83c9ff               or ecx, 0xffffffff
// 004cfcba  f00fc108             lock xadd dword ptr [eax], ecx
// 004cfcbe  7509                 jne 0x4cfcc9
// 004cfcc0  8b17                 mov edx, dword ptr [edi]
// 004cfcc2  8b4208               mov eax, dword ptr [edx + 8]
// 004cfcc5  8bcf                 mov ecx, edi
// 004cfcc7  ffd0                 call eax
// 004cfcc9  8b4604               mov eax, dword ptr [esi + 4]
// 004cfccc  3bc3                 cmp eax, ebx
// 004cfcce  885c2420             mov byte ptr [esp + 0x20], bl
// 004cfcd2  5f                   pop edi
// 004cfcd3  7428                 je 0x4cfcfd
// 004cfcd5  83c004               add eax, 4
// 004cfcd8  50                   push eax
// 004cfcd9  ff15e8d27700         call dword ptr [0x77d2e8]
// 004cfcdf  85c0                 test eax, eax
// 004cfce1  7517                 jne 0x4cfcfa
// 004cfce3  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cfce6  e8e580f8ff           call 0x457dd0
// 004cfceb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cfcee  3bcb                 cmp ecx, ebx
// 004cfcf0  7408                 je 0x4cfcfa
// 004cfcf2  8b11                 mov edx, dword ptr [ecx]
// 004cfcf4  8b02                 mov eax, dword ptr [edx]
// 004cfcf6  6a01                 push 1
// 004cfcf8  ffd0                 call eax
// 004cfcfa  895e04               mov dword ptr [esi + 4], ebx
// 004cfcfd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cfd01  c706e0ef7900         mov dword ptr [esi], 0x79efe0
// 004cfd07  5e                   pop esi
// 004cfd08  5b                   pop ebx
// 004cfd09  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfd10  83c418               add esp, 0x18
// 004cfd13  c3                   ret 
// library rbxgs-view/View.cpp (function ??1View@0RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
