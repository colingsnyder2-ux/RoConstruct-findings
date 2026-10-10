// roc 2008-06 00722980  unit: CXTPRibbonBar  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722980
//
// 00722980  56                   push esi
// 00722981  8bf1                 mov esi, ecx
// 00722983  e88824f9ff           call 0x6b4e10
// 00722988  85c0                 test eax, eax
// 0072298a  747b                 je 0x722a07
// 0072298c  8bce                 mov ecx, esi
// 0072298e  e8ad24f9ff           call 0x6b4e40
// 00722993  85c0                 test eax, eax
// 00722995  741a                 je 0x7229b1
// 00722997  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072299b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072299f  8b542408             mov edx, dword ptr [esp + 8]
// 007229a3  50                   push eax
// 007229a4  51                   push ecx
// 007229a5  52                   push edx
// 007229a6  8bce                 mov ecx, esi
// 007229a8  e85353f9ff           call 0x6b7d00
// 007229ad  5e                   pop esi
// 007229ae  c20c00               ret 0xc
// 007229b1  8b06                 mov eax, dword ptr [esi]
// 007229b3  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 007229b9  6a00                 push 0
// 007229bb  6a01                 push 1
// 007229bd  6a00                 push 0
// 007229bf  8bce                 mov ecx, esi
// 007229c1  ffd2                 call edx
// 007229c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 007229c7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007229cb  50                   push eax
// 007229cc  51                   push ecx
// 007229cd  8bce                 mov ecx, esi
// 007229cf  e8acfbffff           call 0x722580
// 007229d4  85c0                 test eax, eax
// 007229d6  752f                 jne 0x722a07
// 007229d8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007229dc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007229e0  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007229e6  52                   push edx
// 007229e7  50                   push eax
// 007229e8  e813f5fcff           call 0x6f1f00
// 007229ed  85c0                 test eax, eax
// 007229ef  7416                 je 0x722a07
// 007229f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007229f5  8b10                 mov edx, dword ptr [eax]
// 007229f7  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 007229fd  51                   push ecx
// 007229fe  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00722a02  51                   push ecx
// 00722a03  8bc8                 mov ecx, eax
// 00722a05  ffd2                 call edx
// 00722a07  5e                   pop esi
// 00722a08  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnRButtonDown@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
