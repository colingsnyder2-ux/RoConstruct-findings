// roc 2011-06 00430620  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430620
//
// 00430620  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00430626  85c0                 test eax, eax
// 00430628  740b                 je 0x430635
// 0043062a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0043062e  7505                 jne 0x430635
// 00430630  33c0                 xor eax, eax
// 00430632  c20400               ret 4
// 00430635  8b542404             mov edx, dword ptr [esp + 4]
// 00430639  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0043063f  f7d2                 not edx
// 00430641  23c2                 and eax, edx
// 00430643  f7d8                 neg eax
// 00430645  1bc0                 sbb eax, eax
// 00430647  40                   inc eax
// 00430648  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsVisible@CXTPControl@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
