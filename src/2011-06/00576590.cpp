// roc 2011-06 00576590  unit: seg_00570000  size: 1042 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576590
//
// 00576590  83ec3c               sub esp, 0x3c
// 00576593  56                   push esi
// 00576594  8b742444             mov esi, dword ptr [esp + 0x44]
// 00576598  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0057659f  57                   push edi
// 005765a0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005765a6  897c2418             mov dword ptr [esp + 0x18], edi
// 005765aa  7415                 je 0x5765c1
// 005765ac  837f2400             cmp dword ptr [edi + 0x24], 0
// 005765b0  750f                 jne 0x5765c1
// 005765b2  e859ffffff           call 0x576510
// 005765b7  84c0                 test al, al
// 005765b9  7506                 jne 0x5765c1
// 005765bb  5f                   pop edi
// 005765bc  5e                   pop esi
// 005765bd  83c43c               add esp, 0x3c
// 005765c0  c3                   ret 
// 005765c1  807f0800             cmp byte ptr [edi + 8], 0
// 005765c5  53                   push ebx
// 005765c6  55                   push ebp
// 005765c7  0f85be030000         jne 0x57698b
// 005765cd  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 005765d4  8b4618               mov eax, dword ptr [esi + 0x18]
// 005765d7  8b08                 mov ecx, dword ptr [eax]
// 005765d9  8b5004               mov edx, dword ptr [eax + 4]
// 005765dc  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 005765df  8b4710               mov eax, dword ptr [edi + 0x10]
// 005765e2  894c2438             mov dword ptr [esp + 0x38], ecx
// 005765e6  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005765e9  8954243c             mov dword ptr [esp + 0x3c], edx
// 005765ed  8b5718               mov edx, dword ptr [edi + 0x18]
// 005765f0  894c2428             mov dword ptr [esp + 0x28], ecx
// 005765f4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005765f7  8954242c             mov dword ptr [esp + 0x2c], edx
// 005765fb  8b5720               mov edx, dword ptr [edi + 0x20]
// 005765fe  89742448             mov dword ptr [esp + 0x48], esi
// 00576602  894c2430             mov dword ptr [esp + 0x30], ecx
// 00576606  89542434             mov dword ptr [esp + 0x34], edx
// 0057660a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00576612  0f8e3e030000         jle 0x576956
// 00576618  81c644010000         add esi, 0x144
// 0057661e  8d4f70               lea ecx, [edi + 0x70]
// 00576621  8974241c             mov dword ptr [esp + 0x1c], esi
// 00576625  894c2418             mov dword ptr [esp + 0x18], ecx
// 00576629  eb09                 jmp 0x576634
// 0057662b  eb03                 jmp 0x576630
// 0057662d  8d4900               lea ecx, [ecx]
// 00576630  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00576634  83f808               cmp eax, 8
// 00576637  8b542454             mov edx, dword ptr [esp + 0x54]
// 0057663b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057663f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 00576642  8b29                 mov ebp, dword ptr [ecx]
// 00576644  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 00576647  89742424             mov dword ptr [esp + 0x24], esi
// 0057664b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057664f  7d2d                 jge 0x57667e
// 00576651  6a00                 push 0
// 00576653  50                   push eax
// 00576654  8d442440             lea eax, [esp + 0x40]
// 00576658  53                   push ebx
// 00576659  50                   push eax
// 0057665a  e8b1fcffff           call 0x576310
// 0057665f  83c410               add esp, 0x10
// 00576662  84c0                 test al, al
// 00576664  0f842e030000         je 0x576998
// 0057666a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057666e  83f808               cmp eax, 8
// 00576671  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00576675  7d07                 jge 0x57667e
// 00576677  b901000000           mov ecx, 1
// 0057667c  eb29                 jmp 0x5766a7
// 0057667e  8d48f8               lea ecx, [eax - 8]
// 00576681  8bd3                 mov edx, ebx
// 00576683  d3fa                 sar edx, cl
// 00576685  81e2ff000000         and edx, 0xff
// 0057668b  8b8c9790000000       mov ecx, dword ptr [edi + edx*4 + 0x90]
// 00576692  85c9                 test ecx, ecx
// 00576694  740c                 je 0x5766a2
// 00576696  0fb6bc3a90040000     movzx edi, byte ptr [edx + edi + 0x490]
// 0057669e  2bc1                 sub eax, ecx
// 005766a0  eb28                 jmp 0x5766ca
// 005766a2  b909000000           mov ecx, 9
// 005766a7  51                   push ecx
// 005766a8  57                   push edi
// 005766a9  50                   push eax
// 005766aa  8d4c2444             lea ecx, [esp + 0x44]
// 005766ae  53                   push ebx
// 005766af  51                   push ecx
// 005766b0  e87bfdffff           call 0x576430
// 005766b5  8bf8                 mov edi, eax
// 005766b7  83c414               add esp, 0x14
// 005766ba  85ff                 test edi, edi
// 005766bc  0f8cd6020000         jl 0x576998
// 005766c2  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005766c6  8b442444             mov eax, dword ptr [esp + 0x44]
// 005766ca  85ff                 test edi, edi
// 005766cc  7452                 je 0x576720
// 005766ce  3bc7                 cmp eax, edi
// 005766d0  7d20                 jge 0x5766f2
// 005766d2  57                   push edi
// 005766d3  50                   push eax
// 005766d4  8d542440             lea edx, [esp + 0x40]
// 005766d8  53                   push ebx
// 005766d9  52                   push edx
// 005766da  e831fcffff           call 0x576310
// 005766df  83c410               add esp, 0x10
// 005766e2  84c0                 test al, al
// 005766e4  0f84ae020000         je 0x576998
// 005766ea  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005766ee  8b442444             mov eax, dword ptr [esp + 0x44]
// 005766f2  8bcf                 mov ecx, edi
// 005766f4  2bc7                 sub eax, edi
// 005766f6  ba01000000           mov edx, 1
// 005766fb  d3e2                 shl edx, cl
// 005766fd  8beb                 mov ebp, ebx
// 005766ff  8bc8                 mov ecx, eax
// 00576701  d3fd                 sar ebp, cl
// 00576703  4a                   dec edx
// 00576704  23d5                 and edx, ebp
// 00576706  3b14bd887fa800       cmp edx, dword ptr [edi*4 + 0xa87f88]
// 0057670d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00576711  7d0b                 jge 0x57671e
// 00576713  8b3cbdc87fa800       mov edi, dword ptr [edi*4 + 0xa87fc8]
// 0057671a  03fa                 add edi, edx
// 0057671c  eb02                 jmp 0x576720
// 0057671e  8bfa                 mov edi, edx
// 00576720  8b542410             mov edx, dword ptr [esp + 0x10]
// 00576724  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00576728  80bc0a9800000000     cmp byte ptr [edx + ecx + 0x98], 0
// 00576730  7413                 je 0x576745
// 00576732  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00576736  8b09                 mov ecx, dword ptr [ecx]
// 00576738  017c8c28             add dword ptr [esp + ecx*4 + 0x28], edi
// 0057673c  8d4c8c28             lea ecx, [esp + ecx*4 + 0x28]
// 00576740  8b09                 mov ecx, dword ptr [ecx]
// 00576742  66890e               mov word ptr [esi], cx
// 00576745  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00576749  80bc0aa200000000     cmp byte ptr [edx + ecx + 0xa2], 0
// 00576751  be01000000           mov esi, 1
// 00576756  0f840b010000         je 0x576867
// 0057675c  8d642400             lea esp, [esp]
// 00576760  83f808               cmp eax, 8
// 00576763  7d2d                 jge 0x576792
// 00576765  6a00                 push 0
// 00576767  50                   push eax
// 00576768  8d542440             lea edx, [esp + 0x40]
// 0057676c  53                   push ebx
// 0057676d  52                   push edx
// 0057676e  e89dfbffff           call 0x576310
// 00576773  83c410               add esp, 0x10
// 00576776  84c0                 test al, al
// 00576778  0f841a020000         je 0x576998
// 0057677e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00576782  83f808               cmp eax, 8
// 00576785  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00576789  7d07                 jge 0x576792
// 0057678b  b901000000           mov ecx, 1
// 00576790  eb29                 jmp 0x5767bb
// 00576792  8d48f8               lea ecx, [eax - 8]
// 00576795  8bd3                 mov edx, ebx
// 00576797  d3fa                 sar edx, cl
// 00576799  81e2ff000000         and edx, 0xff
// 0057679f  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 005767a6  85c9                 test ecx, ecx
// 005767a8  740c                 je 0x5767b6
// 005767aa  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 005767b2  2bc1                 sub eax, ecx
// 005767b4  eb28                 jmp 0x5767de
// 005767b6  b909000000           mov ecx, 9
// 005767bb  51                   push ecx
// 005767bc  55                   push ebp
// 005767bd  50                   push eax
// 005767be  8d442444             lea eax, [esp + 0x44]
// 005767c2  53                   push ebx
// 005767c3  50                   push eax
// 005767c4  e867fcffff           call 0x576430
// 005767c9  8bf8                 mov edi, eax
// 005767cb  83c414               add esp, 0x14
// 005767ce  85ff                 test edi, edi
// 005767d0  0f8cc2010000         jl 0x576998
// 005767d6  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005767da  8b442444             mov eax, dword ptr [esp + 0x44]
// 005767de  8bcf                 mov ecx, edi
// 005767e0  c1f904               sar ecx, 4
// 005767e3  83e70f               and edi, 0xf
// 005767e6  7465                 je 0x57684d
// 005767e8  03f1                 add esi, ecx
// 005767ea  3bc7                 cmp eax, edi
// 005767ec  7d20                 jge 0x57680e
// 005767ee  57                   push edi
// 005767ef  50                   push eax
// 005767f0  8d4c2440             lea ecx, [esp + 0x40]
// 005767f4  53                   push ebx
// 005767f5  51                   push ecx
// 005767f6  e815fbffff           call 0x576310
// 005767fb  83c410               add esp, 0x10
// 005767fe  84c0                 test al, al
// 00576800  0f8492010000         je 0x576998
// 00576806  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0057680a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057680e  8bcf                 mov ecx, edi
// 00576810  2bc7                 sub eax, edi
// 00576812  ba01000000           mov edx, 1
// 00576817  d3e2                 shl edx, cl
// 00576819  8beb                 mov ebp, ebx
// 0057681b  8bc8                 mov ecx, eax
// 0057681d  d3fd                 sar ebp, cl
// 0057681f  4a                   dec edx
// 00576820  23d5                 and edx, ebp
// 00576822  3b14bd887fa800       cmp edx, dword ptr [edi*4 + 0xa87f88]
// 00576829  7d0b                 jge 0x576836
// 0057682b  8b3cbdc87fa800       mov edi, dword ptr [edi*4 + 0xa87fc8]
// 00576832  03fa                 add edi, edx
// 00576834  eb02                 jmp 0x576838
// 00576836  8bfa                 mov edi, edx
// 00576838  8b14b5f058a800       mov edx, dword ptr [esi*4 + 0xa858f0]
// 0057683f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00576843  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00576847  66893c51             mov word ptr [ecx + edx*2], di
// 0057684b  eb0b                 jmp 0x576858
// 0057684d  83f90f               cmp ecx, 0xf
// 00576850  0f85d4000000         jne 0x57692a
// 00576856  03f1                 add esi, ecx
// 00576858  46                   inc esi
// 00576859  83fe40               cmp esi, 0x40
// 0057685c  0f8cfefeffff         jl 0x576760
// 00576862  e9c3000000           jmp 0x57692a
// 00576867  83f808               cmp eax, 8
// 0057686a  7d2d                 jge 0x576899
// 0057686c  6a00                 push 0
// 0057686e  50                   push eax
// 0057686f  8d542440             lea edx, [esp + 0x40]
// 00576873  53                   push ebx
// 00576874  52                   push edx
// 00576875  e896faffff           call 0x576310
// 0057687a  83c410               add esp, 0x10
// 0057687d  84c0                 test al, al
// 0057687f  0f8413010000         je 0x576998
// 00576885  8b442444             mov eax, dword ptr [esp + 0x44]
// 00576889  83f808               cmp eax, 8
// 0057688c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00576890  7d07                 jge 0x576899
// 00576892  b901000000           mov ecx, 1
// 00576897  eb29                 jmp 0x5768c2
// 00576899  8d48f8               lea ecx, [eax - 8]
// 0057689c  8bd3                 mov edx, ebx
// 0057689e  d3fa                 sar edx, cl
// 005768a0  81e2ff000000         and edx, 0xff
// 005768a6  8b8c9590000000       mov ecx, dword ptr [ebp + edx*4 + 0x90]
// 005768ad  85c9                 test ecx, ecx
// 005768af  740c                 je 0x5768bd
// 005768b1  0fb6bc2a90040000     movzx edi, byte ptr [edx + ebp + 0x490]
// 005768b9  2bc1                 sub eax, ecx
// 005768bb  eb28                 jmp 0x5768e5
// 005768bd  b909000000           mov ecx, 9
// 005768c2  51                   push ecx
// 005768c3  55                   push ebp
// 005768c4  50                   push eax
// 005768c5  8d442444             lea eax, [esp + 0x44]
// 005768c9  53                   push ebx
// 005768ca  50                   push eax
// 005768cb  e860fbffff           call 0x576430
// 005768d0  8bf8                 mov edi, eax
// 005768d2  83c414               add esp, 0x14
// 005768d5  85ff                 test edi, edi
// 005768d7  0f8cbb000000         jl 0x576998
// 005768dd  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005768e1  8b442444             mov eax, dword ptr [esp + 0x44]
// 005768e5  8bcf                 mov ecx, edi
// 005768e7  c1f904               sar ecx, 4
// 005768ea  83e70f               and edi, 0xf
// 005768ed  742a                 je 0x576919
// 005768ef  03f1                 add esi, ecx
// 005768f1  3bc7                 cmp eax, edi
// 005768f3  7d20                 jge 0x576915
// 005768f5  57                   push edi
// 005768f6  50                   push eax
// 005768f7  8d4c2440             lea ecx, [esp + 0x40]
// 005768fb  53                   push ebx
// 005768fc  51                   push ecx
// 005768fd  e80efaffff           call 0x576310
// 00576902  83c410               add esp, 0x10
// 00576905  84c0                 test al, al
// 00576907  0f848b000000         je 0x576998
// 0057690d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00576911  8b442444             mov eax, dword ptr [esp + 0x44]
// 00576915  2bc7                 sub eax, edi
// 00576917  eb07                 jmp 0x576920
// 00576919  83f90f               cmp ecx, 0xf
// 0057691c  750c                 jne 0x57692a
// 0057691e  03f1                 add esi, ecx
// 00576920  46                   inc esi
// 00576921  83fe40               cmp esi, 0x40
// 00576924  0f8c3dffffff         jl 0x576867
// 0057692a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057692e  ba04000000           mov edx, 4
// 00576933  01542418             add dword ptr [esp + 0x18], edx
// 00576937  0154241c             add dword ptr [esp + 0x1c], edx
// 0057693b  8b542450             mov edx, dword ptr [esp + 0x50]
// 0057693f  41                   inc ecx
// 00576940  3b8a40010000         cmp ecx, dword ptr [edx + 0x140]
// 00576946  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057694a  0f8ce0fcffff         jl 0x576630
// 00576950  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00576954  8bf2                 mov esi, edx
// 00576956  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00576959  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057695d  8911                 mov dword ptr [ecx], edx
// 0057695f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00576962  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00576966  895104               mov dword ptr [ecx + 4], edx
// 00576969  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057696d  8b542430             mov edx, dword ptr [esp + 0x30]
// 00576971  894710               mov dword ptr [edi + 0x10], eax
// 00576974  8b442428             mov eax, dword ptr [esp + 0x28]
// 00576978  894714               mov dword ptr [edi + 0x14], eax
// 0057697b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057697f  894f18               mov dword ptr [edi + 0x18], ecx
// 00576982  89571c               mov dword ptr [edi + 0x1c], edx
// 00576985  895f0c               mov dword ptr [edi + 0xc], ebx
// 00576988  894720               mov dword ptr [edi + 0x20], eax
// 0057698b  ff4f24               dec dword ptr [edi + 0x24]
// 0057698e  5d                   pop ebp
// 0057698f  5b                   pop ebx
// 00576990  5f                   pop edi
// 00576991  b001                 mov al, 1
// 00576993  5e                   pop esi
// 00576994  83c43c               add esp, 0x3c
// 00576997  c3                   ret 
// 00576998  5d                   pop ebp
// 00576999  5b                   pop ebx
// 0057699a  5f                   pop edi
// 0057699b  32c0                 xor al, al
// 0057699d  5e                   pop esi
// 0057699e  83c43c               add esp, 0x3c
// 005769a1  c3                   ret 
// library jpeg-6b/jdhuff.c (function _decode_mcu)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
