// roc 2009-06 007e6b50  unit: CXTPImageEditorDlg::CDlgToolBar  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e6b50
//
// 007e6b50  6aff                 push -1
// 007e6b52  68a3fd8700           push 0x87fda3
// 007e6b57  64a100000000         mov eax, dword ptr fs:[0]
// 007e6b5d  50                   push eax
// 007e6b5e  81ecb8000000         sub esp, 0xb8
// 007e6b64  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e6b69  33c4                 xor eax, esp
// 007e6b6b  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 007e6b72  53                   push ebx
// 007e6b73  55                   push ebp
// 007e6b74  56                   push esi
// 007e6b75  57                   push edi
// 007e6b76  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e6b7b  33c4                 xor eax, esp
// 007e6b7d  50                   push eax
// 007e6b7e  8d8424cc000000       lea eax, [esp + 0xcc]
// 007e6b85  64a300000000         mov dword ptr fs:[0], eax
// 007e6b8b  8bf1                 mov esi, ecx
// 007e6b8d  56                   push esi
// 007e6b8e  8d4c2478             lea ecx, [esp + 0x78]
// 007e6b92  89742428             mov dword ptr [esp + 0x28], esi
// 007e6b96  e82d28f3ff           call 0x7193c8
// 007e6b9b  33ed                 xor ebp, ebp
// 007e6b9d  56                   push esi
// 007e6b9e  8d4c242c             lea ecx, [esp + 0x2c]
// 007e6ba2  89ac24d8000000       mov dword ptr [esp + 0xd8], ebp
// 007e6ba9  e82299f8ff           call 0x7704d0
// 007e6bae  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007e6bb2  8d442428             lea eax, [esp + 0x28]
// 007e6bb6  50                   push eax
// 007e6bb7  51                   push ecx
// 007e6bb8  8d4c244c             lea ecx, [esp + 0x4c]
// 007e6bbc  e86f99f8ff           call 0x770530
// 007e6bc1  68ffffff00           push 0xffffff
// 007e6bc6  8d54242c             lea edx, [esp + 0x2c]
// 007e6bca  52                   push edx
// 007e6bcb  8d4c244c             lea ecx, [esp + 0x4c]
// 007e6bcf  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 007e6bd7  e8f42bf3ff           call 0x7197d0
// 007e6bdc  8b767c               mov esi, dword ptr [esi + 0x7c]
// 007e6bdf  3bf5                 cmp esi, ebp
// 007e6be1  740d                 je 0x7e6bf0
// 007e6be3  c744243801000000     mov dword ptr [esp + 0x38], 1
// 007e6beb  396e08               cmp dword ptr [esi + 8], ebp
// 007e6bee  7504                 jne 0x7e6bf4
// 007e6bf0  896c2438             mov dword ptr [esp + 0x38], ebp
// 007e6bf4  896c2420             mov dword ptr [esp + 0x20], ebp
// 007e6bf8  896c2414             mov dword ptr [esp + 0x14], ebp
// 007e6bfc  3bf5                 cmp esi, ebp
// 007e6bfe  0f846c020000         je 0x7e6e70
// 007e6c04  8b7604               mov esi, dword ptr [esi + 4]
// 007e6c07  8d442440             lea eax, [esp + 0x40]
// 007e6c0b  50                   push eax
// 007e6c0c  8d4c2424             lea ecx, [esp + 0x24]
// 007e6c10  51                   push ecx
// 007e6c11  8d54241c             lea edx, [esp + 0x1c]
// 007e6c15  52                   push edx
// 007e6c16  8d442450             lea eax, [esp + 0x50]
// 007e6c1a  56                   push esi
// 007e6c1b  50                   push eax
// 007e6c1c  e80fccf4ff           call 0x733830
// 007e6c21  83c414               add esp, 0x14
// 007e6c24  85c0                 test eax, eax
// 007e6c26  0f8444020000         je 0x7e6e70
// 007e6c2c  396c2414             cmp dword ptr [esp + 0x14], ebp
// 007e6c30  0f843a020000         je 0x7e6e70
// 007e6c36  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007e6c3a  3bdd                 cmp ebx, ebp
// 007e6c3c  0f842e020000         je 0x7e6e70
// 007e6c42  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007e6c46  8bd7                 mov edx, edi
// 007e6c48  2b542428             sub edx, dword ptr [esp + 0x28]
// 007e6c4c  33c9                 xor ecx, ecx
// 007e6c4e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007e6c52  85d2                 test edx, edx
// 007e6c54  0f8ef3010000         jle 0x7e6e4d
// 007e6c5a  8b742434             mov esi, dword ptr [esp + 0x34]
// 007e6c5e  2b74242c             sub esi, dword ptr [esp + 0x2c]
// 007e6c62  89742418             mov dword ptr [esp + 0x18], esi
// 007e6c66  eb08                 jmp 0x7e6c70
// 007e6c68  8da42400000000       lea esp, [esp]
// 007e6c6f  90                   nop 
// 007e6c70  3bf5                 cmp esi, ebp
// 007e6c72  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007e6c76  0f8ebe010000         jle 0x7e6e3a
// 007e6c7c  8d642400             lea esp, [esp]
// 007e6c80  8b442424             mov eax, dword ptr [esp + 0x24]
// 007e6c84  8b4058               mov eax, dword ptr [eax + 0x58]
// 007e6c87  0fafc5               imul eax, ebp
// 007e6c8a  99                   cdq 
// 007e6c8b  f7fe                 idiv esi
// 007e6c8d  8b542424             mov edx, dword ptr [esp + 0x24]
// 007e6c91  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 007e6c95  8bf0                 mov esi, eax
// 007e6c97  8b4254               mov eax, dword ptr [edx + 0x54]
// 007e6c9a  0fafc1               imul eax, ecx
// 007e6c9d  99                   cdq 
// 007e6c9e  f7ff                 idiv edi
// 007e6ca0  837c243800           cmp dword ptr [esp + 0x38], 0
// 007e6ca5  0f84d5000000         je 0x7e6d80
// 007e6cab  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e6caf  8b5204               mov edx, dword ptr [edx + 4]
// 007e6cb2  0fafd6               imul edx, esi
// 007e6cb5  03d0                 add edx, eax
// 007e6cb7  8b1c93               mov ebx, dword ptr [ebx + edx*4]
// 007e6cba  8d4503               lea eax, [ebp + 3]
// 007e6cbd  99                   cdq 
// 007e6cbe  83e203               and edx, 3
// 007e6cc1  03c2                 add eax, edx
// 007e6cc3  8bf0                 mov esi, eax
// 007e6cc5  8d4103               lea eax, [ecx + 3]
// 007e6cc8  99                   cdq 
// 007e6cc9  83e203               and edx, 3
// 007e6ccc  03c2                 add eax, edx
// 007e6cce  c1fe02               sar esi, 2
// 007e6cd1  c1f802               sar eax, 2
// 007e6cd4  03f0                 add esi, eax
// 007e6cd6  8bfb                 mov edi, ebx
// 007e6cd8  8bce                 mov ecx, esi
// 007e6cda  c1ef18               shr edi, 0x18
// 007e6cdd  81e101000080         and ecx, 0x80000001
// 007e6ce3  7905                 jns 0x7e6cea
// 007e6ce5  49                   dec ecx
// 007e6ce6  83c9fe               or ecx, 0xfffffffe
// 007e6ce9  41                   inc ecx
// 007e6cea  f7d9                 neg ecx
// 007e6cec  1bc9                 sbb ecx, ecx
// 007e6cee  8bc3                 mov eax, ebx
// 007e6cf0  c1e808               shr eax, 8
// 007e6cf3  0fb6d0               movzx edx, al
// 007e6cf6  83e1ec               and ecx, 0xffffffec
// 007e6cf9  81c1ff000000         add ecx, 0xff
// 007e6cff  8bf1                 mov esi, ecx
// 007e6d01  2bf2                 sub esi, edx
// 007e6d03  0faff7               imul esi, edi
// 007e6d06  b881808080           mov eax, 0x80808081
// 007e6d0b  f7ee                 imul esi
// 007e6d0d  03d6                 add edx, esi
// 007e6d0f  c1fa07               sar edx, 7
// 007e6d12  8bc2                 mov eax, edx
// 007e6d14  c1e81f               shr eax, 0x1f
// 007e6d17  03c2                 add eax, edx
// 007e6d19  8ad1                 mov dl, cl
// 007e6d1b  2ad0                 sub dl, al
// 007e6d1d  0fb6c3               movzx eax, bl
// 007e6d20  8be9                 mov ebp, ecx
// 007e6d22  2be8                 sub ebp, eax
// 007e6d24  0fafef               imul ebp, edi
// 007e6d27  0fb6f2               movzx esi, dl
// 007e6d2a  b881808080           mov eax, 0x80808081
// 007e6d2f  f7ed                 imul ebp
// 007e6d31  03d5                 add edx, ebp
// 007e6d33  c1fa07               sar edx, 7
// 007e6d36  8bc2                 mov eax, edx
// 007e6d38  c1e81f               shr eax, 0x1f
// 007e6d3b  03c2                 add eax, edx
// 007e6d3d  8ad1                 mov dl, cl
// 007e6d3f  2ad0                 sub dl, al
// 007e6d41  c1eb10               shr ebx, 0x10
// 007e6d44  0fb6c2               movzx eax, dl
// 007e6d47  0fb6d3               movzx edx, bl
// 007e6d4a  8bd9                 mov ebx, ecx
// 007e6d4c  2bda                 sub ebx, edx
// 007e6d4e  0fafdf               imul ebx, edi
// 007e6d51  c1e008               shl eax, 8
// 007e6d54  0bf0                 or esi, eax
// 007e6d56  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007e6d5a  b881808080           mov eax, 0x80808081
// 007e6d5f  f7eb                 imul ebx
// 007e6d61  03d3                 add edx, ebx
// 007e6d63  c1fa07               sar edx, 7
// 007e6d66  8bc2                 mov eax, edx
// 007e6d68  c1e81f               shr eax, 0x1f
// 007e6d6b  03c2                 add eax, edx
// 007e6d6d  2ac8                 sub cl, al
// 007e6d6f  0fb6c9               movzx ecx, cl
// 007e6d72  c1e608               shl esi, 8
// 007e6d75  0bf1                 or esi, ecx
// 007e6d77  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e6d7b  e97c000000           jmp 0x7e6dfc
// 007e6d80  8b542424             mov edx, dword ptr [esp + 0x24]
// 007e6d84  837a7c00             cmp dword ptr [edx + 0x7c], 0
// 007e6d88  7507                 jne 0x7e6d91
// 007e6d8a  b8fffeff00           mov eax, 0xfffeff
// 007e6d8f  eb0f                 jmp 0x7e6da0
// 007e6d91  8b542414             mov edx, dword ptr [esp + 0x14]
// 007e6d95  8b5204               mov edx, dword ptr [edx + 4]
// 007e6d98  0fafd6               imul edx, esi
// 007e6d9b  03d0                 add edx, eax
// 007e6d9d  8b0493               mov eax, dword ptr [ebx + edx*4]
// 007e6da0  8bd0                 mov edx, eax
// 007e6da2  c1ea08               shr edx, 8
// 007e6da5  0fb6f2               movzx esi, dl
// 007e6da8  0fb6d0               movzx edx, al
// 007e6dab  c1e208               shl edx, 8
// 007e6dae  c1e810               shr eax, 0x10
// 007e6db1  0bf2                 or esi, edx
// 007e6db3  0fb6c0               movzx eax, al
// 007e6db6  c1e608               shl esi, 8
// 007e6db9  0bf0                 or esi, eax
// 007e6dbb  81fefffeff00         cmp esi, 0xfffeff
// 007e6dc1  7539                 jne 0x7e6dfc
// 007e6dc3  8d4503               lea eax, [ebp + 3]
// 007e6dc6  99                   cdq 
// 007e6dc7  83e203               and edx, 3
// 007e6dca  03c2                 add eax, edx
// 007e6dcc  8bf0                 mov esi, eax
// 007e6dce  8d4103               lea eax, [ecx + 3]
// 007e6dd1  99                   cdq 
// 007e6dd2  83e203               and edx, 3
// 007e6dd5  03c2                 add eax, edx
// 007e6dd7  c1fe02               sar esi, 2
// 007e6dda  c1f802               sar eax, 2
// 007e6ddd  03f0                 add esi, eax
// 007e6ddf  81e601000080         and esi, 0x80000001
// 007e6de5  7905                 jns 0x7e6dec
// 007e6de7  4e                   dec esi
// 007e6de8  83cefe               or esi, 0xfffffffe
// 007e6deb  46                   inc esi
// 007e6dec  f7de                 neg esi
// 007e6dee  1bf6                 sbb esi, esi
// 007e6df0  81e6ecebebff         and esi, 0xffebebec
// 007e6df6  81c6ffffff00         add esi, 0xffffff
// 007e6dfc  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e6e00  2bc5                 sub eax, ebp
// 007e6e02  56                   push esi
// 007e6e03  48                   dec eax
// 007e6e04  50                   push eax
// 007e6e05  51                   push ecx
// 007e6e06  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007e6e0a  51                   push ecx
// 007e6e0b  ff15d4e08900         call dword ptr [0x89e0d4]
// 007e6e11  8b442434             mov eax, dword ptr [esp + 0x34]
// 007e6e15  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 007e6e19  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007e6e1d  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007e6e21  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e6e25  45                   inc ebp
// 007e6e26  3be8                 cmp ebp, eax
// 007e6e28  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007e6e2c  89442418             mov dword ptr [esp + 0x18], eax
// 007e6e30  8bf0                 mov esi, eax
// 007e6e32  0f8c48feffff         jl 0x7e6c80
// 007e6e38  33ed                 xor ebp, ebp
// 007e6e3a  8bd7                 mov edx, edi
// 007e6e3c  2b542428             sub edx, dword ptr [esp + 0x28]
// 007e6e40  41                   inc ecx
// 007e6e41  3bca                 cmp ecx, edx
// 007e6e43  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007e6e47  0f8c23feffff         jl 0x7e6c70
// 007e6e4d  8b35cce98900         mov esi, dword ptr [0x89e9cc]
// 007e6e53  53                   push ebx
// 007e6e54  ffd6                 call esi
// 007e6e56  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e6e5a  50                   push eax
// 007e6e5b  ffd6                 call esi
// 007e6e5d  83c408               add esp, 8
// 007e6e60  55                   push ebp
// 007e6e61  55                   push ebp
// 007e6e62  8d4c2430             lea ecx, [esp + 0x30]
// 007e6e66  51                   push ecx
// 007e6e67  8d4c2450             lea ecx, [esp + 0x50]
// 007e6e6b  e85a29f3ff           call 0x7197ca
// 007e6e70  8d4c2444             lea ecx, [esp + 0x44]
// 007e6e74  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 007e6e7c  e8bf98f8ff           call 0x770740
// 007e6e81  8d4c2474             lea ecx, [esp + 0x74]
// 007e6e85  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 007e6e90  e82d25f3ff           call 0x7193c2
// 007e6e95  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 007e6e9c  64890d00000000       mov dword ptr fs:[0], ecx
// 007e6ea3  59                   pop ecx
// 007e6ea4  5f                   pop edi
// 007e6ea5  5e                   pop esi
// 007e6ea6  5d                   pop ebp
// 007e6ea7  5b                   pop ebx
// 007e6ea8  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007e6eaf  33cc                 xor ecx, esp
// 007e6eb1  e8c436f3ff           call 0x71a57a
// 007e6eb6  81c4c4000000         add esp, 0xc4
// 007e6ebc  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPImageEditorPicture@@IAEXXZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp