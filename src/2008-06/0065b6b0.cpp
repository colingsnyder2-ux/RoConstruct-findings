// from server: 100% by auto
// roc 2008-06 0065b6b0  unit: RBX::BallBallContact  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065b6b0
//
// 0065b6b0  8b442404             mov eax, dword ptr [esp + 4]
// 0065b6b4  53                   push ebx
// 0065b6b5  55                   push ebp
// 0065b6b6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 0065b6b9  56                   push esi
// 0065b6ba  57                   push edi
// 0065b6bb  8b7d70               mov edi, dword ptr [ebp + 0x70]
// 0065b6be  8b37                 mov esi, dword ptr [edi]
// 0065b6c0  33db                 xor ebx, ebx
// 0065b6c2  85f6                 test esi, esi
// 0065b6c4  7474                 je 0x65b73a
// 0065b6c6  8a4605               mov al, byte ptr [esi + 5]
// 0065b6c9  a803                 test al, 3
// 0065b6cb  7507                 jne 0x65b6d4
// 0065b6cd  837c241800           cmp dword ptr [esp + 0x18], 0
// 0065b6d2  7404                 je 0x65b6d8
// 0065b6d4  a808                 test al, 8
// 0065b6d6  7404                 je 0x65b6dc
// 0065b6d8  8bfe                 mov edi, esi
// 0065b6da  eb58                 jmp 0x65b734
// 0065b6dc  8b4608               mov eax, dword ptr [esi + 8]
// 0065b6df  85c0                 test eax, eax
// 0065b6e1  7423                 je 0x65b706
// 0065b6e3  f6400604             test byte ptr [eax + 6], 4
// 0065b6e7  751d                 jne 0x65b706
// 0065b6e9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065b6ed  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0065b6f0  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0065b6f6  51                   push ecx
// 0065b6f7  6a02                 push 2
// 0065b6f9  50                   push eax
// 0065b6fa  e8d10e0000           call 0x65c5d0
// 0065b6ff  83c40c               add esp, 0xc
// 0065b702  85c0                 test eax, eax
// 0065b704  7508                 jne 0x65b70e
// 0065b706  804e0508             or byte ptr [esi + 5], 8
// 0065b70a  8bfe                 mov edi, esi
// 0065b70c  eb26                 jmp 0x65b734
// 0065b70e  804e0508             or byte ptr [esi + 5], 8
// 0065b712  8b06                 mov eax, dword ptr [esi]
// 0065b714  8b5610               mov edx, dword ptr [esi + 0x10]
// 0065b717  8907                 mov dword ptr [edi], eax
// 0065b719  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0065b71c  8d5c1318             lea ebx, [ebx + edx + 0x18]
// 0065b720  85c0                 test eax, eax
// 0065b722  7504                 jne 0x65b728
// 0065b724  8936                 mov dword ptr [esi], esi
// 0065b726  eb09                 jmp 0x65b731
// 0065b728  8b08                 mov ecx, dword ptr [eax]
// 0065b72a  890e                 mov dword ptr [esi], ecx
// 0065b72c  8b5530               mov edx, dword ptr [ebp + 0x30]
// 0065b72f  8932                 mov dword ptr [edx], esi
// 0065b731  897530               mov dword ptr [ebp + 0x30], esi
// 0065b734  8b37                 mov esi, dword ptr [edi]
// 0065b736  85f6                 test esi, esi
// 0065b738  758c                 jne 0x65b6c6
// 0065b73a  5f                   pop edi
// 0065b73b  5e                   pop esi
// 0065b73c  5d                   pop ebp
// 0065b73d  8bc3                 mov eax, ebx
// 0065b73f  5b                   pop ebx
// 0065b740  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_separateudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
