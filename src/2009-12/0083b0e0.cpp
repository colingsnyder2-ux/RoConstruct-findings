// roc 2009-12 0083b0e0  unit: CXTPToolBar::CControlButtonExpand  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b0e0
//
// 0083b0e0  56                   push esi
// 0083b0e1  8bf1                 mov esi, ecx
// 0083b0e3  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0083b0e9  85c9                 test ecx, ecx
// 0083b0eb  746c                 je 0x83b159
// 0083b0ed  8b01                 mov eax, dword ptr [ecx]
// 0083b0ef  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0083b0f5  ffd2                 call edx
// 0083b0f7  85c0                 test eax, eax
// 0083b0f9  745e                 je 0x83b159
// 0083b0fb  8b442408             mov eax, dword ptr [esp + 8]
// 0083b0ff  50                   push eax
// 0083b100  e8bbf9ffff           call 0x83aac0
// 0083b105  50                   push eax
// 0083b106  e8338bfbff           call 0x7f3c3e
// 0083b10b  83c408               add esp, 8
// 0083b10e  85c0                 test eax, eax
// 0083b110  7433                 je 0x83b145
// 0083b112  56                   push esi
// 0083b113  8bc8                 mov ecx, eax
// 0083b115  e896feffff           call 0x83afb0
// 0083b11a  85c0                 test eax, eax
// 0083b11c  7427                 je 0x83b145
// 0083b11e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b124  6a00                 push 0
// 0083b126  6aff                 push -1
// 0083b128  e873b4fcff           call 0x8065a0
// 0083b12d  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b133  8b11                 mov edx, dword ptr [ecx]
// 0083b135  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0083b13b  6a00                 push 0
// 0083b13d  6aff                 push -1
// 0083b13f  ffd0                 call eax
// 0083b141  5e                   pop esi
// 0083b142  c21000               ret 0x10
// 0083b145  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0083b14b  6a00                 push 0
// 0083b14d  51                   push ecx
// 0083b14e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083b154  e847b4fcff           call 0x8065a0
// 0083b159  5e                   pop esi
// 0083b15a  c21000               ret 0x10
// copied from an identical function in another client (function ?OnCustomizeDragOver@CXTPControlPopup@@MAEXPAVCXTPControl@@VCPoint@@AAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlPopup.cpp