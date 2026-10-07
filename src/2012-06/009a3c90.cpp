// roc 2012-06 009a3c90  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a3c90
//
// 009a3c90  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 009a3c94  b801000000           mov eax, 1
// 009a3c99  7504                 jne 0x9a3c9f
// 009a3c9b  8b442404             mov eax, dword ptr [esp + 4]
// 009a3c9f  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 009a3ca6  7413                 je 0x9a3cbb
// 009a3ca8  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 009a3cae  740b                 je 0x9a3cbb
// 009a3cb0  8981b0000000         mov dword ptr [ecx + 0xb0], eax
// 009a3cb6  e895faffff           call 0x9a3750
// 009a3cbb  c20400               ret 4
// library xtp-13.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPCommandBars.cpp
