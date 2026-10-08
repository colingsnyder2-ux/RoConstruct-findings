// from server: 100% by auto
// roc 2011-06 0082aa20  unit: CXTPCommandBarKeyboardTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082aa20
//
// 0082aa20  8b442404             mov eax, dword ptr [esp + 4]
// 0082aa24  894154               mov dword ptr [ecx + 0x54], eax
// 0082aa27  e824f8ffff           call 0x82a250
// 0082aa2c  8bc8                 mov ecx, eax
// 0082aa2e  e85d80ffff           call 0x822a90
// 0082aa33  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?SetImageManager@CXTPCommandBars@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
