// roc 2010-06 0077a9d0  unit: RBX::PartDropTool  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a9d0
//
// 0077a9d0  51                   push ecx
// 0077a9d1  55                   push ebp
// 0077a9d2  57                   push edi
// 0077a9d3  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0077a9d6  8b4730               mov eax, dword ptr [edi + 0x30]
// 0077a9d9  8b28                 mov ebp, dword ptr [eax]
// 0077a9db  3be8                 cmp ebp, eax
// 0077a9dd  7509                 jne 0x77a9e8
// 0077a9df  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0077a9e6  eb05                 jmp 0x77a9ed
// 0077a9e8  8b4d00               mov ecx, dword ptr [ebp]
// 0077a9eb  8908                 mov dword ptr [eax], ecx
// 0077a9ed  8b5770               mov edx, dword ptr [edi + 0x70]
// 0077a9f0  8b02                 mov eax, dword ptr [edx]
// 0077a9f2  894500               mov dword ptr [ebp], eax
// 0077a9f5  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 0077a9f8  8929                 mov dword ptr [ecx], ebp
// 0077a9fa  8a4505               mov al, byte ptr [ebp + 5]
// 0077a9fd  8a5714               mov dl, byte ptr [edi + 0x14]
// 0077aa00  24f8                 and al, 0xf8
// 0077aa02  80e203               and dl, 3
// 0077aa05  0ad0                 or dl, al
// 0077aa07  8b4508               mov eax, dword ptr [ebp + 8]
// 0077aa0a  885505               mov byte ptr [ebp + 5], dl
// 0077aa0d  85c0                 test eax, eax
// 0077aa0f  7479                 je 0x77aa8a
// 0077aa11  f6400604             test byte ptr [eax + 6], 4
// 0077aa15  7573                 jne 0x77aa8a
// 0077aa17  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077aa1a  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0077aa20  52                   push edx
// 0077aa21  6a02                 push 2
// 0077aa23  50                   push eax
// 0077aa24  e877060000           call 0x77b0a0
// 0077aa29  83c40c               add esp, 0xc
// 0077aa2c  85c0                 test eax, eax
// 0077aa2e  745a                 je 0x77aa8a
// 0077aa30  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0077aa33  53                   push ebx
// 0077aa34  8a5e39               mov bl, byte ptr [esi + 0x39]
// 0077aa37  c6463900             mov byte ptr [esi + 0x39], 0
// 0077aa3b  8b5744               mov edx, dword ptr [edi + 0x44]
// 0077aa3e  03d2                 add edx, edx
// 0077aa40  895740               mov dword ptr [edi + 0x40], edx
// 0077aa43  8b10                 mov edx, dword ptr [eax]
// 0077aa45  894c240c             mov dword ptr [esp + 0xc], ecx
// 0077aa49  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077aa4c  8911                 mov dword ptr [ecx], edx
// 0077aa4e  8b5004               mov edx, dword ptr [eax + 4]
// 0077aa51  895104               mov dword ptr [ecx + 4], edx
// 0077aa54  8b4008               mov eax, dword ptr [eax + 8]
// 0077aa57  894108               mov dword ptr [ecx + 8], eax
// 0077aa5a  8b4608               mov eax, dword ptr [esi + 8]
// 0077aa5d  83c010               add eax, 0x10
// 0077aa60  8928                 mov dword ptr [eax], ebp
// 0077aa62  c7400807000000       mov dword ptr [eax + 8], 7
// 0077aa69  83460820             add dword ptr [esi + 8], 0x20
// 0077aa6d  8b4608               mov eax, dword ptr [esi + 8]
// 0077aa70  6a00                 push 0
// 0077aa72  83c0e0               add eax, -0x20
// 0077aa75  50                   push eax
// 0077aa76  56                   push esi
// 0077aa77  e8e458fbff           call 0x730360
// 0077aa7c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077aa80  83c40c               add esp, 0xc
// 0077aa83  885e39               mov byte ptr [esi + 0x39], bl
// 0077aa86  894f40               mov dword ptr [edi + 0x40], ecx
// 0077aa89  5b                   pop ebx
// 0077aa8a  5f                   pop edi
// 0077aa8b  5d                   pop ebp
// 0077aa8c  59                   pop ecx
// 0077aa8d  c3                   ret 
// library lua-5.1.4/lgc.c (function _GCTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
