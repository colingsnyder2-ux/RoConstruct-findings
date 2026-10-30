// roc 2011-06 0048b870  unit: CCommonDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b870
//
// 0048b870  51                   push ecx
// 0048b871  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0048b877  56                   push esi
// 0048b878  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048b87c  50                   push eax
// 0048b87d  8bce                 mov ecx, esi
// 0048b87f  c744240800000000     mov dword ptr [esp + 8], 0
// 0048b887  ff15002ea400         call dword ptr [0xa42e00]
// 0048b88d  8bc6                 mov eax, esi
// 0048b88f  5e                   pop esi
// 0048b890  59                   pop ecx
// 0048b891  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp