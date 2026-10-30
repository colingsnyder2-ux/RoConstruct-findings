// roc 2009-12 0089af80  unit: CXTPReportPaintManager  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089af80
//
// 0089af80  83ec24               sub esp, 0x24
// 0089af83  a10052b600           mov eax, dword ptr [0xb65200]
// 0089af88  33c4                 xor eax, esp
// 0089af8a  89442420             mov dword ptr [esp + 0x20], eax
// 0089af8e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0089af93  53                   push ebx
// 0089af94  55                   push ebp
// 0089af95  56                   push esi
// 0089af96  8b742434             mov esi, dword ptr [esp + 0x34]
// 0089af9a  57                   push edi
// 0089af9b  0f85a9010000         jne 0x89b14a
// 0089afa1  8b81b8020000         mov eax, dword ptr [ecx + 0x2b8]
// 0089afa7  48                   dec eax
// 0089afa8  83f803               cmp eax, 3
// 0089afab  0f87da020000         ja 0x89b28b
// 0089afb1  ff2485a0b28900       jmp dword ptr [eax*4 + 0x89b2a0]
// 0089afb8  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0089afbb  83f8ff               cmp eax, -1
// 0089afbe  7503                 jne 0x89afc3
// 0089afc0  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0089afc3  8b542448             mov edx, dword ptr [esp + 0x48]
// 0089afc7  50                   push eax
// 0089afc8  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089afcc  2bd0                 sub edx, eax
// 0089afce  52                   push edx
// 0089afcf  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089afd3  52                   push edx
// 0089afd4  50                   push eax
// 0089afd5  56                   push esi
// 0089afd6  e865f7ffff           call 0x89a740
// 0089afdb  5f                   pop edi
// 0089afdc  5e                   pop esi
// 0089afdd  5d                   pop ebp
// 0089afde  5b                   pop ebx
// 0089afdf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089afe3  33cc                 xor ecx, esp
// 0089afe5  e8b0a3f5ff           call 0x7f539a
// 0089afea  83c424               add esp, 0x24
// 0089afed  c21800               ret 0x18
// 0089aff0  b8aa000000           mov eax, 0xaa
// 0089aff5  ba55000000           mov edx, 0x55
// 0089affa  6689442420           mov word ptr [esp + 0x20], ax
// 0089afff  6689442424           mov word ptr [esp + 0x24], ax
// 0089b004  6689442428           mov word ptr [esp + 0x28], ax
// 0089b009  668944242c           mov word ptr [esp + 0x2c], ax
// 0089b00e  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0089b011  6689542422           mov word ptr [esp + 0x22], dx
// 0089b016  6689542426           mov word ptr [esp + 0x26], dx
// 0089b01b  668954242a           mov word ptr [esp + 0x2a], dx
// 0089b020  668954242e           mov word ptr [esp + 0x2e], dx
// 0089b025  83f8ff               cmp eax, -1
// 0089b028  7503                 jne 0x89b02d
// 0089b02a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0089b02d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0089b031  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089b035  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0089b039  50                   push eax
// 0089b03a  8d442424             lea eax, [esp + 0x24]
// 0089b03e  50                   push eax
// 0089b03f  83ec10               sub esp, 0x10
// 0089b042  8bc4                 mov eax, esp
// 0089b044  8910                 mov dword ptr [eax], edx
// 0089b046  8d6f01               lea ebp, [edi + 1]
// 0089b049  897804               mov dword ptr [eax + 4], edi
// 0089b04c  895808               mov dword ptr [eax + 8], ebx
// 0089b04f  8bd5                 mov edx, ebp
// 0089b051  89500c               mov dword ptr [eax + 0xc], edx
// 0089b054  896c2434             mov dword ptr [esp + 0x34], ebp
// 0089b058  8d8194020000         lea eax, [ecx + 0x294]
// 0089b05e  e91c020000           jmp 0x89b27f
// 0089b063  b8cc000000           mov eax, 0xcc
// 0089b068  ba33000000           mov edx, 0x33
// 0089b06d  6689442420           mov word ptr [esp + 0x20], ax
// 0089b072  6689442424           mov word ptr [esp + 0x24], ax
// 0089b077  6689442428           mov word ptr [esp + 0x28], ax
// 0089b07c  668944242c           mov word ptr [esp + 0x2c], ax
// 0089b081  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0089b084  6689542422           mov word ptr [esp + 0x22], dx
// 0089b089  6689542426           mov word ptr [esp + 0x26], dx
// 0089b08e  668954242a           mov word ptr [esp + 0x2a], dx
// 0089b093  668954242e           mov word ptr [esp + 0x2e], dx
// 0089b098  83f8ff               cmp eax, -1
// 0089b09b  7590                 jne 0x89b02d
// 0089b09d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0089b0a0  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0089b0a4  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089b0a8  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0089b0ac  50                   push eax
// 0089b0ad  8d442424             lea eax, [esp + 0x24]
// 0089b0b1  50                   push eax
// 0089b0b2  83ec10               sub esp, 0x10
// 0089b0b5  8bc4                 mov eax, esp
// 0089b0b7  8910                 mov dword ptr [eax], edx
// 0089b0b9  8d6f01               lea ebp, [edi + 1]
// 0089b0bc  897804               mov dword ptr [eax + 4], edi
// 0089b0bf  895808               mov dword ptr [eax + 8], ebx
// 0089b0c2  8bd5                 mov edx, ebp
// 0089b0c4  89500c               mov dword ptr [eax + 0xc], edx
// 0089b0c7  896c2434             mov dword ptr [esp + 0x34], ebp
// 0089b0cb  8d8194020000         lea eax, [ecx + 0x294]
// 0089b0d1  e9a9010000           jmp 0x89b27f
// 0089b0d6  b8e0000000           mov eax, 0xe0
// 0089b0db  8bd0                 mov edx, eax
// 0089b0dd  6689442420           mov word ptr [esp + 0x20], ax
// 0089b0e2  6689442424           mov word ptr [esp + 0x24], ax
// 0089b0e7  6689442428           mov word ptr [esp + 0x28], ax
// 0089b0ec  668944242c           mov word ptr [esp + 0x2c], ax
// 0089b0f1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0089b0f4  6689542422           mov word ptr [esp + 0x22], dx
// 0089b0f9  6689542426           mov word ptr [esp + 0x26], dx
// 0089b0fe  668954242a           mov word ptr [esp + 0x2a], dx
// 0089b103  668954242e           mov word ptr [esp + 0x2e], dx
// 0089b108  83f8ff               cmp eax, -1
// 0089b10b  0f851cffffff         jne 0x89b02d
// 0089b111  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0089b114  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0089b118  8b542440             mov edx, dword ptr [esp + 0x40]
// 0089b11c  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0089b120  50                   push eax
// 0089b121  8d442424             lea eax, [esp + 0x24]
// 0089b125  50                   push eax
// 0089b126  83ec10               sub esp, 0x10
// 0089b129  8bc4                 mov eax, esp
// 0089b12b  8910                 mov dword ptr [eax], edx
// 0089b12d  8d6f01               lea ebp, [edi + 1]
// 0089b130  897804               mov dword ptr [eax + 4], edi
// 0089b133  895808               mov dword ptr [eax + 8], ebx
// 0089b136  8bd5                 mov edx, ebp
// 0089b138  89500c               mov dword ptr [eax + 0xc], edx
// 0089b13b  896c2434             mov dword ptr [esp + 0x34], ebp
// 0089b13f  8d8194020000         lea eax, [ecx + 0x294]
// 0089b145  e935010000           jmp 0x89b27f
// 0089b14a  8b91b4020000         mov edx, dword ptr [ecx + 0x2b4]
// 0089b150  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089b154  4a                   dec edx
// 0089b155  48                   dec eax
// 0089b156  83fa03               cmp edx, 3
// 0089b159  0f872c010000         ja 0x89b28b
// 0089b15f  ff2495b0b28900       jmp dword ptr [edx*4 + 0x89b2b0]
// 0089b166  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0089b169  83faff               cmp edx, -1
// 0089b16c  7503                 jne 0x89b171
// 0089b16e  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0089b171  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0089b175  52                   push edx
// 0089b176  8b542448             mov edx, dword ptr [esp + 0x48]
// 0089b17a  2bfa                 sub edi, edx
// 0089b17c  57                   push edi
// 0089b17d  52                   push edx
// 0089b17e  50                   push eax
// 0089b17f  56                   push esi
// 0089b180  e8ebf5ffff           call 0x89a770
// 0089b185  5f                   pop edi
// 0089b186  5e                   pop esi
// 0089b187  5d                   pop ebp
// 0089b188  5b                   pop ebx
// 0089b189  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089b18d  33cc                 xor ecx, esp
// 0089b18f  e806a2f5ff           call 0x7f539a
// 0089b194  83c424               add esp, 0x24
// 0089b197  c21800               ret 0x18
// 0089b19a  baaa000000           mov edx, 0xaa
// 0089b19f  6689542420           mov word ptr [esp + 0x20], dx
// 0089b1a4  ba55000000           mov edx, 0x55
// 0089b1a9  6689542422           mov word ptr [esp + 0x22], dx
// 0089b1ae  baaa000000           mov edx, 0xaa
// 0089b1b3  6689542424           mov word ptr [esp + 0x24], dx
// 0089b1b8  ba55000000           mov edx, 0x55
// 0089b1bd  6689542426           mov word ptr [esp + 0x26], dx
// 0089b1c2  baaa000000           mov edx, 0xaa
// 0089b1c7  6689542428           mov word ptr [esp + 0x28], dx
// 0089b1cc  ba55000000           mov edx, 0x55
// 0089b1d1  668954242a           mov word ptr [esp + 0x2a], dx
// 0089b1d6  baaa000000           mov edx, 0xaa
// 0089b1db  668954242c           mov word ptr [esp + 0x2c], dx
// 0089b1e0  ba55000000           mov edx, 0x55
// 0089b1e5  eb61                 jmp 0x89b248
// 0089b1e7  bacc000000           mov edx, 0xcc
// 0089b1ec  6689542420           mov word ptr [esp + 0x20], dx
// 0089b1f1  6689542422           mov word ptr [esp + 0x22], dx
// 0089b1f6  ba33000000           mov edx, 0x33
// 0089b1fb  6689542424           mov word ptr [esp + 0x24], dx
// 0089b200  6689542426           mov word ptr [esp + 0x26], dx
// 0089b205  bacc000000           mov edx, 0xcc
// 0089b20a  6689542428           mov word ptr [esp + 0x28], dx
// 0089b20f  668954242a           mov word ptr [esp + 0x2a], dx
// 0089b214  ba33000000           mov edx, 0x33
// 0089b219  eb28                 jmp 0x89b243
// 0089b21b  baf0000000           mov edx, 0xf0
// 0089b220  6689542420           mov word ptr [esp + 0x20], dx
// 0089b225  6689542422           mov word ptr [esp + 0x22], dx
// 0089b22a  6689542424           mov word ptr [esp + 0x24], dx
// 0089b22f  6689542426           mov word ptr [esp + 0x26], dx
// 0089b234  ba0f000000           mov edx, 0xf
// 0089b239  6689542428           mov word ptr [esp + 0x28], dx
// 0089b23e  668954242a           mov word ptr [esp + 0x2a], dx
// 0089b243  668954242c           mov word ptr [esp + 0x2c], dx
// 0089b248  668954242e           mov word ptr [esp + 0x2e], dx
// 0089b24d  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0089b250  83faff               cmp edx, -1
// 0089b253  7503                 jne 0x89b258
// 0089b255  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0089b258  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0089b25c  52                   push edx
// 0089b25d  8d542424             lea edx, [esp + 0x24]
// 0089b261  52                   push edx
// 0089b262  83ec10               sub esp, 0x10
// 0089b265  8bd4                 mov edx, esp
// 0089b267  8902                 mov dword ptr [edx], eax
// 0089b269  8d5801               lea ebx, [eax + 1]
// 0089b26c  8b442464             mov eax, dword ptr [esp + 0x64]
// 0089b270  897a04               mov dword ptr [edx + 4], edi
// 0089b273  895a08               mov dword ptr [edx + 8], ebx
// 0089b276  89420c               mov dword ptr [edx + 0xc], eax
// 0089b279  8d818c020000         lea eax, [ecx + 0x28c]
// 0089b27f  8b29                 mov ebp, dword ptr [ecx]
// 0089b281  8b95dc000000         mov edx, dword ptr [ebp + 0xdc]
// 0089b287  50                   push eax
// 0089b288  56                   push esi
// 0089b289  ffd2                 call edx
// 0089b28b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089b28f  5f                   pop edi
// 0089b290  5e                   pop esi
// 0089b291  5d                   pop ebp
// 0089b292  5b                   pop ebx
// 0089b293  33cc                 xor ecx, esp
// 0089b295  e800a1f5ff           call 0x7f539a
// 0089b29a  83c424               add esp, 0x24
// 0089b29d  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawGrid@CXTPReportPaintManager@@UAEXPAVCDC@@HVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp