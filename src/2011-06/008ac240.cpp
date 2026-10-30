// roc 2011-06 008ac240  unit: CXTPReportPaintManager  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ac240
//
// 008ac240  83ec24               sub esp, 0x24
// 008ac243  a12058c900           mov eax, dword ptr [0xc95820]
// 008ac248  33c4                 xor eax, esp
// 008ac24a  89442420             mov dword ptr [esp + 0x20], eax
// 008ac24e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 008ac253  53                   push ebx
// 008ac254  55                   push ebp
// 008ac255  56                   push esi
// 008ac256  8b742434             mov esi, dword ptr [esp + 0x34]
// 008ac25a  57                   push edi
// 008ac25b  0f85a9010000         jne 0x8ac40a
// 008ac261  8b81b8020000         mov eax, dword ptr [ecx + 0x2b8]
// 008ac267  48                   dec eax
// 008ac268  83f803               cmp eax, 3
// 008ac26b  0f87da020000         ja 0x8ac54b
// 008ac271  ff248560c58a00       jmp dword ptr [eax*4 + 0x8ac560]
// 008ac278  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008ac27b  83f8ff               cmp eax, -1
// 008ac27e  7503                 jne 0x8ac283
// 008ac280  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008ac283  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ac287  50                   push eax
// 008ac288  8b442444             mov eax, dword ptr [esp + 0x44]
// 008ac28c  2bd0                 sub edx, eax
// 008ac28e  52                   push edx
// 008ac28f  8b542454             mov edx, dword ptr [esp + 0x54]
// 008ac293  52                   push edx
// 008ac294  50                   push eax
// 008ac295  56                   push esi
// 008ac296  e865f7ffff           call 0x8aba00
// 008ac29b  5f                   pop edi
// 008ac29c  5e                   pop esi
// 008ac29d  5d                   pop ebp
// 008ac29e  5b                   pop ebx
// 008ac29f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ac2a3  33cc                 xor ecx, esp
// 008ac2a5  e84df6f5ff           call 0x80b8f7
// 008ac2aa  83c424               add esp, 0x24
// 008ac2ad  c21800               ret 0x18
// 008ac2b0  b8aa000000           mov eax, 0xaa
// 008ac2b5  ba55000000           mov edx, 0x55
// 008ac2ba  6689442420           mov word ptr [esp + 0x20], ax
// 008ac2bf  6689442424           mov word ptr [esp + 0x24], ax
// 008ac2c4  6689442428           mov word ptr [esp + 0x28], ax
// 008ac2c9  668944242c           mov word ptr [esp + 0x2c], ax
// 008ac2ce  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008ac2d1  6689542422           mov word ptr [esp + 0x22], dx
// 008ac2d6  6689542426           mov word ptr [esp + 0x26], dx
// 008ac2db  668954242a           mov word ptr [esp + 0x2a], dx
// 008ac2e0  668954242e           mov word ptr [esp + 0x2e], dx
// 008ac2e5  83f8ff               cmp eax, -1
// 008ac2e8  7503                 jne 0x8ac2ed
// 008ac2ea  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008ac2ed  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008ac2f1  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ac2f5  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008ac2f9  50                   push eax
// 008ac2fa  8d442424             lea eax, [esp + 0x24]
// 008ac2fe  50                   push eax
// 008ac2ff  83ec10               sub esp, 0x10
// 008ac302  8bc4                 mov eax, esp
// 008ac304  8910                 mov dword ptr [eax], edx
// 008ac306  8d6f01               lea ebp, [edi + 1]
// 008ac309  897804               mov dword ptr [eax + 4], edi
// 008ac30c  895808               mov dword ptr [eax + 8], ebx
// 008ac30f  8bd5                 mov edx, ebp
// 008ac311  89500c               mov dword ptr [eax + 0xc], edx
// 008ac314  896c2434             mov dword ptr [esp + 0x34], ebp
// 008ac318  8d8194020000         lea eax, [ecx + 0x294]
// 008ac31e  e91c020000           jmp 0x8ac53f
// 008ac323  b8cc000000           mov eax, 0xcc
// 008ac328  ba33000000           mov edx, 0x33
// 008ac32d  6689442420           mov word ptr [esp + 0x20], ax
// 008ac332  6689442424           mov word ptr [esp + 0x24], ax
// 008ac337  6689442428           mov word ptr [esp + 0x28], ax
// 008ac33c  668944242c           mov word ptr [esp + 0x2c], ax
// 008ac341  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008ac344  6689542422           mov word ptr [esp + 0x22], dx
// 008ac349  6689542426           mov word ptr [esp + 0x26], dx
// 008ac34e  668954242a           mov word ptr [esp + 0x2a], dx
// 008ac353  668954242e           mov word ptr [esp + 0x2e], dx
// 008ac358  83f8ff               cmp eax, -1
// 008ac35b  7590                 jne 0x8ac2ed
// 008ac35d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008ac360  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008ac364  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ac368  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008ac36c  50                   push eax
// 008ac36d  8d442424             lea eax, [esp + 0x24]
// 008ac371  50                   push eax
// 008ac372  83ec10               sub esp, 0x10
// 008ac375  8bc4                 mov eax, esp
// 008ac377  8910                 mov dword ptr [eax], edx
// 008ac379  8d6f01               lea ebp, [edi + 1]
// 008ac37c  897804               mov dword ptr [eax + 4], edi
// 008ac37f  895808               mov dword ptr [eax + 8], ebx
// 008ac382  8bd5                 mov edx, ebp
// 008ac384  89500c               mov dword ptr [eax + 0xc], edx
// 008ac387  896c2434             mov dword ptr [esp + 0x34], ebp
// 008ac38b  8d8194020000         lea eax, [ecx + 0x294]
// 008ac391  e9a9010000           jmp 0x8ac53f
// 008ac396  b8e0000000           mov eax, 0xe0
// 008ac39b  8bd0                 mov edx, eax
// 008ac39d  6689442420           mov word ptr [esp + 0x20], ax
// 008ac3a2  6689442424           mov word ptr [esp + 0x24], ax
// 008ac3a7  6689442428           mov word ptr [esp + 0x28], ax
// 008ac3ac  668944242c           mov word ptr [esp + 0x2c], ax
// 008ac3b1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 008ac3b4  6689542422           mov word ptr [esp + 0x22], dx
// 008ac3b9  6689542426           mov word ptr [esp + 0x26], dx
// 008ac3be  668954242a           mov word ptr [esp + 0x2a], dx
// 008ac3c3  668954242e           mov word ptr [esp + 0x2e], dx
// 008ac3c8  83f8ff               cmp eax, -1
// 008ac3cb  0f851cffffff         jne 0x8ac2ed
// 008ac3d1  8b4150               mov eax, dword ptr [ecx + 0x50]
// 008ac3d4  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008ac3d8  8b542440             mov edx, dword ptr [esp + 0x40]
// 008ac3dc  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 008ac3e0  50                   push eax
// 008ac3e1  8d442424             lea eax, [esp + 0x24]
// 008ac3e5  50                   push eax
// 008ac3e6  83ec10               sub esp, 0x10
// 008ac3e9  8bc4                 mov eax, esp
// 008ac3eb  8910                 mov dword ptr [eax], edx
// 008ac3ed  8d6f01               lea ebp, [edi + 1]
// 008ac3f0  897804               mov dword ptr [eax + 4], edi
// 008ac3f3  895808               mov dword ptr [eax + 8], ebx
// 008ac3f6  8bd5                 mov edx, ebp
// 008ac3f8  89500c               mov dword ptr [eax + 0xc], edx
// 008ac3fb  896c2434             mov dword ptr [esp + 0x34], ebp
// 008ac3ff  8d8194020000         lea eax, [ecx + 0x294]
// 008ac405  e935010000           jmp 0x8ac53f
// 008ac40a  8b91b4020000         mov edx, dword ptr [ecx + 0x2b4]
// 008ac410  8b442448             mov eax, dword ptr [esp + 0x48]
// 008ac414  4a                   dec edx
// 008ac415  48                   dec eax
// 008ac416  83fa03               cmp edx, 3
// 008ac419  0f872c010000         ja 0x8ac54b
// 008ac41f  ff249570c58a00       jmp dword ptr [edx*4 + 0x8ac570]
// 008ac426  8b5154               mov edx, dword ptr [ecx + 0x54]
// 008ac429  83faff               cmp edx, -1
// 008ac42c  7503                 jne 0x8ac431
// 008ac42e  8b5150               mov edx, dword ptr [ecx + 0x50]
// 008ac431  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008ac435  52                   push edx
// 008ac436  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ac43a  2bfa                 sub edi, edx
// 008ac43c  57                   push edi
// 008ac43d  52                   push edx
// 008ac43e  50                   push eax
// 008ac43f  56                   push esi
// 008ac440  e8ebf5ffff           call 0x8aba30
// 008ac445  5f                   pop edi
// 008ac446  5e                   pop esi
// 008ac447  5d                   pop ebp
// 008ac448  5b                   pop ebx
// 008ac449  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ac44d  33cc                 xor ecx, esp
// 008ac44f  e8a3f4f5ff           call 0x80b8f7
// 008ac454  83c424               add esp, 0x24
// 008ac457  c21800               ret 0x18
// 008ac45a  baaa000000           mov edx, 0xaa
// 008ac45f  6689542420           mov word ptr [esp + 0x20], dx
// 008ac464  ba55000000           mov edx, 0x55
// 008ac469  6689542422           mov word ptr [esp + 0x22], dx
// 008ac46e  baaa000000           mov edx, 0xaa
// 008ac473  6689542424           mov word ptr [esp + 0x24], dx
// 008ac478  ba55000000           mov edx, 0x55
// 008ac47d  6689542426           mov word ptr [esp + 0x26], dx
// 008ac482  baaa000000           mov edx, 0xaa
// 008ac487  6689542428           mov word ptr [esp + 0x28], dx
// 008ac48c  ba55000000           mov edx, 0x55
// 008ac491  668954242a           mov word ptr [esp + 0x2a], dx
// 008ac496  baaa000000           mov edx, 0xaa
// 008ac49b  668954242c           mov word ptr [esp + 0x2c], dx
// 008ac4a0  ba55000000           mov edx, 0x55
// 008ac4a5  eb61                 jmp 0x8ac508
// 008ac4a7  bacc000000           mov edx, 0xcc
// 008ac4ac  6689542420           mov word ptr [esp + 0x20], dx
// 008ac4b1  6689542422           mov word ptr [esp + 0x22], dx
// 008ac4b6  ba33000000           mov edx, 0x33
// 008ac4bb  6689542424           mov word ptr [esp + 0x24], dx
// 008ac4c0  6689542426           mov word ptr [esp + 0x26], dx
// 008ac4c5  bacc000000           mov edx, 0xcc
// 008ac4ca  6689542428           mov word ptr [esp + 0x28], dx
// 008ac4cf  668954242a           mov word ptr [esp + 0x2a], dx
// 008ac4d4  ba33000000           mov edx, 0x33
// 008ac4d9  eb28                 jmp 0x8ac503
// 008ac4db  baf0000000           mov edx, 0xf0
// 008ac4e0  6689542420           mov word ptr [esp + 0x20], dx
// 008ac4e5  6689542422           mov word ptr [esp + 0x22], dx
// 008ac4ea  6689542424           mov word ptr [esp + 0x24], dx
// 008ac4ef  6689542426           mov word ptr [esp + 0x26], dx
// 008ac4f4  ba0f000000           mov edx, 0xf
// 008ac4f9  6689542428           mov word ptr [esp + 0x28], dx
// 008ac4fe  668954242a           mov word ptr [esp + 0x2a], dx
// 008ac503  668954242c           mov word ptr [esp + 0x2c], dx
// 008ac508  668954242e           mov word ptr [esp + 0x2e], dx
// 008ac50d  8b5154               mov edx, dword ptr [ecx + 0x54]
// 008ac510  83faff               cmp edx, -1
// 008ac513  7503                 jne 0x8ac518
// 008ac515  8b5150               mov edx, dword ptr [ecx + 0x50]
// 008ac518  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008ac51c  52                   push edx
// 008ac51d  8d542424             lea edx, [esp + 0x24]
// 008ac521  52                   push edx
// 008ac522  83ec10               sub esp, 0x10
// 008ac525  8bd4                 mov edx, esp
// 008ac527  8902                 mov dword ptr [edx], eax
// 008ac529  8d5801               lea ebx, [eax + 1]
// 008ac52c  8b442464             mov eax, dword ptr [esp + 0x64]
// 008ac530  897a04               mov dword ptr [edx + 4], edi
// 008ac533  895a08               mov dword ptr [edx + 8], ebx
// 008ac536  89420c               mov dword ptr [edx + 0xc], eax
// 008ac539  8d818c020000         lea eax, [ecx + 0x28c]
// 008ac53f  8b29                 mov ebp, dword ptr [ecx]
// 008ac541  8b95dc000000         mov edx, dword ptr [ebp + 0xdc]
// 008ac547  50                   push eax
// 008ac548  56                   push esi
// 008ac549  ffd2                 call edx
// 008ac54b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008ac54f  5f                   pop edi
// 008ac550  5e                   pop esi
// 008ac551  5d                   pop ebp
// 008ac552  5b                   pop ebx
// 008ac553  33cc                 xor ecx, esp
// 008ac555  e89df3f5ff           call 0x80b8f7
// 008ac55a  83c424               add esp, 0x24
// 008ac55d  c21800               ret 0x18
// 008ac560  b0c2                 mov al, 0xc2
// 008ac562  8a00                 mov al, byte ptr [eax]
// 008ac564  23c3                 and eax, ebx
// 008ac566  8a00                 mov al, byte ptr [eax]
// 008ac568  96                   xchg esi, eax
// 008ac569  c3                   ret 
// 008ac56a  8a00                 mov al, byte ptr [eax]
// 008ac56c  78c2                 js 0x8ac530
// 008ac56e  8a00                 mov al, byte ptr [eax]
// 008ac570  5a                   pop edx
// 008ac571  c48a00a7c48a         les ecx, ptr [edx - 0x753b5900]
// 008ac577  00db                 add bl, bl
// 008ac579  c48a0026c48a         les ecx, ptr [edx - 0x753bda00]
// copied from an identical function in another client (function ?DrawGrid@CXTPReportPaintManager@@UAEXPAVCDC@@HVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp