// roc 2010-06 008a9ba7  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9ba7
//
// 008a9ba7  8bff                 mov edi, edi
// 008a9ba9  55                   push ebp
// 008a9baa  8bec                 mov ebp, esp
// 008a9bac  ff7508               push dword ptr [ebp + 8]
// 008a9baf  6a00                 push 0
// 008a9bb1  ff7104               push dword ptr [ecx + 4]
// 008a9bb4  ff1534a29e00         call dword ptr [0x9ea234]
// 008a9bba  5d                   pop ebp
// 008a9bbb  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj