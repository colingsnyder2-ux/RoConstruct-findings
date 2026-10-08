// from server: 100% by auto
// roc 2012-06 009325b0  unit: RBX::BallCellContact  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009325b0
//
// 009325b0  8b442404             mov eax, dword ptr [esp + 4]
// 009325b4  53                   push ebx
// 009325b5  55                   push ebp
// 009325b6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 009325b9  56                   push esi
// 009325ba  57                   push edi
// 009325bb  8b7d70               mov edi, dword ptr [ebp + 0x70]
// 009325be  8b37                 mov esi, dword ptr [edi]
// 009325c0  33db                 xor ebx, ebx
// 009325c2  85f6                 test esi, esi
// 009325c4  7474                 je 0x93263a
// 009325c6  8a4605               mov al, byte ptr [esi + 5]
// 009325c9  a803                 test al, 3
// 009325cb  7507                 jne 0x9325d4
// 009325cd  837c241800           cmp dword ptr [esp + 0x18], 0
// 009325d2  7404                 je 0x9325d8
// 009325d4  a808                 test al, 8
// 009325d6  7404                 je 0x9325dc
// 009325d8  8bfe                 mov edi, esi
// 009325da  eb58                 jmp 0x932634
// 009325dc  8b4608               mov eax, dword ptr [esi + 8]
// 009325df  85c0                 test eax, eax
// 009325e1  7423                 je 0x932606
// 009325e3  f6400604             test byte ptr [eax + 6], 4
// 009325e7  751d                 jne 0x932606
// 009325e9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009325ed  8b5110               mov edx, dword ptr [ecx + 0x10]
// 009325f0  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 009325f6  51                   push ecx
// 009325f7  6a02                 push 2
// 009325f9  50                   push eax
// 009325fa  e8f10e0000           call 0x9334f0
// 009325ff  83c40c               add esp, 0xc
// 00932602  85c0                 test eax, eax
// 00932604  7508                 jne 0x93260e
// 00932606  804e0508             or byte ptr [esi + 5], 8
// 0093260a  8bfe                 mov edi, esi
// 0093260c  eb26                 jmp 0x932634
// 0093260e  804e0508             or byte ptr [esi + 5], 8
// 00932612  8b06                 mov eax, dword ptr [esi]
// 00932614  8b5610               mov edx, dword ptr [esi + 0x10]
// 00932617  8907                 mov dword ptr [edi], eax
// 00932619  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0093261c  8d5c1318             lea ebx, [ebx + edx + 0x18]
// 00932620  85c0                 test eax, eax
// 00932622  7504                 jne 0x932628
// 00932624  8936                 mov dword ptr [esi], esi
// 00932626  eb09                 jmp 0x932631
// 00932628  8b08                 mov ecx, dword ptr [eax]
// 0093262a  890e                 mov dword ptr [esi], ecx
// 0093262c  8b5530               mov edx, dword ptr [ebp + 0x30]
// 0093262f  8932                 mov dword ptr [edx], esi
// 00932631  897530               mov dword ptr [ebp + 0x30], esi
// 00932634  8b37                 mov esi, dword ptr [edi]
// 00932636  85f6                 test esi, esi
// 00932638  758c                 jne 0x9325c6
// 0093263a  5f                   pop edi
// 0093263b  5e                   pop esi
// 0093263c  5d                   pop ebp
// 0093263d  8bc3                 mov eax, ebx
// 0093263f  5b                   pop ebx
// 00932640  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_separateudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
