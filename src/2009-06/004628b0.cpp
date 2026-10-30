// roc 2009-06 004628b0  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004628b0
//
// 004628b0  51                   push ecx
// 004628b1  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 004628b7  56                   push esi
// 004628b8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004628bc  50                   push eax
// 004628bd  8bce                 mov ecx, esi
// 004628bf  c744240800000000     mov dword ptr [esp + 8], 0
// 004628c7  ff1508fd8900         call dword ptr [0x89fd08]
// 004628cd  8bc6                 mov eax, esi
// 004628cf  5e                   pop esi
// 004628d0  59                   pop ecx
// 004628d1  c20400               ret 4
// copied from an identical function in another client (function ?GetFindString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp