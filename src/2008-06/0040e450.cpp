// from server: 100% by auto
// roc 2008-06 0040e450  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040e450
//
// 0040e450  8b442404             mov eax, dword ptr [esp + 4]
// 0040e454  398148010000         cmp dword ptr [ecx + 0x148], eax
// 0040e45a  740b                 je 0x40e467
// 0040e45c  898148010000         mov dword ptr [ecx + 0x148], eax
// 0040e462  e859cb2900           call 0x6aafc0
// 0040e467  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetStyle@CXTPControl@@QAEXW4XTPButtonStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
