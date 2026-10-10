// roc 2008-06 007423b0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007423b0
//
// 007423b0  8b442404             mov eax, dword ptr [esp + 4]
// 007423b4  898100010000         mov dword ptr [ecx + 0x100], eax
// 007423ba  85c0                 test eax, eax
// 007423bc  7516                 jne 0x7423d4
// 007423be  8b8974010000         mov ecx, dword ptr [ecx + 0x174]
// 007423c4  85c9                 test ecx, ecx
// 007423c6  740c                 je 0x7423d4
// 007423c8  394120               cmp dword ptr [ecx + 0x20], eax
// 007423cb  7407                 je 0x7423d4
// 007423cd  8b01                 mov eax, dword ptr [ecx]
// 007423cf  8b5068               mov edx, dword ptr [eax + 0x68]
// 007423d2  ffd2                 call edx
// 007423d4  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?SetParent@CXTPControlEdit@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
