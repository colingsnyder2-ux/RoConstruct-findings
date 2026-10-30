// roc 2010-06 0046ef60  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ef60
//
// 0046ef60  51                   push ecx
// 0046ef61  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0046ef67  56                   push esi
// 0046ef68  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046ef6c  50                   push eax
// 0046ef6d  8bce                 mov ecx, esi
// 0046ef6f  c744240800000000     mov dword ptr [esp + 8], 0
// 0046ef77  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0046ef7d  8bc6                 mov eax, esi
// 0046ef7f  5e                   pop esi
// 0046ef80  59                   pop ecx
// 0046ef81  c20400               ret 4
// copied from an identical function in another client (function ?GetFindString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp