// roc 2007-08 00617c40  unit: seg_00610000  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617c40
//
// 00617c40  83ec50               sub esp, 0x50
// 00617c43  53                   push ebx
// 00617c44  55                   push ebp
// 00617c45  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00617c49  56                   push esi
// 00617c4a  8bd8                 mov ebx, eax
// 00617c4c  8b03                 mov eax, dword ptr [ebx]
// 00617c4e  57                   push edi
// 00617c4f  50                   push eax
// 00617c50  e8abf7ffff           call 0x617400
// 00617c55  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617c58  8b08                 mov ecx, dword ptr [eax]
// 00617c5a  33ff                 xor edi, edi
// 00617c5c  83c404               add esp, 4
// 00617c5f  3bcf                 cmp ecx, edi
// 00617c61  8d51ff               lea edx, [ecx - 1]
// 00617c64  8910                 mov dword ptr [eax], edx
// 00617c66  7611                 jbe 0x617c79
// 00617c68  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00617c6b  8b5104               mov edx, dword ptr [ecx + 4]
// 00617c6e  0fb602               movzx eax, byte ptr [edx]
// 00617c71  83c201               add edx, 1
// 00617c74  895104               mov dword ptr [ecx + 4], edx
// 00617c77  eb0c                 jmp 0x617c85
// 00617c79  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617c7c  50                   push eax
// 00617c7d  e86eb6ffff           call 0x6132f0
// 00617c82  83c404               add esp, 4
// 00617c85  83f80a               cmp eax, 0xa
// 00617c88  8903                 mov dword ptr [ebx], eax
// 00617c8a  7405                 je 0x617c91
// 00617c8c  83f80d               cmp eax, 0xd
// 00617c8f  7507                 jne 0x617c98
// 00617c91  8bf3                 mov esi, ebx
// 00617c93  e898f9ffff           call 0x617630
// 00617c98  8b03                 mov eax, dword ptr [ebx]
// 00617c9a  8d4801               lea ecx, [eax + 1]
// 00617c9d  83f95e               cmp ecx, 0x5e
// 00617ca0  0f87ce000000         ja 0x617d74
// 00617ca6  0fb6892c7e6100       movzx ecx, byte ptr [ecx + 0x617e2c]
// 00617cad  ff248d1c7e6100       jmp dword ptr [ecx*4 + 0x617e1c]
// 00617cb4  3bef                 cmp ebp, edi
// 00617cb6  bebc397c00           mov esi, 0x7c39bc
// 00617cbb  7505                 jne 0x617cc2
// 00617cbd  bea4397c00           mov esi, 0x7c39a4
// 00617cc2  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00617cc5  6a50                 push 0x50
// 00617cc7  83c210               add edx, 0x10
// 00617cca  52                   push edx
// 00617ccb  8d442418             lea eax, [esp + 0x18]
// 00617ccf  50                   push eax
// 00617cd0  e8db71ffff           call 0x60eeb0
// 00617cd5  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00617cd8  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00617cdb  56                   push esi
// 00617cdc  51                   push ecx
// 00617cdd  8d542424             lea edx, [esp + 0x24]
// 00617ce1  52                   push edx
// 00617ce2  6878977b00           push 0x7b9778
// 00617ce7  50                   push eax
// 00617ce8  e8a371ffff           call 0x60ee90
// 00617ced  8b0d28397c00         mov ecx, dword ptr [0x7c3928]
// 00617cf3  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00617cf6  51                   push ecx
// 00617cf7  50                   push eax
// 00617cf8  685c397c00           push 0x7c395c
// 00617cfd  52                   push edx
// 00617cfe  e88d71ffff           call 0x60ee90
// 00617d03  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00617d06  6a03                 push 3
// 00617d08  50                   push eax
// 00617d09  e812e3faff           call 0x5c6020
// 00617d0e  83c438               add esp, 0x38
// 00617d11  eb85                 jmp 0x617c98
// 00617d13  8bf3                 mov esi, ebx
// 00617d15  e8c6fdffff           call 0x617ae0
// 00617d1a  8b742468             mov esi, dword ptr [esp + 0x68]
// 00617d1e  3bc6                 cmp eax, esi
// 00617d20  0f8572ffffff         jne 0x617c98
// 00617d26  8b0b                 mov ecx, dword ptr [ebx]
// 00617d28  51                   push ecx
// 00617d29  e8d2f6ffff           call 0x617400
// 00617d2e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617d31  8b08                 mov ecx, dword ptr [eax]
// 00617d33  83c404               add esp, 4
// 00617d36  3bcf                 cmp ecx, edi
// 00617d38  8d51ff               lea edx, [ecx - 1]
// 00617d3b  8910                 mov dword ptr [eax], edx
// 00617d3d  7679                 jbe 0x617db8
// 00617d3f  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00617d42  8b5104               mov edx, dword ptr [ecx + 4]
// 00617d45  0fb602               movzx eax, byte ptr [edx]
// 00617d48  83c201               add edx, 1
// 00617d4b  895104               mov dword ptr [ecx + 4], edx
// 00617d4e  eb74                 jmp 0x617dc4
// 00617d50  6a0a                 push 0xa
// 00617d52  e8a9f6ffff           call 0x617400
// 00617d57  83c404               add esp, 4
// 00617d5a  8bf3                 mov esi, ebx
// 00617d5c  e8cff8ffff           call 0x617630
// 00617d61  3bef                 cmp ebp, edi
// 00617d63  0f852fffffff         jne 0x617c98
// 00617d69  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00617d6c  897904               mov dword ptr [ecx + 4], edi
// 00617d6f  e924ffffff           jmp 0x617c98
// 00617d74  3bef                 cmp ebp, edi
// 00617d76  7409                 je 0x617d81
// 00617d78  50                   push eax
// 00617d79  e882f6ffff           call 0x617400
// 00617d7e  83c404               add esp, 4
// 00617d81  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617d84  8b08                 mov ecx, dword ptr [eax]
// 00617d86  3bcf                 cmp ecx, edi
// 00617d88  8d51ff               lea edx, [ecx - 1]
// 00617d8b  8910                 mov dword ptr [eax], edx
// 00617d8d  7616                 jbe 0x617da5
// 00617d8f  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00617d92  8b5104               mov edx, dword ptr [ecx + 4]
// 00617d95  0fb602               movzx eax, byte ptr [edx]
// 00617d98  83c201               add edx, 1
// 00617d9b  895104               mov dword ptr [ecx + 4], edx
// 00617d9e  8903                 mov dword ptr [ebx], eax
// 00617da0  e9f3feffff           jmp 0x617c98
// 00617da5  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617da8  50                   push eax
// 00617da9  e842b5ffff           call 0x6132f0
// 00617dae  83c404               add esp, 4
// 00617db1  8903                 mov dword ptr [ebx], eax
// 00617db3  e9e0feffff           jmp 0x617c98
// 00617db8  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00617dbb  50                   push eax
// 00617dbc  e82fb5ffff           call 0x6132f0
// 00617dc1  83c404               add esp, 4
// 00617dc4  3bef                 cmp ebp, edi
// 00617dc6  8903                 mov dword ptr [ebx], eax
// 00617dc8  7448                 je 0x617e12
// 00617dca  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00617dcd  8b4104               mov eax, dword ptr [ecx + 4]
// 00617dd0  8b09                 mov ecx, dword ptr [ecx]
// 00617dd2  8d1436               lea edx, [esi + esi]
// 00617dd5  2bc2                 sub eax, edx
// 00617dd7  83e804               sub eax, 4
// 00617dda  8d4c3102             lea ecx, [ecx + esi + 2]
// 00617dde  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00617de1  50                   push eax
// 00617de2  51                   push ecx
// 00617de3  56                   push esi
// 00617de4  e887afffff           call 0x612d70
// 00617de9  8b5330               mov edx, dword ptr [ebx + 0x30]
// 00617dec  8bf8                 mov edi, eax
// 00617dee  8b4204               mov eax, dword ptr [edx + 4]
// 00617df1  57                   push edi
// 00617df2  50                   push eax
// 00617df3  56                   push esi
// 00617df4  e8c7adffff           call 0x612bc0
// 00617df9  83c418               add esp, 0x18
// 00617dfc  83780800             cmp dword ptr [eax + 8], 0
// 00617e00  750d                 jne 0x617e0f
// 00617e02  c70001000000         mov dword ptr [eax], 1
// 00617e08  c7400801000000       mov dword ptr [eax + 8], 1
// 00617e0f  897d00               mov dword ptr [ebp], edi
// 00617e12  5f                   pop edi
// 00617e13  5e                   pop esi
// 00617e14  5d                   pop ebp
// 00617e15  5b                   pop ebx
// 00617e16  83c450               add esp, 0x50
// 00617e19  c3                   ret 
// 00617e1a  8bff                 mov edi, edi
// 00617e1c  b47c                 mov ah, 0x7c
// 00617e1e  61                   popal 
// 00617e1f  00507d               add byte ptr [eax + 0x7d], dl
// 00617e22  61                   popal 
// 00617e23  0013                 add byte ptr [ebx], dl
// 00617e25  7d61                 jge 0x617e88
// 00617e27  00747d61             add byte ptr [ebp + edi*2 + 0x61], dh
// 00617e2b  0000                 add byte ptr [eax], al
// 00617e2d  0303                 add eax, dword ptr [ebx]
// 00617e2f  0303                 add eax, dword ptr [ebx]
// 00617e31  0303                 add eax, dword ptr [ebx]
// 00617e33  0303                 add eax, dword ptr [ebx]
// 00617e35  0303                 add eax, dword ptr [ebx]
// 00617e37  0103                 add dword ptr [ebx], eax
// 00617e39  0301                 add eax, dword ptr [ecx]
// 00617e3b  0303                 add eax, dword ptr [ebx]
// 00617e3d  0303                 add eax, dword ptr [ebx]
// 00617e3f  0303                 add eax, dword ptr [ebx]
// 00617e41  0303                 add eax, dword ptr [ebx]
// 00617e43  0303                 add eax, dword ptr [ebx]
// 00617e45  0303                 add eax, dword ptr [ebx]
// 00617e47  0303                 add eax, dword ptr [ebx]
// 00617e49  0303                 add eax, dword ptr [ebx]
// 00617e4b  0303                 add eax, dword ptr [ebx]
// 00617e4d  0303                 add eax, dword ptr [ebx]
// 00617e4f  0303                 add eax, dword ptr [ebx]
// 00617e51  0303                 add eax, dword ptr [ebx]
// 00617e53  0303                 add eax, dword ptr [ebx]
// 00617e55  0303                 add eax, dword ptr [ebx]
// 00617e57  0303                 add eax, dword ptr [ebx]
// 00617e59  0303                 add eax, dword ptr [ebx]
// 00617e5b  0303                 add eax, dword ptr [ebx]
// 00617e5d  0303                 add eax, dword ptr [ebx]
// 00617e5f  0303                 add eax, dword ptr [ebx]
// 00617e61  0303                 add eax, dword ptr [ebx]
// 00617e63  0303                 add eax, dword ptr [ebx]
// 00617e65  0303                 add eax, dword ptr [ebx]
// 00617e67  0303                 add eax, dword ptr [ebx]
// 00617e69  0303                 add eax, dword ptr [ebx]
// 00617e6b  0303                 add eax, dword ptr [ebx]
// 00617e6d  0303                 add eax, dword ptr [ebx]
// 00617e6f  0303                 add eax, dword ptr [ebx]
// 00617e71  0303                 add eax, dword ptr [ebx]
// 00617e73  0303                 add eax, dword ptr [ebx]
// 00617e75  0303                 add eax, dword ptr [ebx]
// 00617e77  0303                 add eax, dword ptr [ebx]
// 00617e79  0303                 add eax, dword ptr [ebx]
// 00617e7b  0303                 add eax, dword ptr [ebx]
// 00617e7d  0303                 add eax, dword ptr [ebx]
// 00617e7f  0303                 add eax, dword ptr [ebx]
// 00617e81  0303                 add eax, dword ptr [ebx]
// 00617e83  0303                 add eax, dword ptr [ebx]
// 00617e85  0303                 add eax, dword ptr [ebx]
// 00617e87  0303                 add eax, dword ptr [ebx]
// 00617e89  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function _read_long_string)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll-nolstr llex.c