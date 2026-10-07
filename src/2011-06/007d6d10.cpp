// roc 2011-06 007d6d10  unit: RBX::EquationDisplay  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6d10
//
// 007d6d10  51                   push ecx
// 007d6d11  55                   push ebp
// 007d6d12  57                   push edi
// 007d6d13  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007d6d16  8b4730               mov eax, dword ptr [edi + 0x30]
// 007d6d19  8b28                 mov ebp, dword ptr [eax]
// 007d6d1b  3be8                 cmp ebp, eax
// 007d6d1d  7509                 jne 0x7d6d28
// 007d6d1f  c7473000000000       mov dword ptr [edi + 0x30], 0
// 007d6d26  eb05                 jmp 0x7d6d2d
// 007d6d28  8b4d00               mov ecx, dword ptr [ebp]
// 007d6d2b  8908                 mov dword ptr [eax], ecx
// 007d6d2d  8b5770               mov edx, dword ptr [edi + 0x70]
// 007d6d30  8b02                 mov eax, dword ptr [edx]
// 007d6d32  894500               mov dword ptr [ebp], eax
// 007d6d35  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 007d6d38  8929                 mov dword ptr [ecx], ebp
// 007d6d3a  8a4505               mov al, byte ptr [ebp + 5]
// 007d6d3d  8a5714               mov dl, byte ptr [edi + 0x14]
// 007d6d40  24f8                 and al, 0xf8
// 007d6d42  80e203               and dl, 3
// 007d6d45  0ad0                 or dl, al
// 007d6d47  8b4508               mov eax, dword ptr [ebp + 8]
// 007d6d4a  885505               mov byte ptr [ebp + 5], dl
// 007d6d4d  85c0                 test eax, eax
// 007d6d4f  7479                 je 0x7d6dca
// 007d6d51  f6400604             test byte ptr [eax + 6], 4
// 007d6d55  7573                 jne 0x7d6dca
// 007d6d57  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007d6d5a  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 007d6d60  52                   push edx
// 007d6d61  6a02                 push 2
// 007d6d63  50                   push eax
// 007d6d64  e877060000           call 0x7d73e0
// 007d6d69  83c40c               add esp, 0xc
// 007d6d6c  85c0                 test eax, eax
// 007d6d6e  745a                 je 0x7d6dca
// 007d6d70  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 007d6d73  53                   push ebx
// 007d6d74  8a5e39               mov bl, byte ptr [esi + 0x39]
// 007d6d77  c6463900             mov byte ptr [esi + 0x39], 0
// 007d6d7b  8b5744               mov edx, dword ptr [edi + 0x44]
// 007d6d7e  03d2                 add edx, edx
// 007d6d80  895740               mov dword ptr [edi + 0x40], edx
// 007d6d83  8b10                 mov edx, dword ptr [eax]
// 007d6d85  894c240c             mov dword ptr [esp + 0xc], ecx
// 007d6d89  8b4e08               mov ecx, dword ptr [esi + 8]
// 007d6d8c  8911                 mov dword ptr [ecx], edx
// 007d6d8e  8b5004               mov edx, dword ptr [eax + 4]
// 007d6d91  895104               mov dword ptr [ecx + 4], edx
// 007d6d94  8b4008               mov eax, dword ptr [eax + 8]
// 007d6d97  894108               mov dword ptr [ecx + 8], eax
// 007d6d9a  8b4608               mov eax, dword ptr [esi + 8]
// 007d6d9d  83c010               add eax, 0x10
// 007d6da0  8928                 mov dword ptr [eax], ebp
// 007d6da2  c7400807000000       mov dword ptr [eax + 8], 7
// 007d6da9  83460820             add dword ptr [esi + 8], 0x20
// 007d6dad  8b4608               mov eax, dword ptr [esi + 8]
// 007d6db0  6a00                 push 0
// 007d6db2  83c0e0               add eax, -0x20
// 007d6db5  50                   push eax
// 007d6db6  56                   push esi
// 007d6db7  e8e47cfaff           call 0x77eaa0
// 007d6dbc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d6dc0  83c40c               add esp, 0xc
// 007d6dc3  885e39               mov byte ptr [esi + 0x39], bl
// 007d6dc6  894f40               mov dword ptr [edi + 0x40], ecx
// 007d6dc9  5b                   pop ebx
// 007d6dca  5f                   pop edi
// 007d6dcb  5d                   pop ebp
// 007d6dcc  59                   pop ecx
// 007d6dcd  c3                   ret 
// library lua-5.1.4/lgc.c (function _GCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
