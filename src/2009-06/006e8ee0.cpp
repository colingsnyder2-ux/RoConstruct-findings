// roc 2009-06 006e8ee0  unit: RBX::PartDropTool  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e8ee0
//
// 006e8ee0  8b442404             mov eax, dword ptr [esp + 4]
// 006e8ee4  53                   push ebx
// 006e8ee5  55                   push ebp
// 006e8ee6  8b6810               mov ebp, dword ptr [eax + 0x10]
// 006e8ee9  56                   push esi
// 006e8eea  57                   push edi
// 006e8eeb  8b7d70               mov edi, dword ptr [ebp + 0x70]
// 006e8eee  8b37                 mov esi, dword ptr [edi]
// 006e8ef0  33db                 xor ebx, ebx
// 006e8ef2  85f6                 test esi, esi
// 006e8ef4  7474                 je 0x6e8f6a
// 006e8ef6  8a4605               mov al, byte ptr [esi + 5]
// 006e8ef9  a803                 test al, 3
// 006e8efb  7507                 jne 0x6e8f04
// 006e8efd  837c241800           cmp dword ptr [esp + 0x18], 0
// 006e8f02  7404                 je 0x6e8f08
// 006e8f04  a808                 test al, 8
// 006e8f06  7404                 je 0x6e8f0c
// 006e8f08  8bfe                 mov edi, esi
// 006e8f0a  eb58                 jmp 0x6e8f64
// 006e8f0c  8b4608               mov eax, dword ptr [esi + 8]
// 006e8f0f  85c0                 test eax, eax
// 006e8f11  7423                 je 0x6e8f36
// 006e8f13  f6400604             test byte ptr [eax + 6], 4
// 006e8f17  751d                 jne 0x6e8f36
// 006e8f19  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e8f1d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006e8f20  8b8ac4000000         mov ecx, dword ptr [edx + 0xc4]
// 006e8f26  51                   push ecx
// 006e8f27  6a02                 push 2
// 006e8f29  50                   push eax
// 006e8f2a  e8d10e0000           call 0x6e9e00
// 006e8f2f  83c40c               add esp, 0xc
// 006e8f32  85c0                 test eax, eax
// 006e8f34  7508                 jne 0x6e8f3e
// 006e8f36  804e0508             or byte ptr [esi + 5], 8
// 006e8f3a  8bfe                 mov edi, esi
// 006e8f3c  eb26                 jmp 0x6e8f64
// 006e8f3e  804e0508             or byte ptr [esi + 5], 8
// 006e8f42  8b06                 mov eax, dword ptr [esi]
// 006e8f44  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e8f47  8907                 mov dword ptr [edi], eax
// 006e8f49  8b4530               mov eax, dword ptr [ebp + 0x30]
// 006e8f4c  8d5c1318             lea ebx, [ebx + edx + 0x18]
// 006e8f50  85c0                 test eax, eax
// 006e8f52  7504                 jne 0x6e8f58
// 006e8f54  8936                 mov dword ptr [esi], esi
// 006e8f56  eb09                 jmp 0x6e8f61
// 006e8f58  8b08                 mov ecx, dword ptr [eax]
// 006e8f5a  890e                 mov dword ptr [esi], ecx
// 006e8f5c  8b5530               mov edx, dword ptr [ebp + 0x30]
// 006e8f5f  8932                 mov dword ptr [edx], esi
// 006e8f61  897530               mov dword ptr [ebp + 0x30], esi
// 006e8f64  8b37                 mov esi, dword ptr [edi]
// 006e8f66  85f6                 test esi, esi
// 006e8f68  758c                 jne 0x6e8ef6
// 006e8f6a  5f                   pop edi
// 006e8f6b  5e                   pop esi
// 006e8f6c  5d                   pop ebp
// 006e8f6d  8bc3                 mov eax, ebx
// 006e8f6f  5b                   pop ebx
// 006e8f70  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_separateudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
