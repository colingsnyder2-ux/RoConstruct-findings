// roc 2009-12 00887630  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 753 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887630
//
// 00887630  6aff                 push -1
// 00887632  68f10b9600           push 0x960bf1
// 00887637  64a100000000         mov eax, dword ptr fs:[0]
// 0088763d  50                   push eax
// 0088763e  83ec38               sub esp, 0x38
// 00887641  53                   push ebx
// 00887642  56                   push esi
// 00887643  57                   push edi
// 00887644  a10052b600           mov eax, dword ptr [0xb65200]
// 00887649  33c4                 xor eax, esp
// 0088764b  50                   push eax
// 0088764c  8d442448             lea eax, [esp + 0x48]
// 00887650  64a300000000         mov dword ptr fs:[0], eax
// 00887656  8bf9                 mov edi, ecx
// 00887658  e8b3f5ffff           call 0x886c10
// 0088765d  85c0                 test eax, eax
// 0088765f  7532                 jne 0x887693
// 00887661  8b442464             mov eax, dword ptr [esp + 0x64]
// 00887665  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00887669  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0088766d  8b742458             mov esi, dword ptr [esp + 0x58]
// 00887671  50                   push eax
// 00887672  51                   push ecx
// 00887673  52                   push edx
// 00887674  56                   push esi
// 00887675  8bcf                 mov ecx, edi
// 00887677  e84468ffff           call 0x87dec0
// 0088767c  8bc6                 mov eax, esi
// 0088767e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00887682  64890d00000000       mov dword ptr fs:[0], ecx
// 00887689  59                   pop ecx
// 0088768a  5f                   pop edi
// 0088768b  5e                   pop esi
// 0088768c  5b                   pop ebx
// 0088768d  83c444               add esp, 0x44
// 00887690  c21000               ret 0x10
// 00887693  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 00887697  8b03                 mov eax, dword ptr [ebx]
// 00887699  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0088769f  8bcb                 mov ecx, ebx
// 008876a1  ffd2                 call edx
// 008876a3  85c0                 test eax, eax
// 008876a5  7433                 je 0x8876da
// 008876a7  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008876ab  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008876af  8b07                 mov eax, dword ptr [edi]
// 008876b1  8b742458             mov esi, dword ptr [esp + 0x58]
// 008876b5  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 008876bb  51                   push ecx
// 008876bc  53                   push ebx
// 008876bd  52                   push edx
// 008876be  56                   push esi
// 008876bf  8bcf                 mov ecx, edi
// 008876c1  ffd0                 call eax
// 008876c3  8bc6                 mov eax, esi
// 008876c5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008876c9  64890d00000000       mov dword ptr fs:[0], ecx
// 008876d0  59                   pop ecx
// 008876d1  5f                   pop edi
// 008876d2  5e                   pop esi
// 008876d3  5b                   pop ebx
// 008876d4  83c444               add esp, 0x44
// 008876d7  c21000               ret 0x10
// 008876da  8b5320               mov edx, dword ptr [ebx + 0x20]
// 008876dd  8d4c2418             lea ecx, [esp + 0x18]
// 008876e1  51                   push ecx
// 008876e2  52                   push edx
// 008876e3  ff1550cc9800         call dword ptr [0x98cc50]
// 008876e9  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008876ef  83f804               cmp eax, 4
// 008876f2  0f8550010000         jne 0x887848
// 008876f8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008876fc  85f6                 test esi, esi
// 008876fe  7510                 jne 0x887710
// 00887700  8b442458             mov eax, dword ptr [esp + 0x58]
// 00887704  c7400400000000       mov dword ptr [eax + 4], 0
// 0088770b  e9f6010000           jmp 0x887906
// 00887710  8d8798000000         lea eax, [edi + 0x98]
// 00887716  50                   push eax
// 00887717  56                   push esi
// 00887718  8d4c2440             lea ecx, [esp + 0x40]
// 0088771c  e83f3ffcff           call 0x84b660
// 00887721  6a01                 push 1
// 00887723  6868619a00           push 0x9a6168
// 00887728  8d4c2418             lea ecx, [esp + 0x18]
// 0088772c  51                   push ecx
// 0088772d  8bce                 mov ecx, esi
// 0088772f  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00887737  e8d46af7ff           call 0x7fe210
// 0088773c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00887740  83f80f               cmp eax, 0xf
// 00887743  7d05                 jge 0x88774a
// 00887745  b80f000000           mov eax, 0xf
// 0088774a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0088774e  83c003               add eax, 3
// 00887751  50                   push eax
// 00887752  52                   push edx
// 00887753  6a00                 push 0
// 00887755  6a00                 push 0
// 00887757  8d442428             lea eax, [esp + 0x28]
// 0088775b  50                   push eax
// 0088775c  ff1538ca9800         call dword ptr [0x98ca38]
// 00887762  837c246400           cmp dword ptr [esp + 0x64], 0
// 00887767  0f8494000000         je 0x887801
// 0088776d  8b4604               mov eax, dword ptr [esi + 4]
// 00887770  6a00                 push 0
// 00887772  8d4c241c             lea ecx, [esp + 0x1c]
// 00887776  51                   push ecx
// 00887777  6a01                 push 1
// 00887779  6a02                 push 2
// 0088777b  50                   push eax
// 0088777c  8d8f84040000         lea ecx, [edi + 0x484]
// 00887782  e8b940feff           call 0x86b840
// 00887787  6a01                 push 1
// 00887789  8bce                 mov ecx, esi
// 0088778b  e800ed0900           call 0x926490
// 00887790  8b475c               mov eax, dword ptr [edi + 0x5c]
// 00887793  83f8ff               cmp eax, -1
// 00887796  7503                 jne 0x88779b
// 00887798  8b4758               mov eax, dword ptr [edi + 0x58]
// 0088779b  8b16                 mov edx, dword ptr [esi]
// 0088779d  50                   push eax
// 0088779e  8b4238               mov eax, dword ptr [edx + 0x38]
// 008877a1  8bce                 mov ecx, esi
// 008877a3  ffd0                 call eax
// 008877a5  8d4c245c             lea ecx, [esp + 0x5c]
// 008877a9  51                   push ecx
// 008877aa  8bcb                 mov ecx, ebx
// 008877ac  e8cf5df7ff           call 0x7fd580
// 008877b1  8b542424             mov edx, dword ptr [esp + 0x24]
// 008877b5  8bca                 mov ecx, edx
// 008877b7  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008877bb  89542434             mov dword ptr [esp + 0x34], edx
// 008877bf  03c9                 add ecx, ecx
// 008877c1  8bf9                 mov edi, ecx
// 008877c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008877c7  2bcf                 sub ecx, edi
// 008877c9  6824080000           push 0x824
// 008877ce  83c103               add ecx, 3
// 008877d1  8d54242c             lea edx, [esp + 0x2c]
// 008877d5  52                   push edx
// 008877d6  894c2438             mov dword ptr [esp + 0x38], ecx
// 008877da  50                   push eax
// 008877db  8bce                 mov ecx, esi
// 008877dd  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008877e2  c744243405000000     mov dword ptr [esp + 0x34], 5
// 008877ea  c744243803000000     mov dword ptr [esp + 0x38], 3
// 008877f2  e82923f7ff           call 0x7f9b20
// 008877f7  8d4c245c             lea ecx, [esp + 0x5c]
// 008877fb  ff15c0de9800         call dword ptr [0x98dec0]
// 00887801  8b442414             mov eax, dword ptr [esp + 0x14]
// 00887805  83f80f               cmp eax, 0xf
// 00887808  7d05                 jge 0x88780f
// 0088780a  b80f000000           mov eax, 0xf
// 0088780f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00887813  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00887817  8b742458             mov esi, dword ptr [esp + 0x58]
// 0088781b  890e                 mov dword ptr [esi], ecx
// 0088781d  8d4c2438             lea ecx, [esp + 0x38]
// 00887821  894604               mov dword ptr [esi + 4], eax
// 00887824  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0088782c  e8af3efcff           call 0x84b6e0
// 00887831  8bc6                 mov eax, esi
// 00887833  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00887837  64890d00000000       mov dword ptr fs:[0], ecx
// 0088783e  59                   pop ecx
// 0088783f  5f                   pop edi
// 00887840  5e                   pop esi
// 00887841  5b                   pop ebx
// 00887842  83c444               add esp, 0x44
// 00887845  c21000               ret 0x10
// 00887848  83f803               cmp eax, 3
// 0088784b  7473                 je 0x8878c0
// 0088784d  83f802               cmp eax, 2
// 00887850  746e                 je 0x8878c0
// 00887852  85c0                 test eax, eax
// 00887854  7409                 je 0x88785f
// 00887856  83f801               cmp eax, 1
// 00887859  0f85a1feffff         jne 0x887700
// 0088785f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00887863  85c9                 test ecx, ecx
// 00887865  7433                 je 0x88789a
// 00887867  837c246400           cmp dword ptr [esp + 0x64], 0
// 0088786c  742c                 je 0x88789a
// 0088786e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00887872  6a00                 push 0
// 00887874  83c002               add eax, 2
// 00887877  8d54241c             lea edx, [esp + 0x1c]
// 0088787b  52                   push edx
// 0088787c  89442420             mov dword ptr [esp + 0x20], eax
// 00887880  83c006               add eax, 6
// 00887883  6a01                 push 1
// 00887885  8944242c             mov dword ptr [esp + 0x2c], eax
// 00887889  8b4104               mov eax, dword ptr [ecx + 4]
// 0088788c  6a01                 push 1
// 0088788e  50                   push eax
// 0088788f  8d8f60040000         lea ecx, [edi + 0x460]
// 00887895  e8a63ffeff           call 0x86b840
// 0088789a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0088789e  c70008000000         mov dword ptr [eax], 8
// 008878a4  c7400400000000       mov dword ptr [eax + 4], 0
// 008878ab  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008878af  64890d00000000       mov dword ptr fs:[0], ecx
// 008878b6  59                   pop ecx
// 008878b7  5f                   pop edi
// 008878b8  5e                   pop esi
// 008878b9  5b                   pop ebx
// 008878ba  83c444               add esp, 0x44
// 008878bd  c21000               ret 0x10
// 008878c0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008878c4  85c9                 test ecx, ecx
// 008878c6  7433                 je 0x8878fb
// 008878c8  837c246400           cmp dword ptr [esp + 0x64], 0
// 008878cd  742c                 je 0x8878fb
// 008878cf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008878d3  83c002               add eax, 2
// 008878d6  8944241c             mov dword ptr [esp + 0x1c], eax
// 008878da  83c006               add eax, 6
// 008878dd  6a00                 push 0
// 008878df  89442428             mov dword ptr [esp + 0x28], eax
// 008878e3  8b4104               mov eax, dword ptr [ecx + 4]
// 008878e6  8d4c241c             lea ecx, [esp + 0x1c]
// 008878ea  51                   push ecx
// 008878eb  6a01                 push 1
// 008878ed  6a02                 push 2
// 008878ef  50                   push eax
// 008878f0  8d8f60040000         lea ecx, [edi + 0x460]
// 008878f6  e8453ffeff           call 0x86b840
// 008878fb  8b442458             mov eax, dword ptr [esp + 0x58]
// 008878ff  c7400408000000       mov dword ptr [eax + 4], 8
// 00887906  c70000000000         mov dword ptr [eax], 0
// 0088790c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00887910  64890d00000000       mov dword ptr fs:[0], ecx
// 00887917  59                   pop ecx
// 00887918  5f                   pop edi
// 00887919  5e                   pop esi
// 0088791a  5b                   pop ebx
// 0088791b  83c444               add esp, 0x44
// 0088791e  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCommandBarGripper@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp