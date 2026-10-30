// roc 2009-12 008cf780  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf780
//
// 008cf780  8b542404             mov edx, dword ptr [esp + 4]
// 008cf784  56                   push esi
// 008cf785  57                   push edi
// 008cf786  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008cf78a  8bf1                 mov esi, ecx
// 008cf78c  8d642400             lea esp, [esp]
// 008cf790  03d7                 add edx, edi
// 008cf792  7828                 js 0x8cf7bc
// 008cf794  3b565c               cmp edx, dword ptr [esi + 0x5c]
// 008cf797  7d23                 jge 0x8cf7bc
// 008cf799  8b4658               mov eax, dword ptr [esi + 0x58]
// 008cf79c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 008cf79f  85c9                 test ecx, ecx
// 008cf7a1  7419                 je 0x8cf7bc
// 008cf7a3  e8483ceaff           call 0x7733f0
// 008cf7a8  85c0                 test eax, eax
// 008cf7aa  74e4                 je 0x8cf790
// 008cf7ac  e8efabf4ff           call 0x81a3a0
// 008cf7b1  85c0                 test eax, eax
// 008cf7b3  74db                 je 0x8cf790
// 008cf7b5  5f                   pop edi
// 008cf7b6  8bc1                 mov eax, ecx
// 008cf7b8  5e                   pop esi
// 008cf7b9  c20800               ret 8
// 008cf7bc  5f                   pop edi
// 008cf7bd  33c0                 xor eax, eax
// 008cf7bf  5e                   pop esi
// 008cf7c0  c20800               ret 8
// copied from an identical function in another client (function ?FindNextFocusable@CXTPTabManager@@QBEPAVCXTPTabManagerItem@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp