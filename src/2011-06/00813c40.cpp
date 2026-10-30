// roc 2011-06 00813c40  unit: CXTPPaintManager  size: 3642 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00813c40
//
// 00813c40  6aff                 push -1
// 00813c42  684026a000           push 0xa02640
// 00813c47  64a100000000         mov eax, dword ptr fs:[0]
// 00813c4d  50                   push eax
// 00813c4e  81ec98000000         sub esp, 0x98
// 00813c54  53                   push ebx
// 00813c55  55                   push ebp
// 00813c56  56                   push esi
// 00813c57  57                   push edi
// 00813c58  a12058c900           mov eax, dword ptr [0xc95820]
// 00813c5d  33c4                 xor eax, esp
// 00813c5f  50                   push eax
// 00813c60  8d8424ac000000       lea eax, [esp + 0xac]
// 00813c67  64a300000000         mov dword ptr fs:[0], eax
// 00813c6d  8bf1                 mov esi, ecx
// 00813c6f  8bbc24c4000000       mov edi, dword ptr [esp + 0xc4]
// 00813c76  8b9f00010000         mov ebx, dword ptr [edi + 0x100]
// 00813c7c  8b2e                 mov ebp, dword ptr [esi]
// 00813c7e  8bcf                 mov ecx, edi
// 00813c80  e89b24c3ff           call 0x446120
// 00813c85  50                   push eax
// 00813c86  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 00813c8c  53                   push ebx
// 00813c8d  8bce                 mov ecx, esi
// 00813c8f  ffd0                 call eax
// 00813c91  8bac24c0000000       mov ebp, dword ptr [esp + 0xc0]
// 00813c98  50                   push eax
// 00813c99  55                   push ebp
// 00813c9a  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00813ca1  e87a940400           call 0x85d120
// 00813ca6  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 00813cae  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 00813cb9  742a                 je 0x813ce5
// 00813cbb  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00813cc1  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00813cc7  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 00813ccd  894c2430             mov dword ptr [esp + 0x30], ecx
// 00813cd1  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00813cd7  89542434             mov dword ptr [esp + 0x34], edx
// 00813cdb  89442438             mov dword ptr [esp + 0x38], eax
// 00813cdf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00813ce3  eb27                 jmp 0x813d0c
// 00813ce5  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00813cec  e8ff8f0400           call 0x85ccf0
// 00813cf1  8b10                 mov edx, dword ptr [eax]
// 00813cf3  8b4804               mov ecx, dword ptr [eax + 4]
// 00813cf6  89542430             mov dword ptr [esp + 0x30], edx
// 00813cfa  8b5008               mov edx, dword ptr [eax + 8]
// 00813cfd  8b400c               mov eax, dword ptr [eax + 0xc]
// 00813d00  894c2434             mov dword ptr [esp + 0x34], ecx
// 00813d04  89542438             mov dword ptr [esp + 0x38], edx
// 00813d08  8944243c             mov dword ptr [esp + 0x3c], eax
// 00813d0c  8d442430             lea eax, [esp + 0x30]
// 00813d10  8b08                 mov ecx, dword ptr [eax]
// 00813d12  8b5004               mov edx, dword ptr [eax + 4]
// 00813d15  894c2418             mov dword ptr [esp + 0x18], ecx
// 00813d19  8b4808               mov ecx, dword ptr [eax + 8]
// 00813d1c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00813d20  8b500c               mov edx, dword ptr [eax + 0xc]
// 00813d23  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 00813d29  894c2420             mov dword ptr [esp + 0x20], ecx
// 00813d2d  8bcf                 mov ecx, edi
// 00813d2f  89542424             mov dword ptr [esp + 0x24], edx
// 00813d33  89442448             mov dword ptr [esp + 0x48], eax
// 00813d37  e88487ffff           call 0x80c4c0
// 00813d3c  57                   push edi
// 00813d3d  8d4c2434             lea ecx, [esp + 0x34]
// 00813d41  8bd8                 mov ebx, eax
// 00813d43  51                   push ecx
// 00813d44  8bce                 mov ecx, esi
// 00813d46  895c2454             mov dword ptr [esp + 0x54], ebx
// 00813d4a  e801c1ffff           call 0x80fe50
// 00813d4f  8b17                 mov edx, dword ptr [edi]
// 00813d51  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00813d57  8d442428             lea eax, [esp + 0x28]
// 00813d5b  50                   push eax
// 00813d5c  8bcf                 mov ecx, edi
// 00813d5e  ffd2                 call edx
// 00813d60  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00813d66  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00813d6c  ba02000000           mov edx, 2
// 00813d71  83f903               cmp ecx, 3
// 00813d74  740c                 je 0x813d82
// 00813d76  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00813d7e  3bca                 cmp ecx, edx
// 00813d80  7508                 jne 0x813d8a
// 00813d82  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00813d8a  85db                 test ebx, ebx
// 00813d8c  7510                 jne 0x813d9e
// 00813d8e  39542448             cmp dword ptr [esp + 0x48], edx
// 00813d92  7518                 jne 0x813dac
// 00813d94  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00813d9c  eb63                 jmp 0x813e01
// 00813d9e  3bda                 cmp ebx, edx
// 00813da0  740a                 je 0x813dac
// 00813da2  83fb03               cmp ebx, 3
// 00813da5  7405                 je 0x813dac
// 00813da7  83fb04               cmp ebx, 4
// 00813daa  75e8                 jne 0x813d94
// 00813dac  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 00813db2  85c0                 test eax, eax
// 00813db4  752a                 jne 0x813de0
// 00813db6  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00813dbc  85c0                 test eax, eax
// 00813dbe  7f20                 jg 0x813de0
// 00813dc0  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00813dc6  85c9                 test ecx, ecx
// 00813dc8  740c                 je 0x813dd6
// 00813dca  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00813dcd  85c0                 test eax, eax
// 00813dcf  7f0f                 jg 0x813de0
// 00813dd1  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00813dd4  eb06                 jmp 0x813ddc
// 00813dd6  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00813ddc  85c0                 test eax, eax
// 00813dde  74b4                 je 0x813d94
// 00813de0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00813de4  8b07                 mov eax, dword ptr [edi]
// 00813de6  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 00813dec  51                   push ecx
// 00813ded  8bcf                 mov ecx, edi
// 00813def  ffd2                 call edx
// 00813df1  89442460             mov dword ptr [esp + 0x60], eax
// 00813df5  c744244401000000     mov dword ptr [esp + 0x44], 1
// 00813dfd  85c0                 test eax, eax
// 00813dff  7508                 jne 0x813e09
// 00813e01  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00813e09  8b07                 mov eax, dword ptr [edi]
// 00813e0b  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00813e11  8bcf                 mov ecx, edi
// 00813e13  ffd2                 call edx
// 00813e15  8944246c             mov dword ptr [esp + 0x6c], eax
// 00813e19  8b07                 mov eax, dword ptr [edi]
// 00813e1b  8b5078               mov edx, dword ptr [eax + 0x78]
// 00813e1e  8bcf                 mov ecx, edi
// 00813e20  ffd2                 call edx
// 00813e22  89442464             mov dword ptr [esp + 0x64], eax
// 00813e26  8b07                 mov eax, dword ptr [edi]
// 00813e28  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00813e2b  8bcf                 mov ecx, edi
// 00813e2d  ffd2                 call edx
// 00813e2f  8944245c             mov dword ptr [esp + 0x5c], eax
// 00813e33  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 00813e39  83f8ff               cmp eax, -1
// 00813e3c  750f                 jne 0x813e4d
// 00813e3e  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 00813e44  85c9                 test ecx, ecx
// 00813e46  7405                 je 0x813e4d
// 00813e48  e8138effff           call 0x80cc60
// 00813e4d  8b9fa0000000         mov ebx, dword ptr [edi + 0xa0]
// 00813e53  89442440             mov dword ptr [esp + 0x40], eax
// 00813e57  83fbff               cmp ebx, -1
// 00813e5a  750d                 jne 0x813e69
// 00813e5c  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 00813e62  85c0                 test eax, eax
// 00813e64  7403                 je 0x813e69
// 00813e66  8b5838               mov ebx, dword ptr [eax + 0x38]
// 00813e69  8b07                 mov eax, dword ptr [edi]
// 00813e6b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00813e71  8bcf                 mov ecx, edi
// 00813e73  895c2468             mov dword ptr [esp + 0x68], ebx
// 00813e77  ffd2                 call edx
// 00813e79  837c244804           cmp dword ptr [esp + 0x48], 4
// 00813e7e  89842494000000       mov dword ptr [esp + 0x94], eax
// 00813e85  7511                 jne 0x813e98
// 00813e87  837c244004           cmp dword ptr [esp + 0x40], 4
// 00813e8c  7520                 jne 0x813eae
// 00813e8e  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00813e96  eb16                 jmp 0x813eae
// 00813e98  8b442448             mov eax, dword ptr [esp + 0x48]
// 00813e9c  83f809               cmp eax, 9
// 00813e9f  0f84fe080000         je 0x8147a3
// 00813ea5  83f80b               cmp eax, 0xb
// 00813ea8  0f84b5080000         je 0x814763
// 00813eae  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 00813eb5  85db                 test ebx, ebx
// 00813eb7  746c                 je 0x813f25
// 00813eb9  837c244804           cmp dword ptr [esp + 0x48], 4
// 00813ebe  741d                 je 0x813edd
// 00813ec0  8b07                 mov eax, dword ptr [edi]
// 00813ec2  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 00813ec8  8bcf                 mov ecx, edi
// 00813eca  ffd2                 call edx
// 00813ecc  85c0                 test eax, eax
// 00813ece  7538                 jne 0x813f08
// 00813ed0  8b06                 mov eax, dword ptr [esi]
// 00813ed2  8b5078               mov edx, dword ptr [eax + 0x78]
// 00813ed5  57                   push edi
// 00813ed6  55                   push ebp
// 00813ed7  8bce                 mov ecx, esi
// 00813ed9  ffd2                 call edx
// 00813edb  eb2b                 jmp 0x813f08
// 00813edd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00813ee1  8b16                 mov edx, dword ptr [esi]
// 00813ee3  8b5260               mov edx, dword ptr [edx + 0x60]
// 00813ee6  83ec10               sub esp, 0x10
// 00813ee9  8bc4                 mov eax, esp
// 00813eeb  8908                 mov dword ptr [eax], ecx
// 00813eed  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00813ef1  894804               mov dword ptr [eax + 4], ecx
// 00813ef4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00813ef8  894808               mov dword ptr [eax + 8], ecx
// 00813efb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00813eff  57                   push edi
// 00813f00  89480c               mov dword ptr [eax + 0xc], ecx
// 00813f03  55                   push ebp
// 00813f04  8bce                 mov ecx, esi
// 00813f06  ffd2                 call edx
// 00813f08  8b4500               mov eax, dword ptr [ebp]
// 00813f0b  8b16                 mov edx, dword ptr [esi]
// 00813f0d  89442474             mov dword ptr [esp + 0x74], eax
// 00813f11  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00813f14  57                   push edi
// 00813f15  8bce                 mov ecx, esi
// 00813f17  ffd0                 call eax
// 00813f19  8b542474             mov edx, dword ptr [esp + 0x74]
// 00813f1d  50                   push eax
// 00813f1e  8b4238               mov eax, dword ptr [edx + 0x38]
// 00813f21  8bcd                 mov ecx, ebp
// 00813f23  ffd0                 call eax
// 00813f25  837c244c04           cmp dword ptr [esp + 0x4c], 4
// 00813f2a  0f8534020000         jne 0x814164
// 00813f30  8b17                 mov edx, dword ptr [edi]
// 00813f32  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 00813f38  8bcf                 mov ecx, edi
// 00813f3a  ffd0                 call eax
// 00813f3c  8bd8                 mov ebx, eax
// 00813f3e  f7db                 neg ebx
// 00813f40  1bdb                 sbb ebx, ebx
// 00813f42  8bce                 mov ecx, esi
// 00813f44  f7db                 neg ebx
// 00813f46  e8e5b7ffff           call 0x80f730
// 00813f4b  8bd0                 mov edx, eax
// 00813f4d  e85ebfffff           call 0x80feb0
// 00813f52  8944246c             mov dword ptr [esp + 0x6c], eax
// 00813f56  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00813f5c  85c0                 test eax, eax
// 00813f5e  7e05                 jle 0x813f65
// 00813f60  8d0c40               lea ecx, [eax + eax*2]
// 00813f63  eb0c                 jmp 0x813f71
// 00813f65  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00813f69  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00813f6d  8d4c0107             lea ecx, [ecx + eax + 7]
// 00813f71  8d4412fd             lea eax, [edx + edx - 3]
// 00813f75  83f82a               cmp eax, 0x2a
// 00813f78  7d05                 jge 0x813f7f
// 00813f7a  b82a000000           mov eax, 0x2a
// 00813f7f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00813f83  89442428             mov dword ptr [esp + 0x28], eax
// 00813f87  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00813f8b  85d2                 test edx, edx
// 00813f8d  7408                 je 0x813f97
// 00813f8f  894c2428             mov dword ptr [esp + 0x28], ecx
// 00813f93  8944242c             mov dword ptr [esp + 0x2c], eax
// 00813f97  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 00813f9f  0f843a010000         je 0x8140df
// 00813fa5  837c244400           cmp dword ptr [esp + 0x44], 0
// 00813faa  0f84b5000000         je 0x814065
// 00813fb0  85d2                 test edx, edx
// 00813fb2  743a                 je 0x813fee
// 00813fb4  8d4c244c             lea ecx, [esp + 0x4c]
// 00813fb8  51                   push ecx
// 00813fb9  8d4c241c             lea ecx, [esp + 0x1c]
// 00813fbd  e8fe20c1ff           call 0x4260c0
// 00813fc2  8bc8                 mov ecx, eax
// 00813fc4  8b442434             mov eax, dword ptr [esp + 0x34]
// 00813fc8  99                   cdq 
// 00813fc9  2bc2                 sub eax, edx
// 00813fcb  8bd0                 mov edx, eax
// 00813fcd  8b4104               mov eax, dword ptr [ecx + 4]
// 00813fd0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00813fd4  d1fa                 sar edx, 1
// 00813fd6  2bc2                 sub eax, edx
// 00813fd8  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00813fdc  8d4c0a04             lea ecx, [edx + ecx + 4]
// 00813fe0  89442450             mov dword ptr [esp + 0x50], eax
// 00813fe4  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00813fe8  8d44244c             lea eax, [esp + 0x4c]
// 00813fec  eb38                 jmp 0x814026
// 00813fee  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00813ff2  8d442474             lea eax, [esp + 0x74]
// 00813ff6  83c203               add edx, 3
// 00813ff9  50                   push eax
// 00813ffa  8d4c241c             lea ecx, [esp + 0x1c]
// 00813ffe  89542450             mov dword ptr [esp + 0x50], edx
// 00814002  e8b920c1ff           call 0x4260c0
// 00814007  8bc8                 mov ecx, eax
// 00814009  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081400d  8b09                 mov ecx, dword ptr [ecx]
// 0081400f  99                   cdq 
// 00814010  2bc2                 sub eax, edx
// 00814012  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00814016  d1f8                 sar eax, 1
// 00814018  2bc8                 sub ecx, eax
// 0081401a  894c2474             mov dword ptr [esp + 0x74], ecx
// 0081401e  89542478             mov dword ptr [esp + 0x78], edx
// 00814022  8d442474             lea eax, [esp + 0x74]
// 00814026  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0081402d  6a01                 push 1
// 0081402f  51                   push ecx
// 00814030  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00814034  51                   push ecx
// 00814035  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00814039  51                   push ecx
// 0081403a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0081403e  8b16                 mov edx, dword ptr [esi]
// 00814040  51                   push ecx
// 00814041  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00814045  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0081404b  51                   push ecx
// 0081404c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00814050  51                   push ecx
// 00814051  33c9                 xor ecx, ecx
// 00814053  51                   push ecx
// 00814054  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00814058  51                   push ecx
// 00814059  8b4804               mov ecx, dword ptr [eax + 4]
// 0081405c  8b00                 mov eax, dword ptr [eax]
// 0081405e  51                   push ecx
// 0081405f  50                   push eax
// 00814060  55                   push ebp
// 00814061  8bce                 mov ecx, esi
// 00814063  ffd2                 call edx
// 00814065  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081406a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081406e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00814072  8b542420             mov edx, dword ptr [esp + 0x20]
// 00814076  89442430             mov dword ptr [esp + 0x30], eax
// 0081407a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0081407e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00814082  740c                 je 0x814090
// 00814084  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00814088  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081408c  03d0                 add edx, eax
// 0081408e  eb0d                 jmp 0x81409d
// 00814090  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00814094  49                   dec ecx
// 00814095  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00814099  2b4c246c             sub ecx, dword ptr [esp + 0x6c]
// 0081409d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008140a1  53                   push ebx
// 008140a2  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008140a6  50                   push eax
// 008140a7  6a01                 push 1
// 008140a9  83ec10               sub esp, 0x10
// 008140ac  8bc4                 mov eax, esp
// 008140ae  8918                 mov dword ptr [eax], ebx
// 008140b0  894804               mov dword ptr [eax + 4], ecx
// 008140b3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008140b7  57                   push edi
// 008140b8  895008               mov dword ptr [eax + 8], edx
// 008140bb  55                   push ebp
// 008140bc  8d542454             lea edx, [esp + 0x54]
// 008140c0  89480c               mov dword ptr [eax + 0xc], ecx
// 008140c3  52                   push edx
// 008140c4  8bce                 mov ecx, esi
// 008140c6  e8c5cfffff           call 0x811090
// 008140cb  8b542414             mov edx, dword ptr [esp + 0x14]
// 008140cf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008140d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008140d7  52                   push edx
// 008140d8  50                   push eax
// 008140d9  51                   push ecx
// 008140da  e93c090000           jmp 0x814a1b
// 008140df  8d8c249c000000       lea ecx, [esp + 0x9c]
// 008140e6  e8058c0400           call 0x85ccf0
// 008140eb  8b10                 mov edx, dword ptr [eax]
// 008140ed  53                   push ebx
// 008140ee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008140f2  53                   push ebx
// 008140f3  6a00                 push 0
// 008140f5  83ec10               sub esp, 0x10
// 008140f8  8bcc                 mov ecx, esp
// 008140fa  8911                 mov dword ptr [ecx], edx
// 008140fc  8b5004               mov edx, dword ptr [eax + 4]
// 008140ff  895104               mov dword ptr [ecx + 4], edx
// 00814102  8b5008               mov edx, dword ptr [eax + 8]
// 00814105  8b400c               mov eax, dword ptr [eax + 0xc]
// 00814108  895108               mov dword ptr [ecx + 8], edx
// 0081410b  57                   push edi
// 0081410c  89410c               mov dword ptr [ecx + 0xc], eax
// 0081410f  55                   push ebp
// 00814110  8d4c2454             lea ecx, [esp + 0x54]
// 00814114  51                   push ecx
// 00814115  8bce                 mov ecx, esi
// 00814117  e874cfffff           call 0x811090
// 0081411c  85db                 test ebx, ebx
// 0081411e  741f                 je 0x81413f
// 00814120  8b442434             mov eax, dword ptr [esp + 0x34]
// 00814124  83c006               add eax, 6
// 00814127  3944242c             cmp dword ptr [esp + 0x2c], eax
// 0081412b  7f23                 jg 0x814150
// 0081412d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00814131  8bd3                 mov edx, ebx
// 00814133  52                   push edx
// 00814134  50                   push eax
// 00814135  89442434             mov dword ptr [esp + 0x34], eax
// 00814139  51                   push ecx
// 0081413a  e9dc080000           jmp 0x814a1b
// 0081413f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00814143  83c005               add eax, 5
// 00814146  39442428             cmp dword ptr [esp + 0x28], eax
// 0081414a  7f04                 jg 0x814150
// 0081414c  89442428             mov dword ptr [esp + 0x28], eax
// 00814150  8b542414             mov edx, dword ptr [esp + 0x14]
// 00814154  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00814158  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081415c  52                   push edx
// 0081415d  50                   push eax
// 0081415e  51                   push ecx
// 0081415f  e9b7080000           jmp 0x814a1b
// 00814164  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0081416a  e831310100           call 0x8272a0
// 0081416f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00814173  85c0                 test eax, eax
// 00814175  0f84b5010000         je 0x814330
// 0081417b  85c9                 test ecx, ecx
// 0081417d  0f84ad010000         je 0x814330
// 00814183  8bcf                 mov ecx, edi
// 00814185  e8961fc3ff           call 0x446120
// 0081418a  85c0                 test eax, eax
// 0081418c  8d86f8000000         lea eax, [esi + 0xf8]
// 00814192  7506                 jne 0x81419a
// 00814194  8d86f0000000         lea eax, [esi + 0xf0]
// 0081419a  50                   push eax
// 0081419b  55                   push ebp
// 0081419c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 008141a3  e8788f0400           call 0x85d120
// 008141a8  33db                 xor ebx, ebx
// 008141aa  837c244802           cmp dword ptr [esp + 0x48], 2
// 008141af  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 008141b7  0f94c3               sete bl
// 008141ba  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 008141c2  895c244c             mov dword ptr [esp + 0x4c], ebx
// 008141c6  0f84c0000000         je 0x81428c
// 008141cc  837c244804           cmp dword ptr [esp + 0x48], 4
// 008141d1  750a                 jne 0x8141dd
// 008141d3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008141d9  29542420             sub dword ptr [esp + 0x20], edx
// 008141dd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008141e1  8d442474             lea eax, [esp + 0x74]
// 008141e5  50                   push eax
// 008141e6  8d4c241c             lea ecx, [esp + 0x1c]
// 008141ea  83c304               add ebx, 4
// 008141ed  e8ce1ec1ff           call 0x4260c0
// 008141f2  8bc8                 mov ecx, eax
// 008141f4  8b442430             mov eax, dword ptr [esp + 0x30]
// 008141f8  99                   cdq 
// 008141f9  6a01                 push 1
// 008141fb  2bc2                 sub eax, edx
// 008141fd  8bd0                 mov edx, eax
// 008141ff  8b01                 mov eax, dword ptr [ecx]
// 00814201  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00814208  51                   push ecx
// 00814209  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081420d  51                   push ecx
// 0081420e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00814212  51                   push ecx
// 00814213  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00814217  51                   push ecx
// 00814218  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0081421c  51                   push ecx
// 0081421d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00814221  51                   push ecx
// 00814222  33c9                 xor ecx, ecx
// 00814224  51                   push ecx
// 00814225  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00814229  51                   push ecx
// 0081422a  d1fa                 sar edx, 1
// 0081422c  2bc2                 sub eax, edx
// 0081422e  8b16                 mov edx, dword ptr [esi]
// 00814230  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 00814236  53                   push ebx
// 00814237  50                   push eax
// 00814238  55                   push ebp
// 00814239  8bce                 mov ecx, esi
// 0081423b  ffd2                 call edx
// 0081423d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00814241  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00814245  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00814249  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081424d  8d5c03fc             lea ebx, [ebx + eax - 4]
// 00814251  89442434             mov dword ptr [esp + 0x34], eax
// 00814255  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00814259  50                   push eax
// 0081425a  6a01                 push 1
// 0081425c  6a00                 push 0
// 0081425e  6a01                 push 1
// 00814260  83ec10               sub esp, 0x10
// 00814263  8bc4                 mov eax, esp
// 00814265  8908                 mov dword ptr [eax], ecx
// 00814267  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081426b  895804               mov dword ptr [eax + 4], ebx
// 0081426e  57                   push edi
// 0081426f  895008               mov dword ptr [eax + 8], edx
// 00814272  89480c               mov dword ptr [eax + 0xc], ecx
// 00814275  55                   push ebp
// 00814276  8d4c2458             lea ecx, [esp + 0x58]
// 0081427a  51                   push ecx
// 0081427b  8bce                 mov ecx, esi
// 0081427d  e8fed3ffff           call 0x811680
// 00814282  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00814286  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081428a  eb74                 jmp 0x814300
// 0081428c  8d4c244c             lea ecx, [esp + 0x4c]
// 00814290  e85b8a0400           call 0x85ccf0
// 00814295  8b10                 mov edx, dword ptr [eax]
// 00814297  53                   push ebx
// 00814298  6a01                 push 1
// 0081429a  6a00                 push 0
// 0081429c  6a00                 push 0
// 0081429e  83ec10               sub esp, 0x10
// 008142a1  8bcc                 mov ecx, esp
// 008142a3  8911                 mov dword ptr [ecx], edx
// 008142a5  8b5004               mov edx, dword ptr [eax + 4]
// 008142a8  895104               mov dword ptr [ecx + 4], edx
// 008142ab  8b5008               mov edx, dword ptr [eax + 8]
// 008142ae  8b400c               mov eax, dword ptr [eax + 0xc]
// 008142b1  895108               mov dword ptr [ecx + 8], edx
// 008142b4  57                   push edi
// 008142b5  89410c               mov dword ptr [ecx + 0xc], eax
// 008142b8  55                   push ebp
// 008142b9  8d4c2458             lea ecx, [esp + 0x58]
// 008142bd  51                   push ecx
// 008142be  8bce                 mov ecx, esi
// 008142c0  e8bbd3ffff           call 0x811680
// 008142c5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008142c9  8b542430             mov edx, dword ptr [esp + 0x30]
// 008142cd  03442434             add eax, dword ptr [esp + 0x34]
// 008142d1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008142d5  83c20a               add edx, 0xa
// 008142d8  3bca                 cmp ecx, edx
// 008142da  8944242c             mov dword ptr [esp + 0x2c], eax
// 008142de  7f06                 jg 0x8142e6
// 008142e0  8bca                 mov ecx, edx
// 008142e2  894c2428             mov dword ptr [esp + 0x28], ecx
// 008142e6  83bffc00000004       cmp dword ptr [edi + 0xfc], 4
// 008142ed  7507                 jne 0x8142f6
// 008142ef  83c10b               add ecx, 0xb
// 008142f2  894c2428             mov dword ptr [esp + 0x28], ecx
// 008142f6  3bc8                 cmp ecx, eax
// 008142f8  7f06                 jg 0x814300
// 008142fa  8bc8                 mov ecx, eax
// 008142fc  894c2428             mov dword ptr [esp + 0x28], ecx
// 00814300  8b542414             mov edx, dword ptr [esp + 0x14]
// 00814304  52                   push edx
// 00814305  50                   push eax
// 00814306  51                   push ecx
// 00814307  57                   push edi
// 00814308  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 0081430f  57                   push edi
// 00814310  8bce                 mov ecx, esi
// 00814312  e8b9baffff           call 0x80fdd0
// 00814317  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0081431e  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 00814326  e8758e0400           call 0x85d1a0
// 0081432b  e9fb060000           jmp 0x814a2b
// 00814330  85db                 test ebx, ebx
// 00814332  0f849d010000         je 0x8144d5
// 00814338  837c246000           cmp dword ptr [esp + 0x60], 0
// 0081433d  0f8492010000         je 0x8144d5
// 00814343  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00814347  e884fe0800           call 0x8a41d0
// 0081434c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00814350  8bd8                 mov ebx, eax
// 00814352  0faf5c2430           imul ebx, dword ptr [esp + 0x30]
// 00814357  e834500500           call 0x869390
// 0081435c  8bc8                 mov ecx, eax
// 0081435e  8bc3                 mov eax, ebx
// 00814360  99                   cdq 
// 00814361  f7f9                 idiv ecx
// 00814363  837c241400           cmp dword ptr [esp + 0x14], 0
// 00814368  8d4c2418             lea ecx, [esp + 0x18]
// 0081436c  89442434             mov dword ptr [esp + 0x34], eax
// 00814370  752d                 jne 0x81439f
// 00814372  8d54244c             lea edx, [esp + 0x4c]
// 00814376  52                   push edx
// 00814377  e8441dc1ff           call 0x4260c0
// 0081437c  8bc8                 mov ecx, eax
// 0081437e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00814382  99                   cdq 
// 00814383  2bc2                 sub eax, edx
// 00814385  8bd0                 mov edx, eax
// 00814387  8b4104               mov eax, dword ptr [ecx + 4]
// 0081438a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081438e  d1fa                 sar edx, 1
// 00814390  2bc2                 sub eax, edx
// 00814392  8d5103               lea edx, [ecx + 3]
// 00814395  89542474             mov dword ptr [esp + 0x74], edx
// 00814399  89442478             mov dword ptr [esp + 0x78], eax
// 0081439d  eb2c                 jmp 0x8143cb
// 0081439f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008143a3  8d44244c             lea eax, [esp + 0x4c]
// 008143a7  50                   push eax
// 008143a8  83c303               add ebx, 3
// 008143ab  e8101dc1ff           call 0x4260c0
// 008143b0  8bc8                 mov ecx, eax
// 008143b2  8b442430             mov eax, dword ptr [esp + 0x30]
// 008143b6  8b09                 mov ecx, dword ptr [ecx]
// 008143b8  99                   cdq 
// 008143b9  2bc2                 sub eax, edx
// 008143bb  d1f8                 sar eax, 1
// 008143bd  2bc8                 sub ecx, eax
// 008143bf  894c2474             mov dword ptr [esp + 0x74], ecx
// 008143c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008143c7  895c2478             mov dword ptr [esp + 0x78], ebx
// 008143cb  8d442474             lea eax, [esp + 0x74]
// 008143cf  8b10                 mov edx, dword ptr [eax]
// 008143d1  8b4004               mov eax, dword ptr [eax + 4]
// 008143d4  89442450             mov dword ptr [esp + 0x50], eax
// 008143d8  8b442448             mov eax, dword ptr [esp + 0x48]
// 008143dc  8954244c             mov dword ptr [esp + 0x4c], edx
// 008143e0  83f804               cmp eax, 4
// 008143e3  750c                 jne 0x8143f1
// 008143e5  83c103               add ecx, 3
// 008143e8  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008143ec  e984000000           jmp 0x814475
// 008143f1  83f802               cmp eax, 2
// 008143f4  7517                 jne 0x81440d
// 008143f6  837c244400           cmp dword ptr [esp + 0x44], 0
// 008143fb  7478                 je 0x814475
// 008143fd  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00814402  7571                 jne 0x814475
// 00814404  83c103               add ecx, 3
// 00814407  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0081440b  eb68                 jmp 0x814475
// 0081440d  83f803               cmp eax, 3
// 00814410  7405                 je 0x814417
// 00814412  83f801               cmp eax, 1
// 00814415  755e                 jne 0x814475
// 00814417  837c244400           cmp dword ptr [esp + 0x44], 0
// 0081441c  7457                 je 0x814475
// 0081441e  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00814423  7550                 jne 0x814475
// 00814425  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081442a  7525                 jne 0x814451
// 0081442c  8d4c2474             lea ecx, [esp + 0x74]
// 00814430  51                   push ecx
// 00814431  8d4c241c             lea ecx, [esp + 0x1c]
// 00814435  e8861cc1ff           call 0x4260c0
// 0081443a  8bc8                 mov ecx, eax
// 0081443c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00814440  99                   cdq 
// 00814441  2bc2                 sub eax, edx
// 00814443  8bd0                 mov edx, eax
// 00814445  8b01                 mov eax, dword ptr [ecx]
// 00814447  d1fa                 sar edx, 1
// 00814449  2bc2                 sub eax, edx
// 0081444b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0081444f  eb24                 jmp 0x814475
// 00814451  8d442474             lea eax, [esp + 0x74]
// 00814455  50                   push eax
// 00814456  8d4c241c             lea ecx, [esp + 0x1c]
// 0081445a  e8611cc1ff           call 0x4260c0
// 0081445f  8bc8                 mov ecx, eax
// 00814461  8b442434             mov eax, dword ptr [esp + 0x34]
// 00814465  99                   cdq 
// 00814466  2bc2                 sub eax, edx
// 00814468  8bd0                 mov edx, eax
// 0081446a  8b4104               mov eax, dword ptr [ecx + 4]
// 0081446d  d1fa                 sar edx, 1
// 0081446f  2bc2                 sub eax, edx
// 00814471  89442450             mov dword ptr [esp + 0x50], eax
// 00814475  8bcf                 mov ecx, edi
// 00814477  e804590700           call 0x889d80
// 0081447c  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00814483  8b542468             mov edx, dword ptr [esp + 0x68]
// 00814487  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0081448b  6a01                 push 1
// 0081448d  51                   push ecx
// 0081448e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00814492  52                   push edx
// 00814493  8b542470             mov edx, dword ptr [esp + 0x70]
// 00814497  51                   push ecx
// 00814498  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0081449c  52                   push edx
// 0081449d  8b542448             mov edx, dword ptr [esp + 0x48]
// 008144a1  51                   push ecx
// 008144a2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008144a6  53                   push ebx
// 008144a7  52                   push edx
// 008144a8  8b542470             mov edx, dword ptr [esp + 0x70]
// 008144ac  51                   push ecx
// 008144ad  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008144b1  52                   push edx
// 008144b2  894320               mov dword ptr [ebx + 0x20], eax
// 008144b5  8b06                 mov eax, dword ptr [esi]
// 008144b7  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008144bd  51                   push ecx
// 008144be  55                   push ebp
// 008144bf  8bce                 mov ecx, esi
// 008144c1  ffd2                 call edx
// 008144c3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008144c7  c7432000000000       mov dword ptr [ebx + 0x20], 0
// 008144ce  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 008144d5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008144d9  48                   dec eax
// 008144da  83f809               cmp eax, 9
// 008144dd  0f874e020000         ja 0x814731
// 008144e3  0fb680704a8100       movzx eax, byte ptr [eax + 0x814a70]
// 008144ea  ff2485604a8100       jmp dword ptr [eax*4 + 0x814a60]
// 008144f1  85c9                 test ecx, ecx
// 008144f3  756f                 jne 0x814564
// 008144f5  85db                 test ebx, ebx
// 008144f7  7412                 je 0x81450b
// 008144f9  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 008144ff  3988f8000000         cmp dword ptr [eax + 0xf8], ecx
// 00814505  7504                 jne 0x81450b
// 00814507  33c0                 xor eax, eax
// 00814509  eb05                 jmp 0x814510
// 0081450b  b801000000           mov eax, 1
// 00814510  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00814514  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 0081451b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081451f  50                   push eax
// 00814520  6a01                 push 1
// 00814522  53                   push ebx
// 00814523  51                   push ecx
// 00814524  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00814528  83ec10               sub esp, 0x10
// 0081452b  8bc4                 mov eax, esp
// 0081452d  8910                 mov dword ptr [eax], edx
// 0081452f  8b542440             mov edx, dword ptr [esp + 0x40]
// 00814533  894804               mov dword ptr [eax + 4], ecx
// 00814536  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081453a  57                   push edi
// 0081453b  895008               mov dword ptr [eax + 8], edx
// 0081453e  55                   push ebp
// 0081453f  8d542458             lea edx, [esp + 0x58]
// 00814543  89480c               mov dword ptr [eax + 0xc], ecx
// 00814546  52                   push edx
// 00814547  8bce                 mov ecx, esi
// 00814549  e832d1ffff           call 0x811680
// 0081454e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00814552  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00814556  83c006               add eax, 6
// 00814559  53                   push ebx
// 0081455a  83c106               add ecx, 6
// 0081455d  50                   push eax
// 0081455e  51                   push ecx
// 0081455f  e9b7040000           jmp 0x814a1b
// 00814564  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00814569  756c                 jne 0x8145d7
// 0081456b  8d442474             lea eax, [esp + 0x74]
// 0081456f  50                   push eax
// 00814570  8d4c241c             lea ecx, [esp + 0x1c]
// 00814574  e8471bc1ff           call 0x4260c0
// 00814579  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081457d  8b16                 mov edx, dword ptr [esi]
// 0081457f  8b5804               mov ebx, dword ptr [eax + 4]
// 00814582  83c1f9               add ecx, -7
// 00814585  894c2430             mov dword ptr [esp + 0x30], ecx
// 00814589  6a00                 push 0
// 0081458b  8bcf                 mov ecx, edi
// 0081458d  89542450             mov dword ptr [esp + 0x50], edx
// 00814591  e8fa88c5ff           call 0x46ce90
// 00814596  50                   push eax
// 00814597  8b07                 mov eax, dword ptr [edi]
// 00814599  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0081459f  8bcf                 mov ecx, edi
// 008145a1  ffd2                 call edx
// 008145a3  50                   push eax
// 008145a4  8b07                 mov eax, dword ptr [edi]
// 008145a6  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008145a9  8bcf                 mov ecx, edi
// 008145ab  ffd2                 call edx
// 008145ad  8b542458             mov edx, dword ptr [esp + 0x58]
// 008145b1  50                   push eax
// 008145b2  8b442440             mov eax, dword ptr [esp + 0x40]
// 008145b6  53                   push ebx
// 008145b7  50                   push eax
// 008145b8  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 008145be  57                   push edi
// 008145bf  55                   push ebp
// 008145c0  8bce                 mov ecx, esi
// 008145c2  ffd0                 call eax
// 008145c4  8b542414             mov edx, dword ptr [esp + 0x14]
// 008145c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008145cc  52                   push edx
// 008145cd  8d4807               lea ecx, [eax + 7]
// 008145d0  50                   push eax
// 008145d1  51                   push ecx
// 008145d2  e944040000           jmp 0x814a1b
// 008145d7  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 008145dd  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008145e3  8b542428             mov edx, dword ptr [esp + 0x28]
// 008145e7  51                   push ecx
// 008145e8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008145ec  51                   push ecx
// 008145ed  33c9                 xor ecx, ecx
// 008145ef  85c0                 test eax, eax
// 008145f1  0f95c1               setne cl
// 008145f4  52                   push edx
// 008145f5  8b542424             mov edx, dword ptr [esp + 0x24]
// 008145f9  51                   push ecx
// 008145fa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008145fe  53                   push ebx
// 008145ff  83ec10               sub esp, 0x10
// 00814602  8bc4                 mov eax, esp
// 00814604  8910                 mov dword ptr [eax], edx
// 00814606  8b542444             mov edx, dword ptr [esp + 0x44]
// 0081460a  894804               mov dword ptr [eax + 4], ecx
// 0081460d  895008               mov dword ptr [eax + 8], edx
// 00814610  8d9424b8000000       lea edx, [esp + 0xb8]
// 00814617  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081461b  57                   push edi
// 0081461c  55                   push ebp
// 0081461d  89480c               mov dword ptr [eax + 0xc], ecx
// 00814620  52                   push edx
// 00814621  8bce                 mov ecx, esi
// 00814623  e848e9ffff           call 0x812f70
// 00814628  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081462c  8b5004               mov edx, dword ptr [eax + 4]
// 0081462f  8b00                 mov eax, dword ptr [eax]
// 00814631  51                   push ecx
// 00814632  52                   push edx
// 00814633  e9e2030000           jmp 0x814a1a
// 00814638  85c9                 test ecx, ecx
// 0081463a  7511                 jne 0x81464d
// 0081463c  bb16000000           mov ebx, 0x16
// 00814641  8bd3                 mov edx, ebx
// 00814643  895c2428             mov dword ptr [esp + 0x28], ebx
// 00814647  8954242c             mov dword ptr [esp + 0x2c], edx
// 0081464b  eb08                 jmp 0x814655
// 0081464d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00814651  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00814655  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0081465a  7513                 jne 0x81466f
// 0081465c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00814660  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00814666  51                   push ecx
// 00814667  03c3                 add eax, ebx
// 00814669  52                   push edx
// 0081466a  e9ab030000           jmp 0x814a1a
// 0081466f  ff742444             push dword ptr [esp + 0x44]
// 00814673  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00814677  2b8ec8000000         sub ecx, dword ptr [esi + 0xc8]
// 0081467d  52                   push edx
// 0081467e  8b9424d0000000       mov edx, dword ptr [esp + 0xd0]
// 00814685  53                   push ebx
// 00814686  6a00                 push 0
// 00814688  52                   push edx
// 00814689  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0081468d  83ec10               sub esp, 0x10
// 00814690  8bc4                 mov eax, esp
// 00814692  8910                 mov dword ptr [eax], edx
// 00814694  8b542440             mov edx, dword ptr [esp + 0x40]
// 00814698  895004               mov dword ptr [eax + 4], edx
// 0081469b  894808               mov dword ptr [eax + 8], ecx
// 0081469e  894c2444             mov dword ptr [esp + 0x44], ecx
// 008146a2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008146a6  57                   push edi
// 008146a7  55                   push ebp
// 008146a8  8d54245c             lea edx, [esp + 0x5c]
// 008146ac  89480c               mov dword ptr [eax + 0xc], ecx
// 008146af  52                   push edx
// 008146b0  8bce                 mov ecx, esi
// 008146b2  e8b9e8ffff           call 0x812f70
// 008146b7  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008146bd  03442430             add eax, dword ptr [esp + 0x30]
// 008146c1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008146c5  8b542414             mov edx, dword ptr [esp + 0x14]
// 008146c9  e94a030000           jmp 0x814a18
// 008146ce  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 008146d3  7514                 jne 0x8146e9
// 008146d5  8b442414             mov eax, dword ptr [esp + 0x14]
// 008146d9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008146dd  8b542428             mov edx, dword ptr [esp + 0x28]
// 008146e1  50                   push eax
// 008146e2  51                   push ecx
// 008146e3  52                   push edx
// 008146e4  e932030000           jmp 0x814a1b
// 008146e9  85c9                 test ecx, ecx
// 008146eb  7511                 jne 0x8146fe
// 008146ed  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008146f1  b816000000           mov eax, 0x16
// 008146f6  89442428             mov dword ptr [esp + 0x28], eax
// 008146fa  8954242c             mov dword ptr [esp + 0x2c], edx
// 008146fe  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00814702  8b542418             mov edx, dword ptr [esp + 0x18]
// 00814706  51                   push ecx
// 00814707  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081470b  50                   push eax
// 0081470c  51                   push ecx
// 0081470d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00814711  6a00                 push 0
// 00814713  53                   push ebx
// 00814714  83ec10               sub esp, 0x10
// 00814717  8bc4                 mov eax, esp
// 00814719  8910                 mov dword ptr [eax], edx
// 0081471b  8b542444             mov edx, dword ptr [esp + 0x44]
// 0081471f  894804               mov dword ptr [eax + 4], ecx
// 00814722  895008               mov dword ptr [eax + 8], edx
// 00814725  8d942490000000       lea edx, [esp + 0x90]
// 0081472c  e9e6feffff           jmp 0x814617
// 00814731  8bb424bc000000       mov esi, dword ptr [esp + 0xbc]
// 00814738  8d8c2484000000       lea ecx, [esp + 0x84]
// 0081473f  c70600000000         mov dword ptr [esi], 0
// 00814745  c7460400000000       mov dword ptr [esi + 4], 0
// 0081474c  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 00814757  e8448a0400           call 0x85d1a0
// 0081475c  8bc6                 mov eax, esi
// 0081475e  e9e1020000           jmp 0x814a44
// 00814763  8b442440             mov eax, dword ptr [esp + 0x40]
// 00814767  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0081476b  8b16                 mov edx, dword ptr [esi]
// 0081476d  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00814773  50                   push eax
// 00814774  8b442460             mov eax, dword ptr [esp + 0x60]
// 00814778  53                   push ebx
// 00814779  51                   push ecx
// 0081477a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081477e  50                   push eax
// 0081477f  6a00                 push 0
// 00814781  83ec10               sub esp, 0x10
// 00814784  8bc4                 mov eax, esp
// 00814786  8908                 mov dword ptr [eax], ecx
// 00814788  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0081478c  894804               mov dword ptr [eax + 4], ecx
// 0081478f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00814793  894808               mov dword ptr [eax + 8], ecx
// 00814796  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081479a  89480c               mov dword ptr [eax + 0xc], ecx
// 0081479d  8d442470             lea eax, [esp + 0x70]
// 008147a1  eb41                 jmp 0x8147e4
// 008147a3  8b442440             mov eax, dword ptr [esp + 0x40]
// 008147a7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008147ab  8b16                 mov edx, dword ptr [esi]
// 008147ad  8b92d0000000         mov edx, dword ptr [edx + 0xd0]
// 008147b3  50                   push eax
// 008147b4  8b442460             mov eax, dword ptr [esp + 0x60]
// 008147b8  53                   push ebx
// 008147b9  51                   push ecx
// 008147ba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008147be  50                   push eax
// 008147bf  6a00                 push 0
// 008147c1  83ec10               sub esp, 0x10
// 008147c4  8bc4                 mov eax, esp
// 008147c6  8908                 mov dword ptr [eax], ecx
// 008147c8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008147cc  894804               mov dword ptr [eax + 4], ecx
// 008147cf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008147d3  894808               mov dword ptr [eax + 8], ecx
// 008147d6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008147da  89480c               mov dword ptr [eax + 0xc], ecx
// 008147dd  8d842498000000       lea eax, [esp + 0x98]
// 008147e4  55                   push ebp
// 008147e5  50                   push eax
// 008147e6  8bce                 mov ecx, esi
// 008147e8  ffd2                 call edx
// 008147ea  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 008147f2  8b18                 mov ebx, dword ptr [eax]
// 008147f4  8b4004               mov eax, dword ptr [eax + 4]
// 008147f7  895c2430             mov dword ptr [esp + 0x30], ebx
// 008147fb  89442434             mov dword ptr [esp + 0x34], eax
// 008147ff  0f84af010000         je 0x8149b4
// 00814805  8b16                 mov edx, dword ptr [esi]
// 00814807  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0081480a  8b5d00               mov ebx, dword ptr [ebp]
// 0081480d  57                   push edi
// 0081480e  8bce                 mov ecx, esi
// 00814810  ffd0                 call eax
// 00814812  8b5338               mov edx, dword ptr [ebx + 0x38]
// 00814815  50                   push eax
// 00814816  8bcd                 mov ecx, ebp
// 00814818  ffd2                 call edx
// 0081481a  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081481f  7552                 jne 0x814873
// 00814821  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00814825  2b442434             sub eax, dword ptr [esp + 0x34]
// 00814829  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0081482d  03442424             add eax, dword ptr [esp + 0x24]
// 00814831  8d4b03               lea ecx, [ebx + 3]
// 00814834  99                   cdq 
// 00814835  2bc2                 sub eax, edx
// 00814837  8b542430             mov edx, dword ptr [esp + 0x30]
// 0081483b  03d1                 add edx, ecx
// 0081483d  d1f8                 sar eax, 1
// 0081483f  8954247c             mov dword ptr [esp + 0x7c], edx
// 00814843  8b542434             mov edx, dword ptr [esp + 0x34]
// 00814847  03d0                 add edx, eax
// 00814849  89942480000000       mov dword ptr [esp + 0x80], edx
// 00814850  8bd0                 mov edx, eax
// 00814852  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00814856  89442454             mov dword ptr [esp + 0x54], eax
// 0081485a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00814861  89442458             mov dword ptr [esp + 0x58], eax
// 00814865  8b442430             mov eax, dword ptr [esp + 0x30]
// 00814869  8d440305             lea eax, [ebx + eax + 5]
// 0081486d  89442418             mov dword ptr [esp + 0x18], eax
// 00814871  eb58                 jmp 0x8148cb
// 00814873  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00814877  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081487b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0081487f  8d040a               lea eax, [edx + ecx]
// 00814882  99                   cdq 
// 00814883  2bc2                 sub eax, edx
// 00814885  8bc8                 mov ecx, eax
// 00814887  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081488b  99                   cdq 
// 0081488c  2bc2                 sub eax, edx
// 0081488e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00814892  d1f8                 sar eax, 1
// 00814894  d1f9                 sar ecx, 1
// 00814896  2bc8                 sub ecx, eax
// 00814898  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081489c  03c1                 add eax, ecx
// 0081489e  83c303               add ebx, 3
// 008148a1  03d3                 add edx, ebx
// 008148a3  89442454             mov dword ptr [esp + 0x54], eax
// 008148a7  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 008148ae  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 008148b5  89442458             mov dword ptr [esp + 0x58], eax
// 008148b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008148bd  8bd3                 mov edx, ebx
// 008148bf  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008148c3  8d441805             lea eax, [eax + ebx + 5]
// 008148c7  8944241c             mov dword ptr [esp + 0x1c], eax
// 008148cb  8b442440             mov eax, dword ptr [esp + 0x40]
// 008148cf  50                   push eax
// 008148d0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008148d4  8b1e                 mov ebx, dword ptr [esi]
// 008148d6  50                   push eax
// 008148d7  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008148db  50                   push eax
// 008148dc  8b442468             mov eax, dword ptr [esp + 0x68]
// 008148e0  50                   push eax
// 008148e1  6a01                 push 1
// 008148e3  83ec10               sub esp, 0x10
// 008148e6  837c246c0b           cmp dword ptr [esp + 0x6c], 0xb
// 008148eb  8bc4                 mov eax, esp
// 008148ed  8908                 mov dword ptr [eax], ecx
// 008148ef  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008148f3  895004               mov dword ptr [eax + 4], edx
// 008148f6  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008148fa  894808               mov dword ptr [eax + 8], ecx
// 008148fd  89500c               mov dword ptr [eax + 0xc], edx
// 00814900  55                   push ebp
// 00814901  8d442474             lea eax, [esp + 0x74]
// 00814905  8bce                 mov ecx, esi
// 00814907  50                   push eax
// 00814908  7508                 jne 0x814912
// 0081490a  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 00814910  eb06                 jmp 0x814918
// 00814912  8b93d0000000         mov edx, dword ptr [ebx + 0xd0]
// 00814918  ffd2                 call edx
// 0081491a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081491e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00814922  8b9424c8000000       mov edx, dword ptr [esp + 0xc8]
// 00814929  6a00                 push 0
// 0081492b  50                   push eax
// 0081492c  51                   push ecx
// 0081492d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00814931  6a00                 push 0
// 00814933  52                   push edx
// 00814934  8b542430             mov edx, dword ptr [esp + 0x30]
// 00814938  83ec10               sub esp, 0x10
// 0081493b  8bc4                 mov eax, esp
// 0081493d  8908                 mov dword ptr [eax], ecx
// 0081493f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00814943  895004               mov dword ptr [eax + 4], edx
// 00814946  8b542448             mov edx, dword ptr [esp + 0x48]
// 0081494a  894808               mov dword ptr [eax + 8], ecx
// 0081494d  57                   push edi
// 0081494e  89500c               mov dword ptr [eax + 0xc], edx
// 00814951  55                   push ebp
// 00814952  8d442478             lea eax, [esp + 0x78]
// 00814956  50                   push eax
// 00814957  8bce                 mov ecx, esi
// 00814959  e812e6ffff           call 0x812f70
// 0081495e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00814962  83f802               cmp eax, 2
// 00814965  7405                 je 0x81496c
// 00814967  83f803               cmp eax, 3
// 0081496a  7537                 jne 0x8149a3
// 0081496c  8b5500               mov edx, dword ptr [ebp]
// 0081496f  6a12                 push 0x12
// 00814971  8bce                 mov ecx, esi
// 00814973  e838acffff           call 0x80f5b0
// 00814978  50                   push eax
// 00814979  8b4238               mov eax, dword ptr [edx + 0x38]
// 0081497c  8bcd                 mov ecx, ebp
// 0081497e  ffd0                 call eax
// 00814980  8b5500               mov edx, dword ptr [ebp]
// 00814983  6a0f                 push 0xf
// 00814985  8bce                 mov ecx, esi
// 00814987  e824acffff           call 0x80f5b0
// 0081498c  50                   push eax
// 0081498d  8b4234               mov eax, dword ptr [edx + 0x34]
// 00814990  8bcd                 mov ecx, ebp
// 00814992  ffd0                 call eax
// 00814994  8b5504               mov edx, dword ptr [ebp + 4]
// 00814997  8d4c2418             lea ecx, [esp + 0x18]
// 0081499b  51                   push ecx
// 0081499c  52                   push edx
// 0081499d  ff151c1ba400         call dword ptr [0xa41b1c]
// 008149a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008149a7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008149ab  8b542430             mov edx, dword ptr [esp + 0x30]
// 008149af  50                   push eax
// 008149b0  51                   push ecx
// 008149b1  52                   push edx
// 008149b2  eb67                 jmp 0x814a1b
// 008149b4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008149b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008149bc  8b542418             mov edx, dword ptr [esp + 0x18]
// 008149c0  6a00                 push 0
// 008149c2  50                   push eax
// 008149c3  51                   push ecx
// 008149c4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008149c8  6a00                 push 0
// 008149ca  6a00                 push 0
// 008149cc  83ec10               sub esp, 0x10
// 008149cf  8bc4                 mov eax, esp
// 008149d1  8910                 mov dword ptr [eax], edx
// 008149d3  8b542444             mov edx, dword ptr [esp + 0x44]
// 008149d7  894804               mov dword ptr [eax + 4], ecx
// 008149da  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008149de  57                   push edi
// 008149df  895008               mov dword ptr [eax + 8], edx
// 008149e2  55                   push ebp
// 008149e3  8d542478             lea edx, [esp + 0x78]
// 008149e7  89480c               mov dword ptr [eax + 0xc], ecx
// 008149ea  52                   push edx
// 008149eb  8bce                 mov ecx, esi
// 008149ed  e87ee5ffff           call 0x812f70
// 008149f2  8b542414             mov edx, dword ptr [esp + 0x14]
// 008149f6  85d2                 test edx, edx
// 008149f8  7412                 je 0x814a0c
// 008149fa  8b442450             mov eax, dword ptr [esp + 0x50]
// 008149fe  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00814a02  8d4c0805             lea ecx, [eax + ecx + 5]
// 00814a06  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00814a0a  eb0c                 jmp 0x814a18
// 00814a0c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00814a10  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00814a14  8d441805             lea eax, [eax + ebx + 5]
// 00814a18  52                   push edx
// 00814a19  51                   push ecx
// 00814a1a  50                   push eax
// 00814a1b  57                   push edi
// 00814a1c  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 00814a23  57                   push edi
// 00814a24  8bce                 mov ecx, esi
// 00814a26  e8a5b3ffff           call 0x80fdd0
// 00814a2b  8d8c2484000000       lea ecx, [esp + 0x84]
// 00814a32  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 00814a3d  e85e870400           call 0x85d1a0
// 00814a42  8bc7                 mov eax, edi
// 00814a44  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00814a4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00814a52  59                   pop ecx
// 00814a53  5f                   pop edi
// 00814a54  5e                   pop esi
// 00814a55  5d                   pop ebp
// 00814a56  5b                   pop ebx
// 00814a57  81c4a4000000         add esp, 0xa4
// 00814a5d  c21000               ret 0x10
// 00814a60  ce                   into 
// 00814a61  46                   inc esi
// 00814a62  8100f1448100         add dword ptr [eax], 0x8144f1
// 00814a68  384681               cmp byte ptr [esi - 0x7f], al
// 00814a6b  0031                 add byte ptr [ecx], dh
// 00814a6d  47                   inc edi
// 00814a6e  810000010002         add dword ptr [eax], 0x2000100
// 00814a74  0303                 add eax, dword ptr [ebx]
// 00814a76  0300                 add eax, dword ptr [eax]
// 00814a78  0000                 add byte ptr [eax], al
// copied from an identical function in another client (function ?DrawControlToolBarParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp