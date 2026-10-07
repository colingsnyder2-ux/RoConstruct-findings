// roc 2007-08 006338d0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006338d0
//
// 006338d0  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 006338d4  b801000000           mov eax, 1
// 006338d9  7504                 jne 0x6338df
// 006338db  8b442404             mov eax, dword ptr [esp + 4]
// 006338df  83b9c400000000       cmp dword ptr [ecx + 0xc4], 0
// 006338e6  7413                 je 0x6338fb
// 006338e8  3981b0000000         cmp dword ptr [ecx + 0xb0], eax
// 006338ee  740b                 je 0x6338fb
// 006338f0  8981b0000000         mov dword ptr [ecx + 0xb0], eax
// 006338f6  e855faffff           call 0x633350
// 006338fb  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
