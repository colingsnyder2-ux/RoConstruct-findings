// from server: 100% by auto
// roc 2012-06 009dc960  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc960
//
// 009dc960  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 009dc967  7511                 jne 0x9dc97a
// 009dc969  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 009dc970  7508                 jne 0x9dc97a
// 009dc972  e8675dfaff           call 0x9826de
// 009dc977  c20400               ret 4
// 009dc97a  b801000000           mov eax, 1
// 009dc97f  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnEraseBkgnd@CXTPTabClientWnd@@IAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
