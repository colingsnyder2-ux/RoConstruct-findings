// from server: 100% by auto
// roc 2007-08 0060f0f0  unit: RBX::Ball  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f0f0
//
// 0060f0f0  8b442404             mov eax, dword ptr [esp + 4]
// 0060f0f4  53                   push ebx
// 0060f0f5  55                   push ebp
// 0060f0f6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 0060f0f9  56                   push esi
// 0060f0fa  57                   push edi
// 0060f0fb  8b7d70               mov edi, dword ptr [ebp + 0x70]
// 0060f0fe  8b37                 mov esi, dword ptr [edi]
// 0060f100  33db                 xor ebx, ebx
// 0060f102  85f6                 test esi, esi
// 0060f104  7474                 je 0x60f17a
// 0060f106  8a4605               mov al, byte ptr [esi + 5]
// 0060f109  a803                 test al, 3
// 0060f10b  7507                 jne 0x60f114
// 0060f10d  837c241800           cmp dword ptr [esp + 0x18], 0
// 0060f112  7404                 je 0x60f118
// 0060f114  a808                 test al, 8
// 0060f116  7404                 je 0x60f11c
// 0060f118  8bfe                 mov edi, esi
// 0060f11a  eb58                 jmp 0x60f174
// 0060f11c  8b4608               mov eax, dword ptr [esi + 8]
// 0060f11f  85c0                 test eax, eax
// 0060f121  7423                 je 0x60f146
// 0060f123  f6400604             test byte ptr [eax + 6], 4
// 0060f127  751d                 jne 0x60f146
// 0060f129  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060f12d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0060f130  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0060f136  51                   push ecx
// 0060f137  6a02                 push 2
// 0060f139  50                   push eax
// 0060f13a  e8010f0000           call 0x610040
// 0060f13f  83c40c               add esp, 0xc
// 0060f142  85c0                 test eax, eax
// 0060f144  7508                 jne 0x60f14e
// 0060f146  804e0508             or byte ptr [esi + 5], 8
// 0060f14a  8bfe                 mov edi, esi
// 0060f14c  eb26                 jmp 0x60f174
// 0060f14e  804e0508             or byte ptr [esi + 5], 8
// 0060f152  8b06                 mov eax, dword ptr [esi]
// 0060f154  8b5610               mov edx, dword ptr [esi + 0x10]
// 0060f157  8907                 mov dword ptr [edi], eax
// 0060f159  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0060f15c  85c0                 test eax, eax
// 0060f15e  8d5c1318             lea ebx, [ebx + edx + 0x18]
// 0060f162  7504                 jne 0x60f168
// 0060f164  8936                 mov dword ptr [esi], esi
// 0060f166  eb09                 jmp 0x60f171
// 0060f168  8b08                 mov ecx, dword ptr [eax]
// 0060f16a  890e                 mov dword ptr [esi], ecx
// 0060f16c  8b5530               mov edx, dword ptr [ebp + 0x30]
// 0060f16f  8932                 mov dword ptr [edx], esi
// 0060f171  897530               mov dword ptr [ebp + 0x30], esi
// 0060f174  8b37                 mov esi, dword ptr [edi]
// 0060f176  85f6                 test esi, esi
// 0060f178  758c                 jne 0x60f106
// 0060f17a  5f                   pop edi
// 0060f17b  5e                   pop esi
// 0060f17c  5d                   pop ebp
// 0060f17d  8bc3                 mov eax, ebx
// 0060f17f  5b                   pop ebx
// 0060f180  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_separateudata)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
