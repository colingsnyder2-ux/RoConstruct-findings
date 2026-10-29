// roc 2010-06 008a9b50  unit: CXTIconHandle  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9b50
//
// 008a9b50  8bff                 mov edi, edi
// 008a9b52  55                   push ebp
// 008a9b53  8bec                 mov ebp, esp
// 008a9b55  837d0800             cmp dword ptr [ebp + 8], 0
// 008a9b59  740e                 je 0x8a9b69
// 008a9b5b  ff7508               push dword ptr [ebp + 8]
// 008a9b5e  6a00                 push 0
// 008a9b60  ff7104               push dword ptr [ecx + 4]
// 008a9b63  ff150ca39e00         call dword ptr [0x9ea30c]
// 008a9b69  5d                   pop ebp
// 008a9b6a  c20400               ret 4
// copied from an identical function in another client (function ?Free@CWin32Heap@ATL@@UAEXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj