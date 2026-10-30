// roc 2012-06 0049e560  unit: CrashReporter  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e560
//
// 0049e560  51                   push ecx
// 0049e561  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0049e567  56                   push esi
// 0049e568  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0049e56c  50                   push eax
// 0049e56d  8bce                 mov ecx, esi
// 0049e56f  c744240800000000     mov dword ptr [esp + 8], 0
// 0049e577  ff15c847b200         call dword ptr [0xb247c8]
// 0049e57d  8bc6                 mov eax, esi
// 0049e57f  5e                   pop esi
// 0049e580  59                   pop ecx
// 0049e581  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp