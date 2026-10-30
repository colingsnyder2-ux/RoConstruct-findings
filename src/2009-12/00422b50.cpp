// roc 2009-12 00422b50  unit: CSelectionTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00422b50
//
// 00422b50  ff1530b29800         call dword ptr [0x98b230]
// 00422b56  85c0                 test eax, eax
// 00422b58  7e0a                 jle 0x422b64
// 00422b5a  25ffff0000           and eax, 0xffff
// 00422b5f  0d00000780           or eax, 0x80070000
// 00422b64  50                   push eax
// 00422b65  e81600feff           call 0x402b80
// copied from an identical function in another client (function ?AtlThrowLastWin32@ATL@@YGXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GF /Gy /GS- /MD
// roc-lib: atl-9.0-dll regobj.cpp