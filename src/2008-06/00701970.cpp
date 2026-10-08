// from server: 100% by auto
// roc 2008-06 00701970  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701970
//
// 00701970  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 00701977  7511                 jne 0x70198a
// 00701979  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 00701980  7508                 jne 0x70198a
// 00701982  e8e1f2f9ff           call 0x6a0c68
// 00701987  c20400               ret 4
// 0070198a  b801000000           mov eax, 1
// 0070198f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnEraseBkgnd@CXTPTabClientWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
