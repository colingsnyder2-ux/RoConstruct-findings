// roc 2009-12 0046b430  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046b430
//
// 0046b430  51                   push ecx
// 0046b431  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0046b437  56                   push esi
// 0046b438  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046b43c  50                   push eax
// 0046b43d  8bce                 mov ecx, esi
// 0046b43f  c744240800000000     mov dword ptr [esp + 8], 0
// 0046b447  ff15b8de9800         call dword ptr [0x98deb8]
// 0046b44d  8bc6                 mov eax, esi
// 0046b44f  5e                   pop esi
// 0046b450  59                   pop ecx
// 0046b451  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp