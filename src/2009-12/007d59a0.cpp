// roc 2009-12 007d59a0  unit: seg_007d0000  size: 579 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d59a0
//
// 007d59a0  83ec50               sub esp, 0x50
// 007d59a3  53                   push ebx
// 007d59a4  55                   push ebp
// 007d59a5  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 007d59a9  56                   push esi
// 007d59aa  8bd8                 mov ebx, eax
// 007d59ac  8b03                 mov eax, dword ptr [ebx]
// 007d59ae  57                   push edi
// 007d59af  50                   push eax
// 007d59b0  e8cbf7ffff           call 0x7d5180
// 007d59b5  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d59b8  8b08                 mov ecx, dword ptr [eax]
// 007d59ba  33ff                 xor edi, edi
// 007d59bc  83c404               add esp, 4
// 007d59bf  8d51ff               lea edx, [ecx - 1]
// 007d59c2  8910                 mov dword ptr [eax], edx
// 007d59c4  3bcf                 cmp ecx, edi
// 007d59c6  760f                 jbe 0x7d59d7
// 007d59c8  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d59cb  8b5104               mov edx, dword ptr [ecx + 4]
// 007d59ce  0fb602               movzx eax, byte ptr [edx]
// 007d59d1  42                   inc edx
// 007d59d2  895104               mov dword ptr [ecx + 4], edx
// 007d59d5  eb0c                 jmp 0x7d59e3
// 007d59d7  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d59da  50                   push eax
// 007d59db  e8f0b6ffff           call 0x7d10d0
// 007d59e0  83c404               add esp, 4
// 007d59e3  8903                 mov dword ptr [ebx], eax
// 007d59e5  83f80a               cmp eax, 0xa
// 007d59e8  7405                 je 0x7d59ef
// 007d59ea  83f80d               cmp eax, 0xd
// 007d59ed  7507                 jne 0x7d59f6
// 007d59ef  8bf3                 mov esi, ebx
// 007d59f1  e8baf9ffff           call 0x7d53b0
// 007d59f6  8b03                 mov eax, dword ptr [ebx]
// 007d59f8  8d4801               lea ecx, [eax + 1]
// 007d59fb  83f95e               cmp ecx, 0x5e
// 007d59fe  0f87cc000000         ja 0x7d5ad0
// 007d5a04  0fb689845b7d00       movzx ecx, byte ptr [ecx + 0x7d5b84]
// 007d5a0b  ff248d745b7d00       jmp dword ptr [ecx*4 + 0x7d5b74]
// 007d5a12  be44f49e00           mov esi, 0x9ef444
// 007d5a17  3bef                 cmp ebp, edi
// 007d5a19  7505                 jne 0x7d5a20
// 007d5a1b  be2cf49e00           mov esi, 0x9ef42c
// 007d5a20  8b5340               mov edx, dword ptr [ebx + 0x40]
// 007d5a23  6a50                 push 0x50
// 007d5a25  83c210               add edx, 0x10
// 007d5a28  52                   push edx
// 007d5a29  8d442418             lea eax, [esp + 0x18]
// 007d5a2d  50                   push eax
// 007d5a2e  e86d4bfcff           call 0x79a5a0
// 007d5a33  8b4b04               mov ecx, dword ptr [ebx + 4]
// 007d5a36  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007d5a39  56                   push esi
// 007d5a3a  51                   push ecx
// 007d5a3b  8d542424             lea edx, [esp + 0x24]
// 007d5a3f  52                   push edx
// 007d5a40  68b4ab9e00           push 0x9eabb4
// 007d5a45  50                   push eax
// 007d5a46  e8354bfcff           call 0x79a580
// 007d5a4b  8b0db0f39e00         mov ecx, dword ptr [0x9ef3b0]
// 007d5a51  8b5334               mov edx, dword ptr [ebx + 0x34]
// 007d5a54  51                   push ecx
// 007d5a55  50                   push eax
// 007d5a56  68e4f39e00           push 0x9ef3e4
// 007d5a5b  52                   push edx
// 007d5a5c  e81f4bfcff           call 0x79a580
// 007d5a61  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007d5a64  6a03                 push 3
// 007d5a66  50                   push eax
// 007d5a67  e8e41dfcff           call 0x797850
// 007d5a6c  83c438               add esp, 0x38
// 007d5a6f  eb85                 jmp 0x7d59f6
// 007d5a71  8bf3                 mov esi, ebx
// 007d5a73  e8d8fdffff           call 0x7d5850
// 007d5a78  8b742468             mov esi, dword ptr [esp + 0x68]
// 007d5a7c  3bc6                 cmp eax, esi
// 007d5a7e  0f8572ffffff         jne 0x7d59f6
// 007d5a84  8b0b                 mov ecx, dword ptr [ebx]
// 007d5a86  51                   push ecx
// 007d5a87  e8f4f6ffff           call 0x7d5180
// 007d5a8c  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5a8f  8b08                 mov ecx, dword ptr [eax]
// 007d5a91  83c404               add esp, 4
// 007d5a94  8d51ff               lea edx, [ecx - 1]
// 007d5a97  8910                 mov dword ptr [eax], edx
// 007d5a99  3bcf                 cmp ecx, edi
// 007d5a9b  7675                 jbe 0x7d5b12
// 007d5a9d  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5aa0  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5aa3  0fb602               movzx eax, byte ptr [edx]
// 007d5aa6  42                   inc edx
// 007d5aa7  895104               mov dword ptr [ecx + 4], edx
// 007d5aaa  eb72                 jmp 0x7d5b1e
// 007d5aac  6a0a                 push 0xa
// 007d5aae  e8cdf6ffff           call 0x7d5180
// 007d5ab3  83c404               add esp, 4
// 007d5ab6  8bf3                 mov esi, ebx
// 007d5ab8  e8f3f8ffff           call 0x7d53b0
// 007d5abd  3bef                 cmp ebp, edi
// 007d5abf  0f8531ffffff         jne 0x7d59f6
// 007d5ac5  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 007d5ac8  897904               mov dword ptr [ecx + 4], edi
// 007d5acb  e926ffffff           jmp 0x7d59f6
// 007d5ad0  3bef                 cmp ebp, edi
// 007d5ad2  7409                 je 0x7d5add
// 007d5ad4  50                   push eax
// 007d5ad5  e8a6f6ffff           call 0x7d5180
// 007d5ada  83c404               add esp, 4
// 007d5add  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5ae0  8b08                 mov ecx, dword ptr [eax]
// 007d5ae2  8d51ff               lea edx, [ecx - 1]
// 007d5ae5  8910                 mov dword ptr [eax], edx
// 007d5ae7  3bcf                 cmp ecx, edi
// 007d5ae9  7614                 jbe 0x7d5aff
// 007d5aeb  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 007d5aee  8b5104               mov edx, dword ptr [ecx + 4]
// 007d5af1  0fb602               movzx eax, byte ptr [edx]
// 007d5af4  42                   inc edx
// 007d5af5  895104               mov dword ptr [ecx + 4], edx
// 007d5af8  8903                 mov dword ptr [ebx], eax
// 007d5afa  e9f7feffff           jmp 0x7d59f6
// 007d5aff  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5b02  50                   push eax
// 007d5b03  e8c8b5ffff           call 0x7d10d0
// 007d5b08  83c404               add esp, 4
// 007d5b0b  8903                 mov dword ptr [ebx], eax
// 007d5b0d  e9e4feffff           jmp 0x7d59f6
// 007d5b12  8b4338               mov eax, dword ptr [ebx + 0x38]
// 007d5b15  50                   push eax
// 007d5b16  e8b5b5ffff           call 0x7d10d0
// 007d5b1b  83c404               add esp, 4
// 007d5b1e  8903                 mov dword ptr [ebx], eax
// 007d5b20  3bef                 cmp ebp, edi
// 007d5b22  7448                 je 0x7d5b6c
// 007d5b24  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 007d5b27  8b4104               mov eax, dword ptr [ecx + 4]
// 007d5b2a  8b09                 mov ecx, dword ptr [ecx]
// 007d5b2c  8d1436               lea edx, [esi + esi]
// 007d5b2f  2bc2                 sub eax, edx
// 007d5b31  83e804               sub eax, 4
// 007d5b34  8d4c3102             lea ecx, [ecx + esi + 2]
// 007d5b38  8b7334               mov esi, dword ptr [ebx + 0x34]
// 007d5b3b  50                   push eax
// 007d5b3c  51                   push ecx
// 007d5b3d  56                   push esi
// 007d5b3e  e84db0ffff           call 0x7d0b90
// 007d5b43  8b5330               mov edx, dword ptr [ebx + 0x30]
// 007d5b46  8bf8                 mov edi, eax
// 007d5b48  8b4204               mov eax, dword ptr [edx + 4]
// 007d5b4b  57                   push edi
// 007d5b4c  50                   push eax
// 007d5b4d  56                   push esi
// 007d5b4e  e88daeffff           call 0x7d09e0
// 007d5b53  83c418               add esp, 0x18
// 007d5b56  83780800             cmp dword ptr [eax + 8], 0
// 007d5b5a  750d                 jne 0x7d5b69
// 007d5b5c  c70001000000         mov dword ptr [eax], 1
// 007d5b62  c7400801000000       mov dword ptr [eax + 8], 1
// 007d5b69  897d00               mov dword ptr [ebp], edi
// 007d5b6c  5f                   pop edi
// 007d5b6d  5e                   pop esi
// 007d5b6e  5d                   pop ebp
// 007d5b6f  5b                   pop ebx
// 007d5b70  83c450               add esp, 0x50
// 007d5b73  c3                   ret 
// 007d5b74  125a7d               adc bl, byte ptr [edx + 0x7d]
// 007d5b77  00ac5a7d00715a       add byte ptr [edx + ebx*2 + 0x5a71007d], ch
// 007d5b7e  7d00                 jge 0x7d5b80
// 007d5b80  d05a7d               rcr byte ptr [edx + 0x7d], 1
// 007d5b83  0000                 add byte ptr [eax], al
// 007d5b85  0303                 add eax, dword ptr [ebx]
// 007d5b87  0303                 add eax, dword ptr [ebx]
// 007d5b89  0303                 add eax, dword ptr [ebx]
// 007d5b8b  0303                 add eax, dword ptr [ebx]
// 007d5b8d  0303                 add eax, dword ptr [ebx]
// 007d5b8f  0103                 add dword ptr [ebx], eax
// 007d5b91  0301                 add eax, dword ptr [ecx]
// 007d5b93  0303                 add eax, dword ptr [ebx]
// 007d5b95  0303                 add eax, dword ptr [ebx]
// 007d5b97  0303                 add eax, dword ptr [ebx]
// 007d5b99  0303                 add eax, dword ptr [ebx]
// 007d5b9b  0303                 add eax, dword ptr [ebx]
// 007d5b9d  0303                 add eax, dword ptr [ebx]
// 007d5b9f  0303                 add eax, dword ptr [ebx]
// 007d5ba1  0303                 add eax, dword ptr [ebx]
// 007d5ba3  0303                 add eax, dword ptr [ebx]
// 007d5ba5  0303                 add eax, dword ptr [ebx]
// 007d5ba7  0303                 add eax, dword ptr [ebx]
// 007d5ba9  0303                 add eax, dword ptr [ebx]
// 007d5bab  0303                 add eax, dword ptr [ebx]
// 007d5bad  0303                 add eax, dword ptr [ebx]
// 007d5baf  0303                 add eax, dword ptr [ebx]
// 007d5bb1  0303                 add eax, dword ptr [ebx]
// 007d5bb3  0303                 add eax, dword ptr [ebx]
// 007d5bb5  0303                 add eax, dword ptr [ebx]
// 007d5bb7  0303                 add eax, dword ptr [ebx]
// 007d5bb9  0303                 add eax, dword ptr [ebx]
// 007d5bbb  0303                 add eax, dword ptr [ebx]
// 007d5bbd  0303                 add eax, dword ptr [ebx]
// 007d5bbf  0303                 add eax, dword ptr [ebx]
// 007d5bc1  0303                 add eax, dword ptr [ebx]
// 007d5bc3  0303                 add eax, dword ptr [ebx]
// 007d5bc5  0303                 add eax, dword ptr [ebx]
// 007d5bc7  0303                 add eax, dword ptr [ebx]
// 007d5bc9  0303                 add eax, dword ptr [ebx]
// 007d5bcb  0303                 add eax, dword ptr [ebx]
// 007d5bcd  0303                 add eax, dword ptr [ebx]
// 007d5bcf  0303                 add eax, dword ptr [ebx]
// 007d5bd1  0303                 add eax, dword ptr [ebx]
// 007d5bd3  0303                 add eax, dword ptr [ebx]
// 007d5bd5  0303                 add eax, dword ptr [ebx]
// 007d5bd7  0303                 add eax, dword ptr [ebx]
// 007d5bd9  0303                 add eax, dword ptr [ebx]
// 007d5bdb  0303                 add eax, dword ptr [ebx]
// 007d5bdd  0303                 add eax, dword ptr [ebx]
// 007d5bdf  0303                 add eax, dword ptr [ebx]
// 007d5be1  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function _read_long_string)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll-nolstr llex.c