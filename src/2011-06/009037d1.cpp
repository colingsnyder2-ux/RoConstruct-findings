// roc 2011-06 009037d1  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009037d1
//
// 009037d1  8bff                 mov edi, edi
// 009037d3  55                   push ebp
// 009037d4  8bec                 mov ebp, esp
// 009037d6  ff7508               push dword ptr [ebp + 8]
// 009037d9  6a00                 push 0
// 009037db  ff7104               push dword ptr [ecx + 4]
// 009037de  ff151c02a400         call dword ptr [0xa4021c]
// 009037e4  5d                   pop ebp
// 009037e5  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj