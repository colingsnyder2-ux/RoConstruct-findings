// roc 2009-06 00462880  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00462880
//
// 00462880  51                   push ecx
// 00462881  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00462887  56                   push esi
// 00462888  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046288c  50                   push eax
// 0046288d  8bce                 mov ecx, esi
// 0046288f  c744240800000000     mov dword ptr [esp + 8], 0
// 00462897  ff1508fd8900         call dword ptr [0x89fd08]
// 0046289d  8bc6                 mov eax, esi
// 0046289f  5e                   pop esi
// 004628a0  59                   pop ecx
// 004628a1  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp