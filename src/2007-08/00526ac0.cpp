// roc 2007-08 00526ac0  unit: G3D::Line  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00526ac0
//
// 00526ac0  83ec2c               sub esp, 0x2c
// 00526ac3  53                   push ebx
// 00526ac4  56                   push esi
// 00526ac5  57                   push edi
// 00526ac6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00526aca  83bffc00000000       cmp dword ptr [edi + 0xfc], 0
// 00526ad1  8b9f98010000         mov ebx, dword ptr [edi + 0x198]
// 00526ad7  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 00526add  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 00526ae3  895c2418             mov dword ptr [esp + 0x18], ebx
// 00526ae7  89442414             mov dword ptr [esp + 0x14], eax
// 00526aeb  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00526aef  7418                 je 0x526b09
// 00526af1  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00526af5  7512                 jne 0x526b09
// 00526af7  8bf7                 mov esi, edi
// 00526af9  e8f2fcffff           call 0x5267f0
// 00526afe  84c0                 test al, al
// 00526b00  7507                 jne 0x526b09
// 00526b02  5f                   pop edi
// 00526b03  5e                   pop esi
// 00526b04  5b                   pop ebx
// 00526b05  83c42c               add esp, 0x2c
// 00526b08  c3                   ret 
// 00526b09  807b0800             cmp byte ptr [ebx + 8], 0
// 00526b0d  55                   push ebp
// 00526b0e  0f85e3010000         jne 0x526cf7
// 00526b14  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00526b17  85c9                 test ecx, ecx
// 00526b19  894c2410             mov dword ptr [esp + 0x10], ecx
// 00526b1d  7614                 jbe 0x526b33
// 00526b1f  5d                   pop ebp
// 00526b20  5f                   pop edi
// 00526b21  83e901               sub ecx, 1
// 00526b24  834328ff             add dword ptr [ebx + 0x28], -1
// 00526b28  5e                   pop esi
// 00526b29  894b14               mov dword ptr [ebx + 0x14], ecx
// 00526b2c  b001                 mov al, 1
// 00526b2e  5b                   pop ebx
// 00526b2f  83c42c               add esp, 0x2c
// 00526b32  c3                   ret 
// 00526b33  8b4718               mov eax, dword ptr [edi + 0x18]
// 00526b36  8baf6c010000         mov ebp, dword ptr [edi + 0x16c]
// 00526b3c  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00526b40  897c2438             mov dword ptr [esp + 0x38], edi
// 00526b44  8b10                 mov edx, dword ptr [eax]
// 00526b46  89542428             mov dword ptr [esp + 0x28], edx
// 00526b4a  8b542444             mov edx, dword ptr [esp + 0x44]
// 00526b4e  8b4004               mov eax, dword ptr [eax + 4]
// 00526b51  8b12                 mov edx, dword ptr [edx]
// 00526b53  8944242c             mov dword ptr [esp + 0x2c], eax
// 00526b57  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00526b5a  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00526b5d  89542424             mov dword ptr [esp + 0x24], edx
// 00526b61  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 00526b64  89542414             mov dword ptr [esp + 0x14], edx
// 00526b68  0f8f6d010000         jg 0x526cdb
// 00526b6e  8bff                 mov edi, edi
// 00526b70  83f808               cmp eax, 8
// 00526b73  7d31                 jge 0x526ba6
// 00526b75  6a00                 push 0
// 00526b77  50                   push eax
// 00526b78  8d442430             lea eax, [esp + 0x30]
// 00526b7c  56                   push esi
// 00526b7d  50                   push eax
// 00526b7e  e80df4ffff           call 0x525f90
// 00526b83  83c410               add esp, 0x10
// 00526b86  84c0                 test al, al
// 00526b88  0f8419010000         je 0x526ca7
// 00526b8e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00526b92  83f808               cmp eax, 8
// 00526b95  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526b99  7d0b                 jge 0x526ba6
// 00526b9b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00526b9f  b901000000           mov ecx, 1
// 00526ba4  eb2d                 jmp 0x526bd3
// 00526ba6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00526baa  8d48f8               lea ecx, [eax - 8]
// 00526bad  8bd6                 mov edx, esi
// 00526baf  d3fa                 sar edx, cl
// 00526bb1  81e2ff000000         and edx, 0xff
// 00526bb7  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00526bbe  85c9                 test ecx, ecx
// 00526bc0  740c                 je 0x526bce
// 00526bc2  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 00526bca  2bc1                 sub eax, ecx
// 00526bcc  eb28                 jmp 0x526bf6
// 00526bce  b909000000           mov ecx, 9
// 00526bd3  51                   push ecx
// 00526bd4  57                   push edi
// 00526bd5  50                   push eax
// 00526bd6  8d4c2434             lea ecx, [esp + 0x34]
// 00526bda  56                   push esi
// 00526bdb  51                   push ecx
// 00526bdc  e8dff4ffff           call 0x5260c0
// 00526be1  8bf8                 mov edi, eax
// 00526be3  83c414               add esp, 0x14
// 00526be6  85ff                 test edi, edi
// 00526be8  0f8cb9000000         jl 0x526ca7
// 00526bee  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526bf2  8b442434             mov eax, dword ptr [esp + 0x34]
// 00526bf6  8bdf                 mov ebx, edi
// 00526bf8  c1fb04               sar ebx, 4
// 00526bfb  83e70f               and edi, 0xf
// 00526bfe  7469                 je 0x526c69
// 00526c00  03eb                 add ebp, ebx
// 00526c02  3bc7                 cmp eax, edi
// 00526c04  7d20                 jge 0x526c26
// 00526c06  57                   push edi
// 00526c07  50                   push eax
// 00526c08  8d542430             lea edx, [esp + 0x30]
// 00526c0c  56                   push esi
// 00526c0d  52                   push edx
// 00526c0e  e87df3ffff           call 0x525f90
// 00526c13  83c410               add esp, 0x10
// 00526c16  84c0                 test al, al
// 00526c18  0f8489000000         je 0x526ca7
// 00526c1e  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526c22  8b442434             mov eax, dword ptr [esp + 0x34]
// 00526c26  8bcf                 mov ecx, edi
// 00526c28  2bc7                 sub eax, edi
// 00526c2a  ba01000000           mov edx, 1
// 00526c2f  d3e2                 shl edx, cl
// 00526c31  8bde                 mov ebx, esi
// 00526c33  8bc8                 mov ecx, eax
// 00526c35  d3fb                 sar ebx, cl
// 00526c37  83ea01               sub edx, 1
// 00526c3a  23d3                 and edx, ebx
// 00526c3c  3b14bd28457a00       cmp edx, dword ptr [edi*4 + 0x7a4528]
// 00526c43  7d0b                 jge 0x526c50
// 00526c45  8b3cbd68457a00       mov edi, dword ptr [edi*4 + 0x7a4568]
// 00526c4c  03fa                 add edi, edx
// 00526c4e  eb02                 jmp 0x526c52
// 00526c50  8bfa                 mov edi, edx
// 00526c52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526c56  8b542424             mov edx, dword ptr [esp + 0x24]
// 00526c5a  d3e7                 shl edi, cl
// 00526c5c  8b0cad00337a00       mov ecx, dword ptr [ebp*4 + 0x7a3300]
// 00526c63  66893c4a             mov word ptr [edx + ecx*2], di
// 00526c67  eb08                 jmp 0x526c71
// 00526c69  83fb0f               cmp ebx, 0xf
// 00526c6c  7512                 jne 0x526c80
// 00526c6e  83c50f               add ebp, 0xf
// 00526c71  83c501               add ebp, 1
// 00526c74  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00526c78  0f8ef2feffff         jle 0x526b70
// 00526c7e  eb4f                 jmp 0x526ccf
// 00526c80  bf01000000           mov edi, 1
// 00526c85  8bcb                 mov ecx, ebx
// 00526c87  d3e7                 shl edi, cl
// 00526c89  85db                 test ebx, ebx
// 00526c8b  8bef                 mov ebp, edi
// 00526c8d  7439                 je 0x526cc8
// 00526c8f  3bc3                 cmp eax, ebx
// 00526c91  7d26                 jge 0x526cb9
// 00526c93  53                   push ebx
// 00526c94  50                   push eax
// 00526c95  8d442430             lea eax, [esp + 0x30]
// 00526c99  56                   push esi
// 00526c9a  50                   push eax
// 00526c9b  e8f0f2ffff           call 0x525f90
// 00526ca0  83c410               add esp, 0x10
// 00526ca3  84c0                 test al, al
// 00526ca5  750a                 jne 0x526cb1
// 00526ca7  5d                   pop ebp
// 00526ca8  5f                   pop edi
// 00526ca9  5e                   pop esi
// 00526caa  32c0                 xor al, al
// 00526cac  5b                   pop ebx
// 00526cad  83c42c               add esp, 0x2c
// 00526cb0  c3                   ret 
// 00526cb1  8b742430             mov esi, dword ptr [esp + 0x30]
// 00526cb5  8b442434             mov eax, dword ptr [esp + 0x34]
// 00526cb9  2bc3                 sub eax, ebx
// 00526cbb  8bd6                 mov edx, esi
// 00526cbd  8bc8                 mov ecx, eax
// 00526cbf  d3fa                 sar edx, cl
// 00526cc1  83c7ff               add edi, -1
// 00526cc4  23d7                 and edx, edi
// 00526cc6  03ea                 add ebp, edx
// 00526cc8  83ed01               sub ebp, 1
// 00526ccb  896c2410             mov dword ptr [esp + 0x10], ebp
// 00526ccf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00526cd3  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00526cd7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00526cdb  8b5718               mov edx, dword ptr [edi + 0x18]
// 00526cde  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00526ce2  892a                 mov dword ptr [edx], ebp
// 00526ce4  8b5718               mov edx, dword ptr [edi + 0x18]
// 00526ce7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00526ceb  897a04               mov dword ptr [edx + 4], edi
// 00526cee  89730c               mov dword ptr [ebx + 0xc], esi
// 00526cf1  894310               mov dword ptr [ebx + 0x10], eax
// 00526cf4  894b14               mov dword ptr [ebx + 0x14], ecx
// 00526cf7  834328ff             add dword ptr [ebx + 0x28], -1
// 00526cfb  5d                   pop ebp
// 00526cfc  5f                   pop edi
// 00526cfd  5e                   pop esi
// 00526cfe  b001                 mov al, 1
// 00526d00  5b                   pop ebx
// 00526d01  83c42c               add esp, 0x2c
// 00526d04  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_AC_first)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
