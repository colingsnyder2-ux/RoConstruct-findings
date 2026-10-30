// roc 2009-12 008e1b80  unit: CXTColorSelectorCtrl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1b80
//
// 008e1b80  56                   push esi
// 008e1b81  8bf1                 mov esi, ecx
// 008e1b83  e848fdffff           call 0x8e18d0
// 008e1b88  84c0                 test al, al
// 008e1b8a  7517                 jne 0x8e1ba3
// 008e1b8c  83c8ff               or eax, 0xffffffff
// 008e1b8f  6a00                 push 0
// 008e1b91  894670               mov dword ptr [esi + 0x70], eax
// 008e1b94  894674               mov dword ptr [esi + 0x74], eax
// 008e1b97  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e1b9a  6a00                 push 0
// 008e1b9c  50                   push eax
// 008e1b9d  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e1ba3  5e                   pop esi
// 008e1ba4  c3                   ret 
// copied from an identical function in another client (function ?OnMouseLeave@CXTColorSelectorCtrl@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrl.cpp