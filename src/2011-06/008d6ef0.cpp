// roc 2011-06 008d6ef0  unit: CXTPTabPaintManager  size: 2792 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d6ef0
//
// 008d6ef0  6aff                 push -1
// 008d6ef2  6892d4a000           push 0xa0d492
// 008d6ef7  64a100000000         mov eax, dword ptr fs:[0]
// 008d6efd  50                   push eax
// 008d6efe  83ec60               sub esp, 0x60
// 008d6f01  53                   push ebx
// 008d6f02  55                   push ebp
// 008d6f03  56                   push esi
// 008d6f04  57                   push edi
// 008d6f05  a12058c900           mov eax, dword ptr [0xc95820]
// 008d6f0a  33c4                 xor eax, esp
// 008d6f0c  50                   push eax
// 008d6f0d  8d442474             lea eax, [esp + 0x74]
// 008d6f11  64a300000000         mov dword ptr fs:[0], eax
// 008d6f17  8bf1                 mov esi, ecx
// 008d6f19  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 008d6f20  8b7b60               mov edi, dword ptr [ebx + 0x60]
// 008d6f23  8bcf                 mov ecx, edi
// 008d6f25  897c2420             mov dword ptr [esp + 0x20], edi
// 008d6f29  e822c5ffff           call 0x8d3450
// 008d6f2e  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d6f32  8b07                 mov eax, dword ptr [edi]
// 008d6f34  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d6f37  8bcf                 mov ecx, edi
// 008d6f39  ffd2                 call edx
// 008d6f3b  83f802               cmp eax, 2
// 008d6f3e  7411                 je 0x8d6f51
// 008d6f40  8b07                 mov eax, dword ptr [edi]
// 008d6f42  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d6f45  8bcf                 mov ecx, edi
// 008d6f47  ffd2                 call edx
// 008d6f49  85c0                 test eax, eax
// 008d6f4b  7404                 je 0x8d6f51
// 008d6f4d  33c0                 xor eax, eax
// 008d6f4f  eb05                 jmp 0x8d6f56
// 008d6f51  b801000000           mov eax, 1
// 008d6f56  33c9                 xor ecx, ecx
// 008d6f58  85c0                 test eax, eax
// 008d6f5a  0f94c1               sete cl
// 008d6f5d  837c242c05           cmp dword ptr [esp + 0x2c], 5
// 008d6f62  8be9                 mov ebp, ecx
// 008d6f64  896c2418             mov dword ptr [esp + 0x18], ebp
// 008d6f68  750d                 jne 0x8d6f77
// 008d6f6a  33d2                 xor edx, edx
// 008d6f6c  85ed                 test ebp, ebp
// 008d6f6e  0f94c2               sete dl
// 008d6f71  8bea                 mov ebp, edx
// 008d6f73  89542418             mov dword ptr [esp + 0x18], edx
// 008d6f77  8d442414             lea eax, [esp + 0x14]
// 008d6f7b  50                   push eax
// 008d6f7c  8bcb                 mov ecx, ebx
// 008d6f7e  e83dc1ffff           call 0x8d30c0
// 008d6f83  837e2800             cmp dword ptr [esi + 0x28], 0
// 008d6f87  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008d6f8f  7422                 je 0x8d6fb3
// 008d6f91  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008d6f94  395904               cmp dword ptr [ecx + 4], ebx
// 008d6f97  751a                 jne 0x8d6fb3
// 008d6f99  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 008d6f9d  7414                 je 0x8d6fb3
// 008d6f9f  85ed                 test ebp, ebp
// 008d6fa1  7408                 je 0x8d6fab
// 008d6fa3  8d8624010000         lea eax, [esi + 0x124]
// 008d6fa9  eb18                 jmp 0x8d6fc3
// 008d6fab  8d8614010000         lea eax, [esi + 0x114]
// 008d6fb1  eb10                 jmp 0x8d6fc3
// 008d6fb3  8d861c010000         lea eax, [esi + 0x11c]
// 008d6fb9  85ed                 test ebp, ebp
// 008d6fbb  7506                 jne 0x8d6fc3
// 008d6fbd  8d860c010000         lea eax, [esi + 0x10c]
// 008d6fc3  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008d6fca  50                   push eax
// 008d6fcb  55                   push ebp
// 008d6fcc  8d4c245c             lea ecx, [esp + 0x5c]
// 008d6fd0  e84b61f8ff           call 0x85d120
// 008d6fd5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 008d6fdb  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 008d6fe1  8d4c243c             lea ecx, [esp + 0x3c]
// 008d6fe5  51                   push ecx
// 008d6fe6  6a00                 push 0
// 008d6fe8  89442448             mov dword ptr [esp + 0x48], eax
// 008d6fec  53                   push ebx
// 008d6fed  83ec08               sub esp, 8
// 008d6ff0  8bc4                 mov eax, esp
// 008d6ff2  89542450             mov dword ptr [esp + 0x50], edx
// 008d6ff6  c70000000000         mov dword ptr [eax], 0
// 008d6ffc  c7400400000000       mov dword ptr [eax + 4], 0
// 008d7003  8b17                 mov edx, dword ptr [edi]
// 008d7005  8b4244               mov eax, dword ptr [edx + 0x44]
// 008d7008  8964243c             mov dword ptr [esp + 0x3c], esp
// 008d700c  55                   push ebp
// 008d700d  8bcf                 mov ecx, edi
// 008d700f  c684249400000001     mov byte ptr [esp + 0x94], 1
// 008d7017  ffd0                 call eax
// 008d7019  837c242c03           cmp dword ptr [esp + 0x2c], 3
// 008d701e  89442424             mov dword ptr [esp + 0x24], eax
// 008d7022  750c                 jne 0x8d7030
// 008d7024  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008d7027  395904               cmp dword ptr [ecx + 4], ebx
// 008d702a  7404                 je 0x8d7030
// 008d702c  33c0                 xor eax, eax
// 008d702e  eb05                 jmp 0x8d7035
// 008d7030  b801000000           mov eax, 1
// 008d7035  89442428             mov dword ptr [esp + 0x28], eax
// 008d7039  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008d7041  85c0                 test eax, eax
// 008d7043  7471                 je 0x8d70b6
// 008d7045  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008d7048  85c0                 test eax, eax
// 008d704a  7e6a                 jle 0x8d70b6
// 008d704c  33ed                 xor ebp, ebp
// 008d704e  3bc5                 cmp eax, ebp
// 008d7050  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008d7054  7e60                 jle 0x8d70b6
// 008d7056  85ed                 test ebp, ebp
// 008d7058  0f8c98000000         jl 0x8d70f6
// 008d705e  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 008d7061  0f8d8f000000         jge 0x8d70f6
// 008d7067  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008d706a  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 008d706d  8d04aa               lea eax, [edx + ebp*4]
// 008d7070  8b4108               mov eax, dword ptr [ecx + 8]
// 008d7073  83f802               cmp eax, 2
// 008d7076  740d                 je 0x8d7085
// 008d7078  83f801               cmp eax, 1
// 008d707b  7527                 jne 0x8d70a4
// 008d707d  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008d7080  395804               cmp dword ptr [eax + 4], ebx
// 008d7083  751f                 jne 0x8d70a4
// 008d7085  8b11                 mov edx, dword ptr [ecx]
// 008d7087  8b5208               mov edx, dword ptr [edx + 8]
// 008d708a  8d442444             lea eax, [esp + 0x44]
// 008d708e  50                   push eax
// 008d708f  ffd2                 call edx
// 008d7091  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d7096  8b442448             mov eax, dword ptr [esp + 0x48]
// 008d709a  7504                 jne 0x8d70a0
// 008d709c  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d70a0  0144241c             add dword ptr [esp + 0x1c], eax
// 008d70a4  45                   inc ebp
// 008d70a5  3b6b74               cmp ebp, dword ptr [ebx + 0x74]
// 008d70a8  7cac                 jl 0x8d7056
// 008d70aa  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008d70af  7e05                 jle 0x8d70b6
// 008d70b1  8344241c03           add dword ptr [esp + 0x1c], 3
// 008d70b6  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 008d70be  0f8473060000         je 0x8d7737
// 008d70c4  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008d70c9  0f8e93010000         jle 0x8d7262
// 008d70cf  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d70d5  8b01                 mov eax, dword ptr [ecx]
// 008d70d7  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008d70de  8b4008               mov eax, dword ptr [eax + 8]
// 008d70e1  53                   push ebx
// 008d70e2  52                   push edx
// 008d70e3  ffd0                 call eax
// 008d70e5  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d70ea  740f                 je 0x8d70fb
// 008d70ec  83ac249800000003     sub dword ptr [esp + 0x98], 3
// 008d70f4  eb0d                 jmp 0x8d7103
// 008d70f6  e80f32f3ff           call 0x80a30a
// 008d70fb  83ac249400000003     sub dword ptr [esp + 0x94], 3
// 008d7103  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 008d7106  83c1ff               add ecx, -1
// 008d7109  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008d7110  0f884c010000         js 0x8d7262
// 008d7116  85c9                 test ecx, ecx
// 008d7118  7cdc                 jl 0x8d70f6
// 008d711a  3b4b74               cmp ecx, dword ptr [ebx + 0x74]
// 008d711d  7dd7                 jge 0x8d70f6
// 008d711f  8b4370               mov eax, dword ptr [ebx + 0x70]
// 008d7122  8d148d00000000       lea edx, [ecx*4]
// 008d7129  8b2c10               mov ebp, dword ptr [eax + edx]
// 008d712c  03c2                 add eax, edx
// 008d712e  8b4508               mov eax, dword ptr [ebp + 8]
// 008d7131  83f802               cmp eax, 2
// 008d7134  7415                 je 0x8d714b
// 008d7136  83f801               cmp eax, 1
// 008d7139  0f8513010000         jne 0x8d7252
// 008d713f  8b5360               mov edx, dword ptr [ebx + 0x60]
// 008d7142  395a04               cmp dword ptr [edx + 4], ebx
// 008d7145  0f8507010000         jne 0x8d7252
// 008d714b  8b4500               mov eax, dword ptr [ebp]
// 008d714e  8b5008               mov edx, dword ptr [eax + 8]
// 008d7151  8d4c242c             lea ecx, [esp + 0x2c]
// 008d7155  51                   push ecx
// 008d7156  8bcd                 mov ecx, ebp
// 008d7158  ffd2                 call edx
// 008d715a  83ec10               sub esp, 0x10
// 008d715d  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d7162  7557                 jne 0x8d71bb
// 008d7164  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008d716b  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 008d7172  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008d7176  03c1                 add eax, ecx
// 008d7178  99                   cdq 
// 008d7179  2bc2                 sub eax, edx
// 008d717b  8bc8                 mov ecx, eax
// 008d717d  8bc7                 mov eax, edi
// 008d717f  99                   cdq 
// 008d7180  2bc2                 sub eax, edx
// 008d7182  d1f9                 sar ecx, 1
// 008d7184  d1f8                 sar eax, 1
// 008d7186  8d1c08               lea ebx, [eax + ecx]
// 008d7189  2bc7                 sub eax, edi
// 008d718b  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 008d7192  03c1                 add eax, ecx
// 008d7194  8bcc                 mov ecx, esp
// 008d7196  8bd7                 mov edx, edi
// 008d7198  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 008d719c  8911                 mov dword ptr [ecx], edx
// 008d719e  894104               mov dword ptr [ecx + 4], eax
// 008d71a1  897908               mov dword ptr [ecx + 8], edi
// 008d71a4  89590c               mov dword ptr [ecx + 0xc], ebx
// 008d71a7  8bcd                 mov ecx, ebp
// 008d71a9  e872c0ffff           call 0x8d3220
// 008d71ae  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d71b2  29942494000000       sub dword ptr [esp + 0x94], edx
// 008d71b9  eb56                 jmp 0x8d7211
// 008d71bb  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008d71c2  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008d71c9  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008d71cd  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 008d71d4  03c1                 add eax, ecx
// 008d71d6  99                   cdq 
// 008d71d7  2bc2                 sub eax, edx
// 008d71d9  8bc8                 mov ecx, eax
// 008d71db  8bc7                 mov eax, edi
// 008d71dd  99                   cdq 
// 008d71de  2bc2                 sub eax, edx
// 008d71e0  d1f9                 sar ecx, 1
// 008d71e2  d1f8                 sar eax, 1
// 008d71e4  8bd1                 mov edx, ecx
// 008d71e6  2bd0                 sub edx, eax
// 008d71e8  03d7                 add edx, edi
// 008d71ea  2bc8                 sub ecx, eax
// 008d71ec  8bc4                 mov eax, esp
// 008d71ee  8bfb                 mov edi, ebx
// 008d71f0  2b7c2440             sub edi, dword ptr [esp + 0x40]
// 008d71f4  8908                 mov dword ptr [eax], ecx
// 008d71f6  897804               mov dword ptr [eax + 4], edi
// 008d71f9  895008               mov dword ptr [eax + 8], edx
// 008d71fc  8bcd                 mov ecx, ebp
// 008d71fe  89580c               mov dword ptr [eax + 0xc], ebx
// 008d7201  e81ac0ffff           call 0x8d3220
// 008d7206  8b542430             mov edx, dword ptr [esp + 0x30]
// 008d720a  29942498000000       sub dword ptr [esp + 0x98], edx
// 008d7211  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 008d7218  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008d721f  3b4174               cmp eax, dword ptr [ecx + 0x74]
// 008d7222  0f8dcefeffff         jge 0x8d70f6
// 008d7228  8b4970               mov ecx, dword ptr [ecx + 0x70]
// 008d722b  03c0                 add eax, eax
// 008d722d  03c0                 add eax, eax
// 008d722f  03c8                 add ecx, eax
// 008d7231  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d7238  8b09                 mov ecx, dword ptr [ecx]
// 008d723a  50                   push eax
// 008d723b  e860c8ffff           call 0x8d3aa0
// 008d7240  8b9c2488000000       mov ebx, dword ptr [esp + 0x88]
// 008d7247  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008d724e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008d7252  83e901               sub ecx, 1
// 008d7255  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008d725c  0f89b4feffff         jns 0x8d7116
// 008d7262  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d7268  8b11                 mov edx, dword ptr [ecx]
// 008d726a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008d7271  8b5208               mov edx, dword ptr [edx + 8]
// 008d7274  53                   push ebx
// 008d7275  50                   push eax
// 008d7276  ffd2                 call edx
// 008d7278  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d727f  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d7286  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d728d  8944242c             mov dword ptr [esp + 0x2c], eax
// 008d7291  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 008d7298  89442438             mov dword ptr [esp + 0x38], eax
// 008d729c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008d729f  2b4324               sub eax, dword ptr [ebx + 0x24]
// 008d72a2  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d72a7  894c2430             mov dword ptr [esp + 0x30], ecx
// 008d72ab  89542434             mov dword ptr [esp + 0x34], edx
// 008d72af  0f8440020000         je 0x8d74f5
// 008d72b5  85c0                 test eax, eax
// 008d72b7  7e18                 jle 0x8d72d1
// 008d72b9  99                   cdq 
// 008d72ba  2bc2                 sub eax, edx
// 008d72bc  d1f8                 sar eax, 1
// 008d72be  f7d8                 neg eax
// 008d72c0  50                   push eax
// 008d72c1  6a00                 push 0
// 008d72c3  8d8c2494000000       lea ecx, [esp + 0x94]
// 008d72ca  51                   push ecx
// 008d72cb  ff15e41ba400         call dword ptr [0xa41be4]
// 008d72d1  8b5670               mov edx, dword ptr [esi + 0x70]
// 008d72d4  035660               add edx, dword ptr [esi + 0x60]
// 008d72d7  8bcf                 mov ecx, edi
// 008d72d9  01942490000000       add dword ptr [esp + 0x90], edx
// 008d72e0  8b07                 mov eax, dword ptr [edi]
// 008d72e2  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d72e5  ffd2                 call edx
// 008d72e7  83f803               cmp eax, 3
// 008d72ea  7508                 jne 0x8d72f4
// 008d72ec  8b4664               mov eax, dword ptr [esi + 0x64]
// 008d72ef  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d72f2  eb06                 jmp 0x8d72fa
// 008d72f4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008d72f7  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008d72fa  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 008d7301  29842494000000       sub dword ptr [esp + 0x94], eax
// 008d7308  837c242400           cmp dword ptr [esp + 0x24], 0
// 008d730d  7470                 je 0x8d737f
// 008d730f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008d7316  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d731d  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008d7324  03c1                 add eax, ecx
// 008d7326  99                   cdq 
// 008d7327  2bc2                 sub eax, edx
// 008d7329  8bc8                 mov ecx, eax
// 008d732b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d732f  99                   cdq 
// 008d7330  2bc2                 sub eax, edx
// 008d7332  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d7339  d1f9                 sar ecx, 1
// 008d733b  d1f8                 sar eax, 1
// 008d733d  2bd5                 sub edx, ebp
// 008d733f  2bc8                 sub ecx, eax
// 008d7341  3b542440             cmp edx, dword ptr [esp + 0x40]
// 008d7345  8d7dff               lea edi, [ebp - 1]
// 008d7348  7e26                 jle 0x8d7370
// 008d734a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d734e  8b10                 mov edx, dword ptr [eax]
// 008d7350  8b5244               mov edx, dword ptr [edx + 0x44]
// 008d7353  8d6c243c             lea ebp, [esp + 0x3c]
// 008d7357  55                   push ebp
// 008d7358  6a01                 push 1
// 008d735a  53                   push ebx
// 008d735b  57                   push edi
// 008d735c  51                   push ecx
// 008d735d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008d7364  51                   push ecx
// 008d7365  8bc8                 mov ecx, eax
// 008d7367  ffd2                 call edx
// 008d7369  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 008d7370  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d7374  8d4c2802             lea ecx, [eax + ebp + 2]
// 008d7378  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 008d737f  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d7384  0f8449030000         je 0x8d76d3
// 008d738a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 008d7391  83c208               add edx, 8
// 008d7394  39942498000000       cmp dword ptr [esp + 0x98], edx
// 008d739b  0f8e32030000         jle 0x8d76d3
// 008d73a1  8d442444             lea eax, [esp + 0x44]
// 008d73a5  50                   push eax
// 008d73a6  8d4c2418             lea ecx, [esp + 0x18]
// 008d73aa  ff15a826a400         call dword ptr [0xa426a8]
// 008d73b0  50                   push eax
// 008d73b1  8d4c241c             lea ecx, [esp + 0x1c]
// 008d73b5  ff15c82da400         call dword ptr [0xa42dc8]
// 008d73bb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008d73c2  8b5108               mov edx, dword ptr [ecx + 8]
// 008d73c5  50                   push eax
// 008d73c6  52                   push edx
// 008d73c7  ff153801a400         call dword ptr [0xa40138]
// 008d73cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d73d1  8b01                 mov eax, dword ptr [ecx]
// 008d73d3  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 008d73da  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d73dd  2bbc248c000000       sub edi, dword ptr [esp + 0x8c]
// 008d73e4  ffd2                 call edx
// 008d73e6  33c9                 xor ecx, ecx
// 008d73e8  83f803               cmp eax, 3
// 008d73eb  0f94c1               sete cl
// 008d73ee  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 008d73f5  8bc7                 mov eax, edi
// 008d73f7  8b7e78               mov edi, dword ptr [esi + 0x78]
// 008d73fa  83c7fc               add edi, -4
// 008d73fd  2bc1                 sub eax, ecx
// 008d73ff  2b442448             sub eax, dword ptr [esp + 0x48]
// 008d7403  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008d740a  99                   cdq 
// 008d740b  2bc2                 sub eax, edx
// 008d740d  d1f8                 sar eax, 1
// 008d740f  2bc8                 sub ecx, eax
// 008d7411  8bc1                 mov eax, ecx
// 008d7413  2b842490000000       sub eax, dword ptr [esp + 0x90]
// 008d741a  33d2                 xor edx, edx
// 008d741c  03c5                 add eax, ebp
// 008d741e  85ff                 test edi, edi
// 008d7420  0f9cc2               setl dl
// 008d7423  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008d742a  89842494000000       mov dword ptr [esp + 0x94], eax
// 008d7431  4a                   dec edx
// 008d7432  23d7                 and edx, edi
// 008d7434  8b7e68               mov edi, dword ptr [esi + 0x68]
// 008d7437  03fa                 add edi, edx
// 008d7439  2bef                 sub ebp, edi
// 008d743b  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008d7442  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 008d7449  751a                 jne 0x8d7465
// 008d744b  8d542414             lea edx, [esp + 0x14]
// 008d744f  52                   push edx
// 008d7450  8bce                 mov ecx, esi
// 008d7452  e839e5ffff           call 0x8d5990
// 008d7457  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008d745e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008d7465  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008d746c  743c                 je 0x8d74aa
// 008d746e  6820090000           push 0x920
// 008d7473  83ec10               sub esp, 0x10
// 008d7476  8bd4                 mov edx, esp
// 008d7478  890a                 mov dword ptr [edx], ecx
// 008d747a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008d7481  894a04               mov dword ptr [edx + 4], ecx
// 008d7484  894208               mov dword ptr [edx + 8], eax
// 008d7487  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 008d748e  8d4c2428             lea ecx, [esp + 0x28]
// 008d7492  89420c               mov dword ptr [edx + 0xc], eax
// 008d7495  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d749c  51                   push ecx
// 008d749d  52                   push edx
// 008d749e  8bce                 mov ecx, esi
// 008d74a0  e8cbecffff           call 0x8d6170
// 008d74a5  e929020000           jmp 0x8d76d3
// 008d74aa  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 008d74b0  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008d74b7  8b7d00               mov edi, dword ptr [ebp]
// 008d74ba  f7d8                 neg eax
// 008d74bc  1bc0                 sbb eax, eax
// 008d74be  2500800000           and eax, 0x8000
// 008d74c3  0d20090000           or eax, 0x920
// 008d74c8  50                   push eax
// 008d74c9  8d842490000000       lea eax, [esp + 0x90]
// 008d74d0  50                   push eax
// 008d74d1  8d4c241c             lea ecx, [esp + 0x1c]
// 008d74d5  83c770               add edi, 0x70
// 008d74d8  ff15a826a400         call dword ptr [0xa426a8]
// 008d74de  50                   push eax
// 008d74df  8d4c2420             lea ecx, [esp + 0x20]
// 008d74e3  ff15c82da400         call dword ptr [0xa42dc8]
// 008d74e9  8b17                 mov edx, dword ptr [edi]
// 008d74eb  50                   push eax
// 008d74ec  8bcd                 mov ecx, ebp
// 008d74ee  ffd2                 call edx
// 008d74f0  e9de010000           jmp 0x8d76d3
// 008d74f5  85c0                 test eax, eax
// 008d74f7  7e18                 jle 0x8d7511
// 008d74f9  99                   cdq 
// 008d74fa  2bc2                 sub eax, edx
// 008d74fc  d1f8                 sar eax, 1
// 008d74fe  6a00                 push 0
// 008d7500  f7d8                 neg eax
// 008d7502  50                   push eax
// 008d7503  8d842494000000       lea eax, [esp + 0x94]
// 008d750a  50                   push eax
// 008d750b  ff15e41ba400         call dword ptr [0xa41be4]
// 008d7511  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008d7514  034e60               add ecx, dword ptr [esi + 0x60]
// 008d7517  018c248c000000       add dword ptr [esp + 0x8c], ecx
// 008d751e  8b17                 mov edx, dword ptr [edi]
// 008d7520  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7523  8bcf                 mov ecx, edi
// 008d7525  ffd0                 call eax
// 008d7527  83f802               cmp eax, 2
// 008d752a  7508                 jne 0x8d7534
// 008d752c  8b4664               mov eax, dword ptr [esi + 0x64]
// 008d752f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008d7532  eb06                 jmp 0x8d753a
// 008d7534  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008d7537  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008d753a  29842498000000       sub dword ptr [esp + 0x98], eax
// 008d7541  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d7545  018c2490000000       add dword ptr [esp + 0x90], ecx
// 008d754c  85c0                 test eax, eax
// 008d754e  7473                 je 0x8d75c3
// 008d7550  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d7557  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008d755e  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 008d7565  8d0411               lea eax, [ecx + edx]
// 008d7568  99                   cdq 
// 008d7569  2bc2                 sub eax, edx
// 008d756b  8bc8                 mov ecx, eax
// 008d756d  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d7571  99                   cdq 
// 008d7572  2bc2                 sub eax, edx
// 008d7574  d1f8                 sar eax, 1
// 008d7576  d1f9                 sar ecx, 1
// 008d7578  2bc8                 sub ecx, eax
// 008d757a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d7581  2be8                 sub ebp, eax
// 008d7583  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 008d7587  8d50ff               lea edx, [eax - 1]
// 008d758a  7e22                 jle 0x8d75ae
// 008d758c  8b07                 mov eax, dword ptr [edi]
// 008d758e  8d6c243c             lea ebp, [esp + 0x3c]
// 008d7592  55                   push ebp
// 008d7593  6a01                 push 1
// 008d7595  53                   push ebx
// 008d7596  51                   push ecx
// 008d7597  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008d759e  52                   push edx
// 008d759f  8b5044               mov edx, dword ptr [eax + 0x44]
// 008d75a2  51                   push ecx
// 008d75a3  8bcf                 mov ecx, edi
// 008d75a5  ffd2                 call edx
// 008d75a7  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008d75ae  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d75b2  8d4c0802             lea ecx, [eax + ecx + 2]
// 008d75b6  8b442424             mov eax, dword ptr [esp + 0x24]
// 008d75ba  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 008d75c1  eb07                 jmp 0x8d75ca
// 008d75c3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008d75ca  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d75cf  0f84fe000000         je 0x8d76d3
// 008d75d5  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 008d75dc  3bd1                 cmp edx, ecx
// 008d75de  0f8eef000000         jle 0x8d76d3
// 008d75e4  f7d8                 neg eax
// 008d75e6  1bc0                 sbb eax, eax
// 008d75e8  83e002               and eax, 2
// 008d75eb  2b4678               sub eax, dword ptr [esi + 0x78]
// 008d75ee  2b4668               sub eax, dword ptr [esi + 0x68]
// 008d75f1  03d0                 add edx, eax
// 008d75f3  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 008d75fa  89942494000000       mov dword ptr [esp + 0x94], edx
// 008d7601  7450                 je 0x8d7653
// 008d7603  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008d7609  f7d8                 neg eax
// 008d760b  1bc0                 sbb eax, eax
// 008d760d  2500080000           and eax, 0x800
// 008d7612  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 008d7618  83c820               or eax, 0x20
// 008d761b  50                   push eax
// 008d761c  83ec10               sub esp, 0x10
// 008d761f  8bc4                 mov eax, esp
// 008d7621  8908                 mov dword ptr [eax], ecx
// 008d7623  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008d762a  894804               mov dword ptr [eax + 4], ecx
// 008d762d  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008d7634  895008               mov dword ptr [eax + 8], edx
// 008d7637  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 008d763e  89500c               mov dword ptr [eax + 0xc], edx
// 008d7641  8d442428             lea eax, [esp + 0x28]
// 008d7645  50                   push eax
// 008d7646  51                   push ecx
// 008d7647  8bce                 mov ecx, esi
// 008d7649  e822ebffff           call 0x8d6170
// 008d764e  e980000000           jmp 0x8d76d3
// 008d7653  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008d765a  7415                 je 0x8d7671
// 008d765c  8d542414             lea edx, [esp + 0x14]
// 008d7660  52                   push edx
// 008d7661  8bce                 mov ecx, esi
// 008d7663  e828e3ffff           call 0x8d5990
// 008d7668  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008d766f  750d                 jne 0x8d767e
// 008d7671  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 008d7678  7504                 jne 0x8d767e
// 008d767a  33c9                 xor ecx, ecx
// 008d767c  eb05                 jmp 0x8d7683
// 008d767e  b900080000           mov ecx, 0x800
// 008d7683  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 008d7689  f7d8                 neg eax
// 008d768b  1bc0                 sbb eax, eax
// 008d768d  2500800000           and eax, 0x8000
// 008d7692  0b869c000000         or eax, dword ptr [esi + 0x9c]
// 008d7698  8d94248c000000       lea edx, [esp + 0x8c]
// 008d769f  0bc1                 or eax, ecx
// 008d76a1  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008d76a8  8b39                 mov edi, dword ptr [ecx]
// 008d76aa  83c820               or eax, 0x20
// 008d76ad  50                   push eax
// 008d76ae  52                   push edx
// 008d76af  8d4c241c             lea ecx, [esp + 0x1c]
// 008d76b3  83c770               add edi, 0x70
// 008d76b6  ff15a826a400         call dword ptr [0xa426a8]
// 008d76bc  50                   push eax
// 008d76bd  8d4c2420             lea ecx, [esp + 0x20]
// 008d76c1  ff15c82da400         call dword ptr [0xa42dc8]
// 008d76c7  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008d76ce  50                   push eax
// 008d76cf  8b07                 mov eax, dword ptr [edi]
// 008d76d1  ffd0                 call eax
// 008d76d3  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 008d76d6  395904               cmp dword ptr [ecx + 4], ebx
// 008d76d9  753d                 jne 0x8d7718
// 008d76db  8b11                 mov edx, dword ptr [ecx]
// 008d76dd  8b4278               mov eax, dword ptr [edx + 0x78]
// 008d76e0  ffd0                 call eax
// 008d76e2  85c0                 test eax, eax
// 008d76e4  7432                 je 0x8d7718
// 008d76e6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d76ea  8b16                 mov edx, dword ptr [esi]
// 008d76ec  8b5274               mov edx, dword ptr [edx + 0x74]
// 008d76ef  83ec10               sub esp, 0x10
// 008d76f2  8bc4                 mov eax, esp
// 008d76f4  8908                 mov dword ptr [eax], ecx
// 008d76f6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d76fa  894804               mov dword ptr [eax + 4], ecx
// 008d76fd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008d7701  894808               mov dword ptr [eax + 8], ecx
// 008d7704  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008d7708  89480c               mov dword ptr [eax + 0xc], ecx
// 008d770b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 008d7712  53                   push ebx
// 008d7713  50                   push eax
// 008d7714  8bce                 mov ecx, esi
// 008d7716  ffd2                 call edx
// 008d7718  8d4c2454             lea ecx, [esp + 0x54]
// 008d771c  c644247c00           mov byte ptr [esp + 0x7c], 0
// 008d7721  e87a5af8ff           call 0x85d1a0
// 008d7726  8d4c2414             lea ecx, [esp + 0x14]
// 008d772a  ff15082ea400         call dword ptr [0xa42e08]
// 008d7730  33c0                 xor eax, eax
// 008d7732  e98b020000           jmp 0x8d79c2
// 008d7737  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d773b  83f802               cmp eax, 2
// 008d773e  751a                 jne 0x8d775a
// 008d7740  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008d7746  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008d774c  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 008d7752  50                   push eax
// 008d7753  51                   push ecx
// 008d7754  52                   push edx
// 008d7755  e945020000           jmp 0x8d799f
// 008d775a  83f803               cmp eax, 3
// 008d775d  0f85b4010000         jne 0x8d7917
// 008d7763  837c242800           cmp dword ptr [esp + 0x28], 0
// 008d7768  7526                 jne 0x8d7790
// 008d776a  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d776f  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d7773  7504                 jne 0x8d7779
// 008d7775  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d7779  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008d777f  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008d7785  51                   push ecx
// 008d7786  52                   push edx
// 008d7787  83c008               add eax, 8
// 008d778a  50                   push eax
// 008d778b  e90f020000           jmp 0x8d799f
// 008d7790  837e2800             cmp dword ptr [esi + 0x28], 0
// 008d7794  7414                 je 0x8d77aa
// 008d7796  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 008d779a  740e                 je 0x8d77aa
// 008d779c  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d77a0  50                   push eax
// 008d77a1  8bce                 mov ecx, esi
// 008d77a3  e858e0ffff           call 0x8d5800
// 008d77a8  eb13                 jmp 0x8d77bd
// 008d77aa  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d77af  8d861c010000         lea eax, [esi + 0x11c]
// 008d77b5  7506                 jne 0x8d77bd
// 008d77b7  8d860c010000         lea eax, [esi + 0x10c]
// 008d77bd  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008d77c4  50                   push eax
// 008d77c5  51                   push ecx
// 008d77c6  8d4c246c             lea ecx, [esp + 0x6c]
// 008d77ca  e85159f8ff           call 0x85d120
// 008d77cf  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008d77d2  33d2                 xor edx, edx
// 008d77d4  3bc2                 cmp eax, edx
// 008d77d6  c644247c02           mov byte ptr [esp + 0x7c], 2
// 008d77db  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 008d77e2  89942488000000       mov dword ptr [esp + 0x88], edx
// 008d77e9  0f8ed0000000         jle 0x8d78bf
// 008d77ef  eb07                 jmp 0x8d77f8
// 008d77f1  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 008d77f8  33c9                 xor ecx, ecx
// 008d77fa  3bd1                 cmp edx, ecx
// 008d77fc  894c2444             mov dword ptr [esp + 0x44], ecx
// 008d7800  894c2448             mov dword ptr [esp + 0x48], ecx
// 008d7804  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008d7808  894c2450             mov dword ptr [esp + 0x50], ecx
// 008d780c  7c1a                 jl 0x8d7828
// 008d780e  3bd0                 cmp edx, eax
// 008d7810  7d16                 jge 0x8d7828
// 008d7812  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d7816  3b505c               cmp edx, dword ptr [eax + 0x5c]
// 008d7819  0f8dd7f8ffff         jge 0x8d70f6
// 008d781f  8b4058               mov eax, dword ptr [eax + 0x58]
// 008d7822  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 008d7825  8d0490               lea eax, [eax + edx*4]
// 008d7828  8d542428             lea edx, [esp + 0x28]
// 008d782c  52                   push edx
// 008d782d  e88eb8ffff           call 0x8d30c0
// 008d7832  8be8                 mov ebp, eax
// 008d7834  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008d783a  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 008d7841  8b3b                 mov edi, dword ptr [ebx]
// 008d7843  f7d8                 neg eax
// 008d7845  1bc0                 sbb eax, eax
// 008d7847  2500080000           and eax, 0x800
// 008d784c  0d20050000           or eax, 0x520
// 008d7851  50                   push eax
// 008d7852  8d442448             lea eax, [esp + 0x48]
// 008d7856  50                   push eax
// 008d7857  8bcd                 mov ecx, ebp
// 008d7859  c684248400000003     mov byte ptr [esp + 0x84], 3
// 008d7861  83c770               add edi, 0x70
// 008d7864  ff15a826a400         call dword ptr [0xa426a8]
// 008d786a  50                   push eax
// 008d786b  8bcd                 mov ecx, ebp
// 008d786d  ff15c82da400         call dword ptr [0xa42dc8]
// 008d7873  8b17                 mov edx, dword ptr [edi]
// 008d7875  50                   push eax
// 008d7876  8bcb                 mov ecx, ebx
// 008d7878  ffd2                 call edx
// 008d787a  8d4c2428             lea ecx, [esp + 0x28]
// 008d787e  c644247c02           mov byte ptr [esp + 0x7c], 2
// 008d7883  ff15082ea400         call dword ptr [0xa42e08]
// 008d7889  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008d788d  2b442444             sub eax, dword ptr [esp + 0x44]
// 008d7891  3984249c000000       cmp dword ptr [esp + 0x9c], eax
// 008d7898  7f07                 jg 0x8d78a1
// 008d789a  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 008d78a1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008d78a8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d78ac  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008d78af  41                   inc ecx
// 008d78b0  3bc8                 cmp ecx, eax
// 008d78b2  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008d78b9  0f8c32ffffff         jl 0x8d77f1
// 008d78bf  837c242400           cmp dword ptr [esp + 0x24], 0
// 008d78c4  7504                 jne 0x8d78ca
// 008d78c6  33c0                 xor eax, eax
// 008d78c8  eb0f                 jmp 0x8d78d9
// 008d78ca  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d78cf  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d78d3  7504                 jne 0x8d78d9
// 008d78d5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d78d9  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008d78df  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008d78e5  51                   push ecx
// 008d78e6  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008d78e9  034e70               add ecx, dword ptr [esi + 0x70]
// 008d78ec  52                   push edx
// 008d78ed  03c8                 add ecx, eax
// 008d78ef  038c24a4000000       add ecx, dword ptr [esp + 0xa4]
// 008d78f6  034c2424             add ecx, dword ptr [esp + 0x24]
// 008d78fa  51                   push ecx
// 008d78fb  8bce                 mov ecx, esi
// 008d78fd  e85ee0ffff           call 0x8d5960
// 008d7902  8d4c2464             lea ecx, [esp + 0x64]
// 008d7906  8bf0                 mov esi, eax
// 008d7908  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008d790d  e88e58f8ff           call 0x85d1a0
// 008d7912  e991000000           jmp 0x8d79a8
// 008d7917  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 008d791d  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 008d7924  8b1f                 mov ebx, dword ptr [edi]
// 008d7926  f7d8                 neg eax
// 008d7928  1bc0                 sbb eax, eax
// 008d792a  2500080000           and eax, 0x800
// 008d792f  0d20050000           or eax, 0x520
// 008d7934  50                   push eax
// 008d7935  8d942490000000       lea edx, [esp + 0x90]
// 008d793c  52                   push edx
// 008d793d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d7941  83c370               add ebx, 0x70
// 008d7944  ff15a826a400         call dword ptr [0xa426a8]
// 008d794a  50                   push eax
// 008d794b  8d4c2420             lea ecx, [esp + 0x20]
// 008d794f  ff15c82da400         call dword ptr [0xa42dc8]
// 008d7955  50                   push eax
// 008d7956  8b03                 mov eax, dword ptr [ebx]
// 008d7958  8bcf                 mov ecx, edi
// 008d795a  ffd0                 call eax
// 008d795c  837c242400           cmp dword ptr [esp + 0x24], 0
// 008d7961  7504                 jne 0x8d7967
// 008d7963  33c0                 xor eax, eax
// 008d7965  eb0f                 jmp 0x8d7976
// 008d7967  837c241800           cmp dword ptr [esp + 0x18], 0
// 008d796c  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d7970  7504                 jne 0x8d7976
// 008d7972  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d7976  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 008d797c  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 008d7982  51                   push ecx
// 008d7983  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008d7986  034e70               add ecx, dword ptr [esi + 0x70]
// 008d7989  52                   push edx
// 008d798a  2b8c2494000000       sub ecx, dword ptr [esp + 0x94]
// 008d7991  03c8                 add ecx, eax
// 008d7993  038c249c000000       add ecx, dword ptr [esp + 0x9c]
// 008d799a  034c2424             add ecx, dword ptr [esp + 0x24]
// 008d799e  51                   push ecx
// 008d799f  8bce                 mov ecx, esi
// 008d79a1  e8badfffff           call 0x8d5960
// 008d79a6  8bf0                 mov esi, eax
// 008d79a8  8d4c2454             lea ecx, [esp + 0x54]
// 008d79ac  c644247c00           mov byte ptr [esp + 0x7c], 0
// 008d79b1  e8ea57f8ff           call 0x85d1a0
// 008d79b6  8d4c2414             lea ecx, [esp + 0x14]
// 008d79ba  ff15082ea400         call dword ptr [0xa42e08]
// 008d79c0  8bc6                 mov eax, esi
// 008d79c2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008d79c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008d79cd  59                   pop ecx
// 008d79ce  5f                   pop edi
// 008d79cf  5e                   pop esi
// 008d79d0  5d                   pop ebp
// 008d79d1  5b                   pop ebx
// 008d79d2  83c46c               add esp, 0x6c
// 008d79d5  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSingleButtonIconAndText@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\TabManager\XTPTabPaintManager.cpp