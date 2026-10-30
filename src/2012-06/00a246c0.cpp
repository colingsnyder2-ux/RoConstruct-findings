// roc 2012-06 00a246c0  unit: CXTPReportPaintManager  size: 832 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a246c0
//
// 00a246c0  83ec24               sub esp, 0x24
// 00a246c3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a246c8  33c4                 xor eax, esp
// 00a246ca  89442420             mov dword ptr [esp + 0x20], eax
// 00a246ce  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00a246d3  53                   push ebx
// 00a246d4  55                   push ebp
// 00a246d5  56                   push esi
// 00a246d6  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a246da  57                   push edi
// 00a246db  0f85a9010000         jne 0xa2488a
// 00a246e1  8b81b8020000         mov eax, dword ptr [ecx + 0x2b8]
// 00a246e7  48                   dec eax
// 00a246e8  83f803               cmp eax, 3
// 00a246eb  0f87da020000         ja 0xa249cb
// 00a246f1  ff2485e049a200       jmp dword ptr [eax*4 + 0xa249e0]
// 00a246f8  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a246fb  83f8ff               cmp eax, -1
// 00a246fe  7503                 jne 0xa24703
// 00a24700  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00a24703  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a24707  50                   push eax
// 00a24708  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a2470c  2bd0                 sub edx, eax
// 00a2470e  52                   push edx
// 00a2470f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a24713  52                   push edx
// 00a24714  50                   push eax
// 00a24715  56                   push esi
// 00a24716  e865f7ffff           call 0xa23e80
// 00a2471b  5f                   pop edi
// 00a2471c  5e                   pop esi
// 00a2471d  5d                   pop ebp
// 00a2471e  5b                   pop ebx
// 00a2471f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a24723  33cc                 xor ecx, esp
// 00a24725  e80df3f5ff           call 0x983a37
// 00a2472a  83c424               add esp, 0x24
// 00a2472d  c21800               ret 0x18
// 00a24730  b8aa000000           mov eax, 0xaa
// 00a24735  ba55000000           mov edx, 0x55
// 00a2473a  6689442420           mov word ptr [esp + 0x20], ax
// 00a2473f  6689442424           mov word ptr [esp + 0x24], ax
// 00a24744  6689442428           mov word ptr [esp + 0x28], ax
// 00a24749  668944242c           mov word ptr [esp + 0x2c], ax
// 00a2474e  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a24751  6689542422           mov word ptr [esp + 0x22], dx
// 00a24756  6689542426           mov word ptr [esp + 0x26], dx
// 00a2475b  668954242a           mov word ptr [esp + 0x2a], dx
// 00a24760  668954242e           mov word ptr [esp + 0x2e], dx
// 00a24765  83f8ff               cmp eax, -1
// 00a24768  7503                 jne 0xa2476d
// 00a2476a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00a2476d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a24771  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a24775  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00a24779  50                   push eax
// 00a2477a  8d442424             lea eax, [esp + 0x24]
// 00a2477e  50                   push eax
// 00a2477f  83ec10               sub esp, 0x10
// 00a24782  8bc4                 mov eax, esp
// 00a24784  8910                 mov dword ptr [eax], edx
// 00a24786  8d6f01               lea ebp, [edi + 1]
// 00a24789  897804               mov dword ptr [eax + 4], edi
// 00a2478c  895808               mov dword ptr [eax + 8], ebx
// 00a2478f  8bd5                 mov edx, ebp
// 00a24791  89500c               mov dword ptr [eax + 0xc], edx
// 00a24794  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a24798  8d8194020000         lea eax, [ecx + 0x294]
// 00a2479e  e91c020000           jmp 0xa249bf
// 00a247a3  b8cc000000           mov eax, 0xcc
// 00a247a8  ba33000000           mov edx, 0x33
// 00a247ad  6689442420           mov word ptr [esp + 0x20], ax
// 00a247b2  6689442424           mov word ptr [esp + 0x24], ax
// 00a247b7  6689442428           mov word ptr [esp + 0x28], ax
// 00a247bc  668944242c           mov word ptr [esp + 0x2c], ax
// 00a247c1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a247c4  6689542422           mov word ptr [esp + 0x22], dx
// 00a247c9  6689542426           mov word ptr [esp + 0x26], dx
// 00a247ce  668954242a           mov word ptr [esp + 0x2a], dx
// 00a247d3  668954242e           mov word ptr [esp + 0x2e], dx
// 00a247d8  83f8ff               cmp eax, -1
// 00a247db  7590                 jne 0xa2476d
// 00a247dd  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00a247e0  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a247e4  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a247e8  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00a247ec  50                   push eax
// 00a247ed  8d442424             lea eax, [esp + 0x24]
// 00a247f1  50                   push eax
// 00a247f2  83ec10               sub esp, 0x10
// 00a247f5  8bc4                 mov eax, esp
// 00a247f7  8910                 mov dword ptr [eax], edx
// 00a247f9  8d6f01               lea ebp, [edi + 1]
// 00a247fc  897804               mov dword ptr [eax + 4], edi
// 00a247ff  895808               mov dword ptr [eax + 8], ebx
// 00a24802  8bd5                 mov edx, ebp
// 00a24804  89500c               mov dword ptr [eax + 0xc], edx
// 00a24807  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a2480b  8d8194020000         lea eax, [ecx + 0x294]
// 00a24811  e9a9010000           jmp 0xa249bf
// 00a24816  b8e0000000           mov eax, 0xe0
// 00a2481b  8bd0                 mov edx, eax
// 00a2481d  6689442420           mov word ptr [esp + 0x20], ax
// 00a24822  6689442424           mov word ptr [esp + 0x24], ax
// 00a24827  6689442428           mov word ptr [esp + 0x28], ax
// 00a2482c  668944242c           mov word ptr [esp + 0x2c], ax
// 00a24831  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00a24834  6689542422           mov word ptr [esp + 0x22], dx
// 00a24839  6689542426           mov word ptr [esp + 0x26], dx
// 00a2483e  668954242a           mov word ptr [esp + 0x2a], dx
// 00a24843  668954242e           mov word ptr [esp + 0x2e], dx
// 00a24848  83f8ff               cmp eax, -1
// 00a2484b  0f851cffffff         jne 0xa2476d
// 00a24851  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00a24854  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a24858  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a2485c  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00a24860  50                   push eax
// 00a24861  8d442424             lea eax, [esp + 0x24]
// 00a24865  50                   push eax
// 00a24866  83ec10               sub esp, 0x10
// 00a24869  8bc4                 mov eax, esp
// 00a2486b  8910                 mov dword ptr [eax], edx
// 00a2486d  8d6f01               lea ebp, [edi + 1]
// 00a24870  897804               mov dword ptr [eax + 4], edi
// 00a24873  895808               mov dword ptr [eax + 8], ebx
// 00a24876  8bd5                 mov edx, ebp
// 00a24878  89500c               mov dword ptr [eax + 0xc], edx
// 00a2487b  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a2487f  8d8194020000         lea eax, [ecx + 0x294]
// 00a24885  e935010000           jmp 0xa249bf
// 00a2488a  8b91b4020000         mov edx, dword ptr [ecx + 0x2b4]
// 00a24890  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a24894  4a                   dec edx
// 00a24895  48                   dec eax
// 00a24896  83fa03               cmp edx, 3
// 00a24899  0f872c010000         ja 0xa249cb
// 00a2489f  ff2495f049a200       jmp dword ptr [edx*4 + 0xa249f0]
// 00a248a6  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00a248a9  83faff               cmp edx, -1
// 00a248ac  7503                 jne 0xa248b1
// 00a248ae  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00a248b1  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a248b5  52                   push edx
// 00a248b6  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a248ba  2bfa                 sub edi, edx
// 00a248bc  57                   push edi
// 00a248bd  52                   push edx
// 00a248be  50                   push eax
// 00a248bf  56                   push esi
// 00a248c0  e8ebf5ffff           call 0xa23eb0
// 00a248c5  5f                   pop edi
// 00a248c6  5e                   pop esi
// 00a248c7  5d                   pop ebp
// 00a248c8  5b                   pop ebx
// 00a248c9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a248cd  33cc                 xor ecx, esp
// 00a248cf  e863f1f5ff           call 0x983a37
// 00a248d4  83c424               add esp, 0x24
// 00a248d7  c21800               ret 0x18
// 00a248da  baaa000000           mov edx, 0xaa
// 00a248df  6689542420           mov word ptr [esp + 0x20], dx
// 00a248e4  ba55000000           mov edx, 0x55
// 00a248e9  6689542422           mov word ptr [esp + 0x22], dx
// 00a248ee  baaa000000           mov edx, 0xaa
// 00a248f3  6689542424           mov word ptr [esp + 0x24], dx
// 00a248f8  ba55000000           mov edx, 0x55
// 00a248fd  6689542426           mov word ptr [esp + 0x26], dx
// 00a24902  baaa000000           mov edx, 0xaa
// 00a24907  6689542428           mov word ptr [esp + 0x28], dx
// 00a2490c  ba55000000           mov edx, 0x55
// 00a24911  668954242a           mov word ptr [esp + 0x2a], dx
// 00a24916  baaa000000           mov edx, 0xaa
// 00a2491b  668954242c           mov word ptr [esp + 0x2c], dx
// 00a24920  ba55000000           mov edx, 0x55
// 00a24925  eb61                 jmp 0xa24988
// 00a24927  bacc000000           mov edx, 0xcc
// 00a2492c  6689542420           mov word ptr [esp + 0x20], dx
// 00a24931  6689542422           mov word ptr [esp + 0x22], dx
// 00a24936  ba33000000           mov edx, 0x33
// 00a2493b  6689542424           mov word ptr [esp + 0x24], dx
// 00a24940  6689542426           mov word ptr [esp + 0x26], dx
// 00a24945  bacc000000           mov edx, 0xcc
// 00a2494a  6689542428           mov word ptr [esp + 0x28], dx
// 00a2494f  668954242a           mov word ptr [esp + 0x2a], dx
// 00a24954  ba33000000           mov edx, 0x33
// 00a24959  eb28                 jmp 0xa24983
// 00a2495b  baf0000000           mov edx, 0xf0
// 00a24960  6689542420           mov word ptr [esp + 0x20], dx
// 00a24965  6689542422           mov word ptr [esp + 0x22], dx
// 00a2496a  6689542424           mov word ptr [esp + 0x24], dx
// 00a2496f  6689542426           mov word ptr [esp + 0x26], dx
// 00a24974  ba0f000000           mov edx, 0xf
// 00a24979  6689542428           mov word ptr [esp + 0x28], dx
// 00a2497e  668954242a           mov word ptr [esp + 0x2a], dx
// 00a24983  668954242c           mov word ptr [esp + 0x2c], dx
// 00a24988  668954242e           mov word ptr [esp + 0x2e], dx
// 00a2498d  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00a24990  83faff               cmp edx, -1
// 00a24993  7503                 jne 0xa24998
// 00a24995  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00a24998  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a2499c  52                   push edx
// 00a2499d  8d542424             lea edx, [esp + 0x24]
// 00a249a1  52                   push edx
// 00a249a2  83ec10               sub esp, 0x10
// 00a249a5  8bd4                 mov edx, esp
// 00a249a7  8902                 mov dword ptr [edx], eax
// 00a249a9  8d5801               lea ebx, [eax + 1]
// 00a249ac  8b442464             mov eax, dword ptr [esp + 0x64]
// 00a249b0  897a04               mov dword ptr [edx + 4], edi
// 00a249b3  895a08               mov dword ptr [edx + 8], ebx
// 00a249b6  89420c               mov dword ptr [edx + 0xc], eax
// 00a249b9  8d818c020000         lea eax, [ecx + 0x28c]
// 00a249bf  8b29                 mov ebp, dword ptr [ecx]
// 00a249c1  8b95dc000000         mov edx, dword ptr [ebp + 0xdc]
// 00a249c7  50                   push eax
// 00a249c8  56                   push esi
// 00a249c9  ffd2                 call edx
// 00a249cb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a249cf  5f                   pop edi
// 00a249d0  5e                   pop esi
// 00a249d1  5d                   pop ebp
// 00a249d2  5b                   pop ebx
// 00a249d3  33cc                 xor ecx, esp
// 00a249d5  e85df0f5ff           call 0x983a37
// 00a249da  83c424               add esp, 0x24
// 00a249dd  c21800               ret 0x18
// 00a249e0  3047a2               xor byte ptr [edi - 0x5e], al
// 00a249e3  00a347a20016         add byte ptr [ebx + 0x1600a247], ah
// 00a249e9  48                   dec eax
// 00a249ea  a200f846a2           mov byte ptr [0xa246f800], al
// 00a249ef  00da                 add dl, bl
// 00a249f1  48                   dec eax
// 00a249f2  a2002749a2           mov byte ptr [0xa2492700], al
// 00a249f7  005b49               add byte ptr [ebx + 0x49], bl
// 00a249fa  a200a648a2           mov byte ptr [0xa248a600], al
// copied from an identical function in another client (function ?DrawGrid@CXTPReportPaintManager@@UAEXPAVCDC@@HVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp