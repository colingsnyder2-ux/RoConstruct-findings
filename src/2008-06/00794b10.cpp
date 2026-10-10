// roc 2008-06 00794b10  unit: CXTPRibbonGroup  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794b10
//
// 00794b10  83ec18               sub esp, 0x18
// 00794b13  53                   push ebx
// 00794b14  8bd9                 mov ebx, ecx
// 00794b16  8b9380000000         mov edx, dword ptr [ebx + 0x80]
// 00794b1c  895c2408             mov dword ptr [esp + 8], ebx
// 00794b20  85d2                 test edx, edx
// 00794b22  7509                 jne 0x794b2d
// 00794b24  33c0                 xor eax, eax
// 00794b26  5b                   pop ebx
// 00794b27  83c418               add esp, 0x18
// 00794b2a  c20800               ret 8
// 00794b2d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00794b30  8b4208               mov eax, dword ptr [edx + 8]
// 00794b33  3bc8                 cmp ecx, eax
// 00794b35  7d25                 jge 0x794b5c
// 00794b37  837c242002           cmp dword ptr [esp + 0x20], 2
// 00794b3c  75e6                 jne 0x794b24
// 00794b3e  83f910               cmp ecx, 0x10
// 00794b41  7ee1                 jle 0x794b24
// 00794b43  2b442424             sub eax, dword ptr [esp + 0x24]
// 00794b47  3bc8                 cmp ecx, eax
// 00794b49  7e02                 jle 0x794b4d
// 00794b4b  8bc1                 mov eax, ecx
// 00794b4d  894208               mov dword ptr [edx + 8], eax
// 00794b50  b801000000           mov eax, 1
// 00794b55  5b                   pop ebx
// 00794b56  83c418               add esp, 0x18
// 00794b59  c20800               ret 8
// 00794b5c  55                   push ebp
// 00794b5d  56                   push esi
// 00794b5e  8b735c               mov esi, dword ptr [ebx + 0x5c]
// 00794b61  57                   push edi
// 00794b62  8bce                 mov ecx, esi
// 00794b64  e857d5f8ff           call 0x7220c0
// 00794b69  8bb860060000         mov edi, dword ptr [eax + 0x660]
// 00794b6f  8b06                 mov eax, dword ptr [esi]
// 00794b71  8b9030020000         mov edx, dword ptr [eax + 0x230]
// 00794b77  8bce                 mov ecx, esi
// 00794b79  ffd2                 call edx
// 00794b7b  8b4b5c               mov ecx, dword ptr [ebx + 0x5c]
// 00794b7e  8b11                 mov edx, dword ptr [ecx]
// 00794b80  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 00794b86  8bf0                 mov esi, eax
// 00794b88  b8feffffff           mov eax, 0xfffffffe
// 00794b8d  2bc7                 sub eax, edi
// 00794b8f  03f0                 add esi, eax
// 00794b91  8d442420             lea eax, [esp + 0x20]
// 00794b95  50                   push eax
// 00794b96  ffd2                 call edx
// 00794b98  8bc8                 mov ecx, eax
// 00794b9a  8bc6                 mov eax, esi
// 00794b9c  99                   cdq 
// 00794b9d  f77904               idiv dword ptr [ecx + 4]
// 00794ba0  33c9                 xor ecx, ecx
// 00794ba2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00794baa  8be8                 mov ebp, eax
// 00794bac  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00794bb2  8b5004               mov edx, dword ptr [eax + 4]
// 00794bb5  8b00                 mov eax, dword ptr [eax]
// 00794bb7  8954241c             mov dword ptr [esp + 0x1c], edx
// 00794bbb  89442430             mov dword ptr [esp + 0x30], eax
// 00794bbf  8bc5                 mov eax, ebp
// 00794bc1  ba04000000           mov edx, 4
// 00794bc6  f7e2                 mul edx
// 00794bc8  0f90c1               seto cl
// 00794bcb  896c2420             mov dword ptr [esp + 0x20], ebp
// 00794bcf  f7d9                 neg ecx
// 00794bd1  0bc8                 or ecx, eax
// 00794bd3  51                   push ecx
// 00794bd4  e87dbdf0ff           call 0x6a0956
// 00794bd9  83c404               add esp, 4
// 00794bdc  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00794be1  89442410             mov dword ptr [esp + 0x10], eax
// 00794be5  0f852f010000         jne 0x794d1a
// 00794beb  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00794bef  0f85c0000000         jne 0x794cb5
// 00794bf5  83fd01               cmp ebp, 1
// 00794bf8  0f8eb7000000         jle 0x794cb5
// 00794bfe  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00794c02  4b                   dec ebx
// 00794c03  83fb02               cmp ebx, 2
// 00794c06  0f8ca5000000         jl 0x794cb1
// 00794c0c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00794c10  8bc3                 mov eax, ebx
// 00794c12  c1e004               shl eax, 4
// 00794c15  03c3                 add eax, ebx
// 00794c17  8d6c813c             lea ebp, [ecx + eax*4 + 0x3c]
// 00794c1b  eb03                 jmp 0x794c20
// 00794c1d  8d4900               lea ecx, [ecx]
// 00794c20  837df800             cmp dword ptr [ebp - 8], 0
// 00794c24  7549                 jne 0x794c6f
// 00794c26  33c9                 xor ecx, ecx
// 00794c28  8bd3                 mov edx, ebx
// 00794c2a  85db                 test ebx, ebx
// 00794c2c  7c3b                 jl 0x794c69
// 00794c2e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00794c32  48                   dec eax
// 00794c33  8bfd                 mov edi, ebp
// 00794c35  3bc8                 cmp ecx, eax
// 00794c37  7406                 je 0x794c3f
// 00794c39  837ff800             cmp dword ptr [edi - 8], 0
// 00794c3d  752a                 jne 0x794c69
// 00794c3f  8b37                 mov esi, dword ptr [edi]
// 00794c41  83be5001000004       cmp dword ptr [esi + 0x150], 4
// 00794c48  751f                 jne 0x794c69
// 00794c4a  83befc0000000a       cmp dword ptr [esi + 0xfc], 0xa
// 00794c51  7416                 je 0x794c69
// 00794c53  8b742410             mov esi, dword ptr [esp + 0x10]
// 00794c57  89148e               mov dword ptr [esi + ecx*4], edx
// 00794c5a  41                   inc ecx
// 00794c5b  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00794c5f  7419                 je 0x794c7a
// 00794c61  4a                   dec edx
// 00794c62  83ef44               sub edi, 0x44
// 00794c65  85d2                 test edx, edx
// 00794c67  7dcc                 jge 0x794c35
// 00794c69  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 00794c6d  740b                 je 0x794c7a
// 00794c6f  4b                   dec ebx
// 00794c70  83ed44               sub ebp, 0x44
// 00794c73  83fb02               cmp ebx, 2
// 00794c76  7da8                 jge 0x794c20
// 00794c78  eb37                 jmp 0x794cb1
// 00794c7a  33d2                 xor edx, edx
// 00794c7c  85c9                 test ecx, ecx
// 00794c7e  7e29                 jle 0x794ca9
// 00794c80  8b442430             mov eax, dword ptr [esp + 0x30]
// 00794c84  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00794c88  8d5a03               lea ebx, [edx + 3]
// 00794c8b  eb03                 jmp 0x794c90
// 00794c8d  8d4900               lea ecx, [ecx]
// 00794c90  8b3497               mov esi, dword ptr [edi + edx*4]
// 00794c93  8bee                 mov ebp, esi
// 00794c95  c1e504               shl ebp, 4
// 00794c98  03ee                 add ebp, esi
// 00794c9a  8b74a83c             mov esi, dword ptr [eax + ebp*4 + 0x3c]
// 00794c9e  42                   inc edx
// 00794c9f  3bd1                 cmp edx, ecx
// 00794ca1  899e50010000         mov dword ptr [esi + 0x150], ebx
// 00794ca7  7ce7                 jl 0x794c90
// 00794ca9  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00794cb1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00794cb5  8b542410             mov edx, dword ptr [esp + 0x10]
// 00794cb9  52                   push edx
// 00794cba  e88bbcf0ff           call 0x6a094a
// 00794cbf  83c404               add esp, 4
// 00794cc2  837c242c03           cmp dword ptr [esp + 0x2c], 3
// 00794cc7  5f                   pop edi
// 00794cc8  5e                   pop esi
// 00794cc9  5d                   pop ebp
// 00794cca  0f8592020000         jne 0x794f62
// 00794cd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00794cd4  83f901               cmp ecx, 1
// 00794cd7  0f8e85020000         jle 0x794f62
// 00794cdd  837b7000             cmp dword ptr [ebx + 0x70], 0
// 00794ce1  0f857b020000         jne 0x794f62
// 00794ce7  c7437001000000       mov dword ptr [ebx + 0x70], 1
// 00794cee  85c9                 test ecx, ecx
// 00794cf0  7e1c                 jle 0x794d0e
// 00794cf2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00794cf6  83c028               add eax, 0x28
// 00794cf9  8da42400000000       lea esp, [esp]
// 00794d00  c70001000000         mov dword ptr [eax], 1
// 00794d06  83c044               add eax, 0x44
// 00794d09  83e901               sub ecx, 1
// 00794d0c  75f2                 jne 0x794d00
// 00794d0e  b801000000           mov eax, 1
// 00794d13  5b                   pop ebx
// 00794d14  83c418               add esp, 0x18
// 00794d17  c20800               ret 8
// 00794d1a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00794d1e  83f801               cmp eax, 1
// 00794d21  0f85ea000000         jne 0x794e11
// 00794d27  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00794d2b  0f85c2000000         jne 0x794df3
// 00794d31  3be8                 cmp ebp, eax
// 00794d33  0f8eb0000000         jle 0x794de9
// 00794d39  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00794d3d  4a                   dec edx
// 00794d3e  83fa02               cmp edx, 2
// 00794d41  0f8ca2000000         jl 0x794de9
// 00794d47  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00794d4b  8bc2                 mov eax, edx
// 00794d4d  c1e004               shl eax, 4
// 00794d50  03c2                 add eax, edx
// 00794d52  837c813400           cmp dword ptr [ecx + eax*4 + 0x34], 0
// 00794d57  8d3481               lea esi, [ecx + eax*4]
// 00794d5a  7553                 jne 0x794daf
// 00794d5c  33c9                 xor ecx, ecx
// 00794d5e  33ff                 xor edi, edi
// 00794d60  85d2                 test edx, edx
// 00794d62  7c43                 jl 0x794da7
// 00794d64  83c63c               add esi, 0x3c
// 00794d67  8d45ff               lea eax, [ebp - 1]
// 00794d6a  3bc8                 cmp ecx, eax
// 00794d6c  7406                 je 0x794d74
// 00794d6e  837ef800             cmp dword ptr [esi - 8], 0
// 00794d72  7533                 jne 0x794da7
// 00794d74  8b06                 mov eax, dword ptr [esi]
// 00794d76  83b8fc0000000a       cmp dword ptr [eax + 0xfc], 0xa
// 00794d7d  7428                 je 0x794da7
// 00794d7f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00794d83  891488               mov dword ptr [eax + ecx*4], edx
// 00794d86  41                   inc ecx
// 00794d87  85ff                 test edi, edi
// 00794d89  750b                 jne 0x794d96
// 00794d8b  8b06                 mov eax, dword ptr [esi]
// 00794d8d  83b85001000004       cmp dword ptr [eax + 0x150], 4
// 00794d94  7505                 jne 0x794d9b
// 00794d96  bf01000000           mov edi, 1
// 00794d9b  3bcd                 cmp ecx, ebp
// 00794d9d  740c                 je 0x794dab
// 00794d9f  4a                   dec edx
// 00794da0  83ee44               sub esi, 0x44
// 00794da3  85d2                 test edx, edx
// 00794da5  7dc0                 jge 0x794d67
// 00794da7  3bcd                 cmp ecx, ebp
// 00794da9  7504                 jne 0x794daf
// 00794dab  85ff                 test edi, edi
// 00794dad  7508                 jne 0x794db7
// 00794daf  4a                   dec edx
// 00794db0  83fa02               cmp edx, 2
// 00794db3  7d92                 jge 0x794d47
// 00794db5  eb32                 jmp 0x794de9
// 00794db7  33d2                 xor edx, edx
// 00794db9  85c9                 test ecx, ecx
// 00794dbb  7e24                 jle 0x794de1
// 00794dbd  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00794dc1  8d4203               lea eax, [edx + 3]
// 00794dc4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00794dc8  8b3496               mov esi, dword ptr [esi + edx*4]
// 00794dcb  8bee                 mov ebp, esi
// 00794dcd  c1e504               shl ebp, 4
// 00794dd0  03ee                 add ebp, esi
// 00794dd2  8b74af3c             mov esi, dword ptr [edi + ebp*4 + 0x3c]
// 00794dd6  42                   inc edx
// 00794dd7  3bd1                 cmp edx, ecx
// 00794dd9  898650010000         mov dword ptr [esi + 0x150], eax
// 00794ddf  7ce3                 jl 0x794dc4
// 00794de1  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00794de9  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00794ded  0f84c2feffff         je 0x794cb5
// 00794df3  837b7c02             cmp dword ptr [ebx + 0x7c], 2
// 00794df7  0f85b8feffff         jne 0x794cb5
// 00794dfd  c7437c03000000       mov dword ptr [ebx + 0x7c], 3
// 00794e04  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00794e0c  e9a4feffff           jmp 0x794cb5
// 00794e11  83f802               cmp eax, 2
// 00794e14  0f859bfeffff         jne 0x794cb5
// 00794e1a  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00794e1e  0f8591feffff         jne 0x794cb5
// 00794e24  83fd01               cmp ebp, 1
// 00794e27  0f8e99000000         jle 0x794ec6
// 00794e2d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00794e31  48                   dec eax
// 00794e32  83f802               cmp eax, 2
// 00794e35  0f8c8b000000         jl 0x794ec6
// 00794e3b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00794e3f  8bc8                 mov ecx, eax
// 00794e41  c1e104               shl ecx, 4
// 00794e44  03c8                 add ecx, eax
// 00794e46  8d4c8a3c             lea ecx, [edx + ecx*4 + 0x3c]
// 00794e4a  894c2420             mov dword ptr [esp + 0x20], ecx
// 00794e4e  8bff                 mov edi, edi
// 00794e50  8b542420             mov edx, dword ptr [esp + 0x20]
// 00794e54  837af800             cmp dword ptr [edx - 8], 0
// 00794e58  755d                 jne 0x794eb7
// 00794e5a  33c9                 xor ecx, ecx
// 00794e5c  33db                 xor ebx, ebx
// 00794e5e  8bd0                 mov edx, eax
// 00794e60  85c0                 test eax, eax
// 00794e62  7c46                 jl 0x794eaa
// 00794e64  8b742420             mov esi, dword ptr [esp + 0x20]
// 00794e68  8b7ec4               mov edi, dword ptr [esi - 0x3c]
// 00794e6b  85c9                 test ecx, ecx
// 00794e6d  7404                 je 0x794e73
// 00794e6f  3bfb                 cmp edi, ebx
// 00794e71  7537                 jne 0x794eaa
// 00794e73  8d5dff               lea ebx, [ebp - 1]
// 00794e76  3bcb                 cmp ecx, ebx
// 00794e78  7406                 je 0x794e80
// 00794e7a  837ef800             cmp dword ptr [esi - 8], 0
// 00794e7e  752a                 jne 0x794eaa
// 00794e80  8b1e                 mov ebx, dword ptr [esi]
// 00794e82  83bb5001000003       cmp dword ptr [ebx + 0x150], 3
// 00794e89  751f                 jne 0x794eaa
// 00794e8b  83bbfc0000000a       cmp dword ptr [ebx + 0xfc], 0xa
// 00794e92  7416                 je 0x794eaa
// 00794e94  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00794e98  89148b               mov dword ptr [ebx + ecx*4], edx
// 00794e9b  41                   inc ecx
// 00794e9c  8bdf                 mov ebx, edi
// 00794e9e  3bcd                 cmp ecx, ebp
// 00794ea0  740c                 je 0x794eae
// 00794ea2  4a                   dec edx
// 00794ea3  83ee44               sub esi, 0x44
// 00794ea6  85d2                 test edx, edx
// 00794ea8  7dbe                 jge 0x794e68
// 00794eaa  3bcd                 cmp ecx, ebp
// 00794eac  7509                 jne 0x794eb7
// 00794eae  8b542414             mov edx, dword ptr [esp + 0x14]
// 00794eb2  396a4c               cmp dword ptr [edx + 0x4c], ebp
// 00794eb5  7f5a                 jg 0x794f11
// 00794eb7  836c242044           sub dword ptr [esp + 0x20], 0x44
// 00794ebc  48                   dec eax
// 00794ebd  83f802               cmp eax, 2
// 00794ec0  7d8e                 jge 0x794e50
// 00794ec2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00794ec6  837b2400             cmp dword ptr [ebx + 0x24], 0
// 00794eca  0f85e5fdffff         jne 0x794cb5
// 00794ed0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00794ed4  83c1ff               add ecx, -1
// 00794ed7  0f88d8fdffff         js 0x794cb5
// 00794edd  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00794ee1  8bc1                 mov eax, ecx
// 00794ee3  c1e004               shl eax, 4
// 00794ee6  03c1                 add eax, ecx
// 00794ee8  8d54873c             lea edx, [edi + eax*4 + 0x3c]
// 00794eec  b804000000           mov eax, 4
// 00794ef1  8b32                 mov esi, dword ptr [edx]
// 00794ef3  83befc0000000a       cmp dword ptr [esi + 0xfc], 0xa
// 00794efa  7508                 jne 0x794f04
// 00794efc  398650010000         cmp dword ptr [esi + 0x150], eax
// 00794f02  7540                 jne 0x794f44
// 00794f04  49                   dec ecx
// 00794f05  83ea44               sub edx, 0x44
// 00794f08  85c9                 test ecx, ecx
// 00794f0a  7de5                 jge 0x794ef1
// 00794f0c  e9a4fdffff           jmp 0x794cb5
// 00794f11  33d2                 xor edx, edx
// 00794f13  85c9                 test ecx, ecx
// 00794f15  0f8e8efdffff         jle 0x794ca9
// 00794f1b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00794f1f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00794f23  8d5a02               lea ebx, [edx + 2]
// 00794f26  8b3497               mov esi, dword ptr [edi + edx*4]
// 00794f29  8bee                 mov ebp, esi
// 00794f2b  c1e504               shl ebp, 4
// 00794f2e  03ee                 add ebp, esi
// 00794f30  8b74a83c             mov esi, dword ptr [eax + ebp*4 + 0x3c]
// 00794f34  42                   inc edx
// 00794f35  3bd1                 cmp edx, ecx
// 00794f37  899e50010000         mov dword ptr [esi + 0x150], ebx
// 00794f3d  7ce7                 jl 0x794f26
// 00794f3f  e965fdffff           jmp 0x794ca9
// 00794f44  8bd1                 mov edx, ecx
// 00794f46  c1e204               shl edx, 4
// 00794f49  03d1                 add edx, ecx
// 00794f4b  8b4c973c             mov ecx, dword ptr [edi + edx*4 + 0x3c]
// 00794f4f  898150010000         mov dword ptr [ecx + 0x150], eax
// 00794f55  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00794f5d  e953fdffff           jmp 0x794cb5
// 00794f62  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00794f66  5b                   pop ebx
// 00794f67  83c418               add esp, 0x18
// 00794f6a  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnReduceSize@CXTPRibbonGroup@@MAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
