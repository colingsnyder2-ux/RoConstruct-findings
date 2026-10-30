// roc 2009-12 0046b460  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b460
//
// 0046b460  51                   push ecx
// 0046b461  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0046b467  56                   push esi
// 0046b468  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046b46c  50                   push eax
// 0046b46d  8bce                 mov ecx, esi
// 0046b46f  c744240800000000     mov dword ptr [esp + 8], 0
// 0046b477  ff15b8de9800         call dword ptr [0x98deb8]
// 0046b47d  8bc6                 mov eax, esi
// 0046b47f  5e                   pop esi
// 0046b480  59                   pop ecx
// 0046b481  c20400               ret 4
// copied from an identical function in another client (function ?GetFindString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp