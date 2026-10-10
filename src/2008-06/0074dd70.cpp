// roc 2008-06 0074dd70  unit: CXTPReportInplaceEdit  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074dd70
//
// 0074dd70  56                   push esi
// 0074dd71  8bf1                 mov esi, ecx
// 0074dd73  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0074dd77  7439                 je 0x74ddb2
// 0074dd79  837e6400             cmp dword ptr [esi + 0x64], 0
// 0074dd7d  7440                 je 0x74ddbf
// 0074dd7f  8b4658               mov eax, dword ptr [esi + 0x58]
// 0074dd82  85c0                 test eax, eax
// 0074dd84  7403                 je 0x74dd89
// 0074dd86  8b4020               mov eax, dword ptr [eax + 0x20]
// 0074dd89  8b5620               mov edx, dword ptr [esi + 0x20]
// 0074dd8c  6a01                 push 1
// 0074dd8e  8d4c2410             lea ecx, [esp + 0x10]
// 0074dd92  51                   push ecx
// 0074dd93  50                   push eax
// 0074dd94  52                   push edx
// 0074dd95  ff15642c8000         call dword ptr [0x802c64]
// 0074dd9b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074dd9f  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0074dda2  8b01                 mov eax, dword ptr [ecx]
// 0074dda4  8b8098000000         mov eax, dword ptr [eax + 0x98]
// 0074ddaa  52                   push edx
// 0074ddab  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074ddaf  52                   push edx
// 0074ddb0  ffd0                 call eax
// 0074ddb2  837e6400             cmp dword ptr [esi + 0x64], 0
// 0074ddb6  7407                 je 0x74ddbf
// 0074ddb8  8bce                 mov ecx, esi
// 0074ddba  e8a92ef5ff           call 0x6a0c68
// 0074ddbf  5e                   pop esi
// 0074ddc0  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnLButtonDblClk@CXTPReportInplaceEdit@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp
