// roc 2011-06 0090377a  unit: CXTIconHandle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0090377a
//
// 0090377a  8bff                 mov edi, edi
// 0090377c  55                   push ebp
// 0090377d  8bec                 mov ebp, esp
// 0090377f  837d0800             cmp dword ptr [ebp + 8], 0
// 00903783  740e                 je 0x903793
// 00903785  ff7508               push dword ptr [ebp + 8]
// 00903788  6a00                 push 0
// 0090378a  ff7104               push dword ptr [ecx + 4]
// 0090378d  ff15b401a400         call dword ptr [0xa401b4]
// 00903793  5d                   pop ebp
// 00903794  c20400               ret 4
// copied from an identical function in another client (function ?Free@CWin32Heap@ATL@@UAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj