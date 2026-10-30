// roc 2009-06 0059eba0  unit: seg_00590000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059eba0
//
// 0059eba0  56                   push esi
// 0059eba1  8b742408             mov esi, dword ptr [esp + 8]
// 0059eba5  8b4604               mov eax, dword ptr [esi + 4]
// 0059eba8  8b08                 mov ecx, dword ptr [eax]
// 0059ebaa  57                   push edi
// 0059ebab  6a18                 push 0x18
// 0059ebad  6a01                 push 1
// 0059ebaf  56                   push esi
// 0059ebb0  ffd1                 call ecx
// 0059ebb2  8bf8                 mov edi, eax
// 0059ebb4  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0059ebba  c707e0496700         mov dword ptr [edi], 0x6749e0
// 0059ebc0  8b4628               mov eax, dword ptr [esi + 0x28]
// 0059ebc3  48                   dec eax
// 0059ebc4  83c40c               add esp, 0xc
// 0059ebc7  83f804               cmp eax, 4
// 0059ebca  771f                 ja 0x59ebeb
// 0059ebcc  ff248510ed5900       jmp dword ptr [eax*4 + 0x59ed10]
// 0059ebd3  837e2401             cmp dword ptr [esi + 0x24], 1
// 0059ebd7  742b                 je 0x59ec04
// 0059ebd9  eb16                 jmp 0x59ebf1
// 0059ebdb  837e2403             cmp dword ptr [esi + 0x24], 3
// 0059ebdf  7423                 je 0x59ec04
// 0059ebe1  eb0e                 jmp 0x59ebf1
// 0059ebe3  837e2404             cmp dword ptr [esi + 0x24], 4
// 0059ebe7  741b                 je 0x59ec04
// 0059ebe9  eb06                 jmp 0x59ebf1
// 0059ebeb  837e2401             cmp dword ptr [esi + 0x24], 1
// 0059ebef  7d13                 jge 0x59ec04
// 0059ebf1  8b16                 mov edx, dword ptr [esi]
// 0059ebf3  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0059ebfa  8b06                 mov eax, dword ptr [esi]
// 0059ebfc  8b08                 mov ecx, dword ptr [eax]
// 0059ebfe  56                   push esi
// 0059ebff  ffd1                 call ecx
// 0059ec01  83c404               add esp, 4
// 0059ec04  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0059ec07  8bc1                 mov eax, ecx
// 0059ec09  ba01000000           mov edx, 1
// 0059ec0e  2bc2                 sub eax, edx
// 0059ec10  0f8491000000         je 0x59eca7
// 0059ec16  2bc2                 sub eax, edx
// 0059ec18  7453                 je 0x59ec6d
// 0059ec1a  83e802               sub eax, 2
// 0059ec1d  741b                 je 0x59ec3a
// 0059ec1f  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 0059ec22  0f858e000000         jne 0x59ecb6
// 0059ec28  8b5624               mov edx, dword ptr [esi + 0x24]
// 0059ec2b  895664               mov dword ptr [esi + 0x64], edx
// 0059ec2e  c7470430e95900       mov dword ptr [edi + 4], 0x59e930
// 0059ec35  e9bb000000           jmp 0x59ecf5
// 0059ec3a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0059ec3d  c7466404000000       mov dword ptr [esi + 0x64], 4
// 0059ec44  83f805               cmp eax, 5
// 0059ec47  7513                 jne 0x59ec5c
// 0059ec49  8bc6                 mov eax, esi
// 0059ec4b  c7470450ea5900       mov dword ptr [edi + 4], 0x59ea50
// 0059ec52  e8e9faffff           call 0x59e740
// 0059ec57  e999000000           jmp 0x59ecf5
// 0059ec5c  83f804               cmp eax, 4
// 0059ec5f  7555                 jne 0x59ecb6
// 0059ec61  c7470430e95900       mov dword ptr [edi + 4], 0x59e930
// 0059ec68  e988000000           jmp 0x59ecf5
// 0059ec6d  8b4628               mov eax, dword ptr [esi + 0x28]
// 0059ec70  c7466403000000       mov dword ptr [esi + 0x64], 3
// 0059ec77  83f803               cmp eax, 3
// 0059ec7a  7510                 jne 0x59ec8c
// 0059ec7c  8bc6                 mov eax, esi
// 0059ec7e  c7470410e85900       mov dword ptr [edi + 4], 0x59e810
// 0059ec85  e8b6faffff           call 0x59e740
// 0059ec8a  eb69                 jmp 0x59ecf5
// 0059ec8c  3bc2                 cmp eax, edx
// 0059ec8e  7509                 jne 0x59ec99
// 0059ec90  c74704f0e95900       mov dword ptr [edi + 4], 0x59e9f0
// 0059ec97  eb5c                 jmp 0x59ecf5
// 0059ec99  83f802               cmp eax, 2
// 0059ec9c  7518                 jne 0x59ecb6
// 0059ec9e  c7470430e95900       mov dword ptr [edi + 4], 0x59e930
// 0059eca5  eb4e                 jmp 0x59ecf5
// 0059eca7  8b4628               mov eax, dword ptr [esi + 0x28]
// 0059ecaa  895664               mov dword ptr [esi + 0x64], edx
// 0059ecad  3bc2                 cmp eax, edx
// 0059ecaf  741a                 je 0x59eccb
// 0059ecb1  83f803               cmp eax, 3
// 0059ecb4  7415                 je 0x59eccb
// 0059ecb6  8b06                 mov eax, dword ptr [esi]
// 0059ecb8  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0059ecbf  8b0e                 mov ecx, dword ptr [esi]
// 0059ecc1  8b11                 mov edx, dword ptr [ecx]
// 0059ecc3  56                   push esi
// 0059ecc4  ffd2                 call edx
// 0059ecc6  83c404               add esp, 4
// 0059ecc9  eb2a                 jmp 0x59ecf5
// 0059eccb  c74704c0e95900       mov dword ptr [edi + 4], 0x59e9c0
// 0059ecd2  395624               cmp dword ptr [esi + 0x24], edx
// 0059ecd5  8bc2                 mov eax, edx
// 0059ecd7  7e1c                 jle 0x59ecf5
// 0059ecd9  b954000000           mov ecx, 0x54
// 0059ecde  8bff                 mov edi, edi
// 0059ece0  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0059ece6  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 0059eceb  03c2                 add eax, edx
// 0059eced  83c154               add ecx, 0x54
// 0059ecf0  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0059ecf3  7ceb                 jl 0x59ece0
// 0059ecf5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0059ecf9  740a                 je 0x59ed05
// 0059ecfb  5f                   pop edi
// 0059ecfc  c7466801000000       mov dword ptr [esi + 0x68], 1
// 0059ed03  5e                   pop esi
// 0059ed04  c3                   ret 
// 0059ed05  8b4664               mov eax, dword ptr [esi + 0x64]
// 0059ed08  5f                   pop edi
// 0059ed09  894668               mov dword ptr [esi + 0x68], eax
// 0059ed0c  5e                   pop esi
// 0059ed0d  c3                   ret 
// 0059ed0e  8bff                 mov edi, edi
// 0059ed10  d3eb                 shr ebx, cl
// 0059ed12  59                   pop ecx
// 0059ed13  00db                 add bl, bl
// 0059ed15  eb59                 jmp 0x59ed70
// 0059ed17  00db                 add bl, bl
// 0059ed19  eb59                 jmp 0x59ed74
// 0059ed1b  00e3                 add bl, ah
// 0059ed1d  eb59                 jmp 0x59ed78
// 0059ed1f  00e3                 add bl, ah
// 0059ed21  eb59                 jmp 0x59ed7c
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
