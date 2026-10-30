// roc 2012-06 0049e590  unit: CrashReporter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e590
//
// 0049e590  51                   push ecx
// 0049e591  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0049e597  56                   push esi
// 0049e598  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049e59c  50                   push eax
// 0049e59d  8bce                 mov ecx, esi
// 0049e59f  c744240800000000     mov dword ptr [esp + 8], 0
// 0049e5a7  ff15c847b200         call dword ptr [0xb247c8]
// 0049e5ad  8bc6                 mov eax, esi
// 0049e5af  5e                   pop esi
// 0049e5b0  59                   pop ecx
// 0049e5b1  c20400               ret 4
// copied from an identical function in another client (function ?GetFindString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp