// roc 2011-06 0048b8a0  unit: CCommonDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b8a0
//
// 0048b8a0  51                   push ecx
// 0048b8a1  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0048b8a7  56                   push esi
// 0048b8a8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048b8ac  50                   push eax
// 0048b8ad  8bce                 mov ecx, esi
// 0048b8af  c744240800000000     mov dword ptr [esp + 8], 0
// 0048b8b7  ff15002ea400         call dword ptr [0xa42e00]
// 0048b8bd  8bc6                 mov eax, esi
// 0048b8bf  5e                   pop esi
// 0048b8c0  59                   pop ecx
// 0048b8c1  c20400               ret 4
// copied from an identical function in another client (function ?GetFindString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp