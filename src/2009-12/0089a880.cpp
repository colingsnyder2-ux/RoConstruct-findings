// roc 2009-12 0089a880  unit: CXTPReportPaintManager  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089a880
//
// 0089a880  6aff                 push -1
// 0089a882  68491a9600           push 0x961a49
// 0089a887  64a100000000         mov eax, dword ptr fs:[0]
// 0089a88d  50                   push eax
// 0089a88e  56                   push esi
// 0089a88f  a10052b600           mov eax, dword ptr [0xb65200]
// 0089a894  33c4                 xor eax, esp
// 0089a896  50                   push eax
// 0089a897  8d442408             lea eax, [esp + 8]
// 0089a89b  64a300000000         mov dword ptr fs:[0], eax
// 0089a8a1  8bf1                 mov esi, ecx
// 0089a8a3  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089a8a7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089a8ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089a8af  6a00                 push 0
// 0089a8b1  50                   push eax
// 0089a8b2  83ec10               sub esp, 0x10
// 0089a8b5  8bc4                 mov eax, esp
// 0089a8b7  8908                 mov dword ptr [eax], ecx
// 0089a8b9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0089a8bd  895004               mov dword ptr [eax + 4], edx
// 0089a8c0  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0089a8c4  894808               mov dword ptr [eax + 8], ecx
// 0089a8c7  51                   push ecx
// 0089a8c8  89500c               mov dword ptr [eax + 0xc], edx
// 0089a8cb  8d442440             lea eax, [esp + 0x40]
// 0089a8cf  8bcc                 mov ecx, esp
// 0089a8d1  89642454             mov dword ptr [esp + 0x54], esp
// 0089a8d5  50                   push eax
// 0089a8d6  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0089a8de  ff1594de9800         call dword ptr [0x98de94]
// 0089a8e4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089a8e8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089a8ec  8b16                 mov edx, dword ptr [esi]
// 0089a8ee  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 0089a8f4  50                   push eax
// 0089a8f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089a8f9  51                   push ecx
// 0089a8fa  50                   push eax
// 0089a8fb  8bce                 mov ecx, esi
// 0089a8fd  ffd2                 call edx
// 0089a8ff  8d4c2424             lea ecx, [esp + 0x24]
// 0089a903  8bf0                 mov esi, eax
// 0089a905  ff15c0de9800         call dword ptr [0x98dec0]
// 0089a90b  8bc6                 mov eax, esi
// 0089a90d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089a911  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a918  59                   pop ecx
// 0089a919  5e                   pop esi
// 0089a91a  83c40c               add esp, 0xc
// 0089a91d  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawLink@CXTPReportPaintManager@@MAEHPAHPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAVCXTPReportHyperlink@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp