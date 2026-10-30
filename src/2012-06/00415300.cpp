// roc 2012-06 00415300  unit: UString_sink::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00415300
//
// 00415300  8b442404             mov eax, dword ptr [esp + 4]
// 00415304  398148010000         cmp dword ptr [ecx + 0x148], eax
// 0041530a  740b                 je 0x415317
// 0041530c  898148010000         mov dword ptr [ecx + 0x148], eax
// 00415312  e869f45600           call 0x984780
// 00415317  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetStyle@CXTPControl@@QAEXW4XTPButtonStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
