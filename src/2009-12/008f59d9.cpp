// roc 2009-12 008f59d9  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f59d9
//
// 008f59d9  8bff                 mov edi, edi
// 008f59db  55                   push ebp
// 008f59dc  8bec                 mov ebp, esp
// 008f59de  ff7508               push dword ptr [ebp + 8]
// 008f59e1  6a00                 push 0
// 008f59e3  ff7104               push dword ptr [ecx + 4]
// 008f59e6  ff1508b39800         call dword ptr [0x98b308]
// 008f59ec  5d                   pop ebp
// 008f59ed  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj