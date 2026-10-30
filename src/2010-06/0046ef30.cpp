// roc 2010-06 0046ef30  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046ef30
//
// 0046ef30  51                   push ecx
// 0046ef31  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0046ef37  56                   push esi
// 0046ef38  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046ef3c  50                   push eax
// 0046ef3d  8bce                 mov ecx, esi
// 0046ef3f  c744240800000000     mov dword ptr [esp + 8], 0
// 0046ef47  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0046ef4d  8bc6                 mov eax, esi
// 0046ef4f  5e                   pop esi
// 0046ef50  59                   pop ecx
// 0046ef51  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp