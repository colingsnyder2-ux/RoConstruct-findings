// roc 2009-12 00428450  unit: CPatchedControlComboBox  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428450
//
// 00428450  51                   push ecx
// 00428451  8b01                 mov eax, dword ptr [ecx]
// 00428453  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00428459  56                   push esi
// 0042845a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042845e  56                   push esi
// 0042845f  c744240800000000     mov dword ptr [esp + 8], 0
// 00428467  ffd2                 call edx
// 00428469  8bc6                 mov eax, esi
// 0042846b  5e                   pop esi
// 0042846c  59                   pop ecx
// 0042846d  c20400               ret 4
// copied from an identical function in another client (function ?GetText@CXTPControlComboBox@@UBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp