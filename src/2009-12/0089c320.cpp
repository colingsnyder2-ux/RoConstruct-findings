// roc 2009-12 0089c320  unit: CXTPReportPaintManager  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089c320
//
// 0089c320  6aff                 push -1
// 0089c322  68601c9600           push 0x961c60
// 0089c327  64a100000000         mov eax, dword ptr fs:[0]
// 0089c32d  50                   push eax
// 0089c32e  83ec48               sub esp, 0x48
// 0089c331  53                   push ebx
// 0089c332  55                   push ebp
// 0089c333  56                   push esi
// 0089c334  57                   push edi
// 0089c335  a10052b600           mov eax, dword ptr [0xb65200]
// 0089c33a  33c4                 xor eax, esp
// 0089c33c  50                   push eax
// 0089c33d  8d44245c             lea eax, [esp + 0x5c]
// 0089c341  64a300000000         mov dword ptr fs:[0], eax
// 0089c347  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0089c34e  8d8170020000         lea eax, [ecx + 0x270]
// 0089c354  8d4c243c             lea ecx, [esp + 0x3c]
// 0089c358  51                   push ecx
// 0089c359  89442418             mov dword ptr [esp + 0x18], eax
// 0089c35d  8b4004               mov eax, dword ptr [eax + 4]
// 0089c360  52                   push edx
// 0089c361  50                   push eax
// 0089c362  e8b777f5ff           call 0x7f3b1e
// 0089c367  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0089c36d  8b08                 mov ecx, dword ptr [eax]
// 0089c36f  e8ccd7f6ff           call 0x809b40
// 0089c374  85c0                 test eax, eax
// 0089c376  7516                 jne 0x89c38e
// 0089c378  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0089c37c  c70000000000         mov dword ptr [eax], 0
// 0089c382  c7400400000000       mov dword ptr [eax + 4], 0
// 0089c389  e96e010000           jmp 0x89c4fc
// 0089c38e  8b742458             mov esi, dword ptr [esp + 0x58]
// 0089c392  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0089c399  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089c39d  2b742450             sub esi, dword ptr [esp + 0x50]
// 0089c3a1  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0089c3a5  2b6c244c             sub ebp, dword ptr [esp + 0x4c]
// 0089c3a9  2bc1                 sub eax, ecx
// 0089c3ab  3bf0                 cmp esi, eax
// 0089c3ad  0f8d3e010000         jge 0x89c4f1
// 0089c3b3  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0089c3b7  85ff                 test edi, edi
// 0089c3b9  0f8432010000         je 0x89c4f1
// 0089c3bf  8b542474             mov edx, dword ptr [esp + 0x74]
// 0089c3c3  42                   inc edx
// 0089c3c4  2bc6                 sub eax, esi
// 0089c3c6  89542420             mov dword ptr [esp + 0x20], edx
// 0089c3ca  99                   cdq 
// 0089c3cb  2bc2                 sub eax, edx
// 0089c3cd  8bd8                 mov ebx, eax
// 0089c3cf  d1fb                 sar ebx, 1
// 0089c3d1  33c0                 xor eax, eax
// 0089c3d3  03d9                 add ebx, ecx
// 0089c3d5  39470c               cmp dword ptr [edi + 0xc], eax
// 0089c3d8  0f84af000000         je 0x89c48d
// 0089c3de  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089c3e2  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 0089c3ea  56                   push esi
// 0089c3eb  55                   push ebp
// 0089c3ec  57                   push edi
// 0089c3ed  8d4c2424             lea ecx, [esp + 0x24]
// 0089c3f1  89442470             mov dword ptr [esp + 0x70], eax
// 0089c3f5  e856d8f6ff           call 0x809c50
// 0089c3fa  8d442418             lea eax, [esp + 0x18]
// 0089c3fe  50                   push eax
// 0089c3ff  6a00                 push 0
// 0089c401  8d4c2430             lea ecx, [esp + 0x30]
// 0089c405  e876f4faff           call 0x84b880
// 0089c40a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0089c40d  51                   push ecx
// 0089c40e  c644246801           mov byte ptr [esp + 0x68], 1
// 0089c413  ff15e0b09800         call dword ptr [0x98b0e0]
// 0089c419  50                   push eax
// 0089c41a  56                   push esi
// 0089c41b  55                   push ebp
// 0089c41c  6a00                 push 0
// 0089c41e  6a00                 push 0
// 0089c420  8d4c243c             lea ecx, [esp + 0x3c]
// 0089c424  e86da00800           call 0x926496
// 0089c429  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0089c430  6a01                 push 1
// 0089c432  33c9                 xor ecx, ecx
// 0089c434  51                   push ecx
// 0089c435  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089c439  33c0                 xor eax, eax
// 0089c43b  50                   push eax
// 0089c43c  52                   push edx
// 0089c43d  8d442438             lea eax, [esp + 0x38]
// 0089c441  50                   push eax
// 0089c442  e8e9b9f7ff           call 0x817e30
// 0089c447  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c44b  682000cc00           push 0xcc0020
// 0089c450  6a00                 push 0
// 0089c452  6a00                 push 0
// 0089c454  8d4c2434             lea ecx, [esp + 0x34]
// 0089c458  51                   push ecx
// 0089c459  56                   push esi
// 0089c45a  55                   push ebp
// 0089c45b  53                   push ebx
// 0089c45c  52                   push edx
// 0089c45d  8bcf                 mov ecx, edi
// 0089c45f  e8fc1cf6ff           call 0x7fe160
// 0089c464  8d4c2428             lea ecx, [esp + 0x28]
// 0089c468  c644246400           mov byte ptr [esp + 0x64], 0
// 0089c46d  e81ef5faff           call 0x84b990
// 0089c472  8d4c2418             lea ecx, [esp + 0x18]
// 0089c476  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0089c47e  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 0089c486  e8a52db7ff           call 0x40f230
// 0089c48b  eb64                 jmp 0x89c4f1
// 0089c48d  57                   push edi
// 0089c48e  e87dfcfaff           call 0x84c110
// 0089c493  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089c497  83c404               add esp, 4
// 0089c49a  85c0                 test eax, eax
// 0089c49c  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0089c4a3  743d                 je 0x89c4e2
// 0089c4a5  50                   push eax
// 0089c4a6  e895d9f6ff           call 0x809e40
// 0089c4ab  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c4af  8b7f04               mov edi, dword ptr [edi + 4]
// 0089c4b2  6a03                 push 3
// 0089c4b4  6a00                 push 0
// 0089c4b6  6a00                 push 0
// 0089c4b8  56                   push esi
// 0089c4b9  8bcd                 mov ecx, ebp
// 0089c4bb  f7d9                 neg ecx
// 0089c4bd  51                   push ecx
// 0089c4be  50                   push eax
// 0089c4bf  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 0089c4c6  53                   push ebx
// 0089c4c7  8d042a               lea eax, [edx + ebp]
// 0089c4ca  50                   push eax
// 0089c4cb  57                   push edi
// 0089c4cc  ff1514cb9800         call dword ptr [0x98cb14]
// 0089c4d2  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089c4d9  51                   push ecx
// 0089c4da  ff15f8c99800         call dword ptr [0x98c9f8]
// 0089c4e0  eb0f                 jmp 0x89c4f1
// 0089c4e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089c4e6  6a01                 push 1
// 0089c4e8  53                   push ebx
// 0089c4e9  52                   push edx
// 0089c4ea  50                   push eax
// 0089c4eb  57                   push edi
// 0089c4ec  e83fb9f7ff           call 0x817e30
// 0089c4f1  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0089c4f5  45                   inc ebp
// 0089c4f6  46                   inc esi
// 0089c4f7  8928                 mov dword ptr [eax], ebp
// 0089c4f9  897004               mov dword ptr [eax + 4], esi
// 0089c4fc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0089c500  64890d00000000       mov dword ptr fs:[0], ecx
// 0089c507  59                   pop ecx
// 0089c508  5f                   pop edi
// 0089c509  5e                   pop esi
// 0089c50a  5d                   pop ebp
// 0089c50b  5b                   pop ebx
// 0089c50c  83c454               add esp, 0x54
// 0089c50f  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawGlyph@CXTPReportPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp