// roc 2009-12 004283c0  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004283c0
//
// 004283c0  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 004283c6  85c0                 test eax, eax
// 004283c8  740b                 je 0x4283d5
// 004283ca  83783c00             cmp dword ptr [eax + 0x3c], 0
// 004283ce  7505                 jne 0x4283d5
// 004283d0  33c0                 xor eax, eax
// 004283d2  c20400               ret 4
// 004283d5  8b542404             mov edx, dword ptr [esp + 4]
// 004283d9  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 004283df  f7d2                 not edx
// 004283e1  23c2                 and eax, edx
// 004283e3  f7d8                 neg eax
// 004283e5  1bc0                 sbb eax, eax
// 004283e7  40                   inc eax
// 004283e8  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsVisible@CXTPControl@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
