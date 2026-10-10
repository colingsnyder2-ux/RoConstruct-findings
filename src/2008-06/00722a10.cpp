// roc 2008-06 00722a10  unit: CXTPRibbonBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722a10
//
// 00722a10  56                   push esi
// 00722a11  8bf1                 mov esi, ecx
// 00722a13  8b06                 mov eax, dword ptr [esi]
// 00722a15  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00722a1b  ffd2                 call edx
// 00722a1d  85c0                 test eax, eax
// 00722a1f  7410                 je 0x722a31
// 00722a21  8b442408             mov eax, dword ptr [esp + 8]
// 00722a25  50                   push eax
// 00722a26  8bce                 mov ecx, esi
// 00722a28  e87315fcff           call 0x6e3fa0
// 00722a2d  5e                   pop esi
// 00722a2e  c20400               ret 4
// 00722a31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00722a35  51                   push ecx
// 00722a36  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00722a3c  e8affafbff           call 0x6e24f0
// 00722a41  5e                   pop esi
// 00722a42  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?RestoreCommandBarList@CXTPRibbonBar@@MAEXPAVCXTPCommandBarList@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
