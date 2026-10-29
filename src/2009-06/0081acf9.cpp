// roc 2009-06 0081acf9  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081acf9
//
// 0081acf9  8bff                 mov edi, edi
// 0081acfb  55                   push ebp
// 0081acfc  8bec                 mov ebp, esp
// 0081acfe  ff7508               push dword ptr [ebp + 8]
// 0081ad01  6a00                 push 0
// 0081ad03  ff7104               push dword ptr [ecx + 4]
// 0081ad06  ff1524e28900         call dword ptr [0x89e224]
// 0081ad0c  5d                   pop ebp
// 0081ad0d  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj