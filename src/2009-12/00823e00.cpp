// roc 2009-12 00823e00  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 1441 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00823e00
//
// 00823e00  6aff                 push -1
// 00823e02  6815b39500           push 0x95b315
// 00823e07  64a100000000         mov eax, dword ptr fs:[0]
// 00823e0d  50                   push eax
// 00823e0e  83ec08               sub esp, 8
// 00823e11  53                   push ebx
// 00823e12  55                   push ebp
// 00823e13  56                   push esi
// 00823e14  57                   push edi
// 00823e15  a10052b600           mov eax, dword ptr [0xb65200]
// 00823e1a  33c4                 xor eax, esp
// 00823e1c  50                   push eax
// 00823e1d  8d44241c             lea eax, [esp + 0x1c]
// 00823e21  64a300000000         mov dword ptr fs:[0], eax
// 00823e27  8bf1                 mov esi, ecx
// 00823e29  89742414             mov dword ptr [esp + 0x14], esi
// 00823e2d  e81603fdff           call 0x7f4148
// 00823e32  33ff                 xor edi, edi
// 00823e34  8d8e34010000         lea ecx, [esi + 0x134]
// 00823e3a  897c2424             mov dword ptr [esp + 0x24], edi
// 00823e3e  c7064c529f00         mov dword ptr [esi], 0x9f524c
// 00823e44  e8b7200800           call 0x8a5f00
// 00823e49  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 00823e4f  c786b001000018229a00 mov dword ptr [esi + 0x1b0], 0x9a2218
// 00823e59  8d8e44020000         lea ecx, [esi + 0x244]
// 00823e5f  c644242402           mov byte ptr [esp + 0x24], 2
// 00823e64  e807af0000           call 0x82ed70
// 00823e69  8d8e80020000         lea ecx, [esi + 0x280]
// 00823e6f  ff1574de9800         call dword ptr [0x98de74]
// 00823e75  b304                 mov bl, 4
// 00823e77  57                   push edi
// 00823e78  8bce                 mov ecx, esi
// 00823e7a  885c2428             mov byte ptr [esp + 0x28], bl
// 00823e7e  e8fd85ffff           call 0x81c480
// 00823e83  897e5c               mov dword ptr [esi + 0x5c], edi
// 00823e86  e885a1ffff           call 0x81e010
// 00823e8b  6a3c                 push 0x3c
// 00823e8d  898630010000         mov dword ptr [esi + 0x130], eax
// 00823e93  e868f8ffff           call 0x823700
// 00823e98  8be8                 mov ebp, eax
// 00823e9a  896c2418             mov dword ptr [esp + 0x18], ebp
// 00823e9e  c644242405           mov byte ptr [esp + 0x24], 5
// 00823ea3  3bef                 cmp ebp, edi
// 00823ea5  7410                 je 0x823eb7
// 00823ea7  8bcd                 mov ecx, ebp
// 00823ea9  e8c2ae0000           call 0x82ed70
// 00823eae  c74500b44b9f00       mov dword ptr [ebp], 0x9f4bb4
// 00823eb5  eb02                 jmp 0x823eb9
// 00823eb7  33ed                 xor ebp, ebp
// 00823eb9  6a3c                 push 0x3c
// 00823ebb  885c2428             mov byte ptr [esp + 0x28], bl
// 00823ebf  89aee0000000         mov dword ptr [esi + 0xe0], ebp
// 00823ec5  e836f8ffff           call 0x823700
// 00823eca  8be8                 mov ebp, eax
// 00823ecc  896c2418             mov dword ptr [esp + 0x18], ebp
// 00823ed0  c644242406           mov byte ptr [esp + 0x24], 6
// 00823ed5  3bef                 cmp ebp, edi
// 00823ed7  7410                 je 0x823ee9
// 00823ed9  8bcd                 mov ecx, ebp
// 00823edb  e890ae0000           call 0x82ed70
// 00823ee0  c74500b44b9f00       mov dword ptr [ebp], 0x9f4bb4
// 00823ee7  eb02                 jmp 0x823eeb
// 00823ee9  33ed                 xor ebp, ebp
// 00823eeb  6a48                 push 0x48
// 00823eed  885c2428             mov byte ptr [esp + 0x28], bl
// 00823ef1  89aee4000000         mov dword ptr [esi + 0xe4], ebp
// 00823ef7  e804f8ffff           call 0x823700
// 00823efc  8be8                 mov ebp, eax
// 00823efe  896c2418             mov dword ptr [esp + 0x18], ebp
// 00823f02  c644242407           mov byte ptr [esp + 0x24], 7
// 00823f07  3bef                 cmp ebp, edi
// 00823f09  7411                 je 0x823f1c
// 00823f0b  57                   push edi
// 00823f0c  8bcd                 mov ecx, ebp
// 00823f0e  e86d8f0000           call 0x82ce80
// 00823f13  c745005c4c9f00       mov dword ptr [ebp], 0x9f4c5c
// 00823f1a  eb02                 jmp 0x823f1e
// 00823f1c  33ed                 xor ebp, ebp
// 00823f1e  6a44                 push 0x44
// 00823f20  885c2428             mov byte ptr [esp + 0x28], bl
// 00823f24  89aee8000000         mov dword ptr [esi + 0xe8], ebp
// 00823f2a  e831f9fcff           call 0x7f3860
// 00823f2f  83c404               add esp, 4
// 00823f32  89442418             mov dword ptr [esp + 0x18], eax
// 00823f36  c644242408           mov byte ptr [esp + 0x24], 8
// 00823f3b  3bc7                 cmp eax, edi
// 00823f3d  740a                 je 0x823f49
// 00823f3f  56                   push esi
// 00823f40  8bc8                 mov ecx, eax
// 00823f42  e8599f0400           call 0x86dea0
// 00823f47  eb02                 jmp 0x823f4b
// 00823f49  33c0                 xor eax, eax
// 00823f4b  68a4000000           push 0xa4
// 00823f50  885c2428             mov byte ptr [esp + 0x28], bl
// 00823f54  8986ec000000         mov dword ptr [esi + 0xec], eax
// 00823f5a  e801f9fcff           call 0x7f3860
// 00823f5f  83c404               add esp, 4
// 00823f62  89442418             mov dword ptr [esp + 0x18], eax
// 00823f66  c644242409           mov byte ptr [esp + 0x24], 9
// 00823f6b  3bc7                 cmp eax, edi
// 00823f6d  7411                 je 0x823f80
// 00823f6f  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00823f75  51                   push ecx
// 00823f76  56                   push esi
// 00823f77  8bc8                 mov ecx, eax
// 00823f79  e8f2440000           call 0x828470
// 00823f7e  eb02                 jmp 0x823f82
// 00823f80  33c0                 xor eax, eax
// 00823f82  68e8020000           push 0x2e8
// 00823f87  885c2428             mov byte ptr [esp + 0x28], bl
// 00823f8b  898688020000         mov dword ptr [esi + 0x288], eax
// 00823f91  e8caf8fcff           call 0x7f3860
// 00823f96  83c404               add esp, 4
// 00823f99  89442418             mov dword ptr [esp + 0x18], eax
// 00823f9d  c64424240a           mov byte ptr [esp + 0x24], 0xa
// 00823fa2  3bc7                 cmp eax, edi
// 00823fa4  7409                 je 0x823faf
// 00823fa6  8bc8                 mov ecx, eax
// 00823fa8  e8f3cd0700           call 0x8a0da0
// 00823fad  eb02                 jmp 0x823fb1
// 00823faf  33c0                 xor eax, eax
// 00823fb1  6a2c                 push 0x2c
// 00823fb3  885c2428             mov byte ptr [esp + 0x28], bl
// 00823fb7  898600010000         mov dword ptr [esi + 0x100], eax
// 00823fbd  e89ef8fcff           call 0x7f3860
// 00823fc2  83c404               add esp, 4
// 00823fc5  89442418             mov dword ptr [esp + 0x18], eax
// 00823fc9  c64424240b           mov byte ptr [esp + 0x24], 0xb
// 00823fce  3bc7                 cmp eax, edi
// 00823fd0  740a                 je 0x823fdc
// 00823fd2  56                   push esi
// 00823fd3  8bc8                 mov ecx, eax
// 00823fd5  e8f6230800           call 0x8a63d0
// 00823fda  eb02                 jmp 0x823fde
// 00823fdc  33c0                 xor eax, eax
// 00823fde  898604010000         mov dword ptr [esi + 0x104], eax
// 00823fe4  83c8ff               or eax, 0xffffffff
// 00823fe7  6a48                 push 0x48
// 00823fe9  885c2428             mov byte ptr [esp + 0x28], bl
// 00823fed  89be08010000         mov dword ptr [esi + 0x108], edi
// 00823ff3  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00823ff9  898620010000         mov dword ptr [esi + 0x120], eax
// 00823fff  898624010000         mov dword ptr [esi + 0x124], eax
// 00824005  89bec0010000         mov dword ptr [esi + 0x1c0], edi
// 0082400b  e850f8fcff           call 0x7f3860
// 00824010  83c404               add esp, 4
// 00824013  89442418             mov dword ptr [esp + 0x18], eax
// 00824017  c64424240c           mov byte ptr [esp + 0x24], 0xc
// 0082401c  3bc7                 cmp eax, edi
// 0082401e  740a                 je 0x82402a
// 00824020  56                   push esi
// 00824021  8bc8                 mov ecx, eax
// 00824023  e8d8a30000           call 0x82e400
// 00824028  eb02                 jmp 0x82402c
// 0082402a  33c0                 xor eax, eax
// 0082402c  bd01000000           mov ebp, 1
// 00824031  6a7c                 push 0x7c
// 00824033  885c2428             mov byte ptr [esp + 0x28], bl
// 00824037  898628010000         mov dword ptr [esi + 0x128], eax
// 0082403d  896e54               mov dword ptr [esi + 0x54], ebp
// 00824040  897e58               mov dword ptr [esi + 0x58], edi
// 00824043  89beb8010000         mov dword ptr [esi + 0x1b8], edi
// 00824049  89aeec010000         mov dword ptr [esi + 0x1ec], ebp
// 0082404f  89bef0010000         mov dword ptr [esi + 0x1f0], edi
// 00824055  89bef4010000         mov dword ptr [esi + 0x1f4], edi
// 0082405b  89bef8010000         mov dword ptr [esi + 0x1f8], edi
// 00824061  89aec4010000         mov dword ptr [esi + 0x1c4], ebp
// 00824067  89aec8010000         mov dword ptr [esi + 0x1c8], ebp
// 0082406d  89aed4010000         mov dword ptr [esi + 0x1d4], ebp
// 00824073  e8e8f7fcff           call 0x7f3860
// 00824078  83c404               add esp, 4
// 0082407b  89442418             mov dword ptr [esp + 0x18], eax
// 0082407f  c64424240d           mov byte ptr [esp + 0x24], 0xd
// 00824084  3bc7                 cmp eax, edi
// 00824086  7409                 je 0x824091
// 00824088  8bc8                 mov ecx, eax
// 0082408a  e89187feff           call 0x80c820
// 0082408f  eb02                 jmp 0x824093
// 00824091  33c0                 xor eax, eax
// 00824093  6894000000           push 0x94
// 00824098  885c2428             mov byte ptr [esp + 0x28], bl
// 0082409c  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 008240a2  89be18020000         mov dword ptr [esi + 0x218], edi
// 008240a8  89be20020000         mov dword ptr [esi + 0x220], edi
// 008240ae  89bed8010000         mov dword ptr [esi + 0x1d8], edi
// 008240b4  89aedc010000         mov dword ptr [esi + 0x1dc], ebp
// 008240ba  89bee0010000         mov dword ptr [esi + 0x1e0], edi
// 008240c0  89bee4010000         mov dword ptr [esi + 0x1e4], edi
// 008240c6  89bee8010000         mov dword ptr [esi + 0x1e8], edi
// 008240cc  89ae00020000         mov dword ptr [esi + 0x200], ebp
// 008240d2  89ae04020000         mov dword ptr [esi + 0x204], ebp
// 008240d8  89aecc010000         mov dword ptr [esi + 0x1cc], ebp
// 008240de  e87df7fcff           call 0x7f3860
// 008240e3  83c404               add esp, 4
// 008240e6  89442418             mov dword ptr [esp + 0x18], eax
// 008240ea  c64424240e           mov byte ptr [esp + 0x24], 0xe
// 008240ef  3bc7                 cmp eax, edi
// 008240f1  7409                 je 0x8240fc
// 008240f3  8bc8                 mov ecx, eax
// 008240f5  e836d50700           call 0x8a1630
// 008240fa  eb02                 jmp 0x8240fe
// 008240fc  33c0                 xor eax, eax
// 008240fe  6a14                 push 0x14
// 00824100  885c2428             mov byte ptr [esp + 0x28], bl
// 00824104  898624020000         mov dword ptr [esi + 0x224], eax
// 0082410a  e851f7fcff           call 0x7f3860
// 0082410f  83c404               add esp, 4
// 00824112  89442418             mov dword ptr [esp + 0x18], eax
// 00824116  c64424240f           mov byte ptr [esp + 0x24], 0xf
// 0082411b  3bc7                 cmp eax, edi
// 0082411d  7409                 je 0x824128
// 0082411f  8bc8                 mov ecx, eax
// 00824121  e83a71ffff           call 0x81b260
// 00824126  eb02                 jmp 0x82412a
// 00824128  33c0                 xor eax, eax
// 0082412a  6884000000           push 0x84
// 0082412f  885c2428             mov byte ptr [esp + 0x28], bl
// 00824133  898628020000         mov dword ptr [esi + 0x228], eax
// 00824139  e822f7fcff           call 0x7f3860
// 0082413e  83c404               add esp, 4
// 00824141  89442418             mov dword ptr [esp + 0x18], eax
// 00824145  c644242410           mov byte ptr [esp + 0x24], 0x10
// 0082414a  3bc7                 cmp eax, edi
// 0082414c  7409                 je 0x824157
// 0082414e  8bc8                 mov ecx, eax
// 00824150  e83bde0700           call 0x8a1f90
// 00824155  eb02                 jmp 0x824159
// 00824157  33c0                 xor eax, eax
// 00824159  8b2d9cca9800         mov ebp, dword ptr [0x98ca9c]
// 0082415f  8d5660               lea edx, [esi + 0x60]
// 00824162  52                   push edx
// 00824163  885c2428             mov byte ptr [esp + 0x28], bl
// 00824167  89862c020000         mov dword ptr [esi + 0x22c], eax
// 0082416d  ffd5                 call ebp
// 0082416f  8d4670               lea eax, [esi + 0x70]
// 00824172  50                   push eax
// 00824173  ffd5                 call ebp
// 00824175  8d8e90000000         lea ecx, [esi + 0x90]
// 0082417b  51                   push ecx
// 0082417c  ffd5                 call ebp
// 0082417e  8d9680000000         lea edx, [esi + 0x80]
// 00824184  52                   push edx
// 00824185  ffd5                 call ebp
// 00824187  33c0                 xor eax, eax
// 00824189  33c9                 xor ecx, ecx
// 0082418b  68a8000000           push 0xa8
// 00824190  89be10010000         mov dword ptr [esi + 0x110], edi
// 00824196  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 0082419c  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 008241a2  89beb0020000         mov dword ptr [esi + 0x2b0], edi
// 008241a8  89be18010000         mov dword ptr [esi + 0x118], edi
// 008241ae  c7861401000007000000 mov dword ptr [esi + 0x114], 7
// 008241b8  89be30020000         mov dword ptr [esi + 0x230], edi
// 008241be  89be34020000         mov dword ptr [esi + 0x234], edi
// 008241c4  89be40020000         mov dword ptr [esi + 0x240], edi
// 008241ca  898638020000         mov dword ptr [esi + 0x238], eax
// 008241d0  898e3c020000         mov dword ptr [esi + 0x23c], ecx
// 008241d6  e885f6fcff           call 0x7f3860
// 008241db  83c404               add esp, 4
// 008241de  89442418             mov dword ptr [esp + 0x18], eax
// 008241e2  c644242411           mov byte ptr [esp + 0x24], 0x11
// 008241e7  3bc7                 cmp eax, edi
// 008241e9  7409                 je 0x8241f4
// 008241eb  8bc8                 mov ecx, eax
// 008241ed  e8fed70300           call 0x8619f0
// 008241f2  eb02                 jmp 0x8241f6
// 008241f4  33c0                 xor eax, eax
// 008241f6  6a28                 push 0x28
// 008241f8  885c2428             mov byte ptr [esp + 0x28], bl
// 008241fc  89861c020000         mov dword ptr [esi + 0x21c], eax
// 00824202  e859f6fcff           call 0x7f3860
// 00824207  8986e0020000         mov dword ptr [esi + 0x2e0], eax
// 0082420d  33c0                 xor eax, eax
// 0082420f  6a38                 push 0x38
// 00824211  89be8c020000         mov dword ptr [esi + 0x28c], edi
// 00824217  66898690020000       mov word ptr [esi + 0x290], ax
// 0082421e  e83df6fcff           call 0x7f3860
// 00824223  8be8                 mov ebp, eax
// 00824225  83c408               add esp, 8
// 00824228  896c2418             mov dword ptr [esp + 0x18], ebp
// 0082422c  c644242412           mov byte ptr [esp + 0x24], 0x12
// 00824231  3bef                 cmp ebp, edi
// 00824233  7410                 je 0x824245
// 00824235  8bcd                 mov ecx, ebp
// 00824237  e87004fdff           call 0x7f46ac
// 0082423c  c74500d44c9f00       mov dword ptr [ebp], 0x9f4cd4
// 00824243  eb02                 jmp 0x824247
// 00824245  33ed                 xor ebp, ebp
// 00824247  6a48                 push 0x48
// 00824249  885c2428             mov byte ptr [esp + 0x28], bl
// 0082424d  89ae94020000         mov dword ptr [esi + 0x294], ebp
// 00824253  89be98020000         mov dword ptr [esi + 0x298], edi
// 00824259  89be9c020000         mov dword ptr [esi + 0x29c], edi
// 0082425f  c786a0020000ffffffff mov dword ptr [esi + 0x2a0], 0xffffffff
// 00824269  89bea4020000         mov dword ptr [esi + 0x2a4], edi
// 0082426f  89bea8020000         mov dword ptr [esi + 0x2a8], edi
// 00824275  89beac020000         mov dword ptr [esi + 0x2ac], edi
// 0082427b  89bebc010000         mov dword ptr [esi + 0x1bc], edi
// 00824281  89beb8020000         mov dword ptr [esi + 0x2b8], edi
// 00824287  89beb4020000         mov dword ptr [esi + 0x2b4], edi
// 0082428d  89be84020000         mov dword ptr [esi + 0x284], edi
// 00824293  e868f4ffff           call 0x823700
// 00824298  8be8                 mov ebp, eax
// 0082429a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0082429e  c644242413           mov byte ptr [esp + 0x24], 0x13
// 008242a3  3bef                 cmp ebp, edi
// 008242a5  7411                 je 0x8242b8
// 008242a7  57                   push edi
// 008242a8  8bcd                 mov ecx, ebp
// 008242aa  e8d18b0000           call 0x82ce80
// 008242af  c745005c4c9f00       mov dword ptr [ebp], 0x9f4c5c
// 008242b6  eb02                 jmp 0x8242ba
// 008242b8  33ed                 xor ebp, ebp
// 008242ba  6a48                 push 0x48
// 008242bc  885c2428             mov byte ptr [esp + 0x28], bl
// 008242c0  89aef0000000         mov dword ptr [esi + 0xf0], ebp
// 008242c6  e835f4ffff           call 0x823700
// 008242cb  8be8                 mov ebp, eax
// 008242cd  896c2418             mov dword ptr [esp + 0x18], ebp
// 008242d1  c644242414           mov byte ptr [esp + 0x24], 0x14
// 008242d6  3bef                 cmp ebp, edi
// 008242d8  7411                 je 0x8242eb
// 008242da  57                   push edi
// 008242db  8bcd                 mov ecx, ebp
// 008242dd  e89e8b0000           call 0x82ce80
// 008242e2  c745005c4c9f00       mov dword ptr [ebp], 0x9f4c5c
// 008242e9  eb02                 jmp 0x8242ed
// 008242eb  33ed                 xor ebp, ebp
// 008242ed  6a3c                 push 0x3c
// 008242ef  885c2428             mov byte ptr [esp + 0x28], bl
// 008242f3  89aef4000000         mov dword ptr [esi + 0xf4], ebp
// 008242f9  e802f4ffff           call 0x823700
// 008242fe  8be8                 mov ebp, eax
// 00824300  896c2418             mov dword ptr [esp + 0x18], ebp
// 00824304  c644242415           mov byte ptr [esp + 0x24], 0x15
// 00824309  3bef                 cmp ebp, edi
// 0082430b  7410                 je 0x82431d
// 0082430d  8bcd                 mov ecx, ebp
// 0082430f  e85caa0000           call 0x82ed70
// 00824314  c74500b44b9f00       mov dword ptr [ebp], 0x9f4bb4
// 0082431b  eb02                 jmp 0x82431f
// 0082431d  33ed                 xor ebp, ebp
// 0082431f  6a3c                 push 0x3c
// 00824321  885c2428             mov byte ptr [esp + 0x28], bl
// 00824325  89aef8000000         mov dword ptr [esi + 0xf8], ebp
// 0082432b  e8d0f3ffff           call 0x823700
// 00824330  8be8                 mov ebp, eax
// 00824332  896c2418             mov dword ptr [esp + 0x18], ebp
// 00824336  c644242416           mov byte ptr [esp + 0x24], 0x16
// 0082433b  3bef                 cmp ebp, edi
// 0082433d  7410                 je 0x82434f
// 0082433f  8bcd                 mov ecx, ebp
// 00824341  e82aaa0000           call 0x82ed70
// 00824346  c74500b44b9f00       mov dword ptr [ebp], 0x9f4bb4
// 0082434d  eb02                 jmp 0x824351
// 0082434f  33ed                 xor ebp, ebp
// 00824351  b801000000           mov eax, 1
// 00824356  898608020000         mov dword ptr [esi + 0x208], eax
// 0082435c  89860c020000         mov dword ptr [esi + 0x20c], eax
// 00824362  898610020000         mov dword ptr [esi + 0x210], eax
// 00824368  898614020000         mov dword ptr [esi + 0x214], eax
// 0082436e  89aefc000000         mov dword ptr [esi + 0xfc], ebp
// 00824374  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 0082437a  c686c002000064       mov byte ptr [esi + 0x2c0], 0x64
// 00824381  c786dc02000000010000 mov dword ptr [esi + 0x2dc], 0x100
// 0082438b  8bc6                 mov eax, esi
// 0082438d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00824391  64890d00000000       mov dword ptr fs:[0], ecx
// 00824398  59                   pop ecx
// 00824399  5f                   pop edi
// 0082439a  5e                   pop esi
// 0082439b  5d                   pop ebp
// 0082439c  5b                   pop ebx
// 0082439d  83c414               add esp, 0x14
// 008243a0  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportControl@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp