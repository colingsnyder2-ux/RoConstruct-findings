// from server: 100% by auto
// roc 2008-06 006a38f0  unit: CXTPCommandBarKeyboardTip  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a38f0
//
// 006a38f0  8b442404             mov eax, dword ptr [esp + 4]
// 006a38f4  894154               mov dword ptr [ecx + 0x54], eax
// 006a38f7  e884f6ffff           call 0x6a2f80
// 006a38fc  8bc8                 mov ecx, eax
// 006a38fe  e88d9a0100           call 0x6bd390
// 006a3903  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetImageManager@CXTPCommandBars@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
