// roc 2008-06 0042ea00  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ea00
//
// 0042ea00  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 0042ea06  85c0                 test eax, eax
// 0042ea08  740b                 je 0x42ea15
// 0042ea0a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0042ea0e  7505                 jne 0x42ea15
// 0042ea10  33c0                 xor eax, eax
// 0042ea12  c20400               ret 4
// 0042ea15  8b542404             mov edx, dword ptr [esp + 4]
// 0042ea19  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0042ea1f  f7d2                 not edx
// 0042ea21  23c2                 and eax, edx
// 0042ea23  f7d8                 neg eax
// 0042ea25  1bc0                 sbb eax, eax
// 0042ea27  40                   inc eax
// 0042ea28  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsVisible@CXTPControl@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
