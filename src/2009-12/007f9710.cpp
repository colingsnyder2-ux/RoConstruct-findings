// roc 2009-12 007f9710  unit: CXTPControlComboBoxPopupBar  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9710
//
// 007f9710  56                   push esi
// 007f9711  8bf1                 mov esi, ecx
// 007f9713  e808ffffff           call 0x7f9620
// 007f9718  33c0                 xor eax, eax
// 007f971a  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 007f9720  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 007f9726  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 007f972c  c70664209f00         mov dword ptr [esi], 0x9f2064
// 007f9732  c7465454209f00       mov dword ptr [esi + 0x54], 0x9f2054
// 007f9739  c7465cf41f9f00       mov dword ptr [esi + 0x5c], 0x9f1ff4
// 007f9740  c7860001000006000000 mov dword ptr [esi + 0x100], 6
// 007f974a  c7865c020000ffffffff mov dword ptr [esi + 0x25c], 0xffffffff
// 007f9754  8bc6                 mov eax, esi
// 007f9756  5e                   pop esi
// 007f9757  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlComboBoxList@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp