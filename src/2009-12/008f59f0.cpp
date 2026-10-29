// roc 2009-12 008f59f0  unit: CXTIconHandle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f59f0
//
// 008f59f0  8bff                 mov edi, edi
// 008f59f2  55                   push ebp
// 008f59f3  8bec                 mov ebp, esp
// 008f59f5  837d0800             cmp dword ptr [ebp + 8], 0
// 008f59f9  740e                 je 0x8f5a09
// 008f59fb  ff7508               push dword ptr [ebp + 8]
// 008f59fe  6a00                 push 0
// 008f5a00  ff7104               push dword ptr [ecx + 4]
// 008f5a03  ff150cb39800         call dword ptr [0x98b30c]
// 008f5a09  5d                   pop ebp
// 008f5a0a  c20400               ret 4
// copied from an identical function in another client (function ?Free@CWin32Heap@ATL@@UAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj