// roc 2012-06 00a5f0d0  unit: CXTColorHex  size: 2261 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5f0d0
//
// 00a5f0d0  83ec40               sub esp, 0x40
// 00a5f0d3  53                   push ebx
// 00a5f0d4  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 00a5f0d7  55                   push ebp
// 00a5f0d8  8b696c               mov ebp, dword ptr [ecx + 0x6c]
// 00a5f0db  56                   push esi
// 00a5f0dc  8b35c020b200         mov esi, dword ptr [0xb220c0]
// 00a5f0e2  57                   push edi
// 00a5f0e3  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00a5f0e7  83eb02               sub ebx, 2
// 00a5f0ea  4d                   dec ebp
// 00a5f0eb  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f0f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f0f7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f0fa  6a00                 push 0
// 00a5f0fc  03c5                 add eax, ebp
// 00a5f0fe  50                   push eax
// 00a5f0ff  53                   push ebx
// 00a5f100  51                   push ecx
// 00a5f101  ffd6                 call esi
// 00a5f103  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f107  40                   inc eax
// 00a5f108  83f80b               cmp eax, 0xb
// 00a5f10b  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f10f  7ce2                 jl 0xa5f0f3
// 00a5f111  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f114  6a00                 push 0
// 00a5f116  8d450b               lea eax, [ebp + 0xb]
// 00a5f119  8d4b01               lea ecx, [ebx + 1]
// 00a5f11c  50                   push eax
// 00a5f11d  51                   push ecx
// 00a5f11e  52                   push edx
// 00a5f11f  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a5f123  ffd6                 call esi
// 00a5f125  6a00                 push 0
// 00a5f127  8d450b               lea eax, [ebp + 0xb]
// 00a5f12a  50                   push eax
// 00a5f12b  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f12e  8d4b02               lea ecx, [ebx + 2]
// 00a5f131  51                   push ecx
// 00a5f132  50                   push eax
// 00a5f133  ffd6                 call esi
// 00a5f135  6a00                 push 0
// 00a5f137  8d450c               lea eax, [ebp + 0xc]
// 00a5f13a  50                   push eax
// 00a5f13b  8d4b03               lea ecx, [ebx + 3]
// 00a5f13e  51                   push ecx
// 00a5f13f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f142  51                   push ecx
// 00a5f143  ffd6                 call esi
// 00a5f145  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f148  6a00                 push 0
// 00a5f14a  8d450c               lea eax, [ebp + 0xc]
// 00a5f14d  8d4b04               lea ecx, [ebx + 4]
// 00a5f150  50                   push eax
// 00a5f151  51                   push ecx
// 00a5f152  52                   push edx
// 00a5f153  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a5f157  ffd6                 call esi
// 00a5f159  6a00                 push 0
// 00a5f15b  8d450d               lea eax, [ebp + 0xd]
// 00a5f15e  50                   push eax
// 00a5f15f  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f162  8d4b05               lea ecx, [ebx + 5]
// 00a5f165  51                   push ecx
// 00a5f166  50                   push eax
// 00a5f167  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a5f16b  ffd6                 call esi
// 00a5f16d  6a00                 push 0
// 00a5f16f  8d450d               lea eax, [ebp + 0xd]
// 00a5f172  8d4b06               lea ecx, [ebx + 6]
// 00a5f175  50                   push eax
// 00a5f176  51                   push ecx
// 00a5f177  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a5f17b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f17e  51                   push ecx
// 00a5f17f  ffd6                 call esi
// 00a5f181  8d5307               lea edx, [ebx + 7]
// 00a5f184  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f18c  89542414             mov dword ptr [esp + 0x14], edx
// 00a5f190  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5f194  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f197  6a00                 push 0
// 00a5f199  8d450e               lea eax, [ebp + 0xe]
// 00a5f19c  50                   push eax
// 00a5f19d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5f1a1  03c1                 add eax, ecx
// 00a5f1a3  50                   push eax
// 00a5f1a4  52                   push edx
// 00a5f1a5  ffd6                 call esi
// 00a5f1a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f1ab  40                   inc eax
// 00a5f1ac  83f805               cmp eax, 5
// 00a5f1af  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f1b3  7cdb                 jl 0xa5f190
// 00a5f1b5  6a00                 push 0
// 00a5f1b7  8d4d0d               lea ecx, [ebp + 0xd]
// 00a5f1ba  51                   push ecx
// 00a5f1bb  8d430c               lea eax, [ebx + 0xc]
// 00a5f1be  50                   push eax
// 00a5f1bf  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f1c2  50                   push eax
// 00a5f1c3  ffd6                 call esi
// 00a5f1c5  6a00                 push 0
// 00a5f1c7  8d4d0d               lea ecx, [ebp + 0xd]
// 00a5f1ca  51                   push ecx
// 00a5f1cb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f1ce  8d430d               lea eax, [ebx + 0xd]
// 00a5f1d1  50                   push eax
// 00a5f1d2  51                   push ecx
// 00a5f1d3  ffd6                 call esi
// 00a5f1d5  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f1d8  6a00                 push 0
// 00a5f1da  8d4d0c               lea ecx, [ebp + 0xc]
// 00a5f1dd  51                   push ecx
// 00a5f1de  8d430e               lea eax, [ebx + 0xe]
// 00a5f1e1  50                   push eax
// 00a5f1e2  52                   push edx
// 00a5f1e3  ffd6                 call esi
// 00a5f1e5  6a00                 push 0
// 00a5f1e7  8d4d0c               lea ecx, [ebp + 0xc]
// 00a5f1ea  51                   push ecx
// 00a5f1eb  8d430f               lea eax, [ebx + 0xf]
// 00a5f1ee  50                   push eax
// 00a5f1ef  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f1f2  50                   push eax
// 00a5f1f3  ffd6                 call esi
// 00a5f1f5  6a00                 push 0
// 00a5f1f7  8d4d0b               lea ecx, [ebp + 0xb]
// 00a5f1fa  51                   push ecx
// 00a5f1fb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f1fe  8d4310               lea eax, [ebx + 0x10]
// 00a5f201  50                   push eax
// 00a5f202  51                   push ecx
// 00a5f203  ffd6                 call esi
// 00a5f205  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f208  6a00                 push 0
// 00a5f20a  8d4d0b               lea ecx, [ebp + 0xb]
// 00a5f20d  51                   push ecx
// 00a5f20e  8d4311               lea eax, [ebx + 0x11]
// 00a5f211  50                   push eax
// 00a5f212  52                   push edx
// 00a5f213  ffd6                 call esi
// 00a5f215  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f21d  8d4900               lea ecx, [ecx]
// 00a5f220  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f224  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f227  6a00                 push 0
// 00a5f229  03c5                 add eax, ebp
// 00a5f22b  50                   push eax
// 00a5f22c  8d4312               lea eax, [ebx + 0x12]
// 00a5f22f  50                   push eax
// 00a5f230  51                   push ecx
// 00a5f231  ffd6                 call esi
// 00a5f233  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f237  40                   inc eax
// 00a5f238  83f80b               cmp eax, 0xb
// 00a5f23b  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f23f  7cdf                 jl 0xa5f220
// 00a5f241  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f244  6a00                 push 0
// 00a5f246  8d45ff               lea eax, [ebp - 1]
// 00a5f249  50                   push eax
// 00a5f24a  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a5f24e  8d4310               lea eax, [ebx + 0x10]
// 00a5f251  50                   push eax
// 00a5f252  52                   push edx
// 00a5f253  ffd6                 call esi
// 00a5f255  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a5f259  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f25c  6a00                 push 0
// 00a5f25e  50                   push eax
// 00a5f25f  8d4311               lea eax, [ebx + 0x11]
// 00a5f262  50                   push eax
// 00a5f263  51                   push ecx
// 00a5f264  ffd6                 call esi
// 00a5f266  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f269  6a00                 push 0
// 00a5f26b  8d45fe               lea eax, [ebp - 2]
// 00a5f26e  50                   push eax
// 00a5f26f  8d430e               lea eax, [ebx + 0xe]
// 00a5f272  50                   push eax
// 00a5f273  52                   push edx
// 00a5f274  ffd6                 call esi
// 00a5f276  6a00                 push 0
// 00a5f278  8d45fe               lea eax, [ebp - 2]
// 00a5f27b  50                   push eax
// 00a5f27c  8d430f               lea eax, [ebx + 0xf]
// 00a5f27f  50                   push eax
// 00a5f280  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f283  50                   push eax
// 00a5f284  ffd6                 call esi
// 00a5f286  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f289  6a00                 push 0
// 00a5f28b  8d45fd               lea eax, [ebp - 3]
// 00a5f28e  50                   push eax
// 00a5f28f  8d430c               lea eax, [ebx + 0xc]
// 00a5f292  50                   push eax
// 00a5f293  51                   push ecx
// 00a5f294  ffd6                 call esi
// 00a5f296  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f299  6a00                 push 0
// 00a5f29b  8d45fd               lea eax, [ebp - 3]
// 00a5f29e  50                   push eax
// 00a5f29f  8d430d               lea eax, [ebx + 0xd]
// 00a5f2a2  50                   push eax
// 00a5f2a3  52                   push edx
// 00a5f2a4  ffd6                 call esi
// 00a5f2a6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f2ae  8bff                 mov edi, edi
// 00a5f2b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5f2b4  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f2b7  6a00                 push 0
// 00a5f2b9  8d45fc               lea eax, [ebp - 4]
// 00a5f2bc  50                   push eax
// 00a5f2bd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5f2c1  03c1                 add eax, ecx
// 00a5f2c3  50                   push eax
// 00a5f2c4  52                   push edx
// 00a5f2c5  ffd6                 call esi
// 00a5f2c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f2cb  40                   inc eax
// 00a5f2cc  83f805               cmp eax, 5
// 00a5f2cf  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f2d3  7cdb                 jl 0xa5f2b0
// 00a5f2d5  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f2d8  6a00                 push 0
// 00a5f2da  8d45fd               lea eax, [ebp - 3]
// 00a5f2dd  50                   push eax
// 00a5f2de  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5f2e2  50                   push eax
// 00a5f2e3  51                   push ecx
// 00a5f2e4  ffd6                 call esi
// 00a5f2e6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5f2ea  6a00                 push 0
// 00a5f2ec  8d45fd               lea eax, [ebp - 3]
// 00a5f2ef  50                   push eax
// 00a5f2f0  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f2f3  52                   push edx
// 00a5f2f4  50                   push eax
// 00a5f2f5  ffd6                 call esi
// 00a5f2f7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f2fa  6a00                 push 0
// 00a5f2fc  8d45fe               lea eax, [ebp - 2]
// 00a5f2ff  50                   push eax
// 00a5f300  8d4303               lea eax, [ebx + 3]
// 00a5f303  50                   push eax
// 00a5f304  51                   push ecx
// 00a5f305  ffd6                 call esi
// 00a5f307  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a5f30b  6a00                 push 0
// 00a5f30d  8d45fe               lea eax, [ebp - 2]
// 00a5f310  50                   push eax
// 00a5f311  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f314  52                   push edx
// 00a5f315  50                   push eax
// 00a5f316  ffd6                 call esi
// 00a5f318  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5f31c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a5f320  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f323  6a00                 push 0
// 00a5f325  51                   push ecx
// 00a5f326  52                   push edx
// 00a5f327  50                   push eax
// 00a5f328  ffd6                 call esi
// 00a5f32a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5f32e  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f331  6a00                 push 0
// 00a5f333  51                   push ecx
// 00a5f334  8d4302               lea eax, [ebx + 2]
// 00a5f337  50                   push eax
// 00a5f338  52                   push edx
// 00a5f339  ffd6                 call esi
// 00a5f33b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f343  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f347  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f34a  6a00                 push 0
// 00a5f34c  8d4c2802             lea ecx, [eax + ebp + 2]
// 00a5f350  51                   push ecx
// 00a5f351  8d4303               lea eax, [ebx + 3]
// 00a5f354  50                   push eax
// 00a5f355  52                   push edx
// 00a5f356  ffd6                 call esi
// 00a5f358  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f35c  40                   inc eax
// 00a5f35d  83f807               cmp eax, 7
// 00a5f360  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f364  7cdd                 jl 0xa5f343
// 00a5f366  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f369  6a00                 push 0
// 00a5f36b  8d4509               lea eax, [ebp + 9]
// 00a5f36e  50                   push eax
// 00a5f36f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5f373  50                   push eax
// 00a5f374  51                   push ecx
// 00a5f375  ffd6                 call esi
// 00a5f377  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5f37b  6a00                 push 0
// 00a5f37d  8d4509               lea eax, [ebp + 9]
// 00a5f380  50                   push eax
// 00a5f381  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f384  52                   push edx
// 00a5f385  50                   push eax
// 00a5f386  ffd6                 call esi
// 00a5f388  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5f38c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f38f  6a00                 push 0
// 00a5f391  8d450a               lea eax, [ebp + 0xa]
// 00a5f394  50                   push eax
// 00a5f395  51                   push ecx
// 00a5f396  52                   push edx
// 00a5f397  ffd6                 call esi
// 00a5f399  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f39c  6a00                 push 0
// 00a5f39e  8d450a               lea eax, [ebp + 0xa]
// 00a5f3a1  50                   push eax
// 00a5f3a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5f3a6  50                   push eax
// 00a5f3a7  51                   push ecx
// 00a5f3a8  ffd6                 call esi
// 00a5f3aa  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f3b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5f3b6  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f3b9  6a00                 push 0
// 00a5f3bb  8d450b               lea eax, [ebp + 0xb]
// 00a5f3be  50                   push eax
// 00a5f3bf  8d441308             lea eax, [ebx + edx + 8]
// 00a5f3c3  50                   push eax
// 00a5f3c4  51                   push ecx
// 00a5f3c5  ffd6                 call esi
// 00a5f3c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f3cb  40                   inc eax
// 00a5f3cc  83f803               cmp eax, 3
// 00a5f3cf  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f3d3  7cdd                 jl 0xa5f3b2
// 00a5f3d5  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f3d8  6a00                 push 0
// 00a5f3da  8d4d0a               lea ecx, [ebp + 0xa]
// 00a5f3dd  51                   push ecx
// 00a5f3de  8d430b               lea eax, [ebx + 0xb]
// 00a5f3e1  50                   push eax
// 00a5f3e2  52                   push edx
// 00a5f3e3  ffd6                 call esi
// 00a5f3e5  6a00                 push 0
// 00a5f3e7  8d450a               lea eax, [ebp + 0xa]
// 00a5f3ea  50                   push eax
// 00a5f3eb  8d430c               lea eax, [ebx + 0xc]
// 00a5f3ee  50                   push eax
// 00a5f3ef  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f3f2  50                   push eax
// 00a5f3f3  ffd6                 call esi
// 00a5f3f5  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f3f8  6a00                 push 0
// 00a5f3fa  8d4509               lea eax, [ebp + 9]
// 00a5f3fd  50                   push eax
// 00a5f3fe  8d430d               lea eax, [ebx + 0xd]
// 00a5f401  50                   push eax
// 00a5f402  51                   push ecx
// 00a5f403  ffd6                 call esi
// 00a5f405  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f408  6a00                 push 0
// 00a5f40a  8d4509               lea eax, [ebp + 9]
// 00a5f40d  50                   push eax
// 00a5f40e  8d430e               lea eax, [ebx + 0xe]
// 00a5f411  50                   push eax
// 00a5f412  52                   push edx
// 00a5f413  ffd6                 call esi
// 00a5f415  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f41d  8d4900               lea ecx, [ecx]
// 00a5f420  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f424  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f427  6a00                 push 0
// 00a5f429  8d4c2802             lea ecx, [eax + ebp + 2]
// 00a5f42d  51                   push ecx
// 00a5f42e  8d430f               lea eax, [ebx + 0xf]
// 00a5f431  50                   push eax
// 00a5f432  52                   push edx
// 00a5f433  ffd6                 call esi
// 00a5f435  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f439  40                   inc eax
// 00a5f43a  83f807               cmp eax, 7
// 00a5f43d  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f441  7cdd                 jl 0xa5f420
// 00a5f443  6a00                 push 0
// 00a5f445  8d4501               lea eax, [ebp + 1]
// 00a5f448  50                   push eax
// 00a5f449  8d430d               lea eax, [ebx + 0xd]
// 00a5f44c  50                   push eax
// 00a5f44d  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f450  50                   push eax
// 00a5f451  ffd6                 call esi
// 00a5f453  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f456  6a00                 push 0
// 00a5f458  8d4501               lea eax, [ebp + 1]
// 00a5f45b  50                   push eax
// 00a5f45c  8d430e               lea eax, [ebx + 0xe]
// 00a5f45f  50                   push eax
// 00a5f460  51                   push ecx
// 00a5f461  ffd6                 call esi
// 00a5f463  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f466  6a00                 push 0
// 00a5f468  55                   push ebp
// 00a5f469  8d430b               lea eax, [ebx + 0xb]
// 00a5f46c  50                   push eax
// 00a5f46d  52                   push edx
// 00a5f46e  ffd6                 call esi
// 00a5f470  6a00                 push 0
// 00a5f472  55                   push ebp
// 00a5f473  8d430c               lea eax, [ebx + 0xc]
// 00a5f476  50                   push eax
// 00a5f477  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f47a  50                   push eax
// 00a5f47b  ffd6                 call esi
// 00a5f47d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f485  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5f489  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5f48d  6a00                 push 0
// 00a5f48f  51                   push ecx
// 00a5f490  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f493  8d441308             lea eax, [ebx + edx + 8]
// 00a5f497  50                   push eax
// 00a5f498  51                   push ecx
// 00a5f499  ffd6                 call esi
// 00a5f49b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f49f  40                   inc eax
// 00a5f4a0  83f803               cmp eax, 3
// 00a5f4a3  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f4a7  7cdc                 jl 0xa5f485
// 00a5f4a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5f4ad  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f4b0  6a00                 push 0
// 00a5f4b2  55                   push ebp
// 00a5f4b3  52                   push edx
// 00a5f4b4  50                   push eax
// 00a5f4b5  ffd6                 call esi
// 00a5f4b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5f4bb  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f4be  6a00                 push 0
// 00a5f4c0  55                   push ebp
// 00a5f4c1  51                   push ecx
// 00a5f4c2  52                   push edx
// 00a5f4c3  ffd6                 call esi
// 00a5f4c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a5f4c9  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f4cc  6a00                 push 0
// 00a5f4ce  8d5d01               lea ebx, [ebp + 1]
// 00a5f4d1  53                   push ebx
// 00a5f4d2  50                   push eax
// 00a5f4d3  51                   push ecx
// 00a5f4d4  ffd6                 call esi
// 00a5f4d6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5f4da  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f4dd  6a00                 push 0
// 00a5f4df  53                   push ebx
// 00a5f4e0  52                   push edx
// 00a5f4e1  50                   push eax
// 00a5f4e2  ffd6                 call esi
// 00a5f4e4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00a5f4e8  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a5f4ec  c74424240b000000     mov dword ptr [esp + 0x24], 0xb
// 00a5f4f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5f4f8  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f4fb  68ffffff00           push 0xffffff
// 00a5f500  51                   push ecx
// 00a5f501  53                   push ebx
// 00a5f502  52                   push edx
// 00a5f503  ffd6                 call esi
// 00a5f505  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a5f509  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f50c  68ffffff00           push 0xffffff
// 00a5f511  50                   push eax
// 00a5f512  8d4301               lea eax, [ebx + 1]
// 00a5f515  50                   push eax
// 00a5f516  51                   push ecx
// 00a5f517  ffd6                 call esi
// 00a5f519  b801000000           mov eax, 1
// 00a5f51e  01442420             add dword ptr [esp + 0x20], eax
// 00a5f522  29442424             sub dword ptr [esp + 0x24], eax
// 00a5f526  75cc                 jne 0xa5f4f4
// 00a5f528  8d5302               lea edx, [ebx + 2]
// 00a5f52b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f533  89542444             mov dword ptr [esp + 0x44], edx
// 00a5f537  eb07                 jmp 0xa5f540
// 00a5f539  8da42400000000       lea esp, [esp]
// 00a5f540  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f544  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a5f548  68ffffff00           push 0xffffff
// 00a5f54d  8d4c2809             lea ecx, [eax + ebp + 9]
// 00a5f551  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f554  51                   push ecx
// 00a5f555  52                   push edx
// 00a5f556  50                   push eax
// 00a5f557  ffd6                 call esi
// 00a5f559  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f55d  40                   inc eax
// 00a5f55e  83f803               cmp eax, 3
// 00a5f561  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f565  7cd9                 jl 0xa5f540
// 00a5f567  68ffffff00           push 0xffffff
// 00a5f56c  8d4d0a               lea ecx, [ebp + 0xa]
// 00a5f56f  51                   push ecx
// 00a5f570  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f573  8d4303               lea eax, [ebx + 3]
// 00a5f576  50                   push eax
// 00a5f577  51                   push ecx
// 00a5f578  89442450             mov dword ptr [esp + 0x50], eax
// 00a5f57c  ffd6                 call esi
// 00a5f57e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a5f582  68ffffff00           push 0xffffff
// 00a5f587  8d450b               lea eax, [ebp + 0xb]
// 00a5f58a  50                   push eax
// 00a5f58b  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f58e  52                   push edx
// 00a5f58f  50                   push eax
// 00a5f590  ffd6                 call esi
// 00a5f592  8d4b04               lea ecx, [ebx + 4]
// 00a5f595  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f59d  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a5f5a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5f5a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5f5a9  68ffffff00           push 0xffffff
// 00a5f5ae  8d442a0a             lea eax, [edx + ebp + 0xa]
// 00a5f5b2  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f5b5  50                   push eax
// 00a5f5b6  51                   push ecx
// 00a5f5b7  52                   push edx
// 00a5f5b8  ffd6                 call esi
// 00a5f5ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f5be  40                   inc eax
// 00a5f5bf  83f803               cmp eax, 3
// 00a5f5c2  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f5c6  7cd9                 jl 0xa5f5a1
// 00a5f5c8  68ffffff00           push 0xffffff
// 00a5f5cd  8d4d0b               lea ecx, [ebp + 0xb]
// 00a5f5d0  8d4305               lea eax, [ebx + 5]
// 00a5f5d3  51                   push ecx
// 00a5f5d4  50                   push eax
// 00a5f5d5  89442428             mov dword ptr [esp + 0x28], eax
// 00a5f5d9  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f5dc  50                   push eax
// 00a5f5dd  ffd6                 call esi
// 00a5f5df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a5f5e3  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f5e6  68ffffff00           push 0xffffff
// 00a5f5eb  8d450c               lea eax, [ebp + 0xc]
// 00a5f5ee  50                   push eax
// 00a5f5ef  51                   push ecx
// 00a5f5f0  52                   push edx
// 00a5f5f1  ffd6                 call esi
// 00a5f5f3  8d4306               lea eax, [ebx + 6]
// 00a5f5f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f5fe  89442418             mov dword ptr [esp + 0x18], eax
// 00a5f602  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5f606  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5f60a  68ffffff00           push 0xffffff
// 00a5f60f  8d54290b             lea edx, [ecx + ebp + 0xb]
// 00a5f613  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f616  52                   push edx
// 00a5f617  50                   push eax
// 00a5f618  51                   push ecx
// 00a5f619  ffd6                 call esi
// 00a5f61b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f61f  40                   inc eax
// 00a5f620  83f803               cmp eax, 3
// 00a5f623  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f627  7cd9                 jl 0xa5f602
// 00a5f629  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f62c  68ffffff00           push 0xffffff
// 00a5f631  8d4d0c               lea ecx, [ebp + 0xc]
// 00a5f634  8d4307               lea eax, [ebx + 7]
// 00a5f637  51                   push ecx
// 00a5f638  50                   push eax
// 00a5f639  52                   push edx
// 00a5f63a  89442424             mov dword ptr [esp + 0x24], eax
// 00a5f63e  ffd6                 call esi
// 00a5f640  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f643  68ffffff00           push 0xffffff
// 00a5f648  8d450d               lea eax, [ebp + 0xd]
// 00a5f64b  50                   push eax
// 00a5f64c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5f650  50                   push eax
// 00a5f651  51                   push ecx
// 00a5f652  ffd6                 call esi
// 00a5f654  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f657  68ffffff00           push 0xffffff
// 00a5f65c  8d4d0c               lea ecx, [ebp + 0xc]
// 00a5f65f  8d4308               lea eax, [ebx + 8]
// 00a5f662  51                   push ecx
// 00a5f663  50                   push eax
// 00a5f664  52                   push edx
// 00a5f665  89442434             mov dword ptr [esp + 0x34], eax
// 00a5f669  ffd6                 call esi
// 00a5f66b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f66e  68ffffff00           push 0xffffff
// 00a5f673  8d450d               lea eax, [ebp + 0xd]
// 00a5f676  50                   push eax
// 00a5f677  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5f67b  50                   push eax
// 00a5f67c  51                   push ecx
// 00a5f67d  ffd6                 call esi
// 00a5f67f  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f682  68ffffff00           push 0xffffff
// 00a5f687  8d4d0c               lea ecx, [ebp + 0xc]
// 00a5f68a  8d4309               lea eax, [ebx + 9]
// 00a5f68d  51                   push ecx
// 00a5f68e  50                   push eax
// 00a5f68f  52                   push edx
// 00a5f690  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a5f694  ffd6                 call esi
// 00a5f696  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f699  68ffffff00           push 0xffffff
// 00a5f69e  8d450d               lea eax, [ebp + 0xd]
// 00a5f6a1  50                   push eax
// 00a5f6a2  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a5f6a6  50                   push eax
// 00a5f6a7  51                   push ecx
// 00a5f6a8  ffd6                 call esi
// 00a5f6aa  8d530a               lea edx, [ebx + 0xa]
// 00a5f6ad  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f6b5  89542438             mov dword ptr [esp + 0x38], edx
// 00a5f6b9  8da42400000000       lea esp, [esp]
// 00a5f6c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f6c4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a5f6c8  68ffffff00           push 0xffffff
// 00a5f6cd  8d4c280b             lea ecx, [eax + ebp + 0xb]
// 00a5f6d1  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f6d4  51                   push ecx
// 00a5f6d5  52                   push edx
// 00a5f6d6  50                   push eax
// 00a5f6d7  ffd6                 call esi
// 00a5f6d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f6dd  40                   inc eax
// 00a5f6de  83f803               cmp eax, 3
// 00a5f6e1  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f6e5  7cd9                 jl 0xa5f6c0
// 00a5f6e7  68ffffff00           push 0xffffff
// 00a5f6ec  8d4d0b               lea ecx, [ebp + 0xb]
// 00a5f6ef  51                   push ecx
// 00a5f6f0  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f6f3  8d430b               lea eax, [ebx + 0xb]
// 00a5f6f6  50                   push eax
// 00a5f6f7  51                   push ecx
// 00a5f6f8  89442444             mov dword ptr [esp + 0x44], eax
// 00a5f6fc  ffd6                 call esi
// 00a5f6fe  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a5f702  68ffffff00           push 0xffffff
// 00a5f707  8d450c               lea eax, [ebp + 0xc]
// 00a5f70a  50                   push eax
// 00a5f70b  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f70e  52                   push edx
// 00a5f70f  50                   push eax
// 00a5f710  ffd6                 call esi
// 00a5f712  8d4b0c               lea ecx, [ebx + 0xc]
// 00a5f715  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f71d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a5f721  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5f725  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5f729  68ffffff00           push 0xffffff
// 00a5f72e  8d442a0a             lea eax, [edx + ebp + 0xa]
// 00a5f732  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f735  50                   push eax
// 00a5f736  51                   push ecx
// 00a5f737  52                   push edx
// 00a5f738  ffd6                 call esi
// 00a5f73a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f73e  40                   inc eax
// 00a5f73f  83f803               cmp eax, 3
// 00a5f742  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f746  7cd9                 jl 0xa5f721
// 00a5f748  68ffffff00           push 0xffffff
// 00a5f74d  8d4d0a               lea ecx, [ebp + 0xa]
// 00a5f750  8d430d               lea eax, [ebx + 0xd]
// 00a5f753  51                   push ecx
// 00a5f754  50                   push eax
// 00a5f755  89442438             mov dword ptr [esp + 0x38], eax
// 00a5f759  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f75c  50                   push eax
// 00a5f75d  ffd6                 call esi
// 00a5f75f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5f763  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f766  68ffffff00           push 0xffffff
// 00a5f76b  8d450b               lea eax, [ebp + 0xb]
// 00a5f76e  50                   push eax
// 00a5f76f  51                   push ecx
// 00a5f770  52                   push edx
// 00a5f771  ffd6                 call esi
// 00a5f773  8d430e               lea eax, [ebx + 0xe]
// 00a5f776  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5f77e  89442428             mov dword ptr [esp + 0x28], eax
// 00a5f782  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5f786  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5f78a  68ffffff00           push 0xffffff
// 00a5f78f  8d542909             lea edx, [ecx + ebp + 9]
// 00a5f793  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f796  52                   push edx
// 00a5f797  50                   push eax
// 00a5f798  51                   push ecx
// 00a5f799  ffd6                 call esi
// 00a5f79b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5f79f  40                   inc eax
// 00a5f7a0  83f803               cmp eax, 3
// 00a5f7a3  89442410             mov dword ptr [esp + 0x10], eax
// 00a5f7a7  7cd9                 jl 0xa5f782
// 00a5f7a9  8d530f               lea edx, [ebx + 0xf]
// 00a5f7ac  83c310               add ebx, 0x10
// 00a5f7af  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00a5f7b3  89542448             mov dword ptr [esp + 0x48], edx
// 00a5f7b7  8bdd                 mov ebx, ebp
// 00a5f7b9  c74424100b000000     mov dword ptr [esp + 0x10], 0xb
// 00a5f7c1  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a5f7c5  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f7c8  68ffffff00           push 0xffffff
// 00a5f7cd  53                   push ebx
// 00a5f7ce  50                   push eax
// 00a5f7cf  51                   push ecx
// 00a5f7d0  ffd6                 call esi
// 00a5f7d2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a5f7d6  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f7d9  68ffffff00           push 0xffffff
// 00a5f7de  53                   push ebx
// 00a5f7df  52                   push edx
// 00a5f7e0  50                   push eax
// 00a5f7e1  ffd6                 call esi
// 00a5f7e3  43                   inc ebx
// 00a5f7e4  836c241001           sub dword ptr [esp + 0x10], 1
// 00a5f7e9  75d6                 jne 0xa5f7c1
// 00a5f7eb  33db                 xor ebx, ebx
// 00a5f7ed  8d4900               lea ecx, [ecx]
// 00a5f7f0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5f7f4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5f7f8  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f7fb  68ffffff00           push 0xffffff
// 00a5f800  03cb                 add ecx, ebx
// 00a5f802  51                   push ecx
// 00a5f803  52                   push edx
// 00a5f804  50                   push eax
// 00a5f805  ffd6                 call esi
// 00a5f807  43                   inc ebx
// 00a5f808  83fb03               cmp ebx, 3
// 00a5f80b  7ce3                 jl 0xa5f7f0
// 00a5f80d  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00a5f811  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f814  68ffffff00           push 0xffffff
// 00a5f819  55                   push ebp
// 00a5f81a  53                   push ebx
// 00a5f81b  51                   push ecx
// 00a5f81c  ffd6                 call esi
// 00a5f81e  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a5f822  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f825  68ffffff00           push 0xffffff
// 00a5f82a  52                   push edx
// 00a5f82b  53                   push ebx
// 00a5f82c  50                   push eax
// 00a5f82d  ffd6                 call esi
// 00a5f82f  33db                 xor ebx, ebx
// 00a5f831  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a5f835  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f838  68ffffff00           push 0xffffff
// 00a5f83d  8d4c2bfe             lea ecx, [ebx + ebp - 2]
// 00a5f841  51                   push ecx
// 00a5f842  52                   push edx
// 00a5f843  50                   push eax
// 00a5f844  ffd6                 call esi
// 00a5f846  43                   inc ebx
// 00a5f847  83fb03               cmp ebx, 3
// 00a5f84a  7ce5                 jl 0xa5f831
// 00a5f84c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5f850  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00a5f854  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f857  68ffffff00           push 0xffffff
// 00a5f85c  51                   push ecx
// 00a5f85d  53                   push ebx
// 00a5f85e  52                   push edx
// 00a5f85f  ffd6                 call esi
// 00a5f861  68ffffff00           push 0xffffff
// 00a5f866  8d45fe               lea eax, [ebp - 2]
// 00a5f869  50                   push eax
// 00a5f86a  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f86d  53                   push ebx
// 00a5f86e  50                   push eax
// 00a5f86f  ffd6                 call esi
// 00a5f871  33db                 xor ebx, ebx
// 00a5f873  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a5f877  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f87a  68ffffff00           push 0xffffff
// 00a5f87f  8d4c2bfd             lea ecx, [ebx + ebp - 3]
// 00a5f883  51                   push ecx
// 00a5f884  52                   push edx
// 00a5f885  50                   push eax
// 00a5f886  ffd6                 call esi
// 00a5f888  43                   inc ebx
// 00a5f889  83fb03               cmp ebx, 3
// 00a5f88c  7ce5                 jl 0xa5f873
// 00a5f88e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5f892  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f895  68ffffff00           push 0xffffff
// 00a5f89a  8d5dfe               lea ebx, [ebp - 2]
// 00a5f89d  53                   push ebx
// 00a5f89e  51                   push ecx
// 00a5f89f  52                   push edx
// 00a5f8a0  ffd6                 call esi
// 00a5f8a2  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f8a5  68ffffff00           push 0xffffff
// 00a5f8aa  8d45fd               lea eax, [ebp - 3]
// 00a5f8ad  50                   push eax
// 00a5f8ae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5f8b2  50                   push eax
// 00a5f8b3  51                   push ecx
// 00a5f8b4  ffd6                 call esi
// 00a5f8b6  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a5f8ba  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f8bd  68ffffff00           push 0xffffff
// 00a5f8c2  53                   push ebx
// 00a5f8c3  52                   push edx
// 00a5f8c4  50                   push eax
// 00a5f8c5  ffd6                 call esi
// 00a5f8c7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5f8cb  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f8ce  68ffffff00           push 0xffffff
// 00a5f8d3  8d45fd               lea eax, [ebp - 3]
// 00a5f8d6  50                   push eax
// 00a5f8d7  51                   push ecx
// 00a5f8d8  52                   push edx
// 00a5f8d9  ffd6                 call esi
// 00a5f8db  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f8de  68ffffff00           push 0xffffff
// 00a5f8e3  53                   push ebx
// 00a5f8e4  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00a5f8e8  53                   push ebx
// 00a5f8e9  50                   push eax
// 00a5f8ea  ffd6                 call esi
// 00a5f8ec  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f8ef  68ffffff00           push 0xffffff
// 00a5f8f4  8d45fd               lea eax, [ebp - 3]
// 00a5f8f7  50                   push eax
// 00a5f8f8  53                   push ebx
// 00a5f8f9  51                   push ecx
// 00a5f8fa  ffd6                 call esi
// 00a5f8fc  33db                 xor ebx, ebx
// 00a5f8fe  8bff                 mov edi, edi
// 00a5f900  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5f904  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f907  68ffffff00           push 0xffffff
// 00a5f90c  8d542bfd             lea edx, [ebx + ebp - 3]
// 00a5f910  52                   push edx
// 00a5f911  50                   push eax
// 00a5f912  51                   push ecx
// 00a5f913  ffd6                 call esi
// 00a5f915  43                   inc ebx
// 00a5f916  83fb03               cmp ebx, 3
// 00a5f919  7ce5                 jl 0xa5f900
// 00a5f91b  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a5f91f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a5f923  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f926  68ffffff00           push 0xffffff
// 00a5f92b  52                   push edx
// 00a5f92c  53                   push ebx
// 00a5f92d  50                   push eax
// 00a5f92e  ffd6                 call esi
// 00a5f930  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f933  68ffffff00           push 0xffffff
// 00a5f938  8d45fe               lea eax, [ebp - 2]
// 00a5f93b  50                   push eax
// 00a5f93c  53                   push ebx
// 00a5f93d  51                   push ecx
// 00a5f93e  ffd6                 call esi
// 00a5f940  33db                 xor ebx, ebx
// 00a5f942  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a5f946  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f949  68ffffff00           push 0xffffff
// 00a5f94e  8d542bfe             lea edx, [ebx + ebp - 2]
// 00a5f952  52                   push edx
// 00a5f953  50                   push eax
// 00a5f954  51                   push ecx
// 00a5f955  ffd6                 call esi
// 00a5f957  43                   inc ebx
// 00a5f958  83fb03               cmp ebx, 3
// 00a5f95b  7ce5                 jl 0xa5f942
// 00a5f95d  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f960  68ffffff00           push 0xffffff
// 00a5f965  55                   push ebp
// 00a5f966  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00a5f96a  55                   push ebp
// 00a5f96b  52                   push edx
// 00a5f96c  ffd6                 call esi
// 00a5f96e  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a5f972  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f975  68ffffff00           push 0xffffff
// 00a5f97a  53                   push ebx
// 00a5f97b  55                   push ebp
// 00a5f97c  50                   push eax
// 00a5f97d  ffd6                 call esi
// 00a5f97f  33ed                 xor ebp, ebp
// 00a5f981  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a5f985  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f988  68ffffff00           push 0xffffff
// 00a5f98d  8d0c2b               lea ecx, [ebx + ebp]
// 00a5f990  51                   push ecx
// 00a5f991  52                   push edx
// 00a5f992  50                   push eax
// 00a5f993  ffd6                 call esi
// 00a5f995  45                   inc ebp
// 00a5f996  83fd03               cmp ebp, 3
// 00a5f999  7ce6                 jl 0xa5f981
// 00a5f99b  5f                   pop edi
// 00a5f99c  5e                   pop esi
// 00a5f99d  5d                   pop ebp
// 00a5f99e  5b                   pop ebx
// 00a5f99f  83c440               add esp, 0x40
// 00a5f9a2  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?DrawSelectCell@CXTColorHex@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
