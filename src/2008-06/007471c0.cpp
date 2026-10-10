// roc 2008-06 007471c0  unit: CXTPReportPaintManager  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007471c0
//
// 007471c0  83ec10               sub esp, 0x10
// 007471c3  56                   push esi
// 007471c4  57                   push edi
// 007471c5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007471c9  8b8788020000         mov eax, dword ptr [edi + 0x288]
// 007471cf  83b88c00000000       cmp dword ptr [eax + 0x8c], 0
// 007471d6  8bf1                 mov esi, ecx
// 007471d8  0f85f3000000         jne 0x7472d1
// 007471de  8b96a4020000         mov edx, dword ptr [esi + 0x2a4]
// 007471e4  85d2                 test edx, edx
// 007471e6  0f84e5000000         je 0x7472d1
// 007471ec  8b442420             mov eax, dword ptr [esp + 0x20]
// 007471f0  8b08                 mov ecx, dword ptr [eax]
// 007471f2  894c2408             mov dword ptr [esp + 8], ecx
// 007471f6  8b4804               mov ecx, dword ptr [eax + 4]
// 007471f9  894c240c             mov dword ptr [esp + 0xc], ecx
// 007471fd  8b4808               mov ecx, dword ptr [eax + 8]
// 00747200  8b400c               mov eax, dword ptr [eax + 0xc]
// 00747203  53                   push ebx
// 00747204  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00747208  894c2414             mov dword ptr [esp + 0x14], ecx
// 0074720c  89442418             mov dword ptr [esp + 0x18], eax
// 00747210  f6c208               test dl, 8
// 00747213  7457                 je 0x74726c
// 00747215  6a00                 push 0
// 00747217  8bcf                 mov ecx, edi
// 00747219  e840510700           call 0x7bc35e
// 0074721e  85c0                 test eax, eax
// 00747220  7446                 je 0x747268
// 00747222  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00747229  753d                 jne 0x747268
// 0074722b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0074722f  48                   dec eax
// 00747230  8944240c             mov dword ptr [esp + 0xc], eax
// 00747234  83c004               add eax, 4
// 00747237  89442414             mov dword ptr [esp + 0x14], eax
// 0074723b  8b86e0010000         mov eax, dword ptr [esi + 0x1e0]
// 00747241  83f8ff               cmp eax, -1
// 00747244  7506                 jne 0x74724c
// 00747246  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 0074724c  6a01                 push 1
// 0074724e  68ffffff00           push 0xffffff
// 00747253  50                   push eax
// 00747254  8d4c2418             lea ecx, [esp + 0x18]
// 00747258  51                   push ecx
// 00747259  53                   push ebx
// 0074725a  e87129fbff           call 0x6f9bd0
// 0074725f  8bc8                 mov ecx, eax
// 00747261  e89a29fbff           call 0x6f9c00
// 00747266  eb3d                 jmp 0x7472a5
// 00747268  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074726c  8b86a4020000         mov eax, dword ptr [esi + 0x2a4]
// 00747272  a803                 test al, 3
// 00747274  742f                 je 0x7472a5
// 00747276  a802                 test al, 2
// 00747278  8b86e0010000         mov eax, dword ptr [esi + 0x1e0]
// 0074727e  ba00000000           mov edx, 0
// 00747283  0f95c2               setne dl
// 00747286  42                   inc edx
// 00747287  2bca                 sub ecx, edx
// 00747289  894c240c             mov dword ptr [esp + 0xc], ecx
// 0074728d  83f8ff               cmp eax, -1
// 00747290  7506                 jne 0x747298
// 00747292  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 00747298  50                   push eax
// 00747299  8d442410             lea eax, [esp + 0x10]
// 0074729d  50                   push eax
// 0074729e  8bcb                 mov ecx, ebx
// 007472a0  e8b9a0f5ff           call 0x6a135e
// 007472a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007472a9  85c9                 test ecx, ecx
// 007472ab  7423                 je 0x7472d0
// 007472ad  8b11                 mov edx, dword ptr [ecx]
// 007472af  8b4274               mov eax, dword ptr [edx + 0x74]
// 007472b2  ffd0                 call eax
// 007472b4  85c0                 test eax, eax
// 007472b6  7418                 je 0x7472d0
// 007472b8  f686a40200000b       test byte ptr [esi + 0x2a4], 0xb
// 007472bf  740f                 je 0x7472d0
// 007472c1  8b5304               mov edx, dword ptr [ebx + 4]
// 007472c4  8d4c240c             lea ecx, [esp + 0xc]
// 007472c8  51                   push ecx
// 007472c9  52                   push edx
// 007472ca  ff15402b8000         call dword ptr [0x802b40]
// 007472d0  5b                   pop ebx
// 007472d1  5f                   pop edi
// 007472d2  5e                   pop esi
// 007472d3  83c410               add esp, 0x10
// 007472d6  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawFreezeColsDivider@CXTPReportPaintManager@@UAEXPAVCDC@@ABVCRect@@PAVCXTPReportControl@@PAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
