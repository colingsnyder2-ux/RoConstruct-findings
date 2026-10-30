// roc 2007-03 0045b490  unit: seg_00450000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045b490
//
// 0045b490  51                   push ecx
// 0045b491  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0045b497  56                   push esi
// 0045b498  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045b49c  50                   push eax
// 0045b49d  8bce                 mov ecx, esi
// 0045b49f  c744240800000000     mov dword ptr [esp + 8], 0
// 0045b4a7  ff1574dd7700         call dword ptr [0x77dd74]
// 0045b4ad  8bc6                 mov eax, esi
// 0045b4af  5e                   pop esi
// 0045b4b0  59                   pop ecx
// 0045b4b1  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp