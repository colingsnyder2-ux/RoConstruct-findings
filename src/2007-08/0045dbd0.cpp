// roc 2007-08 0045dbd0  unit: HH::?$CArray  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045dbd0
//
// 0045dbd0  51                   push ecx
// 0045dbd1  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0045dbd7  56                   push esi
// 0045dbd8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045dbdc  50                   push eax
// 0045dbdd  8bce                 mov ecx, esi
// 0045dbdf  c744240800000000     mov dword ptr [esp + 8], 0
// 0045dbe7  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0045dbed  8bc6                 mov eax, esi
// 0045dbef  5e                   pop esi
// 0045dbf0  59                   pop ecx
// 0045dbf1  c20400               ret 4
// copied from an identical function in another client (function ?GetReplaceString@CFindReplaceDialog@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: scintilla-mfc-1.20-shared ScintillaDocView.cpp