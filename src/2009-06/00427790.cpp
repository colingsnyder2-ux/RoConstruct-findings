// roc 2009-06 00427790  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427790
//
// 00427790  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00427796  85c0                 test eax, eax
// 00427798  740b                 je 0x4277a5
// 0042779a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0042779e  7505                 jne 0x4277a5
// 004277a0  33c0                 xor eax, eax
// 004277a2  c20400               ret 4
// 004277a5  8b542404             mov edx, dword ptr [esp + 4]
// 004277a9  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 004277af  f7d2                 not edx
// 004277b1  23c2                 and eax, edx
// 004277b3  f7d8                 neg eax
// 004277b5  1bc0                 sbb eax, eax
// 004277b7  40                   inc eax
// 004277b8  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsVisible@CXTPControl@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
