// from server: 100% by auto
// roc 2011-06 00853210  unit: CXTPControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853210
//
// 00853210  8b442404             mov eax, dword ptr [esp + 4]
// 00853214  83f804               cmp eax, 4
// 00853217  740d                 je 0x853226
// 00853219  83f803               cmp eax, 3
// 0085321c  7408                 je 0x853226
// 0085321e  83f802               cmp eax, 2
// 00853221  7403                 je 0x853226
// 00853223  33c0                 xor eax, eax
// 00853225  c3                   ret 
// 00853226  b801000000           mov eax, 1
// 0085322b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?IsAnimateType@@YAHW4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
