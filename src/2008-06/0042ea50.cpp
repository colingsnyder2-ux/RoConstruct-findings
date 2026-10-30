// from server: 100% by auto
// roc 2008-06 0042ea50  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ea50
//
// 0042ea50  8b442404             mov eax, dword ptr [esp + 4]
// 0042ea54  398164010000         cmp dword ptr [ecx + 0x164], eax
// 0042ea5a  740b                 je 0x42ea67
// 0042ea5c  898164010000         mov dword ptr [ecx + 0x164], eax
// 0042ea62  e859c52700           call 0x6aafc0
// 0042ea67  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetHeight@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
