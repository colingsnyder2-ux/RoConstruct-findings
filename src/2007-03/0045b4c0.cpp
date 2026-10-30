// roc 2007-03 0045b4c0  unit: seg_00450000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045b4c0
//
// 0045b4c0  51                   push ecx
// 0045b4c1  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0045b4c7  56                   push esi
// 0045b4c8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045b4cc  50                   push eax
// 0045b4cd  8bce                 mov ecx, esi
// 0045b4cf  c744240800000000     mov dword ptr [esp + 8], 0
// 0045b4d7  ff1574dd7700         call dword ptr [0x77dd74]
// 0045b4dd  8bc6                 mov eax, esi
// 0045b4df  5e                   pop esi
// 0045b4e0  59                   pop ecx
// 0045b4e1  c20400               ret 4
// copied from an identical function in another client (function ?GetFindString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp