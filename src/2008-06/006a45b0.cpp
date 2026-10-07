// roc 2008-06 006a45b0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a45b0
//
// 006a45b0  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 006a45b4  b801000000           mov eax, 1
// 006a45b9  7504                 jne 0x6a45bf
// 006a45bb  8b442404             mov eax, dword ptr [esp + 4]
// 006a45bf  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 006a45c6  7413                 je 0x6a45db
// 006a45c8  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 006a45ce  740b                 je 0x6a45db
// 006a45d0  8981b0000000         mov dword ptr [ecx + 0xb0], eax
// 006a45d6  e895faffff           call 0x6a4070
// 006a45db  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
