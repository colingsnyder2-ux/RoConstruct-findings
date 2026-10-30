// roc 2009-12 0089c150  unit: CXTPReportPaintManager  size: 451 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089c150
//
// 0089c150  6aff                 push -1
// 0089c152  68005b9600           push 0x965b00
// 0089c157  64a100000000         mov eax, dword ptr fs:[0]
// 0089c15d  50                   push eax
// 0089c15e  83ec2c               sub esp, 0x2c
// 0089c161  53                   push ebx
// 0089c162  55                   push ebp
// 0089c163  56                   push esi
// 0089c164  57                   push edi
// 0089c165  a10052b600           mov eax, dword ptr [0xb65200]
// 0089c16a  33c4                 xor eax, esp
// 0089c16c  50                   push eax
// 0089c16d  8d442440             lea eax, [esp + 0x40]
// 0089c171  64a300000000         mov dword ptr fs:[0], eax
// 0089c177  8b442454             mov eax, dword ptr [esp + 0x54]
// 0089c17b  85c0                 test eax, eax
// 0089c17d  7507                 jne 0x89c186
// 0089c17f  33c0                 xor eax, eax
// 0089c181  e977010000           jmp 0x89c2fd
// 0089c186  8b88d0010000         mov ecx, dword ptr [eax + 0x1d0]
// 0089c18c  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089c190  6a00                 push 0
// 0089c192  50                   push eax
// 0089c193  e8e839f7ff           call 0x80fb80
// 0089c198  8be8                 mov ebp, eax
// 0089c19a  85ed                 test ebp, ebp
// 0089c19c  74e1                 je 0x89c17f
// 0089c19e  8bcd                 mov ecx, ebp
// 0089c1a0  e8cb96c3ff           call 0x4d5870
// 0089c1a5  8bcd                 mov ecx, ebp
// 0089c1a7  8bd8                 mov ebx, eax
// 0089c1a9  e8d21afbff           call 0x84dc80
// 0089c1ae  8b542460             mov edx, dword ptr [esp + 0x60]
// 0089c1b2  8b742458             mov esi, dword ptr [esp + 0x58]
// 0089c1b6  8bc8                 mov ecx, eax
// 0089c1b8  8b442464             mov eax, dword ptr [esp + 0x64]
// 0089c1bc  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 0089c1c0  2bd6                 sub edx, esi
// 0089c1c2  3bca                 cmp ecx, edx
// 0089c1c4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0089c1c8  0f8d2c010000         jge 0x89c2fa
// 0089c1ce  3bd8                 cmp ebx, eax
// 0089c1d0  0f8d24010000         jge 0x89c2fa
// 0089c1d6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0089c1da  85ff                 test edi, edi
// 0089c1dc  0f8418010000         je 0x89c2fa
// 0089c1e2  2bc3                 sub eax, ebx
// 0089c1e4  46                   inc esi
// 0089c1e5  99                   cdq 
// 0089c1e6  2bc2                 sub eax, edx
// 0089c1e8  89742424             mov dword ptr [esp + 0x24], esi
// 0089c1ec  8bf0                 mov esi, eax
// 0089c1ee  d1fe                 sar esi, 1
// 0089c1f0  0374245c             add esi, dword ptr [esp + 0x5c]
// 0089c1f4  33d2                 xor edx, edx
// 0089c1f6  39570c               cmp dword ptr [edi + 0xc], edx
// 0089c1f9  0f84c7000000         je 0x89c2c6
// 0089c1ff  89542418             mov dword ptr [esp + 0x18], edx
// 0089c203  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 0089c20b  53                   push ebx
// 0089c20c  51                   push ecx
// 0089c20d  57                   push edi
// 0089c20e  8d4c2420             lea ecx, [esp + 0x20]
// 0089c212  89542454             mov dword ptr [esp + 0x54], edx
// 0089c216  e835daf6ff           call 0x809c50
// 0089c21b  8d4c2414             lea ecx, [esp + 0x14]
// 0089c21f  51                   push ecx
// 0089c220  6a00                 push 0
// 0089c222  8d4c2434             lea ecx, [esp + 0x34]
// 0089c226  e855f6faff           call 0x84b880
// 0089c22b  8b5708               mov edx, dword ptr [edi + 8]
// 0089c22e  52                   push edx
// 0089c22f  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0089c234  ff15e0b09800         call dword ptr [0x98b0e0]
// 0089c23a  50                   push eax
// 0089c23b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089c23f  53                   push ebx
// 0089c240  50                   push eax
// 0089c241  6a00                 push 0
// 0089c243  6a00                 push 0
// 0089c245  8d4c2440             lea ecx, [esp + 0x40]
// 0089c249  e848a20800           call 0x926496
// 0089c24e  83ec08               sub esp, 8
// 0089c251  8bc4                 mov eax, esp
// 0089c253  8bcd                 mov ecx, ebp
// 0089c255  8964245c             mov dword ptr [esp + 0x5c], esp
// 0089c259  c70000000000         mov dword ptr [eax], 0
// 0089c25f  c7400400000000       mov dword ptr [eax + 4], 0
// 0089c266  e8d5cef6ff           call 0x809140
// 0089c26b  50                   push eax
// 0089c26c  33c0                 xor eax, eax
// 0089c26e  50                   push eax
// 0089c26f  50                   push eax
// 0089c270  8d4c2440             lea ecx, [esp + 0x40]
// 0089c274  51                   push ecx
// 0089c275  8bcd                 mov ecx, ebp
// 0089c277  e8344cf7ff           call 0x810eb0
// 0089c27c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0089c280  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089c284  682000cc00           push 0xcc0020
// 0089c289  6a00                 push 0
// 0089c28b  6a00                 push 0
// 0089c28d  8d542438             lea edx, [esp + 0x38]
// 0089c291  52                   push edx
// 0089c292  53                   push ebx
// 0089c293  50                   push eax
// 0089c294  56                   push esi
// 0089c295  51                   push ecx
// 0089c296  8bcf                 mov ecx, edi
// 0089c298  e8c31ef6ff           call 0x7fe160
// 0089c29d  8d4c242c             lea ecx, [esp + 0x2c]
// 0089c2a1  c644244800           mov byte ptr [esp + 0x48], 0
// 0089c2a6  e8e5f6faff           call 0x84b990
// 0089c2ab  8d4c2414             lea ecx, [esp + 0x14]
// 0089c2af  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0089c2b7  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 0089c2bf  e86c2fb7ff           call 0x40f230
// 0089c2c4  eb30                 jmp 0x89c2f6
// 0089c2c6  83ec08               sub esp, 8
// 0089c2c9  8bc4                 mov eax, esp
// 0089c2cb  8bcd                 mov ecx, ebp
// 0089c2cd  8964245c             mov dword ptr [esp + 0x5c], esp
// 0089c2d1  8910                 mov dword ptr [eax], edx
// 0089c2d3  895004               mov dword ptr [eax + 4], edx
// 0089c2d6  e865cef6ff           call 0x809140
// 0089c2db  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089c2df  50                   push eax
// 0089c2e0  83ec08               sub esp, 8
// 0089c2e3  8bc4                 mov eax, esp
// 0089c2e5  89642468             mov dword ptr [esp + 0x68], esp
// 0089c2e9  57                   push edi
// 0089c2ea  8bcd                 mov ecx, ebp
// 0089c2ec  8910                 mov dword ptr [eax], edx
// 0089c2ee  897004               mov dword ptr [eax + 4], esi
// 0089c2f1  e8ba4bf7ff           call 0x810eb0
// 0089c2f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089c2fa  8d4101               lea eax, [ecx + 1]
// 0089c2fd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089c301  64890d00000000       mov dword ptr fs:[0], ecx
// 0089c308  59                   pop ecx
// 0089c309  5f                   pop edi
// 0089c30a  5e                   pop esi
// 0089c30b  5d                   pop ebp
// 0089c30c  5b                   pop ebx
// 0089c30d  83c438               add esp, 0x38
// 0089c310  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawBitmap@CXTPReportPaintManager@@UAEHPAVCDC@@PAVCXTPReportControl@@VCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp