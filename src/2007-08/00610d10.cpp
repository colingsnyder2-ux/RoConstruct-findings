// roc 2007-08 00610d10  unit: RBX::Ball  size: 4396 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00610d10
//
// 00610d10  55                   push ebp
// 00610d11  8bec                 mov ebp, esp
// 00610d13  83e4c0               and esp, 0xffffffc0
// 00610d16  83ec74               sub esp, 0x74
// 00610d19  53                   push ebx
// 00610d1a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00610d1d  56                   push esi
// 00610d1e  57                   push edi
// 00610d1f  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00610d22  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00610d25  8b5104               mov edx, dword ptr [ecx + 4]
// 00610d28  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00610d2b  89442410             mov dword ptr [esp + 0x10], eax
// 00610d2f  8b02                 mov eax, dword ptr [edx]
// 00610d31  8b5010               mov edx, dword ptr [eax + 0x10]
// 00610d34  8944241c             mov dword ptr [esp + 0x1c], eax
// 00610d38  8b4208               mov eax, dword ptr [edx + 8]
// 00610d3b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610d3f  89442418             mov dword ptr [esp + 0x18], eax
// 00610d43  eb02                 jmp 0x610d47
// 00610d45  ddd8                 fstp st(0)
// 00610d47  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610d4b  8b38                 mov edi, dword ptr [eax]
// 00610d4d  83c004               add eax, 4
// 00610d50  89442410             mov dword ptr [esp + 0x10], eax
// 00610d54  8a4336               mov al, byte ptr [ebx + 0x36]
// 00610d57  a80c                 test al, 0xc
// 00610d59  742a                 je 0x610d85
// 00610d5b  83433cff             add dword ptr [ebx + 0x3c], -1
// 00610d5f  7404                 je 0x610d65
// 00610d61  a804                 test al, 4
// 00610d63  7420                 je 0x610d85
// 00610d65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00610d69  51                   push ecx
// 00610d6a  8bf3                 mov esi, ebx
// 00610d6c  e81ff4ffff           call 0x610190
// 00610d71  83c404               add esp, 4
// 00610d74  807b0601             cmp byte ptr [ebx + 6], 1
// 00610d78  0f8415100000         je 0x611d93
// 00610d7e  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00610d81  89542414             mov dword ptr [esp + 0x14], edx
// 00610d85  8b542414             mov edx, dword ptr [esp + 0x14]
// 00610d89  8bc7                 mov eax, edi
// 00610d8b  c1e806               shr eax, 6
// 00610d8e  25ff000000           and eax, 0xff
// 00610d93  8bc8                 mov ecx, eax
// 00610d95  89442424             mov dword ptr [esp + 0x24], eax
// 00610d99  c1e104               shl ecx, 4
// 00610d9c  8bc7                 mov eax, edi
// 00610d9e  83e03f               and eax, 0x3f
// 00610da1  83f825               cmp eax, 0x25
// 00610da4  8d3411               lea esi, [ecx + edx]
// 00610da7  894c2428             mov dword ptr [esp + 0x28], ecx
// 00610dab  89742420             mov dword ptr [esp + 0x20], esi
// 00610daf  7796                 ja 0x610d47
// 00610db1  ff2485a41d6100       jmp dword ptr [eax*4 + 0x611da4]
// 00610db8  c1ef17               shr edi, 0x17
// 00610dbb  c1e704               shl edi, 4
// 00610dbe  03fa                 add edi, edx
// 00610dc0  8b07                 mov eax, dword ptr [edi]
// 00610dc2  8906                 mov dword ptr [esi], eax
// 00610dc4  8b4f04               mov ecx, dword ptr [edi + 4]
// 00610dc7  894e04               mov dword ptr [esi + 4], ecx
// 00610dca  8b5708               mov edx, dword ptr [edi + 8]
// 00610dcd  895608               mov dword ptr [esi + 8], edx
// 00610dd0  e972ffffff           jmp 0x610d47
// 00610dd5  c1ef0e               shr edi, 0xe
// 00610dd8  c1e704               shl edi, 4
// 00610ddb  037c2418             add edi, dword ptr [esp + 0x18]
// 00610ddf  ebdf                 jmp 0x610dc0
// 00610de1  8bc7                 mov eax, edi
// 00610de3  c1e817               shr eax, 0x17
// 00610de6  f7c700c07f00         test edi, 0x7fc000
// 00610dec  8906                 mov dword ptr [esi], eax
// 00610dee  c7460801000000       mov dword ptr [esi + 8], 1
// 00610df5  0f844cffffff         je 0x610d47
// 00610dfb  8344241004           add dword ptr [esp + 0x10], 4
// 00610e00  e942ffffff           jmp 0x610d47
// 00610e05  c1ef17               shr edi, 0x17
// 00610e08  c1e704               shl edi, 4
// 00610e0b  03fa                 add edi, edx
// 00610e0d  33c0                 xor eax, eax
// 00610e0f  90                   nop 
// 00610e10  894708               mov dword ptr [edi + 8], eax
// 00610e13  83ef10               sub edi, 0x10
// 00610e16  3bfe                 cmp edi, esi
// 00610e18  73f6                 jae 0x610e10
// 00610e1a  e928ffffff           jmp 0x610d47
// 00610e1f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00610e23  c1ef17               shr edi, 0x17
// 00610e26  8b54b914             mov edx, dword ptr [ecx + edi*4 + 0x14]
// 00610e2a  8b4208               mov eax, dword ptr [edx + 8]
// 00610e2d  8b08                 mov ecx, dword ptr [eax]
// 00610e2f  890e                 mov dword ptr [esi], ecx
// 00610e31  8b5004               mov edx, dword ptr [eax + 4]
// 00610e34  895604               mov dword ptr [esi + 4], edx
// 00610e37  8b4008               mov eax, dword ptr [eax + 8]
// 00610e3a  894608               mov dword ptr [esi + 8], eax
// 00610e3d  e905ffffff           jmp 0x610d47
// 00610e42  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00610e46  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00610e49  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610e4d  c1ef0e               shr edi, 0xe
// 00610e50  c1e704               shl edi, 4
// 00610e53  037c2418             add edi, dword ptr [esp + 0x18]
// 00610e57  56                   push esi
// 00610e58  57                   push edi
// 00610e59  8d4c2458             lea ecx, [esp + 0x58]
// 00610e5d  51                   push ecx
// 00610e5e  53                   push ebx
// 00610e5f  89542460             mov dword ptr [esp + 0x60], edx
// 00610e63  c744246805000000     mov dword ptr [esp + 0x68], 5
// 00610e6b  894318               mov dword ptr [ebx + 0x18], eax
// 00610e6e  e8ddf4ffff           call 0x610350
// 00610e73  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00610e76  83c410               add esp, 0x10
// 00610e79  89542414             mov dword ptr [esp + 0x14], edx
// 00610e7d  e9c5feffff           jmp 0x610d47
// 00610e82  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610e86  894318               mov dword ptr [ebx + 0x18], eax
// 00610e89  8bc7                 mov eax, edi
// 00610e8b  c1e80e               shr eax, 0xe
// 00610e8e  a900010000           test eax, 0x100
// 00610e93  740e                 je 0x610ea3
// 00610e95  25ff000000           and eax, 0xff
// 00610e9a  c1e004               shl eax, 4
// 00610e9d  03442418             add eax, dword ptr [esp + 0x18]
// 00610ea1  eb0a                 jmp 0x610ead
// 00610ea3  25ff010000           and eax, 0x1ff
// 00610ea8  c1e004               shl eax, 4
// 00610eab  03c2                 add eax, edx
// 00610ead  c1ef17               shr edi, 0x17
// 00610eb0  56                   push esi
// 00610eb1  c1e704               shl edi, 4
// 00610eb4  037c2418             add edi, dword ptr [esp + 0x18]
// 00610eb8  50                   push eax
// 00610eb9  57                   push edi
// 00610eba  53                   push ebx
// 00610ebb  e890f4ffff           call 0x610350
// 00610ec0  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00610ec3  83c410               add esp, 0x10
// 00610ec6  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610eca  e978feffff           jmp 0x610d47
// 00610ecf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00610ed3  8b420c               mov eax, dword ptr [edx + 0xc]
// 00610ed6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00610eda  c1ef0e               shr edi, 0xe
// 00610edd  c1e704               shl edi, 4
// 00610ee0  037c2418             add edi, dword ptr [esp + 0x18]
// 00610ee4  56                   push esi
// 00610ee5  57                   push edi
// 00610ee6  8d542468             lea edx, [esp + 0x68]
// 00610eea  52                   push edx
// 00610eeb  53                   push ebx
// 00610eec  89442470             mov dword ptr [esp + 0x70], eax
// 00610ef0  c744247805000000     mov dword ptr [esp + 0x78], 5
// 00610ef8  894b18               mov dword ptr [ebx + 0x18], ecx
// 00610efb  e840f5ffff           call 0x610440
// 00610f00  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00610f03  83c410               add esp, 0x10
// 00610f06  89442414             mov dword ptr [esp + 0x14], eax
// 00610f0a  e938feffff           jmp 0x610d47
// 00610f0f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00610f13  8b16                 mov edx, dword ptr [esi]
// 00610f15  c1ef17               shr edi, 0x17
// 00610f18  8b7cb914             mov edi, dword ptr [ecx + edi*4 + 0x14]
// 00610f1c  8b4708               mov eax, dword ptr [edi + 8]
// 00610f1f  8910                 mov dword ptr [eax], edx
// 00610f21  8b4e04               mov ecx, dword ptr [esi + 4]
// 00610f24  894804               mov dword ptr [eax + 4], ecx
// 00610f27  8b5608               mov edx, dword ptr [esi + 8]
// 00610f2a  895008               mov dword ptr [eax + 8], edx
// 00610f2d  837e0804             cmp dword ptr [esi + 8], 4
// 00610f31  0f8c10feffff         jl 0x610d47
// 00610f37  8b36                 mov esi, dword ptr [esi]
// 00610f39  f6460503             test byte ptr [esi + 5], 3
// 00610f3d  0f8404feffff         je 0x610d47
// 00610f43  f6470504             test byte ptr [edi + 5], 4
// 00610f47  0f84fafdffff         je 0x610d47
// 00610f4d  56                   push esi
// 00610f4e  57                   push edi
// 00610f4f  53                   push ebx
// 00610f50  e89befffff           call 0x60fef0
// 00610f55  83c40c               add esp, 0xc
// 00610f58  e9eafdffff           jmp 0x610d47
// 00610f5d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610f61  894318               mov dword ptr [ebx + 0x18], eax
// 00610f64  8bc7                 mov eax, edi
// 00610f66  c1e80e               shr eax, 0xe
// 00610f69  a900010000           test eax, 0x100
// 00610f6e  740e                 je 0x610f7e
// 00610f70  25ff000000           and eax, 0xff
// 00610f75  c1e004               shl eax, 4
// 00610f78  03442418             add eax, dword ptr [esp + 0x18]
// 00610f7c  eb0a                 jmp 0x610f88
// 00610f7e  25ff010000           and eax, 0x1ff
// 00610f83  c1e004               shl eax, 4
// 00610f86  03c2                 add eax, edx
// 00610f88  c1ef17               shr edi, 0x17
// 00610f8b  f7c700010000         test edi, 0x100
// 00610f91  740f                 je 0x610fa2
// 00610f93  81e7ff000000         and edi, 0xff
// 00610f99  c1e704               shl edi, 4
// 00610f9c  037c2418             add edi, dword ptr [esp + 0x18]
// 00610fa0  eb05                 jmp 0x610fa7
// 00610fa2  c1e704               shl edi, 4
// 00610fa5  03fa                 add edi, edx
// 00610fa7  50                   push eax
// 00610fa8  57                   push edi
// 00610fa9  56                   push esi
// 00610faa  53                   push ebx
// 00610fab  e890f4ffff           call 0x610440
// 00610fb0  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00610fb3  83c410               add esp, 0x10
// 00610fb6  894c2414             mov dword ptr [esp + 0x14], ecx
// 00610fba  e988fdffff           jmp 0x610d47
// 00610fbf  8bd7                 mov edx, edi
// 00610fc1  c1ea0e               shr edx, 0xe
// 00610fc4  81e2ff010000         and edx, 0x1ff
// 00610fca  52                   push edx
// 00610fcb  e860daffff           call 0x60ea30
// 00610fd0  83c404               add esp, 4
// 00610fd3  50                   push eax
// 00610fd4  c1ef17               shr edi, 0x17
// 00610fd7  57                   push edi
// 00610fd8  e853daffff           call 0x60ea30
// 00610fdd  83c404               add esp, 4
// 00610fe0  50                   push eax
// 00610fe1  53                   push ebx
// 00610fe2  e899130000           call 0x612380
// 00610fe7  8906                 mov dword ptr [esi], eax
// 00610fe9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00610fed  c7460805000000       mov dword ptr [esi + 8], 5
// 00610ff4  83c40c               add esp, 0xc
// 00610ff7  894318               mov dword ptr [ebx + 0x18], eax
// 00610ffa  e9a80b0000           jmp 0x611ba7
// 00610fff  8bc7                 mov eax, edi
// 00611001  c1e817               shr eax, 0x17
// 00611004  c1e004               shl eax, 4
// 00611007  8b0c10               mov ecx, dword ptr [eax + edx]
// 0061100a  03c2                 add eax, edx
// 0061100c  894e10               mov dword ptr [esi + 0x10], ecx
// 0061100f  8b4804               mov ecx, dword ptr [eax + 4]
// 00611012  894e14               mov dword ptr [esi + 0x14], ecx
// 00611015  8b4808               mov ecx, dword ptr [eax + 8]
// 00611018  894e18               mov dword ptr [esi + 0x18], ecx
// 0061101b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061101f  c1ef0e               shr edi, 0xe
// 00611022  f7c700010000         test edi, 0x100
// 00611028  894b18               mov dword ptr [ebx + 0x18], ecx
// 0061102b  740f                 je 0x61103c
// 0061102d  81e7ff000000         and edi, 0xff
// 00611033  c1e704               shl edi, 4
// 00611036  037c2418             add edi, dword ptr [esp + 0x18]
// 0061103a  eb0b                 jmp 0x611047
// 0061103c  81e7ff010000         and edi, 0x1ff
// 00611042  c1e704               shl edi, 4
// 00611045  03fa                 add edi, edx
// 00611047  56                   push esi
// 00611048  57                   push edi
// 00611049  50                   push eax
// 0061104a  53                   push ebx
// 0061104b  e800f3ffff           call 0x610350
// 00611050  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00611053  83c410               add esp, 0x10
// 00611056  89542414             mov dword ptr [esp + 0x14], edx
// 0061105a  e9e8fcffff           jmp 0x610d47
// 0061105f  8bc7                 mov eax, edi
// 00611061  c1e817               shr eax, 0x17
// 00611064  a900010000           test eax, 0x100
// 00611069  740e                 je 0x611079
// 0061106b  25ff000000           and eax, 0xff
// 00611070  c1e004               shl eax, 4
// 00611073  03442418             add eax, dword ptr [esp + 0x18]
// 00611077  eb05                 jmp 0x61107e
// 00611079  c1e004               shl eax, 4
// 0061107c  03c2                 add eax, edx
// 0061107e  c1ef0e               shr edi, 0xe
// 00611081  f7c700010000         test edi, 0x100
// 00611087  8bc8                 mov ecx, eax
// 00611089  740f                 je 0x61109a
// 0061108b  81e7ff000000         and edi, 0xff
// 00611091  c1e704               shl edi, 4
// 00611094  037c2418             add edi, dword ptr [esp + 0x18]
// 00611098  eb0b                 jmp 0x6110a5
// 0061109a  81e7ff010000         and edi, 0x1ff
// 006110a0  c1e704               shl edi, 4
// 006110a3  03fa                 add edi, edx
// 006110a5  b803000000           mov eax, 3
// 006110aa  394108               cmp dword ptr [ecx + 8], eax
// 006110ad  7513                 jne 0x6110c2
// 006110af  394708               cmp dword ptr [edi + 8], eax
// 006110b2  750e                 jne 0x6110c2
// 006110b4  dd07                 fld qword ptr [edi]
// 006110b6  dc01                 fadd qword ptr [ecx]
// 006110b8  894608               mov dword ptr [esi + 8], eax
// 006110bb  dd1e                 fstp qword ptr [esi]
// 006110bd  e985fcffff           jmp 0x610d47
// 006110c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006110c6  894318               mov dword ptr [ebx + 0x18], eax
// 006110c9  6a05                 push 5
// 006110cb  8bc7                 mov eax, edi
// 006110cd  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006110d1  53                   push ebx
// 006110d2  8bf1                 mov esi, ecx
// 006110d4  e877faffff           call 0x610b50
// 006110d9  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006110dc  83c408               add esp, 8
// 006110df  894c2414             mov dword ptr [esp + 0x14], ecx
// 006110e3  e95ffcffff           jmp 0x610d47
// 006110e8  8bc7                 mov eax, edi
// 006110ea  c1e817               shr eax, 0x17
// 006110ed  a900010000           test eax, 0x100
// 006110f2  740e                 je 0x611102
// 006110f4  25ff000000           and eax, 0xff
// 006110f9  c1e004               shl eax, 4
// 006110fc  03442418             add eax, dword ptr [esp + 0x18]
// 00611100  eb05                 jmp 0x611107
// 00611102  c1e004               shl eax, 4
// 00611105  03c2                 add eax, edx
// 00611107  c1ef0e               shr edi, 0xe
// 0061110a  f7c700010000         test edi, 0x100
// 00611110  8bc8                 mov ecx, eax
// 00611112  740f                 je 0x611123
// 00611114  81e7ff000000         and edi, 0xff
// 0061111a  c1e704               shl edi, 4
// 0061111d  037c2418             add edi, dword ptr [esp + 0x18]
// 00611121  eb0b                 jmp 0x61112e
// 00611123  81e7ff010000         and edi, 0x1ff
// 00611129  c1e704               shl edi, 4
// 0061112c  03fa                 add edi, edx
// 0061112e  b803000000           mov eax, 3
// 00611133  394108               cmp dword ptr [ecx + 8], eax
// 00611136  7513                 jne 0x61114b
// 00611138  394708               cmp dword ptr [edi + 8], eax
// 0061113b  750e                 jne 0x61114b
// 0061113d  dd01                 fld qword ptr [ecx]
// 0061113f  dc27                 fsub qword ptr [edi]
// 00611141  894608               mov dword ptr [esi + 8], eax
// 00611144  dd1e                 fstp qword ptr [esi]
// 00611146  e9fcfbffff           jmp 0x610d47
// 0061114b  6a06                 push 6
// 0061114d  e9cd010000           jmp 0x61131f
// 00611152  8bc7                 mov eax, edi
// 00611154  c1e817               shr eax, 0x17
// 00611157  a900010000           test eax, 0x100
// 0061115c  740e                 je 0x61116c
// 0061115e  25ff000000           and eax, 0xff
// 00611163  c1e004               shl eax, 4
// 00611166  03442418             add eax, dword ptr [esp + 0x18]
// 0061116a  eb05                 jmp 0x611171
// 0061116c  c1e004               shl eax, 4
// 0061116f  03c2                 add eax, edx
// 00611171  c1ef0e               shr edi, 0xe
// 00611174  f7c700010000         test edi, 0x100
// 0061117a  8bc8                 mov ecx, eax
// 0061117c  740f                 je 0x61118d
// 0061117e  81e7ff000000         and edi, 0xff
// 00611184  c1e704               shl edi, 4
// 00611187  037c2418             add edi, dword ptr [esp + 0x18]
// 0061118b  eb0b                 jmp 0x611198
// 0061118d  81e7ff010000         and edi, 0x1ff
// 00611193  c1e704               shl edi, 4
// 00611196  03fa                 add edi, edx
// 00611198  b803000000           mov eax, 3
// 0061119d  394108               cmp dword ptr [ecx + 8], eax
// 006111a0  7513                 jne 0x6111b5
// 006111a2  394708               cmp dword ptr [edi + 8], eax
// 006111a5  750e                 jne 0x6111b5
// 006111a7  dd07                 fld qword ptr [edi]
// 006111a9  dc09                 fmul qword ptr [ecx]
// 006111ab  894608               mov dword ptr [esi + 8], eax
// 006111ae  dd1e                 fstp qword ptr [esi]
// 006111b0  e992fbffff           jmp 0x610d47
// 006111b5  6a07                 push 7
// 006111b7  e963010000           jmp 0x61131f
// 006111bc  8bc7                 mov eax, edi
// 006111be  c1e817               shr eax, 0x17
// 006111c1  a900010000           test eax, 0x100
// 006111c6  740e                 je 0x6111d6
// 006111c8  25ff000000           and eax, 0xff
// 006111cd  c1e004               shl eax, 4
// 006111d0  03442418             add eax, dword ptr [esp + 0x18]
// 006111d4  eb05                 jmp 0x6111db
// 006111d6  c1e004               shl eax, 4
// 006111d9  03c2                 add eax, edx
// 006111db  c1ef0e               shr edi, 0xe
// 006111de  f7c700010000         test edi, 0x100
// 006111e4  8bc8                 mov ecx, eax
// 006111e6  740f                 je 0x6111f7
// 006111e8  81e7ff000000         and edi, 0xff
// 006111ee  c1e704               shl edi, 4
// 006111f1  037c2418             add edi, dword ptr [esp + 0x18]
// 006111f5  eb0b                 jmp 0x611202
// 006111f7  81e7ff010000         and edi, 0x1ff
// 006111fd  c1e704               shl edi, 4
// 00611200  03fa                 add edi, edx
// 00611202  b803000000           mov eax, 3
// 00611207  394108               cmp dword ptr [ecx + 8], eax
// 0061120a  7513                 jne 0x61121f
// 0061120c  394708               cmp dword ptr [edi + 8], eax
// 0061120f  750e                 jne 0x61121f
// 00611211  dd01                 fld qword ptr [ecx]
// 00611213  dc37                 fdiv qword ptr [edi]
// 00611215  894608               mov dword ptr [esi + 8], eax
// 00611218  dd1e                 fstp qword ptr [esi]
// 0061121a  e928fbffff           jmp 0x610d47
// 0061121f  6a08                 push 8
// 00611221  e9f9000000           jmp 0x61131f
// 00611226  8bc7                 mov eax, edi
// 00611228  c1e817               shr eax, 0x17
// 0061122b  a900010000           test eax, 0x100
// 00611230  740e                 je 0x611240
// 00611232  25ff000000           and eax, 0xff
// 00611237  c1e004               shl eax, 4
// 0061123a  03442418             add eax, dword ptr [esp + 0x18]
// 0061123e  eb05                 jmp 0x611245
// 00611240  c1e004               shl eax, 4
// 00611243  03c2                 add eax, edx
// 00611245  c1ef0e               shr edi, 0xe
// 00611248  f7c700010000         test edi, 0x100
// 0061124e  8bc8                 mov ecx, eax
// 00611250  740f                 je 0x611261
// 00611252  81e7ff000000         and edi, 0xff
// 00611258  c1e704               shl edi, 4
// 0061125b  037c2418             add edi, dword ptr [esp + 0x18]
// 0061125f  eb0b                 jmp 0x61126c
// 00611261  81e7ff010000         and edi, 0x1ff
// 00611267  c1e704               shl edi, 4
// 0061126a  03fa                 add edi, edx
// 0061126c  b803000000           mov eax, 3
// 00611271  394108               cmp dword ptr [ecx + 8], eax
// 00611274  7537                 jne 0x6112ad
// 00611276  394708               cmp dword ptr [edi + 8], eax
// 00611279  7532                 jne 0x6112ad
// 0061127b  dd01                 fld qword ptr [ecx]
// 0061127d  83ec08               sub esp, 8
// 00611280  dd542430             fst qword ptr [esp + 0x30]
// 00611284  dd07                 fld qword ptr [edi]
// 00611286  dd542438             fst qword ptr [esp + 0x38]
// 0061128a  def9                 fdivp st(1)
// 0061128c  dd1c24               fstp qword ptr [esp]
// 0061128f  e894fe0100           call 0x631128
// 00611294  dc4c2438             fmul qword ptr [esp + 0x38]
// 00611298  83c408               add esp, 8
// 0061129b  c7460803000000       mov dword ptr [esi + 8], 3
// 006112a2  dc6c2428             fsubr qword ptr [esp + 0x28]
// 006112a6  dd1e                 fstp qword ptr [esi]
// 006112a8  e99afaffff           jmp 0x610d47
// 006112ad  6a09                 push 9
// 006112af  eb6e                 jmp 0x61131f
// 006112b1  8bc7                 mov eax, edi
// 006112b3  c1e817               shr eax, 0x17
// 006112b6  a900010000           test eax, 0x100
// 006112bb  740e                 je 0x6112cb
// 006112bd  25ff000000           and eax, 0xff
// 006112c2  c1e004               shl eax, 4
// 006112c5  03442418             add eax, dword ptr [esp + 0x18]
// 006112c9  eb05                 jmp 0x6112d0
// 006112cb  c1e004               shl eax, 4
// 006112ce  03c2                 add eax, edx
// 006112d0  c1ef0e               shr edi, 0xe
// 006112d3  f7c700010000         test edi, 0x100
// 006112d9  8bc8                 mov ecx, eax
// 006112db  740f                 je 0x6112ec
// 006112dd  81e7ff000000         and edi, 0xff
// 006112e3  c1e704               shl edi, 4
// 006112e6  037c2418             add edi, dword ptr [esp + 0x18]
// 006112ea  eb0b                 jmp 0x6112f7
// 006112ec  81e7ff010000         and edi, 0x1ff
// 006112f2  c1e704               shl edi, 4
// 006112f5  03fa                 add edi, edx
// 006112f7  b803000000           mov eax, 3
// 006112fc  394108               cmp dword ptr [ecx + 8], eax
// 006112ff  751c                 jne 0x61131d
// 00611301  394708               cmp dword ptr [edi + 8], eax
// 00611304  7517                 jne 0x61131d
// 00611306  dd01                 fld qword ptr [ecx]
// 00611308  dd07                 fld qword ptr [edi]
// 0061130a  e88ffe0100           call 0x63119e
// 0061130f  dd1e                 fstp qword ptr [esi]
// 00611311  c7460803000000       mov dword ptr [esi + 8], 3
// 00611318  e92afaffff           jmp 0x610d47
// 0061131d  6a0a                 push 0xa
// 0061131f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00611323  8bc7                 mov eax, edi
// 00611325  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00611329  53                   push ebx
// 0061132a  8bf1                 mov esi, ecx
// 0061132c  895318               mov dword ptr [ebx + 0x18], edx
// 0061132f  e81cf8ffff           call 0x610b50
// 00611334  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00611337  83c408               add esp, 8
// 0061133a  89442414             mov dword ptr [esp + 0x14], eax
// 0061133e  e904faffff           jmp 0x610d47
// 00611343  c1ef17               shr edi, 0x17
// 00611346  c1e704               shl edi, 4
// 00611349  03fa                 add edi, edx
// 0061134b  b903000000           mov ecx, 3
// 00611350  394f08               cmp dword ptr [edi + 8], ecx
// 00611353  750e                 jne 0x611363
// 00611355  dd07                 fld qword ptr [edi]
// 00611357  894e08               mov dword ptr [esi + 8], ecx
// 0061135a  d9e0                 fchs 
// 0061135c  dd1e                 fstp qword ptr [esi]
// 0061135e  e9e4f9ffff           jmp 0x610d47
// 00611363  8b542410             mov edx, dword ptr [esp + 0x10]
// 00611367  895318               mov dword ptr [ebx + 0x18], edx
// 0061136a  8b4708               mov eax, dword ptr [edi + 8]
// 0061136d  3bc1                 cmp eax, ecx
// 0061136f  7506                 jne 0x611377
// 00611371  897c2424             mov dword ptr [esp + 0x24], edi
// 00611375  eb34                 jmp 0x6113ab
// 00611377  83f804               cmp eax, 4
// 0061137a  7570                 jne 0x6113ec
// 0061137c  8b0f                 mov ecx, dword ptr [edi]
// 0061137e  8d442438             lea eax, [esp + 0x38]
// 00611382  50                   push eax
// 00611383  83c110               add ecx, 0x10
// 00611386  51                   push ecx
// 00611387  e854d7ffff           call 0x60eae0
// 0061138c  83c408               add esp, 8
// 0061138f  85c0                 test eax, eax
// 00611391  7459                 je 0x6113ec
// 00611393  dd442438             fld qword ptr [esp + 0x38]
// 00611397  8d542470             lea edx, [esp + 0x70]
// 0061139b  dd5c2470             fstp qword ptr [esp + 0x70]
// 0061139f  c744247803000000     mov dword ptr [esp + 0x78], 3
// 006113a7  89542424             mov dword ptr [esp + 0x24], edx
// 006113ab  8b4708               mov eax, dword ptr [edi + 8]
// 006113ae  83f803               cmp eax, 3
// 006113b1  741c                 je 0x6113cf
// 006113b3  83f804               cmp eax, 4
// 006113b6  7534                 jne 0x6113ec
// 006113b8  8b0f                 mov ecx, dword ptr [edi]
// 006113ba  8d442448             lea eax, [esp + 0x48]
// 006113be  50                   push eax
// 006113bf  83c110               add ecx, 0x10
// 006113c2  51                   push ecx
// 006113c3  e818d7ffff           call 0x60eae0
// 006113c8  83c408               add esp, 8
// 006113cb  85c0                 test eax, eax
// 006113cd  741d                 je 0x6113ec
// 006113cf  8b542424             mov edx, dword ptr [esp + 0x24]
// 006113d3  dd02                 fld qword ptr [edx]
// 006113d5  c7460803000000       mov dword ptr [esi + 8], 3
// 006113dc  d9e0                 fchs 
// 006113de  dd1e                 fstp qword ptr [esi]
// 006113e0  8b430c               mov eax, dword ptr [ebx + 0xc]
// 006113e3  89442414             mov dword ptr [esp + 0x14], eax
// 006113e7  e95bf9ffff           jmp 0x610d47
// 006113ec  6a0b                 push 0xb
// 006113ee  57                   push edi
// 006113ef  53                   push ebx
// 006113f0  e87becffff           call 0x610070
// 006113f5  83c40c               add esp, 0xc
// 006113f8  83780800             cmp dword ptr [eax + 8], 0
// 006113fc  750c                 jne 0x61140a
// 006113fe  6a0b                 push 0xb
// 00611400  57                   push edi
// 00611401  53                   push ebx
// 00611402  e869ecffff           call 0x610070
// 00611407  83c40c               add esp, 0xc
// 0061140a  83780806             cmp dword ptr [eax + 8], 6
// 0061140e  751c                 jne 0x61142c
// 00611410  50                   push eax
// 00611411  53                   push ebx
// 00611412  8bcf                 mov ecx, edi
// 00611414  8bd7                 mov edx, edi
// 00611416  8bc6                 mov eax, esi
// 00611418  e803eeffff           call 0x610220
// 0061141d  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00611420  83c408               add esp, 8
// 00611423  89442414             mov dword ptr [esp + 0x14], eax
// 00611427  e91bf9ffff           jmp 0x610d47
// 0061142c  57                   push edi
// 0061142d  57                   push edi
// 0061142e  53                   push ebx
// 0061142f  e8ac5efbff           call 0x5c72e0
// 00611434  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00611437  83c40c               add esp, 0xc
// 0061143a  89442414             mov dword ptr [esp + 0x14], eax
// 0061143e  e904f9ffff           jmp 0x610d47
// 00611443  c1ef17               shr edi, 0x17
// 00611446  c1e704               shl edi, 4
// 00611449  8b441708             mov eax, dword ptr [edi + edx + 8]
// 0061144d  03fa                 add edi, edx
// 0061144f  85c0                 test eax, eax
// 00611451  741a                 je 0x61146d
// 00611453  83f801               cmp eax, 1
// 00611456  7505                 jne 0x61145d
// 00611458  833f00               cmp dword ptr [edi], 0
// 0061145b  7410                 je 0x61146d
// 0061145d  33c0                 xor eax, eax
// 0061145f  8906                 mov dword ptr [esi], eax
// 00611461  c7460801000000       mov dword ptr [esi + 8], 1
// 00611468  e9daf8ffff           jmp 0x610d47
// 0061146d  b801000000           mov eax, 1
// 00611472  8906                 mov dword ptr [esi], eax
// 00611474  894608               mov dword ptr [esi + 8], eax
// 00611477  e9cbf8ffff           jmp 0x610d47
// 0061147c  c1ef17               shr edi, 0x17
// 0061147f  c1e704               shl edi, 4
// 00611482  8b441708             mov eax, dword ptr [edi + edx + 8]
// 00611486  03fa                 add edi, edx
// 00611488  83e804               sub eax, 4
// 0061148b  0f848f000000         je 0x611520
// 00611491  83e801               sub eax, 1
// 00611494  7469                 je 0x6114ff
// 00611496  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061149a  6a0c                 push 0xc
// 0061149c  57                   push edi
// 0061149d  53                   push ebx
// 0061149e  894b18               mov dword ptr [ebx + 0x18], ecx
// 006114a1  e8caebffff           call 0x610070
// 006114a6  83c40c               add esp, 0xc
// 006114a9  83780800             cmp dword ptr [eax + 8], 0
// 006114ad  7510                 jne 0x6114bf
// 006114af  6a0c                 push 0xc
// 006114b1  68e82f7c00           push 0x7c2fe8
// 006114b6  53                   push ebx
// 006114b7  e8b4ebffff           call 0x610070
// 006114bc  83c40c               add esp, 0xc
// 006114bf  83780806             cmp dword ptr [eax + 8], 6
// 006114c3  751f                 jne 0x6114e4
// 006114c5  50                   push eax
// 006114c6  53                   push ebx
// 006114c7  b9e82f7c00           mov ecx, 0x7c2fe8
// 006114cc  8bd7                 mov edx, edi
// 006114ce  8bc6                 mov eax, esi
// 006114d0  e84bedffff           call 0x610220
// 006114d5  8b530c               mov edx, dword ptr [ebx + 0xc]
// 006114d8  83c408               add esp, 8
// 006114db  89542414             mov dword ptr [esp + 0x14], edx
// 006114df  e963f8ffff           jmp 0x610d47
// 006114e4  68a4327c00           push 0x7c32a4
// 006114e9  57                   push edi
// 006114ea  53                   push ebx
// 006114eb  e8405dfbff           call 0x5c7230
// 006114f0  8b530c               mov edx, dword ptr [ebx + 0xc]
// 006114f3  83c40c               add esp, 0xc
// 006114f6  89542414             mov dword ptr [esp + 0x14], edx
// 006114fa  e948f8ffff           jmp 0x610d47
// 006114ff  8b07                 mov eax, dword ptr [edi]
// 00611501  50                   push eax
// 00611502  e819120000           call 0x612720
// 00611507  89442434             mov dword ptr [esp + 0x34], eax
// 0061150b  db442434             fild dword ptr [esp + 0x34]
// 0061150f  83c404               add esp, 4
// 00611512  c7460803000000       mov dword ptr [esi + 8], 3
// 00611519  dd1e                 fstp qword ptr [esi]
// 0061151b  e927f8ffff           jmp 0x610d47
// 00611520  8b0f                 mov ecx, dword ptr [edi]
// 00611522  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00611525  db410c               fild dword ptr [ecx + 0xc]
// 00611528  85d2                 test edx, edx
// 0061152a  7d06                 jge 0x611532
// 0061152c  dc0530b17800         fadd qword ptr [0x78b130]
// 00611532  dd1e                 fstp qword ptr [esi]
// 00611534  c7460803000000       mov dword ptr [esi + 8], 3
// 0061153b  e907f8ffff           jmp 0x610d47
// 00611540  8b442410             mov eax, dword ptr [esp + 0x10]
// 00611544  8bf7                 mov esi, edi
// 00611546  c1ef0e               shr edi, 0xe
// 00611549  81e7ff010000         and edi, 0x1ff
// 0061154f  57                   push edi
// 00611550  c1ee17               shr esi, 0x17
// 00611553  2bfe                 sub edi, esi
// 00611555  83c701               add edi, 1
// 00611558  57                   push edi
// 00611559  53                   push ebx
// 0061155a  894318               mov dword ptr [ebx + 0x18], eax
// 0061155d  e88ef3ffff           call 0x6108f0
// 00611562  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00611565  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00611568  83c40c               add esp, 0xc
// 0061156b  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 0061156e  7209                 jb 0x611579
// 00611570  53                   push ebx
// 00611571  e88ae8ffff           call 0x60fe00
// 00611576  83c404               add esp, 4
// 00611579  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0061157c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00611580  c1e604               shl esi, 4
// 00611583  8b1406               mov edx, dword ptr [esi + eax]
// 00611586  03f0                 add esi, eax
// 00611588  891401               mov dword ptr [ecx + eax], edx
// 0061158b  8b5604               mov edx, dword ptr [esi + 4]
// 0061158e  89540104             mov dword ptr [ecx + eax + 4], edx
// 00611592  8b5608               mov edx, dword ptr [esi + 8]
// 00611595  89442414             mov dword ptr [esp + 0x14], eax
// 00611599  89540108             mov dword ptr [ecx + eax + 8], edx
// 0061159d  e9a5f7ffff           jmp 0x610d47
// 006115a2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006115a6  c1ef0e               shr edi, 0xe
// 006115a9  8d8cb80400f8ff       lea ecx, [eax + edi*4 - 0x7fffc]
// 006115b0  894c2410             mov dword ptr [esp + 0x10], ecx
// 006115b4  e98ef7ffff           jmp 0x610d47
// 006115b9  8bc7                 mov eax, edi
// 006115bb  c1e817               shr eax, 0x17
// 006115be  a900010000           test eax, 0x100
// 006115c3  740e                 je 0x6115d3
// 006115c5  25ff000000           and eax, 0xff
// 006115ca  c1e004               shl eax, 4
// 006115cd  03442418             add eax, dword ptr [esp + 0x18]
// 006115d1  eb05                 jmp 0x6115d8
// 006115d3  c1e004               shl eax, 4
// 006115d6  03c2                 add eax, edx
// 006115d8  c1ef0e               shr edi, 0xe
// 006115db  f7c700010000         test edi, 0x100
// 006115e1  740f                 je 0x6115f2
// 006115e3  81e7ff000000         and edi, 0xff
// 006115e9  c1e704               shl edi, 4
// 006115ec  037c2418             add edi, dword ptr [esp + 0x18]
// 006115f0  eb0b                 jmp 0x6115fd
// 006115f2  81e7ff010000         and edi, 0x1ff
// 006115f8  c1e704               shl edi, 4
// 006115fb  03fa                 add edi, edx
// 006115fd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00611601  895318               mov dword ptr [ebx + 0x18], edx
// 00611604  8b4808               mov ecx, dword ptr [eax + 8]
// 00611607  3b4f08               cmp ecx, dword ptr [edi + 8]
// 0061160a  7519                 jne 0x611625
// 0061160c  57                   push edi
// 0061160d  50                   push eax
// 0061160e  53                   push ebx
// 0061160f  e8fcf1ffff           call 0x610810
// 00611614  83c40c               add esp, 0xc
// 00611617  85c0                 test eax, eax
// 00611619  740a                 je 0x611625
// 0061161b  b801000000           mov eax, 1
// 00611620  e9dc000000           jmp 0x611701
// 00611625  33c0                 xor eax, eax
// 00611627  e9d5000000           jmp 0x611701
// 0061162c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00611630  894318               mov dword ptr [ebx + 0x18], eax
// 00611633  8bc7                 mov eax, edi
// 00611635  c1e80e               shr eax, 0xe
// 00611638  a900010000           test eax, 0x100
// 0061163d  740e                 je 0x61164d
// 0061163f  25ff000000           and eax, 0xff
// 00611644  c1e004               shl eax, 4
// 00611647  03442418             add eax, dword ptr [esp + 0x18]
// 0061164b  eb0a                 jmp 0x611657
// 0061164d  25ff010000           and eax, 0x1ff
// 00611652  c1e004               shl eax, 4
// 00611655  03c2                 add eax, edx
// 00611657  c1ef17               shr edi, 0x17
// 0061165a  f7c700010000         test edi, 0x100
// 00611660  740f                 je 0x611671
// 00611662  81e7ff000000         and edi, 0xff
// 00611668  c1e704               shl edi, 4
// 0061166b  037c2418             add edi, dword ptr [esp + 0x18]
// 0061166f  eb05                 jmp 0x611676
// 00611671  c1e704               shl edi, 4
// 00611674  03fa                 add edi, edx
// 00611676  50                   push eax
// 00611677  57                   push edi
// 00611678  53                   push ebx
// 00611679  e862f0ffff           call 0x6106e0
// 0061167e  83c40c               add esp, 0xc
// 00611681  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00611685  7514                 jne 0x61169b
// 00611687  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061168b  8b08                 mov ecx, dword ptr [eax]
// 0061168d  c1e90e               shr ecx, 0xe
// 00611690  8d94880400f8ff       lea edx, [eax + ecx*4 - 0x7fffc]
// 00611697  89542410             mov dword ptr [esp + 0x10], edx
// 0061169b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0061169e  8344241004           add dword ptr [esp + 0x10], 4
// 006116a3  89442414             mov dword ptr [esp + 0x14], eax
// 006116a7  e99bf6ffff           jmp 0x610d47
// 006116ac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006116b0  8bc7                 mov eax, edi
// 006116b2  c1e80e               shr eax, 0xe
// 006116b5  a900010000           test eax, 0x100
// 006116ba  894b18               mov dword ptr [ebx + 0x18], ecx
// 006116bd  740e                 je 0x6116cd
// 006116bf  25ff000000           and eax, 0xff
// 006116c4  c1e004               shl eax, 4
// 006116c7  03442418             add eax, dword ptr [esp + 0x18]
// 006116cb  eb0a                 jmp 0x6116d7
// 006116cd  25ff010000           and eax, 0x1ff
// 006116d2  c1e004               shl eax, 4
// 006116d5  03c2                 add eax, edx
// 006116d7  c1ef17               shr edi, 0x17
// 006116da  f7c700010000         test edi, 0x100
// 006116e0  740f                 je 0x6116f1
// 006116e2  81e7ff000000         and edi, 0xff
// 006116e8  c1e704               shl edi, 4
// 006116eb  037c2418             add edi, dword ptr [esp + 0x18]
// 006116ef  eb05                 jmp 0x6116f6
// 006116f1  c1e704               shl edi, 4
// 006116f4  03fa                 add edi, edx
// 006116f6  53                   push ebx
// 006116f7  8bf0                 mov esi, eax
// 006116f9  e872f0ffff           call 0x610770
// 006116fe  83c404               add esp, 4
// 00611701  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00611705  7514                 jne 0x61171b
// 00611707  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061170b  8b10                 mov edx, dword ptr [eax]
// 0061170d  c1ea0e               shr edx, 0xe
// 00611710  8d84900400f8ff       lea eax, [eax + edx*4 - 0x7fffc]
// 00611717  89442410             mov dword ptr [esp + 0x10], eax
// 0061171b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0061171e  8344241004           add dword ptr [esp + 0x10], 4
// 00611723  894c2414             mov dword ptr [esp + 0x14], ecx
// 00611727  e91bf6ffff           jmp 0x610d47
// 0061172c  8b4608               mov eax, dword ptr [esi + 8]
// 0061172f  85c0                 test eax, eax
// 00611731  740e                 je 0x611741
// 00611733  83f801               cmp eax, 1
// 00611736  7505                 jne 0x61173d
// 00611738  833e00               cmp dword ptr [esi], 0
// 0061173b  7404                 je 0x611741
// 0061173d  33c0                 xor eax, eax
// 0061173f  eb05                 jmp 0x611746
// 00611741  b801000000           mov eax, 1
// 00611746  c1ef0e               shr edi, 0xe
// 00611749  81e7ff010000         and edi, 0x1ff
// 0061174f  3bc7                 cmp eax, edi
// 00611751  0f84ab020000         je 0x611a02
// 00611757  e992020000           jmp 0x6119ee
// 0061175c  8bc7                 mov eax, edi
// 0061175e  c1e817               shr eax, 0x17
// 00611761  c1e004               shl eax, 4
// 00611764  8b4c1008             mov ecx, dword ptr [eax + edx + 8]
// 00611768  03c2                 add eax, edx
// 0061176a  85c9                 test ecx, ecx
// 0061176c  740e                 je 0x61177c
// 0061176e  83f901               cmp ecx, 1
// 00611771  7505                 jne 0x611778
// 00611773  833800               cmp dword ptr [eax], 0
// 00611776  7404                 je 0x61177c
// 00611778  33c9                 xor ecx, ecx
// 0061177a  eb05                 jmp 0x611781
// 0061177c  b901000000           mov ecx, 1
// 00611781  c1ef0e               shr edi, 0xe
// 00611784  81e7ff010000         and edi, 0x1ff
// 0061178a  3bcf                 cmp ecx, edi
// 0061178c  7424                 je 0x6117b2
// 0061178e  8b08                 mov ecx, dword ptr [eax]
// 00611790  890e                 mov dword ptr [esi], ecx
// 00611792  8b5004               mov edx, dword ptr [eax + 4]
// 00611795  895604               mov dword ptr [esi + 4], edx
// 00611798  8b4008               mov eax, dword ptr [eax + 8]
// 0061179b  894608               mov dword ptr [esi + 8], eax
// 0061179e  8b442410             mov eax, dword ptr [esp + 0x10]
// 006117a2  8b08                 mov ecx, dword ptr [eax]
// 006117a4  c1e90e               shr ecx, 0xe
// 006117a7  8d94880400f8ff       lea edx, [eax + ecx*4 - 0x7fffc]
// 006117ae  89542410             mov dword ptr [esp + 0x10], edx
// 006117b2  8344241004           add dword ptr [esp + 0x10], 4
// 006117b7  e98bf5ffff           jmp 0x610d47
// 006117bc  8bc7                 mov eax, edi
// 006117be  c1ef0e               shr edi, 0xe
// 006117c1  81e7ff010000         and edi, 0x1ff
// 006117c7  c1e817               shr eax, 0x17
// 006117ca  83ef01               sub edi, 1
// 006117cd  85c0                 test eax, eax
// 006117cf  7408                 je 0x6117d9
// 006117d1  c1e004               shl eax, 4
// 006117d4  03c6                 add eax, esi
// 006117d6  894308               mov dword ptr [ebx + 8], eax
// 006117d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006117dd  57                   push edi
// 006117de  56                   push esi
// 006117df  53                   push ebx
// 006117e0  894318               mov dword ptr [ebx + 0x18], eax
// 006117e3  e82849fbff           call 0x5c6110
// 006117e8  83c40c               add esp, 0xc
// 006117eb  83e800               sub eax, 0
// 006117ee  0f84b1040000         je 0x611ca5
// 006117f4  83e801               sub eax, 1
// 006117f7  0f85a0050000         jne 0x611d9d
// 006117fd  85ff                 test edi, edi
// 006117ff  7c09                 jl 0x61180a
// 00611801  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00611804  8b5108               mov edx, dword ptr [ecx + 8]
// 00611807  895308               mov dword ptr [ebx + 8], edx
// 0061180a  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0061180d  89442414             mov dword ptr [esp + 0x14], eax
// 00611811  e931f5ffff           jmp 0x610d47
// 00611816  c1ef17               shr edi, 0x17
// 00611819  7408                 je 0x611823
// 0061181b  c1e704               shl edi, 4
// 0061181e  03fe                 add edi, esi
// 00611820  897b08               mov dword ptr [ebx + 8], edi
// 00611823  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00611827  6aff                 push -1
// 00611829  56                   push esi
// 0061182a  53                   push ebx
// 0061182b  894b18               mov dword ptr [ebx + 0x18], ecx
// 0061182e  e8dd48fbff           call 0x5c6110
// 00611833  83c40c               add esp, 0xc
// 00611836  83e800               sub eax, 0
// 00611839  0f846f040000         je 0x611cae
// 0061183f  83e801               sub eax, 1
// 00611842  0f8555050000         jne 0x611d9d
// 00611848  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0061184b  89542414             mov dword ptr [esp + 0x14], edx
// 0061184f  e9f3f4ffff           jmp 0x610d47
// 00611854  dd4620               fld qword ptr [esi + 0x20]
// 00611857  d9c0                 fld st(0)
// 00611859  dc06                 fadd qword ptr [esi]
// 0061185b  dd4610               fld qword ptr [esi + 0x10]
// 0061185e  d9ca                 fxch st(2)
// 00611860  dc1de0fe7800         fcomp qword ptr [0x78fee0]
// 00611866  dfe0                 fnstsw ax
// 00611868  d8d1                 fcom st(1)
// 0061186a  f6c441               test ah, 0x41
// 0061186d  dfe0                 fnstsw ax
// 0061186f  ddd9                 fstp st(1)
// 00611871  750a                 jne 0x61187d
// 00611873  f6c441               test ah, 0x41
// 00611876  7b0e                 jnp 0x611886
// 00611878  e9c8f4ffff           jmp 0x610d45
// 0061187d  f6c401               test ah, 1
// 00611880  0f85bff4ffff         jne 0x610d45
// 00611886  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061188a  dd16                 fst qword ptr [esi]
// 0061188c  c1ef0e               shr edi, 0xe
// 0061188f  8d8cb80400f8ff       lea ecx, [eax + edi*4 - 0x7fffc]
// 00611896  b803000000           mov eax, 3
// 0061189b  894608               mov dword ptr [esi + 8], eax
// 0061189e  dd5e30               fstp qword ptr [esi + 0x30]
// 006118a1  894c2410             mov dword ptr [esp + 0x10], ecx
// 006118a5  894638               mov dword ptr [esi + 0x38], eax
// 006118a8  e99af4ffff           jmp 0x610d47
// 006118ad  8b442410             mov eax, dword ptr [esp + 0x10]
// 006118b1  894318               mov dword ptr [ebx + 0x18], eax
// 006118b4  8b4608               mov eax, dword ptr [esi + 8]
// 006118b7  83f803               cmp eax, 3
// 006118ba  8d5620               lea edx, [esi + 0x20]
// 006118bd  89542420             mov dword ptr [esp + 0x20], edx
// 006118c1  7429                 je 0x6118ec
// 006118c3  83f804               cmp eax, 4
// 006118c6  7542                 jne 0x61190a
// 006118c8  8b16                 mov edx, dword ptr [esi]
// 006118ca  8d4c2440             lea ecx, [esp + 0x40]
// 006118ce  51                   push ecx
// 006118cf  83c210               add edx, 0x10
// 006118d2  52                   push edx
// 006118d3  e808d2ffff           call 0x60eae0
// 006118d8  83c408               add esp, 8
// 006118db  85c0                 test eax, eax
// 006118dd  742b                 je 0x61190a
// 006118df  dd442440             fld qword ptr [esp + 0x40]
// 006118e3  c7460803000000       mov dword ptr [esi + 8], 3
// 006118ea  dd1e                 fstp qword ptr [esi]
// 006118ec  837e1803             cmp dword ptr [esi + 0x18], 3
// 006118f0  741f                 je 0x611911
// 006118f2  8d4610               lea eax, [esi + 0x10]
// 006118f5  50                   push eax
// 006118f6  50                   push eax
// 006118f7  e8d4e7ffff           call 0x6100d0
// 006118fc  83c408               add esp, 8
// 006118ff  85c0                 test eax, eax
// 00611901  750e                 jne 0x611911
// 00611903  6884327c00           push 0x7c3284
// 00611908  eb28                 jmp 0x611932
// 0061190a  685c327c00           push 0x7c325c
// 0061190f  eb21                 jmp 0x611932
// 00611911  8b442420             mov eax, dword ptr [esp + 0x20]
// 00611915  83780803             cmp dword ptr [eax + 8], 3
// 00611919  7420                 je 0x61193b
// 0061191b  50                   push eax
// 0061191c  50                   push eax
// 0061191d  e8aee7ffff           call 0x6100d0
// 00611922  83c408               add esp, 8
// 00611925  85c0                 test eax, eax
// 00611927  89442420             mov dword ptr [esp + 0x20], eax
// 0061192b  750e                 jne 0x61193b
// 0061192d  6840327c00           push 0x7c3240
// 00611932  53                   push ebx
// 00611933  e8c856fbff           call 0x5c7000
// 00611938  83c408               add esp, 8
// 0061193b  dd06                 fld qword ptr [esi]
// 0061193d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00611941  dc21                 fsub qword ptr [ecx]
// 00611943  8b542410             mov edx, dword ptr [esp + 0x10]
// 00611947  c1ef0e               shr edi, 0xe
// 0061194a  8d84ba0400f8ff       lea eax, [edx + edi*4 - 0x7fffc]
// 00611951  dd1e                 fstp qword ptr [esi]
// 00611953  c7460803000000       mov dword ptr [esi + 8], 3
// 0061195a  89442410             mov dword ptr [esp + 0x10], eax
// 0061195e  e9e4f3ffff           jmp 0x610d47
// 00611963  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00611966  894e50               mov dword ptr [esi + 0x50], ecx
// 00611969  8b5624               mov edx, dword ptr [esi + 0x24]
// 0061196c  8d4630               lea eax, [esi + 0x30]
// 0061196f  895024               mov dword ptr [eax + 0x24], edx
// 00611972  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00611975  894828               mov dword ptr [eax + 0x28], ecx
// 00611978  8b5610               mov edx, dword ptr [esi + 0x10]
// 0061197b  895010               mov dword ptr [eax + 0x10], edx
// 0061197e  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00611981  894814               mov dword ptr [eax + 0x14], ecx
// 00611984  8b5618               mov edx, dword ptr [esi + 0x18]
// 00611987  895018               mov dword ptr [eax + 0x18], edx
// 0061198a  8b0e                 mov ecx, dword ptr [esi]
// 0061198c  8908                 mov dword ptr [eax], ecx
// 0061198e  8b5604               mov edx, dword ptr [esi + 4]
// 00611991  895004               mov dword ptr [eax + 4], edx
// 00611994  8b4e08               mov ecx, dword ptr [esi + 8]
// 00611997  c1ef0e               shr edi, 0xe
// 0061199a  81e7ff010000         and edi, 0x1ff
// 006119a0  894808               mov dword ptr [eax + 8], ecx
// 006119a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006119a7  57                   push edi
// 006119a8  50                   push eax
// 006119a9  8d5030               lea edx, [eax + 0x30]
// 006119ac  53                   push ebx
// 006119ad  895308               mov dword ptr [ebx + 8], edx
// 006119b0  894b18               mov dword ptr [ebx + 0x18], ecx
// 006119b3  e81849fbff           call 0x5c62d0
// 006119b8  8b5314               mov edx, dword ptr [ebx + 0x14]
// 006119bb  8b4208               mov eax, dword ptr [edx + 8]
// 006119be  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 006119c1  894308               mov dword ptr [ebx + 8], eax
// 006119c4  8b442430             mov eax, dword ptr [esp + 0x30]
// 006119c8  83c003               add eax, 3
// 006119cb  c1e004               shl eax, 4
// 006119ce  03c1                 add eax, ecx
// 006119d0  83c40c               add esp, 0xc
// 006119d3  83780800             cmp dword ptr [eax + 8], 0
// 006119d7  894c2414             mov dword ptr [esp + 0x14], ecx
// 006119db  7425                 je 0x611a02
// 006119dd  8b08                 mov ecx, dword ptr [eax]
// 006119df  8948f0               mov dword ptr [eax - 0x10], ecx
// 006119e2  8b5004               mov edx, dword ptr [eax + 4]
// 006119e5  8950f4               mov dword ptr [eax - 0xc], edx
// 006119e8  8b4808               mov ecx, dword ptr [eax + 8]
// 006119eb  8948f8               mov dword ptr [eax - 8], ecx
// 006119ee  8b442410             mov eax, dword ptr [esp + 0x10]
// 006119f2  8b10                 mov edx, dword ptr [eax]
// 006119f4  c1ea0e               shr edx, 0xe
// 006119f7  8d84900400f8ff       lea eax, [eax + edx*4 - 0x7fffc]
// 006119fe  89442410             mov dword ptr [esp + 0x10], eax
// 00611a02  8344241004           add dword ptr [esp + 0x10], 4
// 00611a07  e93bf3ffff           jmp 0x610d47
// 00611a0c  8bc7                 mov eax, edi
// 00611a0e  c1ef0e               shr edi, 0xe
// 00611a11  c1e817               shr eax, 0x17
// 00611a14  81e7ff010000         and edi, 0x1ff
// 00611a1a  85c0                 test eax, eax
// 00611a1c  89442424             mov dword ptr [esp + 0x24], eax
// 00611a20  7518                 jne 0x611a3a
// 00611a22  8b4308               mov eax, dword ptr [ebx + 8]
// 00611a25  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00611a28  8b5108               mov edx, dword ptr [ecx + 8]
// 00611a2b  2bc6                 sub eax, esi
// 00611a2d  c1f804               sar eax, 4
// 00611a30  83e801               sub eax, 1
// 00611a33  89442424             mov dword ptr [esp + 0x24], eax
// 00611a37  895308               mov dword ptr [ebx + 8], edx
// 00611a3a  85ff                 test edi, edi
// 00611a3c  750d                 jne 0x611a4b
// 00611a3e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00611a42  8b39                 mov edi, dword ptr [ecx]
// 00611a44  83c104               add ecx, 4
// 00611a47  894c2410             mov dword ptr [esp + 0x10], ecx
// 00611a4b  837e0805             cmp dword ptr [esi + 8], 5
// 00611a4f  0f85f2f2ffff         jne 0x610d47
// 00611a55  8b16                 mov edx, dword ptr [esi]
// 00611a57  6bff32               imul edi, edi, 0x32
// 00611a5a  8d4c07ce             lea ecx, [edi + eax - 0x32]
// 00611a5e  3b4a1c               cmp ecx, dword ptr [edx + 0x1c]
// 00611a61  89542428             mov dword ptr [esp + 0x28], edx
// 00611a65  894c2420             mov dword ptr [esp + 0x20], ecx
// 00611a69  7e0f                 jle 0x611a7a
// 00611a6b  51                   push ecx
// 00611a6c  52                   push edx
// 00611a6d  53                   push ebx
// 00611a6e  e8ed0e0000           call 0x612960
// 00611a73  8b442430             mov eax, dword ptr [esp + 0x30]
// 00611a77  83c40c               add esp, 0xc
// 00611a7a  85c0                 test eax, eax
// 00611a7c  0f8ec5f2ffff         jle 0x610d47
// 00611a82  8bf8                 mov edi, eax
// 00611a84  c1e704               shl edi, 4
// 00611a87  03fe                 add edi, esi
// 00611a89  8da42400000000       lea esp, [esp]
// 00611a90  8b742420             mov esi, dword ptr [esp + 0x20]
// 00611a94  8b442428             mov eax, dword ptr [esp + 0x28]
// 00611a98  56                   push esi
// 00611a99  50                   push eax
// 00611a9a  53                   push ebx
// 00611a9b  e8900b0000           call 0x612630
// 00611aa0  8b0f                 mov ecx, dword ptr [edi]
// 00611aa2  8908                 mov dword ptr [eax], ecx
// 00611aa4  8b5704               mov edx, dword ptr [edi + 4]
// 00611aa7  895004               mov dword ptr [eax + 4], edx
// 00611aaa  8b4f08               mov ecx, dword ptr [edi + 8]
// 00611aad  83ee01               sub esi, 1
// 00611ab0  83c40c               add esp, 0xc
// 00611ab3  894808               mov dword ptr [eax + 8], ecx
// 00611ab6  837f0804             cmp dword ptr [edi + 8], 4
// 00611aba  89742420             mov dword ptr [esp + 0x20], esi
// 00611abe  7c1c                 jl 0x611adc
// 00611ac0  8b17                 mov edx, dword ptr [edi]
// 00611ac2  f6420503             test byte ptr [edx + 5], 3
// 00611ac6  7414                 je 0x611adc
// 00611ac8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00611acc  f6400504             test byte ptr [eax + 5], 4
// 00611ad0  740a                 je 0x611adc
// 00611ad2  50                   push eax
// 00611ad3  53                   push ebx
// 00611ad4  e857e4ffff           call 0x60ff30
// 00611ad9  83c408               add esp, 8
// 00611adc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00611ae0  83e801               sub eax, 1
// 00611ae3  83ef10               sub edi, 0x10
// 00611ae6  85c0                 test eax, eax
// 00611ae8  89442424             mov dword ptr [esp + 0x24], eax
// 00611aec  7fa2                 jg 0x611a90
// 00611aee  e954f2ffff           jmp 0x610d47
// 00611af3  56                   push esi
// 00611af4  53                   push ebx
// 00611af5  e8c6150000           call 0x6130c0
// 00611afa  83c408               add esp, 8
// 00611afd  e945f2ffff           jmp 0x610d47
// 00611b02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00611b06  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00611b09  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00611b0c  8b400c               mov eax, dword ptr [eax + 0xc]
// 00611b0f  c1ef0e               shr edi, 0xe
// 00611b12  8b3cba               mov edi, dword ptr [edx + edi*4]
// 00611b15  897c2430             mov dword ptr [esp + 0x30], edi
// 00611b19  0fb67f48             movzx edi, byte ptr [edi + 0x48]
// 00611b1d  50                   push eax
// 00611b1e  57                   push edi
// 00611b1f  53                   push ebx
// 00611b20  e82b140000           call 0x612f50
// 00611b25  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00611b29  83c40c               add esp, 0xc
// 00611b2c  85ff                 test edi, edi
// 00611b2e  89442420             mov dword ptr [esp + 0x20], eax
// 00611b32  894810               mov dword ptr [eax + 0x10], ecx
// 00611b35  7e5c                 jle 0x611b93
// 00611b37  8bd0                 mov edx, eax
// 00611b39  83c214               add edx, 0x14
// 00611b3c  897c2428             mov dword ptr [esp + 0x28], edi
// 00611b40  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00611b44  89542424             mov dword ptr [esp + 0x24], edx
// 00611b48  8b07                 mov eax, dword ptr [edi]
// 00611b4a  8bc8                 mov ecx, eax
// 00611b4c  80e13f               and cl, 0x3f
// 00611b4f  c1e817               shr eax, 0x17
// 00611b52  80f904               cmp cl, 4
// 00611b55  7510                 jne 0x611b67
// 00611b57  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00611b5b  8b448214             mov eax, dword ptr [edx + eax*4 + 0x14]
// 00611b5f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00611b63  8901                 mov dword ptr [ecx], eax
// 00611b65  eb17                 jmp 0x611b7e
// 00611b67  c1e004               shl eax, 4
// 00611b6a  03442414             add eax, dword ptr [esp + 0x14]
// 00611b6e  50                   push eax
// 00611b6f  53                   push ebx
// 00611b70  e87b140000           call 0x612ff0
// 00611b75  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00611b79  83c408               add esp, 8
// 00611b7c  8902                 mov dword ptr [edx], eax
// 00611b7e  8344242404           add dword ptr [esp + 0x24], 4
// 00611b83  83c704               add edi, 4
// 00611b86  836c242801           sub dword ptr [esp + 0x28], 1
// 00611b8b  75bb                 jne 0x611b48
// 00611b8d  897c2410             mov dword ptr [esp + 0x10], edi
// 00611b91  eb04                 jmp 0x611b97
// 00611b93  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00611b97  8b442420             mov eax, dword ptr [esp + 0x20]
// 00611b9b  8906                 mov dword ptr [esi], eax
// 00611b9d  c7460806000000       mov dword ptr [esi + 8], 6
// 00611ba4  897b18               mov dword ptr [ebx + 0x18], edi
// 00611ba7  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00611baa  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00611bad  3b4840               cmp ecx, dword ptr [eax + 0x40]
// 00611bb0  7209                 jb 0x611bbb
// 00611bb2  53                   push ebx
// 00611bb3  e848e2ffff           call 0x60fe00
// 00611bb8  83c404               add esp, 4
// 00611bbb  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00611bbe  89542414             mov dword ptr [esp + 0x14], edx
// 00611bc2  e980f1ffff           jmp 0x610d47
// 00611bc7  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00611bca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00611bce  8b4010               mov eax, dword ptr [eax + 0x10]
// 00611bd1  0fb64049             movzx eax, byte ptr [eax + 0x49]
// 00611bd5  c1ef17               shr edi, 0x17
// 00611bd8  83ef01               sub edi, 1
// 00611bdb  897c2424             mov dword ptr [esp + 0x24], edi
// 00611bdf  8b3a                 mov edi, dword ptr [edx]
// 00611be1  2b7a04               sub edi, dword ptr [edx + 4]
// 00611be4  89542430             mov dword ptr [esp + 0x30], edx
// 00611be8  c1ff04               sar edi, 4
// 00611beb  2bf8                 sub edi, eax
// 00611bed  8b442424             mov eax, dword ptr [esp + 0x24]
// 00611bf1  83ef01               sub edi, 1
// 00611bf4  83f8ff               cmp eax, -1
// 00611bf7  7545                 jne 0x611c3e
// 00611bf9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00611bfd  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 00611c00  2b7308               sub esi, dword ptr [ebx + 8]
// 00611c03  894318               mov dword ptr [ebx + 0x18], eax
// 00611c06  8bc7                 mov eax, edi
// 00611c08  c1e004               shl eax, 4
// 00611c0b  3bf0                 cmp esi, eax
// 00611c0d  89442420             mov dword ptr [esp + 0x20], eax
// 00611c11  7f12                 jg 0x611c25
// 00611c13  57                   push edi
// 00611c14  53                   push ebx
// 00611c15  e8f63efbff           call 0x5c5b10
// 00611c1a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00611c1e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00611c22  83c408               add esp, 8
// 00611c25  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00611c28  8d3401               lea esi, [ecx + eax]
// 00611c2b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00611c2f  89442414             mov dword ptr [esp + 0x14], eax
// 00611c33  8bc7                 mov eax, edi
// 00611c35  03ce                 add ecx, esi
// 00611c37  89442424             mov dword ptr [esp + 0x24], eax
// 00611c3b  894b08               mov dword ptr [ebx + 8], ecx
// 00611c3e  85c0                 test eax, eax
// 00611c40  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00611c48  0f8ef9f0ffff         jle 0x610d47
// 00611c4e  8bcf                 mov ecx, edi
// 00611c50  f7d9                 neg ecx
// 00611c52  c1e104               shl ecx, 4
// 00611c55  83c608               add esi, 8
// 00611c58  eb0a                 jmp 0x611c64
// 00611c5a  8d9b00000000         lea ebx, [ebx]
// 00611c60  8b542430             mov edx, dword ptr [esp + 0x30]
// 00611c64  397c2420             cmp dword ptr [esp + 0x20], edi
// 00611c68  7d1b                 jge 0x611c85
// 00611c6a  8b02                 mov eax, dword ptr [edx]
// 00611c6c  8b1408               mov edx, dword ptr [eax + ecx]
// 00611c6f  03c1                 add eax, ecx
// 00611c71  8956f8               mov dword ptr [esi - 8], edx
// 00611c74  8b5004               mov edx, dword ptr [eax + 4]
// 00611c77  8956fc               mov dword ptr [esi - 4], edx
// 00611c7a  8b4008               mov eax, dword ptr [eax + 8]
// 00611c7d  8906                 mov dword ptr [esi], eax
// 00611c7f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00611c83  eb06                 jmp 0x611c8b
// 00611c85  c70600000000         mov dword ptr [esi], 0
// 00611c8b  8b542420             mov edx, dword ptr [esp + 0x20]
// 00611c8f  83c201               add edx, 1
// 00611c92  83c110               add ecx, 0x10
// 00611c95  83c610               add esi, 0x10
// 00611c98  3bd0                 cmp edx, eax
// 00611c9a  89542420             mov dword ptr [esp + 0x20], edx
// 00611c9e  7cc0                 jl 0x611c60
// 00611ca0  e9a2f0ffff           jmp 0x610d47
// 00611ca5  83450c01             add dword ptr [ebp + 0xc], 1
// 00611ca9  e971f0ffff           jmp 0x610d1f
// 00611cae  8b7314               mov esi, dword ptr [ebx + 0x14]
// 00611cb1  8b4e04               mov ecx, dword ptr [esi + 4]
// 00611cb4  8b7eec               mov edi, dword ptr [esi - 0x14]
// 00611cb7  83ee18               sub esi, 0x18
// 00611cba  837b6800             cmp dword ptr [ebx + 0x68], 0
// 00611cbe  894c2428             mov dword ptr [esp + 0x28], ecx
// 00611cc2  7410                 je 0x611cd4
// 00611cc4  8b0e                 mov ecx, dword ptr [esi]
// 00611cc6  51                   push ecx
// 00611cc7  53                   push ebx
// 00611cc8  e8f3130000           call 0x6130c0
// 00611ccd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00611cd1  83c408               add esp, 8
// 00611cd4  8b5618               mov edx, dword ptr [esi + 0x18]
// 00611cd7  8b4604               mov eax, dword ptr [esi + 4]
// 00611cda  2bd1                 sub edx, ecx
// 00611cdc  c1fa04               sar edx, 4
// 00611cdf  c1e204               shl edx, 4
// 00611ce2  03c2                 add eax, edx
// 00611ce4  8906                 mov dword ptr [esi], eax
// 00611ce6  33d2                 xor edx, edx
// 00611ce8  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 00611ceb  89430c               mov dword ptr [ebx + 0xc], eax
// 00611cee  89542430             mov dword ptr [esp + 0x30], edx
// 00611cf2  7330                 jae 0x611d24
// 00611cf4  33c0                 xor eax, eax
// 00611cf6  8b11                 mov edx, dword ptr [ecx]
// 00611cf8  891438               mov dword ptr [eax + edi], edx
// 00611cfb  8b5104               mov edx, dword ptr [ecx + 4]
// 00611cfe  89543804             mov dword ptr [eax + edi + 4], edx
// 00611d02  8b4908               mov ecx, dword ptr [ecx + 8]
// 00611d05  8b542430             mov edx, dword ptr [esp + 0x30]
// 00611d09  894c3808             mov dword ptr [eax + edi + 8], ecx
// 00611d0d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00611d11  83c201               add edx, 1
// 00611d14  8bc2                 mov eax, edx
// 00611d16  c1e004               shl eax, 4
// 00611d19  03c8                 add ecx, eax
// 00611d1b  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 00611d1e  89542430             mov dword ptr [esp + 0x30], edx
// 00611d22  72d2                 jb 0x611cf6
// 00611d24  c1e204               shl edx, 4
// 00611d27  8d043a               lea eax, [edx + edi]
// 00611d2a  894308               mov dword ptr [ebx + 8], eax
// 00611d2d  894608               mov dword ptr [esi + 8], eax
// 00611d30  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00611d33  83461401             add dword ptr [esi + 0x14], 1
// 00611d37  89560c               mov dword ptr [esi + 0xc], edx
// 00611d3a  834314e8             add dword ptr [ebx + 0x14], -0x18
// 00611d3e  e9dcefffff           jmp 0x610d1f
// 00611d43  c1ef17               shr edi, 0x17
// 00611d46  740a                 je 0x611d52
// 00611d48  c1e704               shl edi, 4
// 00611d4b  8d4437f0             lea eax, [edi + esi - 0x10]
// 00611d4f  894308               mov dword ptr [ebx + 8], eax
// 00611d52  837b6800             cmp dword ptr [ebx + 0x68], 0
// 00611d56  740e                 je 0x611d66
// 00611d58  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00611d5c  51                   push ecx
// 00611d5d  53                   push ebx
// 00611d5e  e85d130000           call 0x6130c0
// 00611d63  83c408               add esp, 8
// 00611d66  8b542410             mov edx, dword ptr [esp + 0x10]
// 00611d6a  56                   push esi
// 00611d6b  53                   push ebx
// 00611d6c  895318               mov dword ptr [ebx + 0x18], edx
// 00611d6f  e80c40fbff           call 0x5c5d80
// 00611d74  83c408               add esp, 8
// 00611d77  836d0c01             sub dword ptr [ebp + 0xc], 1
// 00611d7b  7420                 je 0x611d9d
// 00611d7d  85c0                 test eax, eax
// 00611d7f  0f849aefffff         je 0x610d1f
// 00611d85  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00611d88  8b4808               mov ecx, dword ptr [eax + 8]
// 00611d8b  894b08               mov dword ptr [ebx + 8], ecx
// 00611d8e  e98cefffff           jmp 0x610d1f
// 00611d93  8b542410             mov edx, dword ptr [esp + 0x10]
// 00611d97  83c2fc               add edx, -4
// 00611d9a  895318               mov dword ptr [ebx + 0x18], edx
// 00611d9d  5f                   pop edi
// 00611d9e  5e                   pop esi
// 00611d9f  5b                   pop ebx
// 00611da0  8be5                 mov esp, ebp
// 00611da2  5d                   pop ebp
// 00611da3  c3                   ret 
// 00611da4  b80d6100d5           mov eax, 0xd500610d
// 00611da9  0d6100e10d           or eax, 0xde10061
// 00611dae  61                   popal 
// 00611daf  00050e61001f         add byte ptr [0x1f00610e], al
// 00611db5  0e                   push cs
// 00611db6  61                   popal 
// 00611db7  00420e               add byte ptr [edx + 0xe], al
// 00611dba  61                   popal 
// 00611dbb  00820e6100cf         add byte ptr [edx - 0x30ff9ef2], al
// 00611dc1  0e                   push cs
// 00611dc2  61                   popal 
// 00611dc3  000f                 add byte ptr [edi], cl
// 00611dc5  0f6100               punpcklwd mm0, dword ptr [eax]
// 00611dc8  5d                   pop ebp
// 00611dc9  0f6100               punpcklwd mm0, dword ptr [eax]
// 00611dcc  bf0f6100ff           mov edi, 0xff00610f
// 00611dd1  0f6100               punpcklwd mm0, dword ptr [eax]
// 00611dd4  5f                   pop edi
// 00611dd5  106100               adc byte ptr [ecx], ah
// 00611dd8  e810610052           call 0x52617eed
// 00611ddd  116100               adc dword ptr [ecx], esp
// 00611de0  bc11610026           mov esp, 0x26006111
// 00611de5  126100               adc ah, byte ptr [ecx]
// 00611de8  b112                 mov cl, 0x12
// 00611dea  61                   popal 
// 00611deb  004313               add byte ptr [ebx + 0x13], al
// 00611dee  61                   popal 
// 00611def  004314               add byte ptr [ebx + 0x14], al
// 00611df2  61                   popal 
// 00611df3  007c1461             add byte ptr [esp + edx + 0x61], bh
// 00611df7  004015               add byte ptr [eax + 0x15], al
// 00611dfa  61                   popal 
// 00611dfb  00a2156100b9         add byte ptr [edx - 0x46ff9eeb], ah
// 00611e01  1561002c16           adc eax, 0x162c0061
// 00611e06  61                   popal 
// 00611e07  00ac1661002c17       add byte ptr [esi + edx + 0x172c0061], ch
// 00611e0e  61                   popal 
// 00611e0f  005c1761             add byte ptr [edi + edx + 0x61], bl
// 00611e13  00bc1761001618       add byte ptr [edi + edx + 0x18160061], bh
// 00611e1a  61                   popal 
// 00611e1b  00431d               add byte ptr [ebx + 0x1d], al
// 00611e1e  61                   popal 
// 00611e1f  00541861             add byte ptr [eax + ebx + 0x61], dl
// 00611e23  00ad18610063         add byte ptr [ebp + 0x63006118], ch
// 00611e29  196100               sbb dword ptr [ecx], esp
// 00611e2c  0c1a                 or al, 0x1a
// 00611e2e  61                   popal 
// 00611e2f  00f3                 add bl, dh
// 00611e31  1a6100               sbb ah, byte ptr [ecx]
// 00611e34  021b                 add bl, byte ptr [ebx]
// 00611e36  61                   popal 
// 00611e37  00c7                 add bh, al
// 00611e39  1b6100               sbb esp, dword ptr [ecx]
// library lua-5.1.1/lvm.c (function _luaV_execute)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lvm.c
