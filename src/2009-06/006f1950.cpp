// roc 2009-06 006f1950  unit: seg_006f0000  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1950
//
// 006f1950  83ec50               sub esp, 0x50
// 006f1953  53                   push ebx
// 006f1954  55                   push ebp
// 006f1955  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 006f1959  56                   push esi
// 006f195a  8bd8                 mov ebx, eax
// 006f195c  8b03                 mov eax, dword ptr [ebx]
// 006f195e  57                   push edi
// 006f195f  50                   push eax
// 006f1960  e8cbf7ffff           call 0x6f1130
// 006f1965  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1968  8b08                 mov ecx, dword ptr [eax]
// 006f196a  33ff                 xor edi, edi
// 006f196c  83c404               add esp, 4
// 006f196f  8d51ff               lea edx, [ecx - 1]
// 006f1972  8910                 mov dword ptr [eax], edx
// 006f1974  3bcf                 cmp ecx, edi
// 006f1976  760f                 jbe 0x6f1987
// 006f1978  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f197b  8b5104               mov edx, dword ptr [ecx + 4]
// 006f197e  0fb602               movzx eax, byte ptr [edx]
// 006f1981  42                   inc edx
// 006f1982  895104               mov dword ptr [ecx + 4], edx
// 006f1985  eb0c                 jmp 0x6f1993
// 006f1987  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f198a  50                   push eax
// 006f198b  e8f0b6ffff           call 0x6ed080
// 006f1990  83c404               add esp, 4
// 006f1993  8903                 mov dword ptr [ebx], eax
// 006f1995  83f80a               cmp eax, 0xa
// 006f1998  7405                 je 0x6f199f
// 006f199a  83f80d               cmp eax, 0xd
// 006f199d  7507                 jne 0x6f19a6
// 006f199f  8bf3                 mov esi, ebx
// 006f19a1  e8baf9ffff           call 0x6f1360
// 006f19a6  8b03                 mov eax, dword ptr [ebx]
// 006f19a8  8d4801               lea ecx, [eax + 1]
// 006f19ab  83f95e               cmp ecx, 0x5e
// 006f19ae  0f87cc000000         ja 0x6f1a80
// 006f19b4  0fb689341b6f00       movzx ecx, byte ptr [ecx + 0x6f1b34]
// 006f19bb  ff248d241b6f00       jmp dword ptr [ecx*4 + 0x6f1b24]
// 006f19c2  be4ce28e00           mov esi, 0x8ee24c
// 006f19c7  3bef                 cmp ebp, edi
// 006f19c9  7505                 jne 0x6f19d0
// 006f19cb  be34e28e00           mov esi, 0x8ee234
// 006f19d0  8b5340               mov edx, dword ptr [ebx + 0x40]
// 006f19d3  6a50                 push 0x50
// 006f19d5  83c210               add edx, 0x10
// 006f19d8  52                   push edx
// 006f19d9  8d442418             lea eax, [esp + 0x18]
// 006f19dd  50                   push eax
// 006f19de  e8dd76fdff           call 0x6c90c0
// 006f19e3  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006f19e6  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006f19e9  56                   push esi
// 006f19ea  51                   push ecx
// 006f19eb  8d542424             lea edx, [esp + 0x24]
// 006f19ef  52                   push edx
// 006f19f0  68c4c28e00           push 0x8ec2c4
// 006f19f5  50                   push eax
// 006f19f6  e8a576fdff           call 0x6c90a0
// 006f19fb  8b0db8e18e00         mov ecx, dword ptr [0x8ee1b8]
// 006f1a01  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1a04  51                   push ecx
// 006f1a05  50                   push eax
// 006f1a06  68ece18e00           push 0x8ee1ec
// 006f1a0b  52                   push edx
// 006f1a0c  e88f76fdff           call 0x6c90a0
// 006f1a11  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006f1a14  6a03                 push 3
// 006f1a16  50                   push eax
// 006f1a17  e8c418fdff           call 0x6c32e0
// 006f1a1c  83c438               add esp, 0x38
// 006f1a1f  eb85                 jmp 0x6f19a6
// 006f1a21  8bf3                 mov esi, ebx
// 006f1a23  e8d8fdffff           call 0x6f1800
// 006f1a28  8b742468             mov esi, dword ptr [esp + 0x68]
// 006f1a2c  3bc6                 cmp eax, esi
// 006f1a2e  0f8572ffffff         jne 0x6f19a6
// 006f1a34  8b0b                 mov ecx, dword ptr [ebx]
// 006f1a36  51                   push ecx
// 006f1a37  e8f4f6ffff           call 0x6f1130
// 006f1a3c  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1a3f  8b08                 mov ecx, dword ptr [eax]
// 006f1a41  83c404               add esp, 4
// 006f1a44  8d51ff               lea edx, [ecx - 1]
// 006f1a47  8910                 mov dword ptr [eax], edx
// 006f1a49  3bcf                 cmp ecx, edi
// 006f1a4b  7675                 jbe 0x6f1ac2
// 006f1a4d  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1a50  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1a53  0fb602               movzx eax, byte ptr [edx]
// 006f1a56  42                   inc edx
// 006f1a57  895104               mov dword ptr [ecx + 4], edx
// 006f1a5a  eb72                 jmp 0x6f1ace
// 006f1a5c  6a0a                 push 0xa
// 006f1a5e  e8cdf6ffff           call 0x6f1130
// 006f1a63  83c404               add esp, 4
// 006f1a66  8bf3                 mov esi, ebx
// 006f1a68  e8f3f8ffff           call 0x6f1360
// 006f1a6d  3bef                 cmp ebp, edi
// 006f1a6f  0f8531ffffff         jne 0x6f19a6
// 006f1a75  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 006f1a78  897904               mov dword ptr [ecx + 4], edi
// 006f1a7b  e926ffffff           jmp 0x6f19a6
// 006f1a80  3bef                 cmp ebp, edi
// 006f1a82  7409                 je 0x6f1a8d
// 006f1a84  50                   push eax
// 006f1a85  e8a6f6ffff           call 0x6f1130
// 006f1a8a  83c404               add esp, 4
// 006f1a8d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1a90  8b08                 mov ecx, dword ptr [eax]
// 006f1a92  8d51ff               lea edx, [ecx - 1]
// 006f1a95  8910                 mov dword ptr [eax], edx
// 006f1a97  3bcf                 cmp ecx, edi
// 006f1a99  7614                 jbe 0x6f1aaf
// 006f1a9b  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006f1a9e  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1aa1  0fb602               movzx eax, byte ptr [edx]
// 006f1aa4  42                   inc edx
// 006f1aa5  895104               mov dword ptr [ecx + 4], edx
// 006f1aa8  8903                 mov dword ptr [ebx], eax
// 006f1aaa  e9f7feffff           jmp 0x6f19a6
// 006f1aaf  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1ab2  50                   push eax
// 006f1ab3  e8c8b5ffff           call 0x6ed080
// 006f1ab8  83c404               add esp, 4
// 006f1abb  8903                 mov dword ptr [ebx], eax
// 006f1abd  e9e4feffff           jmp 0x6f19a6
// 006f1ac2  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006f1ac5  50                   push eax
// 006f1ac6  e8b5b5ffff           call 0x6ed080
// 006f1acb  83c404               add esp, 4
// 006f1ace  8903                 mov dword ptr [ebx], eax
// 006f1ad0  3bef                 cmp ebp, edi
// 006f1ad2  7448                 je 0x6f1b1c
// 006f1ad4  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 006f1ad7  8b4104               mov eax, dword ptr [ecx + 4]
// 006f1ada  8b09                 mov ecx, dword ptr [ecx]
// 006f1adc  8d1436               lea edx, [esi + esi]
// 006f1adf  2bc2                 sub eax, edx
// 006f1ae1  83e804               sub eax, 4
// 006f1ae4  8d4c3102             lea ecx, [ecx + esi + 2]
// 006f1ae8  8b7334               mov esi, dword ptr [ebx + 0x34]
// 006f1aeb  50                   push eax
// 006f1aec  51                   push ecx
// 006f1aed  56                   push esi
// 006f1aee  e84db0ffff           call 0x6ecb40
// 006f1af3  8b5330               mov edx, dword ptr [ebx + 0x30]
// 006f1af6  8bf8                 mov edi, eax
// 006f1af8  8b4204               mov eax, dword ptr [edx + 4]
// 006f1afb  57                   push edi
// 006f1afc  50                   push eax
// 006f1afd  56                   push esi
// 006f1afe  e88daeffff           call 0x6ec990
// 006f1b03  83c418               add esp, 0x18
// 006f1b06  83780800             cmp dword ptr [eax + 8], 0
// 006f1b0a  750d                 jne 0x6f1b19
// 006f1b0c  c70001000000         mov dword ptr [eax], 1
// 006f1b12  c7400801000000       mov dword ptr [eax + 8], 1
// 006f1b19  897d00               mov dword ptr [ebp], edi
// 006f1b1c  5f                   pop edi
// 006f1b1d  5e                   pop esi
// 006f1b1e  5d                   pop ebp
// 006f1b1f  5b                   pop ebx
// 006f1b20  83c450               add esp, 0x50
// 006f1b23  c3                   ret 
// 006f1b24  c2196f               ret 0x6f19
// 006f1b27  005c1a6f             add byte ptr [edx + ebx + 0x6f], bl
// 006f1b2b  0021                 add byte ptr [ecx], ah
// 006f1b2d  1a6f00               sbb ch, byte ptr [edi]
// 006f1b30  801a6f               sbb byte ptr [edx], 0x6f
// 006f1b33  0000                 add byte ptr [eax], al
// 006f1b35  0303                 add eax, dword ptr [ebx]
// 006f1b37  0303                 add eax, dword ptr [ebx]
// 006f1b39  0303                 add eax, dword ptr [ebx]
// 006f1b3b  0303                 add eax, dword ptr [ebx]
// 006f1b3d  0303                 add eax, dword ptr [ebx]
// 006f1b3f  0103                 add dword ptr [ebx], eax
// 006f1b41  0301                 add eax, dword ptr [ecx]
// 006f1b43  0303                 add eax, dword ptr [ebx]
// 006f1b45  0303                 add eax, dword ptr [ebx]
// 006f1b47  0303                 add eax, dword ptr [ebx]
// 006f1b49  0303                 add eax, dword ptr [ebx]
// 006f1b4b  0303                 add eax, dword ptr [ebx]
// 006f1b4d  0303                 add eax, dword ptr [ebx]
// 006f1b4f  0303                 add eax, dword ptr [ebx]
// 006f1b51  0303                 add eax, dword ptr [ebx]
// 006f1b53  0303                 add eax, dword ptr [ebx]
// 006f1b55  0303                 add eax, dword ptr [ebx]
// 006f1b57  0303                 add eax, dword ptr [ebx]
// 006f1b59  0303                 add eax, dword ptr [ebx]
// 006f1b5b  0303                 add eax, dword ptr [ebx]
// 006f1b5d  0303                 add eax, dword ptr [ebx]
// 006f1b5f  0303                 add eax, dword ptr [ebx]
// 006f1b61  0303                 add eax, dword ptr [ebx]
// 006f1b63  0303                 add eax, dword ptr [ebx]
// 006f1b65  0303                 add eax, dword ptr [ebx]
// 006f1b67  0303                 add eax, dword ptr [ebx]
// 006f1b69  0303                 add eax, dword ptr [ebx]
// 006f1b6b  0303                 add eax, dword ptr [ebx]
// 006f1b6d  0303                 add eax, dword ptr [ebx]
// 006f1b6f  0303                 add eax, dword ptr [ebx]
// 006f1b71  0303                 add eax, dword ptr [ebx]
// 006f1b73  0303                 add eax, dword ptr [ebx]
// 006f1b75  0303                 add eax, dword ptr [ebx]
// 006f1b77  0303                 add eax, dword ptr [ebx]
// 006f1b79  0303                 add eax, dword ptr [ebx]
// 006f1b7b  0303                 add eax, dword ptr [ebx]
// 006f1b7d  0303                 add eax, dword ptr [ebx]
// 006f1b7f  0303                 add eax, dword ptr [ebx]
// 006f1b81  0303                 add eax, dword ptr [ebx]
// 006f1b83  0303                 add eax, dword ptr [ebx]
// 006f1b85  0303                 add eax, dword ptr [ebx]
// 006f1b87  0303                 add eax, dword ptr [ebx]
// 006f1b89  0303                 add eax, dword ptr [ebx]
// 006f1b8b  0303                 add eax, dword ptr [ebx]
// 006f1b8d  0303                 add eax, dword ptr [ebx]
// 006f1b8f  0303                 add eax, dword ptr [ebx]
// 006f1b91  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function _read_long_string)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll-nolstr llex.c