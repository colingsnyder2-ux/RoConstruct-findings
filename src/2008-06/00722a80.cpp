// roc 2008-06 00722a80  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722a80
//
// 00722a80  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 00722a87  7509                 jne 0x722a92
// 00722a89  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 00722a90  7418                 je 0x722aaa
// 00722a92  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 00722a98  8b442404             mov eax, dword ptr [esp + 4]
// 00722a9c  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 00722aa2  8910                 mov dword ptr [eax], edx
// 00722aa4  894804               mov dword ptr [eax + 4], ecx
// 00722aa7  c20400               ret 4
// 00722aaa  e82124f9ff           call 0x6b4ed0
// 00722aaf  8bc8                 mov ecx, eax
// 00722ab1  e83ab7f8ff           call 0x6ae1f0
// 00722ab6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00722aba  8901                 mov dword ptr [ecx], eax
// 00722abc  894104               mov dword ptr [ecx + 4], eax
// 00722abf  8bc1                 mov eax, ecx
// 00722ac1  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetButtonSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
