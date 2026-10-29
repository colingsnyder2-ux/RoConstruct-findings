// roc 2009-12 008f5a47  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5a47
//
// 008f5a47  8bff                 mov edi, edi
// 008f5a49  55                   push ebp
// 008f5a4a  8bec                 mov ebp, esp
// 008f5a4c  ff7508               push dword ptr [ebp + 8]
// 008f5a4f  6a00                 push 0
// 008f5a51  ff7104               push dword ptr [ecx + 4]
// 008f5a54  ff1558b39800         call dword ptr [0x98b358]
// 008f5a5a  5d                   pop ebp
// 008f5a5b  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj