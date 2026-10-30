// roc 2009-12 0089b2c0  unit: CXTPReportPaintManager  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089b2c0
//
// 0089b2c0  83ec10               sub esp, 0x10
// 0089b2c3  56                   push esi
// 0089b2c4  57                   push edi
// 0089b2c5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0089b2c9  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 0089b2cf  83b88c00000000       cmp dword ptr [eax + 0x8c], 0
// 0089b2d6  8bf1                 mov esi, ecx
// 0089b2d8  0f85f3000000         jne 0x89b3d1
// 0089b2de  8b96a4020000         mov edx, dword ptr [esi + 0x2a4]
// 0089b2e4  85d2                 test edx, edx
// 0089b2e6  0f84e5000000         je 0x89b3d1
// 0089b2ec  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089b2f0  8b08                 mov ecx, dword ptr [eax]
// 0089b2f2  894c2408             mov dword ptr [esp + 8], ecx
// 0089b2f6  8b4804               mov ecx, dword ptr [eax + 4]
// 0089b2f9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0089b2fd  8b4808               mov ecx, dword ptr [eax + 8]
// 0089b300  8b400c               mov eax, dword ptr [eax + 0xc]
// 0089b303  53                   push ebx
// 0089b304  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0089b308  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089b30c  89442418             mov dword ptr [esp + 0x18], eax
// 0089b310  f6c208               test dl, 8
// 0089b313  7457                 je 0x89b36c
// 0089b315  6a00                 push 0
// 0089b317  8bcf                 mov ecx, edi
// 0089b319  e82ab40800           call 0x926748
// 0089b31e  85c0                 test eax, eax
// 0089b320  7446                 je 0x89b368
// 0089b322  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0089b329  753d                 jne 0x89b368
// 0089b32b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b32f  48                   dec eax
// 0089b330  8944240c             mov dword ptr [esp + 0xc], eax
// 0089b334  83c004               add eax, 4
// 0089b337  89442414             mov dword ptr [esp + 0x14], eax
// 0089b33b  8b86e0010000         mov eax, dword ptr [esi + 0x1e0]
// 0089b341  83f8ff               cmp eax, -1
// 0089b344  7506                 jne 0x89b34c
// 0089b346  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 0089b34c  6a01                 push 1
// 0089b34e  68ffffff00           push 0xffffff
// 0089b353  50                   push eax
// 0089b354  8d4c2418             lea ecx, [esp + 0x18]
// 0089b358  51                   push ecx
// 0089b359  53                   push ebx
// 0089b35a  e8411ffbff           call 0x84d2a0
// 0089b35f  8bc8                 mov ecx, eax
// 0089b361  e86a1ffbff           call 0x84d2d0
// 0089b366  eb3d                 jmp 0x89b3a5
// 0089b368  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089b36c  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 0089b372  a803                 test al, 3
// 0089b374  742f                 je 0x89b3a5
// 0089b376  a802                 test al, 2
// 0089b378  8b86e0010000         mov eax, dword ptr [esi + 0x1e0]
// 0089b37e  ba00000000           mov edx, 0
// 0089b383  0f95c2               setne dl
// 0089b386  42                   inc edx
// 0089b387  2bca                 sub ecx, edx
// 0089b389  894c240c             mov dword ptr [esp + 0xc], ecx
// 0089b38d  83f8ff               cmp eax, -1
// 0089b390  7506                 jne 0x89b398
// 0089b392  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 0089b398  50                   push eax
// 0089b399  8d442410             lea eax, [esp + 0x10]
// 0089b39d  50                   push eax
// 0089b39e  8bcb                 mov ecx, ebx
// 0089b3a0  e85992f5ff           call 0x7f45fe
// 0089b3a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089b3a9  85c9                 test ecx, ecx
// 0089b3ab  7423                 je 0x89b3d0
// 0089b3ad  8b11                 mov edx, dword ptr [ecx]
// 0089b3af  8b4274               mov eax, dword ptr [edx + 0x74]
// 0089b3b2  ffd0                 call eax
// 0089b3b4  85c0                 test eax, eax
// 0089b3b6  7418                 je 0x89b3d0
// 0089b3b8  f686a40200000b       test byte ptr [esi + 0x2a4], 0xb
// 0089b3bf  740f                 je 0x89b3d0
// 0089b3c1  8b5304               mov edx, dword ptr [ebx + 4]
// 0089b3c4  8d4c240c             lea ecx, [esp + 0xc]
// 0089b3c8  51                   push ecx
// 0089b3c9  52                   push edx
// 0089b3ca  ff15a0ca9800         call dword ptr [0x98caa0]
// 0089b3d0  5b                   pop ebx
// 0089b3d1  5f                   pop edi
// 0089b3d2  5e                   pop esi
// 0089b3d3  83c410               add esp, 0x10
// 0089b3d6  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawFreezeColsDivider@CXTPReportPaintManager@@UAEXPAVCDC@@ABVCRect@@PAVCXTPReportControl@@PAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp