// roc 2011-06 007d64b0  unit: RBX::EquationDisplay  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d64b0
//
// 007d64b0  8b442404             mov eax, dword ptr [esp + 4]
// 007d64b4  53                   push ebx
// 007d64b5  55                   push ebp
// 007d64b6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 007d64b9  56                   push esi
// 007d64ba  57                   push edi
// 007d64bb  8b7d70               mov edi, dword ptr [ebp + 0x70]
// 007d64be  8b37                 mov esi, dword ptr [edi]
// 007d64c0  33db                 xor ebx, ebx
// 007d64c2  85f6                 test esi, esi
// 007d64c4  7474                 je 0x7d653a
// 007d64c6  8a4605               mov al, byte ptr [esi + 5]
// 007d64c9  a803                 test al, 3
// 007d64cb  7507                 jne 0x7d64d4
// 007d64cd  837c241800           cmp dword ptr [esp + 0x18], 0
// 007d64d2  7404                 je 0x7d64d8
// 007d64d4  a808                 test al, 8
// 007d64d6  7404                 je 0x7d64dc
// 007d64d8  8bfe                 mov edi, esi
// 007d64da  eb58                 jmp 0x7d6534
// 007d64dc  8b4608               mov eax, dword ptr [esi + 8]
// 007d64df  85c0                 test eax, eax
// 007d64e1  7423                 je 0x7d6506
// 007d64e3  f6400604             test byte ptr [eax + 6], 4
// 007d64e7  751d                 jne 0x7d6506
// 007d64e9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d64ed  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007d64f0  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 007d64f6  51                   push ecx
// 007d64f7  6a02                 push 2
// 007d64f9  50                   push eax
// 007d64fa  e8e10e0000           call 0x7d73e0
// 007d64ff  83c40c               add esp, 0xc
// 007d6502  85c0                 test eax, eax
// 007d6504  7508                 jne 0x7d650e
// 007d6506  804e0508             or byte ptr [esi + 5], 8
// 007d650a  8bfe                 mov edi, esi
// 007d650c  eb26                 jmp 0x7d6534
// 007d650e  804e0508             or byte ptr [esi + 5], 8
// 007d6512  8b06                 mov eax, dword ptr [esi]
// 007d6514  8b5610               mov edx, dword ptr [esi + 0x10]
// 007d6517  8907                 mov dword ptr [edi], eax
// 007d6519  8b4530               mov eax, dword ptr [ebp + 0x30]
// 007d651c  8d5c1318             lea ebx, [ebx + edx + 0x18]
// 007d6520  85c0                 test eax, eax
// 007d6522  7504                 jne 0x7d6528
// 007d6524  8936                 mov dword ptr [esi], esi
// 007d6526  eb09                 jmp 0x7d6531
// 007d6528  8b08                 mov ecx, dword ptr [eax]
// 007d652a  890e                 mov dword ptr [esi], ecx
// 007d652c  8b5530               mov edx, dword ptr [ebp + 0x30]
// 007d652f  8932                 mov dword ptr [edx], esi
// 007d6531  897530               mov dword ptr [ebp + 0x30], esi
// 007d6534  8b37                 mov esi, dword ptr [edi]
// 007d6536  85f6                 test esi, esi
// 007d6538  758c                 jne 0x7d64c6
// 007d653a  5f                   pop edi
// 007d653b  5e                   pop esi
// 007d653c  5d                   pop ebp
// 007d653d  8bc3                 mov eax, ebx
// 007d653f  5b                   pop ebx
// 007d6540  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_separateudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
