// roc 2009-12 0083ae20  unit: CXTPToolBar::CControlButtonExpand  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ae20
//
// 0083ae20  56                   push esi
// 0083ae21  8bf1                 mov esi, ecx
// 0083ae23  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0083ae29  50                   push eax
// 0083ae2a  e8516b0000           call 0x841980
// 0083ae2f  50                   push eax
// 0083ae30  e8098efbff           call 0x7f3c3e
// 0083ae35  83c408               add esp, 8
// 0083ae38  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0083ae3f  7415                 je 0x83ae56
// 0083ae41  85c0                 test eax, eax
// 0083ae43  7411                 je 0x83ae56
// 0083ae45  83befc00000002       cmp dword ptr [esi + 0xfc], 2
// 0083ae4c  7508                 jne 0x83ae56
// 0083ae4e  8bc8                 mov ecx, eax
// 0083ae50  5e                   pop esi
// 0083ae51  e99a960000           jmp 0x8444f0
// 0083ae56  5e                   pop esi
// 0083ae57  c3                   ret 
// copied from an identical function in another client (function ?ExpandCommandBar@CXTPControlPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp