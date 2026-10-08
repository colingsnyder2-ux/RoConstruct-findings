// roc 2011-06 004122b0  unit: UString_sink::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004122b0
//
// 004122b0  8b442404             mov eax, dword ptr [esp + 4]
// 004122b4  398148010000         cmp dword ptr [ecx + 0x148], eax
// 004122ba  740b                 je 0x4122c7
// 004122bc  898148010000         mov dword ptr [ecx + 0x148], eax
// 004122c2  e829a23f00           call 0x80c4f0
// 004122c7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetStyle@CXTPControl@@QAEXW4XTPButtonStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
