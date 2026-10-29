// roc 2009-06 0081ad67  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ad67
//
// 0081ad67  8bff                 mov edi, edi
// 0081ad69  55                   push ebp
// 0081ad6a  8bec                 mov ebp, esp
// 0081ad6c  ff7508               push dword ptr [ebp + 8]
// 0081ad6f  6a00                 push 0
// 0081ad71  ff7104               push dword ptr [ecx + 4]
// 0081ad74  ff159ce38900         call dword ptr [0x89e39c]
// 0081ad7a  5d                   pop ebp
// 0081ad7b  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj