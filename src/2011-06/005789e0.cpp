// roc 2011-06 005789e0  unit: seg_00570000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005789e0
//
// 005789e0  56                   push esi
// 005789e1  8b742408             mov esi, dword ptr [esp + 8]
// 005789e5  8b4604               mov eax, dword ptr [esi + 4]
// 005789e8  8b08                 mov ecx, dword ptr [eax]
// 005789ea  57                   push edi
// 005789eb  6a18                 push 0x18
// 005789ed  6a01                 push 1
// 005789ef  56                   push esi
// 005789f0  ffd1                 call ecx
// 005789f2  8bf8                 mov edi, eax
// 005789f4  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 005789fa  c70740b68600         mov dword ptr [edi], 0x86b640
// 00578a00  8b4628               mov eax, dword ptr [esi + 0x28]
// 00578a03  48                   dec eax
// 00578a04  83c40c               add esp, 0xc
// 00578a07  83f804               cmp eax, 4
// 00578a0a  771f                 ja 0x578a2b
// 00578a0c  ff2485508b5700       jmp dword ptr [eax*4 + 0x578b50]
// 00578a13  837e2401             cmp dword ptr [esi + 0x24], 1
// 00578a17  742b                 je 0x578a44
// 00578a19  eb16                 jmp 0x578a31
// 00578a1b  837e2403             cmp dword ptr [esi + 0x24], 3
// 00578a1f  7423                 je 0x578a44
// 00578a21  eb0e                 jmp 0x578a31
// 00578a23  837e2404             cmp dword ptr [esi + 0x24], 4
// 00578a27  741b                 je 0x578a44
// 00578a29  eb06                 jmp 0x578a31
// 00578a2b  837e2401             cmp dword ptr [esi + 0x24], 1
// 00578a2f  7d13                 jge 0x578a44
// 00578a31  8b16                 mov edx, dword ptr [esi]
// 00578a33  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 00578a3a  8b06                 mov eax, dword ptr [esi]
// 00578a3c  8b08                 mov ecx, dword ptr [eax]
// 00578a3e  56                   push esi
// 00578a3f  ffd1                 call ecx
// 00578a41  83c404               add esp, 4
// 00578a44  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00578a47  8bc1                 mov eax, ecx
// 00578a49  ba01000000           mov edx, 1
// 00578a4e  2bc2                 sub eax, edx
// 00578a50  0f8491000000         je 0x578ae7
// 00578a56  2bc2                 sub eax, edx
// 00578a58  7453                 je 0x578aad
// 00578a5a  83e802               sub eax, 2
// 00578a5d  741b                 je 0x578a7a
// 00578a5f  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 00578a62  0f858e000000         jne 0x578af6
// 00578a68  8b5624               mov edx, dword ptr [esi + 0x24]
// 00578a6b  895664               mov dword ptr [esi + 0x64], edx
// 00578a6e  c7470470875700       mov dword ptr [edi + 4], 0x578770
// 00578a75  e9bb000000           jmp 0x578b35
// 00578a7a  8b4628               mov eax, dword ptr [esi + 0x28]
// 00578a7d  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00578a84  83f805               cmp eax, 5
// 00578a87  7513                 jne 0x578a9c
// 00578a89  8bc6                 mov eax, esi
// 00578a8b  c7470490885700       mov dword ptr [edi + 4], 0x578890
// 00578a92  e8e9faffff           call 0x578580
// 00578a97  e999000000           jmp 0x578b35
// 00578a9c  83f804               cmp eax, 4
// 00578a9f  7555                 jne 0x578af6
// 00578aa1  c7470470875700       mov dword ptr [edi + 4], 0x578770
// 00578aa8  e988000000           jmp 0x578b35
// 00578aad  8b4628               mov eax, dword ptr [esi + 0x28]
// 00578ab0  c7466403000000       mov dword ptr [esi + 0x64], 3
// 00578ab7  83f803               cmp eax, 3
// 00578aba  7510                 jne 0x578acc
// 00578abc  8bc6                 mov eax, esi
// 00578abe  c7470450865700       mov dword ptr [edi + 4], 0x578650
// 00578ac5  e8b6faffff           call 0x578580
// 00578aca  eb69                 jmp 0x578b35
// 00578acc  3bc2                 cmp eax, edx
// 00578ace  7509                 jne 0x578ad9
// 00578ad0  c7470430885700       mov dword ptr [edi + 4], 0x578830
// 00578ad7  eb5c                 jmp 0x578b35
// 00578ad9  83f802               cmp eax, 2
// 00578adc  7518                 jne 0x578af6
// 00578ade  c7470470875700       mov dword ptr [edi + 4], 0x578770
// 00578ae5  eb4e                 jmp 0x578b35
// 00578ae7  8b4628               mov eax, dword ptr [esi + 0x28]
// 00578aea  895664               mov dword ptr [esi + 0x64], edx
// 00578aed  3bc2                 cmp eax, edx
// 00578aef  741a                 je 0x578b0b
// 00578af1  83f803               cmp eax, 3
// 00578af4  7415                 je 0x578b0b
// 00578af6  8b06                 mov eax, dword ptr [esi]
// 00578af8  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 00578aff  8b0e                 mov ecx, dword ptr [esi]
// 00578b01  8b11                 mov edx, dword ptr [ecx]
// 00578b03  56                   push esi
// 00578b04  ffd2                 call edx
// 00578b06  83c404               add esp, 4
// 00578b09  eb2a                 jmp 0x578b35
// 00578b0b  c7470400885700       mov dword ptr [edi + 4], 0x578800
// 00578b12  395624               cmp dword ptr [esi + 0x24], edx
// 00578b15  8bc2                 mov eax, edx
// 00578b17  7e1c                 jle 0x578b35
// 00578b19  b954000000           mov ecx, 0x54
// 00578b1e  8bff                 mov edi, edi
// 00578b20  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00578b26  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 00578b2b  03c2                 add eax, edx
// 00578b2d  83c154               add ecx, 0x54
// 00578b30  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00578b33  7ceb                 jl 0x578b20
// 00578b35  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00578b39  740a                 je 0x578b45
// 00578b3b  5f                   pop edi
// 00578b3c  c7466801000000       mov dword ptr [esi + 0x68], 1
// 00578b43  5e                   pop esi
// 00578b44  c3                   ret 
// 00578b45  8b4664               mov eax, dword ptr [esi + 0x64]
// 00578b48  5f                   pop edi
// 00578b49  894668               mov dword ptr [esi + 0x68], eax
// 00578b4c  5e                   pop esi
// 00578b4d  c3                   ret 
// 00578b4e  8bff                 mov edi, edi
// 00578b50  138a57001b8a         adc ecx, dword ptr [edx - 0x75e4ffa9]
// 00578b56  57                   push edi
// 00578b57  001b                 add byte ptr [ebx], bl
// 00578b59  8a5700               mov dl, byte ptr [edi]
// 00578b5c  238a5700238a         and ecx, dword ptr [edx - 0x75dcffa9]
// 00578b62  57                   push edi
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
