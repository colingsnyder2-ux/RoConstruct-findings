// roc 2009-12 00620bd0  unit: seg_00620000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620bd0
//
// 00620bd0  56                   push esi
// 00620bd1  8b742408             mov esi, dword ptr [esp + 8]
// 00620bd5  8b4604               mov eax, dword ptr [esi + 4]
// 00620bd8  8b08                 mov ecx, dword ptr [eax]
// 00620bda  57                   push edi
// 00620bdb  6a18                 push 0x18
// 00620bdd  6a01                 push 1
// 00620bdf  56                   push esi
// 00620be0  ffd1                 call ecx
// 00620be2  8bf8                 mov edi, eax
// 00620be4  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 00620bea  c707904a8500         mov dword ptr [edi], 0x854a90
// 00620bf0  8b4628               mov eax, dword ptr [esi + 0x28]
// 00620bf3  48                   dec eax
// 00620bf4  83c40c               add esp, 0xc
// 00620bf7  83f804               cmp eax, 4
// 00620bfa  771f                 ja 0x620c1b
// 00620bfc  ff2485400d6200       jmp dword ptr [eax*4 + 0x620d40]
// 00620c03  837e2401             cmp dword ptr [esi + 0x24], 1
// 00620c07  742b                 je 0x620c34
// 00620c09  eb16                 jmp 0x620c21
// 00620c0b  837e2403             cmp dword ptr [esi + 0x24], 3
// 00620c0f  7423                 je 0x620c34
// 00620c11  eb0e                 jmp 0x620c21
// 00620c13  837e2404             cmp dword ptr [esi + 0x24], 4
// 00620c17  741b                 je 0x620c34
// 00620c19  eb06                 jmp 0x620c21
// 00620c1b  837e2401             cmp dword ptr [esi + 0x24], 1
// 00620c1f  7d13                 jge 0x620c34
// 00620c21  8b16                 mov edx, dword ptr [esi]
// 00620c23  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 00620c2a  8b06                 mov eax, dword ptr [esi]
// 00620c2c  8b08                 mov ecx, dword ptr [eax]
// 00620c2e  56                   push esi
// 00620c2f  ffd1                 call ecx
// 00620c31  83c404               add esp, 4
// 00620c34  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00620c37  8bc1                 mov eax, ecx
// 00620c39  ba01000000           mov edx, 1
// 00620c3e  2bc2                 sub eax, edx
// 00620c40  0f8491000000         je 0x620cd7
// 00620c46  2bc2                 sub eax, edx
// 00620c48  7453                 je 0x620c9d
// 00620c4a  83e802               sub eax, 2
// 00620c4d  741b                 je 0x620c6a
// 00620c4f  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 00620c52  0f858e000000         jne 0x620ce6
// 00620c58  8b5624               mov edx, dword ptr [esi + 0x24]
// 00620c5b  895664               mov dword ptr [esi + 0x64], edx
// 00620c5e  c7470460096200       mov dword ptr [edi + 4], 0x620960
// 00620c65  e9bb000000           jmp 0x620d25
// 00620c6a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00620c6d  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00620c74  83f805               cmp eax, 5
// 00620c77  7513                 jne 0x620c8c
// 00620c79  8bc6                 mov eax, esi
// 00620c7b  c74704800a6200       mov dword ptr [edi + 4], 0x620a80
// 00620c82  e8e9faffff           call 0x620770
// 00620c87  e999000000           jmp 0x620d25
// 00620c8c  83f804               cmp eax, 4
// 00620c8f  7555                 jne 0x620ce6
// 00620c91  c7470460096200       mov dword ptr [edi + 4], 0x620960
// 00620c98  e988000000           jmp 0x620d25
// 00620c9d  8b4628               mov eax, dword ptr [esi + 0x28]
// 00620ca0  c7466403000000       mov dword ptr [esi + 0x64], 3
// 00620ca7  83f803               cmp eax, 3
// 00620caa  7510                 jne 0x620cbc
// 00620cac  8bc6                 mov eax, esi
// 00620cae  c7470440086200       mov dword ptr [edi + 4], 0x620840
// 00620cb5  e8b6faffff           call 0x620770
// 00620cba  eb69                 jmp 0x620d25
// 00620cbc  3bc2                 cmp eax, edx
// 00620cbe  7509                 jne 0x620cc9
// 00620cc0  c74704200a6200       mov dword ptr [edi + 4], 0x620a20
// 00620cc7  eb5c                 jmp 0x620d25
// 00620cc9  83f802               cmp eax, 2
// 00620ccc  7518                 jne 0x620ce6
// 00620cce  c7470460096200       mov dword ptr [edi + 4], 0x620960
// 00620cd5  eb4e                 jmp 0x620d25
// 00620cd7  8b4628               mov eax, dword ptr [esi + 0x28]
// 00620cda  895664               mov dword ptr [esi + 0x64], edx
// 00620cdd  3bc2                 cmp eax, edx
// 00620cdf  741a                 je 0x620cfb
// 00620ce1  83f803               cmp eax, 3
// 00620ce4  7415                 je 0x620cfb
// 00620ce6  8b06                 mov eax, dword ptr [esi]
// 00620ce8  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 00620cef  8b0e                 mov ecx, dword ptr [esi]
// 00620cf1  8b11                 mov edx, dword ptr [ecx]
// 00620cf3  56                   push esi
// 00620cf4  ffd2                 call edx
// 00620cf6  83c404               add esp, 4
// 00620cf9  eb2a                 jmp 0x620d25
// 00620cfb  c74704f0096200       mov dword ptr [edi + 4], 0x6209f0
// 00620d02  395624               cmp dword ptr [esi + 0x24], edx
// 00620d05  8bc2                 mov eax, edx
// 00620d07  7e1c                 jle 0x620d25
// 00620d09  b954000000           mov ecx, 0x54
// 00620d0e  8bff                 mov edi, edi
// 00620d10  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00620d16  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 00620d1b  03c2                 add eax, edx
// 00620d1d  83c154               add ecx, 0x54
// 00620d20  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00620d23  7ceb                 jl 0x620d10
// 00620d25  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00620d29  740a                 je 0x620d35
// 00620d2b  5f                   pop edi
// 00620d2c  c7466801000000       mov dword ptr [esi + 0x68], 1
// 00620d33  5e                   pop esi
// 00620d34  c3                   ret 
// 00620d35  8b4664               mov eax, dword ptr [esi + 0x64]
// 00620d38  5f                   pop edi
// 00620d39  894668               mov dword ptr [esi + 0x68], eax
// 00620d3c  5e                   pop esi
// 00620d3d  c3                   ret 
// 00620d3e  8bff                 mov edi, edi
// 00620d40  030c62               add ecx, dword ptr [edx]
// 00620d43  000b                 add byte ptr [ebx], cl
// 00620d45  0c62                 or al, 0x62
// 00620d47  000b                 add byte ptr [ebx], cl
// 00620d49  0c62                 or al, 0x62
// 00620d4b  0013                 add byte ptr [ebx], dl
// 00620d4d  0c62                 or al, 0x62
// 00620d4f  0013                 add byte ptr [ebx], dl
// 00620d51  0c62                 or al, 0x62
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
