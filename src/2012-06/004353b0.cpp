// roc 2012-06 004353b0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004353b0
//
// 004353b0  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 004353b6  85c0                 test eax, eax
// 004353b8  740b                 je 0x4353c5
// 004353ba  83783c00             cmp dword ptr [eax + 0x3c], 0
// 004353be  7505                 jne 0x4353c5
// 004353c0  33c0                 xor eax, eax
// 004353c2  c20400               ret 4
// 004353c5  8b542404             mov edx, dword ptr [esp + 4]
// 004353c9  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 004353cf  f7d2                 not edx
// 004353d1  23c2                 and eax, edx
// 004353d3  f7d8                 neg eax
// 004353d5  1bc0                 sbb eax, eax
// 004353d7  40                   inc eax
// 004353d8  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsVisible@CXTPControl@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
