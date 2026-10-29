// roc 2009-06 0081ad10  unit: CXTIconHandle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081ad10
//
// 0081ad10  8bff                 mov edi, edi
// 0081ad12  55                   push ebp
// 0081ad13  8bec                 mov ebp, esp
// 0081ad15  837d0800             cmp dword ptr [ebp + 8], 0
// 0081ad19  740e                 je 0x81ad29
// 0081ad1b  ff7508               push dword ptr [ebp + 8]
// 0081ad1e  6a00                 push 0
// 0081ad20  ff7104               push dword ptr [ecx + 4]
// 0081ad23  ff1528e28900         call dword ptr [0x89e228]
// 0081ad29  5d                   pop ebp
// 0081ad2a  c20400               ret 4
// copied from an identical function in another client (function ?Free@CWin32Heap@ATL@@UAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj