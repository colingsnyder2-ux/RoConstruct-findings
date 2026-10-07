// roc 2007-08 00708430  unit: CXTColorHex  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00708430
//
// 00708430  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00708434  33c0                 xor eax, eax
// 00708436  3b8828d37d00         cmp ecx, dword ptr [eax + 0x7dd328]
// 0070843c  740f                 je 0x70844d
// 0070843e  83c004               add eax, 4
// 00708441  3d40020000           cmp eax, 0x240
// 00708446  72ee                 jb 0x708436
// 00708448  32c0                 xor al, al
// 0070844a  c20400               ret 4
// 0070844d  b001                 mov al, 1
// 0070844f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageStandard.cpp (function ?IsValidColor@CXTColorHex@@MBE_NK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageStandard.cpp
