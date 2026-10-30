// roc 2010-06 00782bf0  unit: seg_00780000  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782bf0
//
// 00782bf0  83ec50               sub esp, 0x50
// 00782bf3  53                   push ebx
// 00782bf4  55                   push ebp
// 00782bf5  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00782bf9  56                   push esi
// 00782bfa  8bd8                 mov ebx, eax
// 00782bfc  8b03                 mov eax, dword ptr [ebx]
// 00782bfe  57                   push edi
// 00782bff  50                   push eax
// 00782c00  e8cbf7ffff           call 0x7823d0
// 00782c05  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782c08  8b08                 mov ecx, dword ptr [eax]
// 00782c0a  33ff                 xor edi, edi
// 00782c0c  83c404               add esp, 4
// 00782c0f  8d51ff               lea edx, [ecx - 1]
// 00782c12  8910                 mov dword ptr [eax], edx
// 00782c14  3bcf                 cmp ecx, edi
// 00782c16  760f                 jbe 0x782c27
// 00782c18  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00782c1b  8b5104               mov edx, dword ptr [ecx + 4]
// 00782c1e  0fb602               movzx eax, byte ptr [edx]
// 00782c21  42                   inc edx
// 00782c22  895104               mov dword ptr [ecx + 4], edx
// 00782c25  eb0c                 jmp 0x782c33
// 00782c27  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782c2a  50                   push eax
// 00782c2b  e8f0b6ffff           call 0x77e320
// 00782c30  83c404               add esp, 4
// 00782c33  8903                 mov dword ptr [ebx], eax
// 00782c35  83f80a               cmp eax, 0xa
// 00782c38  7405                 je 0x782c3f
// 00782c3a  83f80d               cmp eax, 0xd
// 00782c3d  7507                 jne 0x782c46
// 00782c3f  8bf3                 mov esi, ebx
// 00782c41  e8baf9ffff           call 0x782600
// 00782c46  8b03                 mov eax, dword ptr [ebx]
// 00782c48  8d4801               lea ecx, [eax + 1]
// 00782c4b  83f95e               cmp ecx, 0x5e
// 00782c4e  0f87cc000000         ja 0x782d20
// 00782c54  0fb689d42d7800       movzx ecx, byte ptr [ecx + 0x782dd4]
// 00782c5b  ff248dc42d7800       jmp dword ptr [ecx*4 + 0x782dc4]
// 00782c62  beac36a500           mov esi, 0xa536ac
// 00782c67  3bef                 cmp ebp, edi
// 00782c69  7505                 jne 0x782c70
// 00782c6b  be9436a500           mov esi, 0xa53694
// 00782c70  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00782c73  6a50                 push 0x50
// 00782c75  83c210               add edx, 0x10
// 00782c78  52                   push edx
// 00782c79  8d442418             lea eax, [esp + 0x18]
// 00782c7d  50                   push eax
// 00782c7e  e87d01fbff           call 0x732e00
// 00782c83  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00782c86  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00782c89  56                   push esi
// 00782c8a  51                   push ecx
// 00782c8b  8d542424             lea edx, [esp + 0x24]
// 00782c8f  52                   push edx
// 00782c90  6808dea400           push 0xa4de08
// 00782c95  50                   push eax
// 00782c96  e84501fbff           call 0x732de0
// 00782c9b  8b0d1836a500         mov ecx, dword ptr [0xa53618]
// 00782ca1  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00782ca4  51                   push ecx
// 00782ca5  50                   push eax
// 00782ca6  684c36a500           push 0xa5364c
// 00782cab  52                   push edx
// 00782cac  e82f01fbff           call 0x732de0
// 00782cb1  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00782cb4  6a03                 push 3
// 00782cb6  50                   push eax
// 00782cb7  e8f4d3faff           call 0x7300b0
// 00782cbc  83c438               add esp, 0x38
// 00782cbf  eb85                 jmp 0x782c46
// 00782cc1  8bf3                 mov esi, ebx
// 00782cc3  e8d8fdffff           call 0x782aa0
// 00782cc8  8b742468             mov esi, dword ptr [esp + 0x68]
// 00782ccc  3bc6                 cmp eax, esi
// 00782cce  0f8572ffffff         jne 0x782c46
// 00782cd4  8b0b                 mov ecx, dword ptr [ebx]
// 00782cd6  51                   push ecx
// 00782cd7  e8f4f6ffff           call 0x7823d0
// 00782cdc  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782cdf  8b08                 mov ecx, dword ptr [eax]
// 00782ce1  83c404               add esp, 4
// 00782ce4  8d51ff               lea edx, [ecx - 1]
// 00782ce7  8910                 mov dword ptr [eax], edx
// 00782ce9  3bcf                 cmp ecx, edi
// 00782ceb  7675                 jbe 0x782d62
// 00782ced  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00782cf0  8b5104               mov edx, dword ptr [ecx + 4]
// 00782cf3  0fb602               movzx eax, byte ptr [edx]
// 00782cf6  42                   inc edx
// 00782cf7  895104               mov dword ptr [ecx + 4], edx
// 00782cfa  eb72                 jmp 0x782d6e
// 00782cfc  6a0a                 push 0xa
// 00782cfe  e8cdf6ffff           call 0x7823d0
// 00782d03  83c404               add esp, 4
// 00782d06  8bf3                 mov esi, ebx
// 00782d08  e8f3f8ffff           call 0x782600
// 00782d0d  3bef                 cmp ebp, edi
// 00782d0f  0f8531ffffff         jne 0x782c46
// 00782d15  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00782d18  897904               mov dword ptr [ecx + 4], edi
// 00782d1b  e926ffffff           jmp 0x782c46
// 00782d20  3bef                 cmp ebp, edi
// 00782d22  7409                 je 0x782d2d
// 00782d24  50                   push eax
// 00782d25  e8a6f6ffff           call 0x7823d0
// 00782d2a  83c404               add esp, 4
// 00782d2d  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782d30  8b08                 mov ecx, dword ptr [eax]
// 00782d32  8d51ff               lea edx, [ecx - 1]
// 00782d35  8910                 mov dword ptr [eax], edx
// 00782d37  3bcf                 cmp ecx, edi
// 00782d39  7614                 jbe 0x782d4f
// 00782d3b  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00782d3e  8b5104               mov edx, dword ptr [ecx + 4]
// 00782d41  0fb602               movzx eax, byte ptr [edx]
// 00782d44  42                   inc edx
// 00782d45  895104               mov dword ptr [ecx + 4], edx
// 00782d48  8903                 mov dword ptr [ebx], eax
// 00782d4a  e9f7feffff           jmp 0x782c46
// 00782d4f  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782d52  50                   push eax
// 00782d53  e8c8b5ffff           call 0x77e320
// 00782d58  83c404               add esp, 4
// 00782d5b  8903                 mov dword ptr [ebx], eax
// 00782d5d  e9e4feffff           jmp 0x782c46
// 00782d62  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00782d65  50                   push eax
// 00782d66  e8b5b5ffff           call 0x77e320
// 00782d6b  83c404               add esp, 4
// 00782d6e  8903                 mov dword ptr [ebx], eax
// 00782d70  3bef                 cmp ebp, edi
// 00782d72  7448                 je 0x782dbc
// 00782d74  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00782d77  8b4104               mov eax, dword ptr [ecx + 4]
// 00782d7a  8b09                 mov ecx, dword ptr [ecx]
// 00782d7c  8d1436               lea edx, [esi + esi]
// 00782d7f  2bc2                 sub eax, edx
// 00782d81  83e804               sub eax, 4
// 00782d84  8d4c3102             lea ecx, [ecx + esi + 2]
// 00782d88  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00782d8b  50                   push eax
// 00782d8c  51                   push ecx
// 00782d8d  56                   push esi
// 00782d8e  e84db0ffff           call 0x77dde0
// 00782d93  8b5330               mov edx, dword ptr [ebx + 0x30]
// 00782d96  8bf8                 mov edi, eax
// 00782d98  8b4204               mov eax, dword ptr [edx + 4]
// 00782d9b  57                   push edi
// 00782d9c  50                   push eax
// 00782d9d  56                   push esi
// 00782d9e  e88daeffff           call 0x77dc30
// 00782da3  83c418               add esp, 0x18
// 00782da6  83780800             cmp dword ptr [eax + 8], 0
// 00782daa  750d                 jne 0x782db9
// 00782dac  c70001000000         mov dword ptr [eax], 1
// 00782db2  c7400801000000       mov dword ptr [eax + 8], 1
// 00782db9  897d00               mov dword ptr [ebp], edi
// 00782dbc  5f                   pop edi
// 00782dbd  5e                   pop esi
// 00782dbe  5d                   pop ebp
// 00782dbf  5b                   pop ebx
// 00782dc0  83c450               add esp, 0x50
// 00782dc3  c3                   ret 
// 00782dc4  622c78               bound ebp, qword ptr [eax + edi*2]
// 00782dc7  00fc                 add ah, bh
// 00782dc9  2c78                 sub al, 0x78
// 00782dcb  00c1                 add cl, al
// 00782dcd  2c78                 sub al, 0x78
// 00782dcf  0020                 add byte ptr [eax], ah
// 00782dd1  2d78000003           sub eax, 0x3000078
// 00782dd6  0303                 add eax, dword ptr [ebx]
// 00782dd8  0303                 add eax, dword ptr [ebx]
// 00782dda  0303                 add eax, dword ptr [ebx]
// 00782ddc  0303                 add eax, dword ptr [ebx]
// 00782dde  0301                 add eax, dword ptr [ecx]
// 00782de0  0303                 add eax, dword ptr [ebx]
// 00782de2  0103                 add dword ptr [ebx], eax
// 00782de4  0303                 add eax, dword ptr [ebx]
// 00782de6  0303                 add eax, dword ptr [ebx]
// 00782de8  0303                 add eax, dword ptr [ebx]
// 00782dea  0303                 add eax, dword ptr [ebx]
// 00782dec  0303                 add eax, dword ptr [ebx]
// 00782dee  0303                 add eax, dword ptr [ebx]
// 00782df0  0303                 add eax, dword ptr [ebx]
// 00782df2  0303                 add eax, dword ptr [ebx]
// 00782df4  0303                 add eax, dword ptr [ebx]
// 00782df6  0303                 add eax, dword ptr [ebx]
// 00782df8  0303                 add eax, dword ptr [ebx]
// 00782dfa  0303                 add eax, dword ptr [ebx]
// 00782dfc  0303                 add eax, dword ptr [ebx]
// 00782dfe  0303                 add eax, dword ptr [ebx]
// 00782e00  0303                 add eax, dword ptr [ebx]
// 00782e02  0303                 add eax, dword ptr [ebx]
// 00782e04  0303                 add eax, dword ptr [ebx]
// 00782e06  0303                 add eax, dword ptr [ebx]
// 00782e08  0303                 add eax, dword ptr [ebx]
// 00782e0a  0303                 add eax, dword ptr [ebx]
// 00782e0c  0303                 add eax, dword ptr [ebx]
// 00782e0e  0303                 add eax, dword ptr [ebx]
// 00782e10  0303                 add eax, dword ptr [ebx]
// 00782e12  0303                 add eax, dword ptr [ebx]
// 00782e14  0303                 add eax, dword ptr [ebx]
// 00782e16  0303                 add eax, dword ptr [ebx]
// 00782e18  0303                 add eax, dword ptr [ebx]
// 00782e1a  0303                 add eax, dword ptr [ebx]
// 00782e1c  0303                 add eax, dword ptr [ebx]
// 00782e1e  0303                 add eax, dword ptr [ebx]
// 00782e20  0303                 add eax, dword ptr [ebx]
// 00782e22  0303                 add eax, dword ptr [ebx]
// 00782e24  0303                 add eax, dword ptr [ebx]
// 00782e26  0303                 add eax, dword ptr [ebx]
// 00782e28  0303                 add eax, dword ptr [ebx]
// 00782e2a  0303                 add eax, dword ptr [ebx]
// 00782e2c  0303                 add eax, dword ptr [ebx]
// 00782e2e  0303                 add eax, dword ptr [ebx]
// 00782e30  0303                 add eax, dword ptr [ebx]
// copied from an identical function in another client (function _read_long_string)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll-nolstr llex.c