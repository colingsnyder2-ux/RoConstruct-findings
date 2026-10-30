// roc 2010-06 00428800  unit: CRobloxControlColorSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428800
//
// 00428800  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00428806  85c0                 test eax, eax
// 00428808  740b                 je 0x428815
// 0042880a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0042880e  7505                 jne 0x428815
// 00428810  33c0                 xor eax, eax
// 00428812  c20400               ret 4
// 00428815  8b542404             mov edx, dword ptr [esp + 4]
// 00428819  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0042881f  f7d2                 not edx
// 00428821  23c2                 and eax, edx
// 00428823  f7d8                 neg eax
// 00428825  1bc0                 sbb eax, eax
// 00428827  40                   inc eax
// 00428828  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsVisible@CXTPControl@@UBEHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
