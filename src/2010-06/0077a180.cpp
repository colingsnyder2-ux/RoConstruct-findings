// roc 2010-06 0077a180  unit: RBX::PartDropTool  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a180
//
// 0077a180  8b442404             mov eax, dword ptr [esp + 4]
// 0077a184  53                   push ebx
// 0077a185  55                   push ebp
// 0077a186  8b6810               mov ebp, dword ptr [eax + 0x10]
// 0077a189  56                   push esi
// 0077a18a  57                   push edi
// 0077a18b  8b7d70               mov edi, dword ptr [ebp + 0x70]
// 0077a18e  8b37                 mov esi, dword ptr [edi]
// 0077a190  33db                 xor ebx, ebx
// 0077a192  85f6                 test esi, esi
// 0077a194  7474                 je 0x77a20a
// 0077a196  8a4605               mov al, byte ptr [esi + 5]
// 0077a199  a803                 test al, 3
// 0077a19b  7507                 jne 0x77a1a4
// 0077a19d  837c241800           cmp dword ptr [esp + 0x18], 0
// 0077a1a2  7404                 je 0x77a1a8
// 0077a1a4  a808                 test al, 8
// 0077a1a6  7404                 je 0x77a1ac
// 0077a1a8  8bfe                 mov edi, esi
// 0077a1aa  eb58                 jmp 0x77a204
// 0077a1ac  8b4608               mov eax, dword ptr [esi + 8]
// 0077a1af  85c0                 test eax, eax
// 0077a1b1  7423                 je 0x77a1d6
// 0077a1b3  f6400604             test byte ptr [eax + 6], 4
// 0077a1b7  751d                 jne 0x77a1d6
// 0077a1b9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077a1bd  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0077a1c0  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 0077a1c6  51                   push ecx
// 0077a1c7  6a02                 push 2
// 0077a1c9  50                   push eax
// 0077a1ca  e8d10e0000           call 0x77b0a0
// 0077a1cf  83c40c               add esp, 0xc
// 0077a1d2  85c0                 test eax, eax
// 0077a1d4  7508                 jne 0x77a1de
// 0077a1d6  804e0508             or byte ptr [esi + 5], 8
// 0077a1da  8bfe                 mov edi, esi
// 0077a1dc  eb26                 jmp 0x77a204
// 0077a1de  804e0508             or byte ptr [esi + 5], 8
// 0077a1e2  8b06                 mov eax, dword ptr [esi]
// 0077a1e4  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077a1e7  8907                 mov dword ptr [edi], eax
// 0077a1e9  8b4530               mov eax, dword ptr [ebp + 0x30]
// 0077a1ec  8d5c1318             lea ebx, [ebx + edx + 0x18]
// 0077a1f0  85c0                 test eax, eax
// 0077a1f2  7504                 jne 0x77a1f8
// 0077a1f4  8936                 mov dword ptr [esi], esi
// 0077a1f6  eb09                 jmp 0x77a201
// 0077a1f8  8b08                 mov ecx, dword ptr [eax]
// 0077a1fa  890e                 mov dword ptr [esi], ecx
// 0077a1fc  8b5530               mov edx, dword ptr [ebp + 0x30]
// 0077a1ff  8932                 mov dword ptr [edx], esi
// 0077a201  897530               mov dword ptr [ebp + 0x30], esi
// 0077a204  8b37                 mov esi, dword ptr [edi]
// 0077a206  85f6                 test esi, esi
// 0077a208  758c                 jne 0x77a196
// 0077a20a  5f                   pop edi
// 0077a20b  5e                   pop esi
// 0077a20c  5d                   pop ebp
// 0077a20d  8bc3                 mov eax, ebx
// 0077a20f  5b                   pop ebx
// 0077a210  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_separateudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
