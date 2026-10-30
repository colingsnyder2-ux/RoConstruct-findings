// roc 2010-06 0084f0e0  unit: CXTPReportPaintManager  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084f0e0
//
// 0084f0e0  83ec24               sub esp, 0x24
// 0084f0e3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0084f0e8  33c4                 xor eax, esp
// 0084f0ea  89442420             mov dword ptr [esp + 0x20], eax
// 0084f0ee  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0084f0f3  53                   push ebx
// 0084f0f4  55                   push ebp
// 0084f0f5  56                   push esi
// 0084f0f6  8b742434             mov esi, dword ptr [esp + 0x34]
// 0084f0fa  57                   push edi
// 0084f0fb  0f85a9010000         jne 0x84f2aa
// 0084f101  8b81b8020000         mov eax, dword ptr [ecx + 0x2b8]
// 0084f107  48                   dec eax
// 0084f108  83f803               cmp eax, 3
// 0084f10b  0f87da020000         ja 0x84f3eb
// 0084f111  ff248500f48400       jmp dword ptr [eax*4 + 0x84f400]
// 0084f118  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0084f11b  83f8ff               cmp eax, -1
// 0084f11e  7503                 jne 0x84f123
// 0084f120  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0084f123  8b542448             mov edx, dword ptr [esp + 0x48]
// 0084f127  50                   push eax
// 0084f128  8b442444             mov eax, dword ptr [esp + 0x44]
// 0084f12c  2bd0                 sub edx, eax
// 0084f12e  52                   push edx
// 0084f12f  8b542454             mov edx, dword ptr [esp + 0x54]
// 0084f133  52                   push edx
// 0084f134  50                   push eax
// 0084f135  56                   push esi
// 0084f136  e865f7ffff           call 0x84e8a0
// 0084f13b  5f                   pop edi
// 0084f13c  5e                   pop esi
// 0084f13d  5d                   pop ebp
// 0084f13e  5b                   pop ebx
// 0084f13f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084f143  33cc                 xor ecx, esp
// 0084f145  e88aa3f5ff           call 0x7a94d4
// 0084f14a  83c424               add esp, 0x24
// 0084f14d  c21800               ret 0x18
// 0084f150  b8aa000000           mov eax, 0xaa
// 0084f155  ba55000000           mov edx, 0x55
// 0084f15a  6689442420           mov word ptr [esp + 0x20], ax
// 0084f15f  6689442424           mov word ptr [esp + 0x24], ax
// 0084f164  6689442428           mov word ptr [esp + 0x28], ax
// 0084f169  668944242c           mov word ptr [esp + 0x2c], ax
// 0084f16e  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0084f171  6689542422           mov word ptr [esp + 0x22], dx
// 0084f176  6689542426           mov word ptr [esp + 0x26], dx
// 0084f17b  668954242a           mov word ptr [esp + 0x2a], dx
// 0084f180  668954242e           mov word ptr [esp + 0x2e], dx
// 0084f185  83f8ff               cmp eax, -1
// 0084f188  7503                 jne 0x84f18d
// 0084f18a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0084f18d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0084f191  8b542440             mov edx, dword ptr [esp + 0x40]
// 0084f195  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0084f199  50                   push eax
// 0084f19a  8d442424             lea eax, [esp + 0x24]
// 0084f19e  50                   push eax
// 0084f19f  83ec10               sub esp, 0x10
// 0084f1a2  8bc4                 mov eax, esp
// 0084f1a4  8910                 mov dword ptr [eax], edx
// 0084f1a6  8d6f01               lea ebp, [edi + 1]
// 0084f1a9  897804               mov dword ptr [eax + 4], edi
// 0084f1ac  895808               mov dword ptr [eax + 8], ebx
// 0084f1af  8bd5                 mov edx, ebp
// 0084f1b1  89500c               mov dword ptr [eax + 0xc], edx
// 0084f1b4  896c2434             mov dword ptr [esp + 0x34], ebp
// 0084f1b8  8d8194020000         lea eax, [ecx + 0x294]
// 0084f1be  e91c020000           jmp 0x84f3df
// 0084f1c3  b8cc000000           mov eax, 0xcc
// 0084f1c8  ba33000000           mov edx, 0x33
// 0084f1cd  6689442420           mov word ptr [esp + 0x20], ax
// 0084f1d2  6689442424           mov word ptr [esp + 0x24], ax
// 0084f1d7  6689442428           mov word ptr [esp + 0x28], ax
// 0084f1dc  668944242c           mov word ptr [esp + 0x2c], ax
// 0084f1e1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0084f1e4  6689542422           mov word ptr [esp + 0x22], dx
// 0084f1e9  6689542426           mov word ptr [esp + 0x26], dx
// 0084f1ee  668954242a           mov word ptr [esp + 0x2a], dx
// 0084f1f3  668954242e           mov word ptr [esp + 0x2e], dx
// 0084f1f8  83f8ff               cmp eax, -1
// 0084f1fb  7590                 jne 0x84f18d
// 0084f1fd  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0084f200  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0084f204  8b542440             mov edx, dword ptr [esp + 0x40]
// 0084f208  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0084f20c  50                   push eax
// 0084f20d  8d442424             lea eax, [esp + 0x24]
// 0084f211  50                   push eax
// 0084f212  83ec10               sub esp, 0x10
// 0084f215  8bc4                 mov eax, esp
// 0084f217  8910                 mov dword ptr [eax], edx
// 0084f219  8d6f01               lea ebp, [edi + 1]
// 0084f21c  897804               mov dword ptr [eax + 4], edi
// 0084f21f  895808               mov dword ptr [eax + 8], ebx
// 0084f222  8bd5                 mov edx, ebp
// 0084f224  89500c               mov dword ptr [eax + 0xc], edx
// 0084f227  896c2434             mov dword ptr [esp + 0x34], ebp
// 0084f22b  8d8194020000         lea eax, [ecx + 0x294]
// 0084f231  e9a9010000           jmp 0x84f3df
// 0084f236  b8e0000000           mov eax, 0xe0
// 0084f23b  8bd0                 mov edx, eax
// 0084f23d  6689442420           mov word ptr [esp + 0x20], ax
// 0084f242  6689442424           mov word ptr [esp + 0x24], ax
// 0084f247  6689442428           mov word ptr [esp + 0x28], ax
// 0084f24c  668944242c           mov word ptr [esp + 0x2c], ax
// 0084f251  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0084f254  6689542422           mov word ptr [esp + 0x22], dx
// 0084f259  6689542426           mov word ptr [esp + 0x26], dx
// 0084f25e  668954242a           mov word ptr [esp + 0x2a], dx
// 0084f263  668954242e           mov word ptr [esp + 0x2e], dx
// 0084f268  83f8ff               cmp eax, -1
// 0084f26b  0f851cffffff         jne 0x84f18d
// 0084f271  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0084f274  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0084f278  8b542440             mov edx, dword ptr [esp + 0x40]
// 0084f27c  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0084f280  50                   push eax
// 0084f281  8d442424             lea eax, [esp + 0x24]
// 0084f285  50                   push eax
// 0084f286  83ec10               sub esp, 0x10
// 0084f289  8bc4                 mov eax, esp
// 0084f28b  8910                 mov dword ptr [eax], edx
// 0084f28d  8d6f01               lea ebp, [edi + 1]
// 0084f290  897804               mov dword ptr [eax + 4], edi
// 0084f293  895808               mov dword ptr [eax + 8], ebx
// 0084f296  8bd5                 mov edx, ebp
// 0084f298  89500c               mov dword ptr [eax + 0xc], edx
// 0084f29b  896c2434             mov dword ptr [esp + 0x34], ebp
// 0084f29f  8d8194020000         lea eax, [ecx + 0x294]
// 0084f2a5  e935010000           jmp 0x84f3df
// 0084f2aa  8b91b4020000         mov edx, dword ptr [ecx + 0x2b4]
// 0084f2b0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0084f2b4  4a                   dec edx
// 0084f2b5  48                   dec eax
// 0084f2b6  83fa03               cmp edx, 3
// 0084f2b9  0f872c010000         ja 0x84f3eb
// 0084f2bf  ff249510f48400       jmp dword ptr [edx*4 + 0x84f410]
// 0084f2c6  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0084f2c9  83faff               cmp edx, -1
// 0084f2cc  7503                 jne 0x84f2d1
// 0084f2ce  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0084f2d1  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0084f2d5  52                   push edx
// 0084f2d6  8b542448             mov edx, dword ptr [esp + 0x48]
// 0084f2da  2bfa                 sub edi, edx
// 0084f2dc  57                   push edi
// 0084f2dd  52                   push edx
// 0084f2de  50                   push eax
// 0084f2df  56                   push esi
// 0084f2e0  e8ebf5ffff           call 0x84e8d0
// 0084f2e5  5f                   pop edi
// 0084f2e6  5e                   pop esi
// 0084f2e7  5d                   pop ebp
// 0084f2e8  5b                   pop ebx
// 0084f2e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084f2ed  33cc                 xor ecx, esp
// 0084f2ef  e8e0a1f5ff           call 0x7a94d4
// 0084f2f4  83c424               add esp, 0x24
// 0084f2f7  c21800               ret 0x18
// 0084f2fa  baaa000000           mov edx, 0xaa
// 0084f2ff  6689542420           mov word ptr [esp + 0x20], dx
// 0084f304  ba55000000           mov edx, 0x55
// 0084f309  6689542422           mov word ptr [esp + 0x22], dx
// 0084f30e  baaa000000           mov edx, 0xaa
// 0084f313  6689542424           mov word ptr [esp + 0x24], dx
// 0084f318  ba55000000           mov edx, 0x55
// 0084f31d  6689542426           mov word ptr [esp + 0x26], dx
// 0084f322  baaa000000           mov edx, 0xaa
// 0084f327  6689542428           mov word ptr [esp + 0x28], dx
// 0084f32c  ba55000000           mov edx, 0x55
// 0084f331  668954242a           mov word ptr [esp + 0x2a], dx
// 0084f336  baaa000000           mov edx, 0xaa
// 0084f33b  668954242c           mov word ptr [esp + 0x2c], dx
// 0084f340  ba55000000           mov edx, 0x55
// 0084f345  eb61                 jmp 0x84f3a8
// 0084f347  bacc000000           mov edx, 0xcc
// 0084f34c  6689542420           mov word ptr [esp + 0x20], dx
// 0084f351  6689542422           mov word ptr [esp + 0x22], dx
// 0084f356  ba33000000           mov edx, 0x33
// 0084f35b  6689542424           mov word ptr [esp + 0x24], dx
// 0084f360  6689542426           mov word ptr [esp + 0x26], dx
// 0084f365  bacc000000           mov edx, 0xcc
// 0084f36a  6689542428           mov word ptr [esp + 0x28], dx
// 0084f36f  668954242a           mov word ptr [esp + 0x2a], dx
// 0084f374  ba33000000           mov edx, 0x33
// 0084f379  eb28                 jmp 0x84f3a3
// 0084f37b  baf0000000           mov edx, 0xf0
// 0084f380  6689542420           mov word ptr [esp + 0x20], dx
// 0084f385  6689542422           mov word ptr [esp + 0x22], dx
// 0084f38a  6689542424           mov word ptr [esp + 0x24], dx
// 0084f38f  6689542426           mov word ptr [esp + 0x26], dx
// 0084f394  ba0f000000           mov edx, 0xf
// 0084f399  6689542428           mov word ptr [esp + 0x28], dx
// 0084f39e  668954242a           mov word ptr [esp + 0x2a], dx
// 0084f3a3  668954242c           mov word ptr [esp + 0x2c], dx
// 0084f3a8  668954242e           mov word ptr [esp + 0x2e], dx
// 0084f3ad  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0084f3b0  83faff               cmp edx, -1
// 0084f3b3  7503                 jne 0x84f3b8
// 0084f3b5  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0084f3b8  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0084f3bc  52                   push edx
// 0084f3bd  8d542424             lea edx, [esp + 0x24]
// 0084f3c1  52                   push edx
// 0084f3c2  83ec10               sub esp, 0x10
// 0084f3c5  8bd4                 mov edx, esp
// 0084f3c7  8902                 mov dword ptr [edx], eax
// 0084f3c9  8d5801               lea ebx, [eax + 1]
// 0084f3cc  8b442464             mov eax, dword ptr [esp + 0x64]
// 0084f3d0  897a04               mov dword ptr [edx + 4], edi
// 0084f3d3  895a08               mov dword ptr [edx + 8], ebx
// 0084f3d6  89420c               mov dword ptr [edx + 0xc], eax
// 0084f3d9  8d818c020000         lea eax, [ecx + 0x28c]
// 0084f3df  8b29                 mov ebp, dword ptr [ecx]
// 0084f3e1  8b95dc000000         mov edx, dword ptr [ebp + 0xdc]
// 0084f3e7  50                   push eax
// 0084f3e8  56                   push esi
// 0084f3e9  ffd2                 call edx
// 0084f3eb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0084f3ef  5f                   pop edi
// 0084f3f0  5e                   pop esi
// 0084f3f1  5d                   pop ebp
// 0084f3f2  5b                   pop ebx
// 0084f3f3  33cc                 xor ecx, esp
// 0084f3f5  e8daa0f5ff           call 0x7a94d4
// 0084f3fa  83c424               add esp, 0x24
// 0084f3fd  c21800               ret 0x18
// 0084f400  50                   push eax
// 0084f401  f1                   int1 
// 0084f402  8400                 test byte ptr [eax], al
// 0084f404  c3                   ret 
// 0084f405  f1                   int1 
// 0084f406  8400                 test byte ptr [eax], al
// 0084f408  36f28400             test byte ptr ss:[eax], al
// 0084f40c  18f1                 sbb cl, dh
// 0084f40e  8400                 test byte ptr [eax], al
// 0084f410  fa                   cli 
// 0084f411  f28400               test byte ptr [eax], al
// 0084f414  47                   inc edi
// 0084f415  f38400               test byte ptr [eax], al
// 0084f418  7bf3                 jnp 0x84f40d
// 0084f41a  8400                 test byte ptr [eax], al
// copied from an identical function in another client (function ?DrawGrid@CXTPReportPaintManager@@UAEXPAVCDC@@HVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp