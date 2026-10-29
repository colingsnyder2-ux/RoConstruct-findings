// roc 2011-06 00903763  unit: CXTIconHandle  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903763
//
// 00903763  8bff                 mov edi, edi
// 00903765  55                   push ebp
// 00903766  8bec                 mov ebp, esp
// 00903768  ff7508               push dword ptr [ebp + 8]
// 0090376b  6a00                 push 0
// 0090376d  ff7104               push dword ptr [ecx + 4]
// 00903770  ff15b001a400         call dword ptr [0xa401b0]
// 00903776  5d                   pop ebp
// 00903777  c20400               ret 4
// copied from an identical function in another client (function ?Allocate@CWin32Heap@ATL@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj