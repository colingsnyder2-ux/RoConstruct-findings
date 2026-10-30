// roc 2010-06 007b2c10  unit: CXTPPaintManager  size: 1041 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b2c10
//
// 007b2c10  6aff                 push -1
// 007b2c12  6828ed9a00           push 0x9aed28
// 007b2c17  64a100000000         mov eax, dword ptr fs:[0]
// 007b2c1d  50                   push eax
// 007b2c1e  83ec5c               sub esp, 0x5c
// 007b2c21  53                   push ebx
// 007b2c22  55                   push ebp
// 007b2c23  56                   push esi
// 007b2c24  57                   push edi
// 007b2c25  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b2c2a  33c4                 xor eax, esp
// 007b2c2c  50                   push eax
// 007b2c2d  8d442470             lea eax, [esp + 0x70]
// 007b2c31  64a300000000         mov dword ptr fs:[0], eax
// 007b2c37  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007b2c3b  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 007b2c41  8bb158010000         mov esi, dword ptr [ecx + 0x158]
// 007b2c47  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007b2c4e  83e902               sub ecx, 2
// 007b2c51  8944241c             mov dword ptr [esp + 0x1c], eax
// 007b2c55  0f841a030000         je 0x7b2f75
// 007b2c5b  83e901               sub ecx, 1
// 007b2c5e  0f849b020000         je 0x7b2eff
// 007b2c64  83e901               sub ecx, 1
// 007b2c67  0f859e030000         jne 0x7b300b
// 007b2c6d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 007b2c74  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 007b2c7b  2bbc2488000000       sub edi, dword ptr [esp + 0x88]
// 007b2c82  2b9c248c000000       sub ebx, dword ptr [esp + 0x8c]
// 007b2c89  8b2db0a09e00         mov ebp, dword ptr [0x9ea0b0]
// 007b2c8f  33c0                 xor eax, eax
// 007b2c91  50                   push eax
// 007b2c92  89442458             mov dword ptr [esp + 0x58], eax
// 007b2c96  b901000000           mov ecx, 1
// 007b2c9b  50                   push eax
// 007b2c9c  66894c245c           mov word ptr [esp + 0x5c], cx
// 007b2ca1  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007b2ca8  51                   push ecx
// 007b2ca9  ba20000000           mov edx, 0x20
// 007b2cae  6689542462           mov word ptr [esp + 0x62], dx
// 007b2cb3  50                   push eax
// 007b2cb4  8d542458             lea edx, [esp + 0x58]
// 007b2cb8  52                   push edx
// 007b2cb9  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b2cbd  89442460             mov dword ptr [esp + 0x60], eax
// 007b2cc1  89442464             mov dword ptr [esp + 0x64], eax
// 007b2cc5  8944246c             mov dword ptr [esp + 0x6c], eax
// 007b2cc9  50                   push eax
// 007b2cca  89442474             mov dword ptr [esp + 0x74], eax
// 007b2cce  89442478             mov dword ptr [esp + 0x78], eax
// 007b2cd2  8944247c             mov dword ptr [esp + 0x7c], eax
// 007b2cd6  89842480000000       mov dword ptr [esp + 0x80], eax
// 007b2cdd  89842484000000       mov dword ptr [esp + 0x84], eax
// 007b2ce4  c744246028000000     mov dword ptr [esp + 0x60], 0x28
// 007b2cec  897c2464             mov dword ptr [esp + 0x64], edi
// 007b2cf0  895c2468             mov dword ptr [esp + 0x68], ebx
// 007b2cf4  89442470             mov dword ptr [esp + 0x70], eax
// 007b2cf8  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 007b2cff  ffd5                 call ebp
// 007b2d01  6a00                 push 0
// 007b2d03  6a00                 push 0
// 007b2d05  89442428             mov dword ptr [esp + 0x28], eax
// 007b2d09  8d44241c             lea eax, [esp + 0x1c]
// 007b2d0d  50                   push eax
// 007b2d0e  6a00                 push 0
// 007b2d10  8d4c2458             lea ecx, [esp + 0x58]
// 007b2d14  51                   push ecx
// 007b2d15  6a00                 push 0
// 007b2d17  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 007b2d1f  ffd5                 call ebp
// 007b2d21  6a00                 push 0
// 007b2d23  6a00                 push 0
// 007b2d25  8d542420             lea edx, [esp + 0x20]
// 007b2d29  52                   push edx
// 007b2d2a  89442430             mov dword ptr [esp + 0x30], eax
// 007b2d2e  6a00                 push 0
// 007b2d30  8d442458             lea eax, [esp + 0x58]
// 007b2d34  50                   push eax
// 007b2d35  6a00                 push 0
// 007b2d37  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007b2d3f  ffd5                 call ebp
// 007b2d41  8d4c2438             lea ecx, [esp + 0x38]
// 007b2d45  89442428             mov dword ptr [esp + 0x28], eax
// 007b2d49  e860a01c00           call 0x97cdae
// 007b2d4e  6a00                 push 0
// 007b2d50  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 007b2d58  ff15aca09e00         call dword ptr [0x9ea0ac]
// 007b2d5e  50                   push eax
// 007b2d5f  8d4c243c             lea ecx, [esp + 0x3c]
// 007b2d63  e828a01c00           call 0x97cd90
// 007b2d68  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b2d6c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b2d70  8b2dc8a09e00         mov ebp, dword ptr [0x9ea0c8]
// 007b2d76  51                   push ecx
// 007b2d77  52                   push edx
// 007b2d78  ffd5                 call ebp
// 007b2d7a  89442434             mov dword ptr [esp + 0x34], eax
// 007b2d7e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007b2d85  85c0                 test eax, eax
// 007b2d87  7403                 je 0x7b2d8c
// 007b2d89  8b4004               mov eax, dword ptr [eax + 4]
// 007b2d8c  682000cc00           push 0xcc0020
// 007b2d91  6a00                 push 0
// 007b2d93  6a00                 push 0
// 007b2d95  50                   push eax
// 007b2d96  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b2d9a  53                   push ebx
// 007b2d9b  57                   push edi
// 007b2d9c  6a00                 push 0
// 007b2d9e  6a00                 push 0
// 007b2da0  50                   push eax
// 007b2da1  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 007b2da7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b2dab  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b2daf  51                   push ecx
// 007b2db0  52                   push edx
// 007b2db1  ffd5                 call ebp
// 007b2db3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007b2dba  85c0                 test eax, eax
// 007b2dbc  7403                 je 0x7b2dc1
// 007b2dbe  8b4004               mov eax, dword ptr [eax + 4]
// 007b2dc1  682000cc00           push 0xcc0020
// 007b2dc6  6a00                 push 0
// 007b2dc8  6a00                 push 0
// 007b2dca  50                   push eax
// 007b2dcb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b2dcf  53                   push ebx
// 007b2dd0  57                   push edi
// 007b2dd1  6a00                 push 0
// 007b2dd3  6a00                 push 0
// 007b2dd5  50                   push eax
// 007b2dd6  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 007b2ddc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b2de0  99                   cdq 
// 007b2de1  f7fe                 idiv esi
// 007b2de3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b2de7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b2deb  51                   push ecx
// 007b2dec  52                   push edx
// 007b2ded  89442438             mov dword ptr [esp + 0x38], eax
// 007b2df1  ffd5                 call ebp
// 007b2df3  83fe01               cmp esi, 1
// 007b2df6  0f8ec6000000         jle 0x7b2ec2
// 007b2dfc  8d46ff               lea eax, [esi - 1]
// 007b2dff  c7842484000000ff000000 mov dword ptr [esp + 0x84], 0xff
// 007b2e0a  8944241c             mov dword ptr [esp + 0x1c], eax
// 007b2e0e  8bff                 mov edi, edi
// 007b2e10  ff1524a39e00         call dword ptr [0x9ea324]
// 007b2e16  8be8                 mov ebp, eax
// 007b2e18  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007b2e1f  99                   cdq 
// 007b2e20  f7fe                 idiv esi
// 007b2e22  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007b2e29  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b2e2d  50                   push eax
// 007b2e2e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b2e32  51                   push ecx
// 007b2e33  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b2e37  53                   push ebx
// 007b2e38  57                   push edi
// 007b2e39  52                   push edx
// 007b2e3a  50                   push eax
// 007b2e3b  e830acffff           call 0x7ada70
// 007b2e40  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007b2e47  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 007b2e4e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b2e52  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007b2e59  2b8c2488000000       sub ecx, dword ptr [esp + 0x88]
// 007b2e60  682000cc00           push 0xcc0020
// 007b2e65  6a00                 push 0
// 007b2e67  6a00                 push 0
// 007b2e69  52                   push edx
// 007b2e6a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007b2e71  50                   push eax
// 007b2e72  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007b2e79  51                   push ecx
// 007b2e7a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007b2e81  50                   push eax
// 007b2e82  8b4204               mov eax, dword ptr [edx + 4]
// 007b2e85  51                   push ecx
// 007b2e86  50                   push eax
// 007b2e87  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 007b2e8d  ff1524a39e00         call dword ptr [0x9ea324]
// 007b2e93  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b2e97  2bc5                 sub eax, ebp
// 007b2e99  3bc1                 cmp eax, ecx
// 007b2e9b  7309                 jae 0x7b2ea6
// 007b2e9d  2bc8                 sub ecx, eax
// 007b2e9f  51                   push ecx
// 007b2ea0  ff1588a29e00         call dword ptr [0x9ea288]
// 007b2ea6  81842484000000ff000000 add dword ptr [esp + 0x84], 0xff
// 007b2eb1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 007b2eb6  0f8554ffffff         jne 0x7b2e10
// 007b2ebc  8b2dc8a09e00         mov ebp, dword ptr [0x9ea0c8]
// 007b2ec2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b2ec6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b2eca  51                   push ecx
// 007b2ecb  52                   push edx
// 007b2ecc  ffd5                 call ebp
// 007b2ece  8b442420             mov eax, dword ptr [esp + 0x20]
// 007b2ed2  8b35d4a09e00         mov esi, dword ptr [0x9ea0d4]
// 007b2ed8  50                   push eax
// 007b2ed9  ffd6                 call esi
// 007b2edb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b2edf  51                   push ecx
// 007b2ee0  ffd6                 call esi
// 007b2ee2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b2ee6  52                   push edx
// 007b2ee7  ffd6                 call esi
// 007b2ee9  8d4c2438             lea ecx, [esp + 0x38]
// 007b2eed  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 007b2ef5  e8ae9e1c00           call 0x97cda8
// 007b2efa  e90c010000           jmp 0x7b300b
// 007b2eff  33ff                 xor edi, edi
// 007b2f01  85f6                 test esi, esi
// 007b2f03  0f8e02010000         jle 0x7b300b
// 007b2f09  99                   cdq 
// 007b2f0a  f7fe                 idiv esi
// 007b2f0c  8be8                 mov ebp, eax
// 007b2f0e  8bff                 mov edi, edi
// 007b2f10  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007b2f17  2b8c248c000000       sub ecx, dword ptr [esp + 0x8c]
// 007b2f1e  47                   inc edi
// 007b2f1f  8bc7                 mov eax, edi
// 007b2f21  0fafc1               imul eax, ecx
// 007b2f24  99                   cdq 
// 007b2f25  f7fe                 idiv esi
// 007b2f27  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007b2f2e  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 007b2f35  2b942488000000       sub edx, dword ptr [esp + 0x88]
// 007b2f3c  2bc8                 sub ecx, eax
// 007b2f3e  85db                 test ebx, ebx
// 007b2f40  7403                 je 0x7b2f45
// 007b2f42  8b5b04               mov ebx, dword ptr [ebx + 4]
// 007b2f45  682000cc00           push 0xcc0020
// 007b2f4a  51                   push ecx
// 007b2f4b  6a00                 push 0
// 007b2f4d  53                   push ebx
// 007b2f4e  50                   push eax
// 007b2f4f  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007b2f56  8b4804               mov ecx, dword ptr [eax + 4]
// 007b2f59  52                   push edx
// 007b2f5a  6a00                 push 0
// 007b2f5c  6a00                 push 0
// 007b2f5e  51                   push ecx
// 007b2f5f  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 007b2f65  55                   push ebp
// 007b2f66  ff1588a29e00         call dword ptr [0x9ea288]
// 007b2f6c  3bfe                 cmp edi, esi
// 007b2f6e  7ca0                 jl 0x7b2f10
// 007b2f70  e996000000           jmp 0x7b300b
// 007b2f75  85f6                 test esi, esi
// 007b2f77  0f8e8e000000         jle 0x7b300b
// 007b2f7d  99                   cdq 
// 007b2f7e  f7fe                 idiv esi
// 007b2f80  bd01000000           mov ebp, 1
// 007b2f85  89b42498000000       mov dword ptr [esp + 0x98], esi
// 007b2f8c  89442434             mov dword ptr [esp + 0x34], eax
// 007b2f90  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 007b2f97  8bc7                 mov eax, edi
// 007b2f99  2b842488000000       sub eax, dword ptr [esp + 0x88]
// 007b2fa0  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 007b2fa7  0fafc5               imul eax, ebp
// 007b2faa  99                   cdq 
// 007b2fab  f7fe                 idiv esi
// 007b2fad  8bcf                 mov ecx, edi
// 007b2faf  2bc8                 sub ecx, eax
// 007b2fb1  8bc3                 mov eax, ebx
// 007b2fb3  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 007b2fba  2bf9                 sub edi, ecx
// 007b2fbc  0fafc5               imul eax, ebp
// 007b2fbf  99                   cdq 
// 007b2fc0  f7fe                 idiv esi
// 007b2fc2  8bd3                 mov edx, ebx
// 007b2fc4  2bd0                 sub edx, eax
// 007b2fc6  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007b2fcd  2bda                 sub ebx, edx
// 007b2fcf  85c0                 test eax, eax
// 007b2fd1  7403                 je 0x7b2fd6
// 007b2fd3  8b4004               mov eax, dword ptr [eax + 4]
// 007b2fd6  682000cc00           push 0xcc0020
// 007b2fdb  52                   push edx
// 007b2fdc  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007b2fe3  51                   push ecx
// 007b2fe4  50                   push eax
// 007b2fe5  8b4204               mov eax, dword ptr [edx + 4]
// 007b2fe8  53                   push ebx
// 007b2fe9  57                   push edi
// 007b2fea  6a00                 push 0
// 007b2fec  6a00                 push 0
// 007b2fee  50                   push eax
// 007b2fef  ff15c0a09e00         call dword ptr [0x9ea0c0]
// 007b2ff5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b2ff9  51                   push ecx
// 007b2ffa  ff1588a29e00         call dword ptr [0x9ea288]
// 007b3000  45                   inc ebp
// 007b3001  83ac249800000001     sub dword ptr [esp + 0x98], 1
// 007b3009  7585                 jne 0x7b2f90
// 007b300b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b300f  64890d00000000       mov dword ptr fs:[0], ecx
// 007b3016  59                   pop ecx
// 007b3017  5f                   pop edi
// 007b3018  5e                   pop esi
// 007b3019  5d                   pop ebp
// 007b301a  5b                   pop ebx
// 007b301b  83c468               add esp, 0x68
// 007b301e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Animate@CXTPPaintManager@@UAEXPAVCDC@@0VCRect@@W4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp