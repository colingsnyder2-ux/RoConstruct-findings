// roc 2010-06 0040ccc0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct::Creator  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040ccc0
//
// 0040ccc0  8b442404             mov eax, dword ptr [esp + 4]
// 0040ccc4  398148010000         cmp dword ptr [ecx + 0x148], eax
// 0040ccca  740b                 je 0x40ccd7
// 0040cccc  898148010000         mov dword ptr [ecx + 0x148], eax
// 0040ccd2  e829d13900           call 0x7a9e00
// 0040ccd7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetStyle@CXTPControl@@QAEXW4XTPButtonStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
