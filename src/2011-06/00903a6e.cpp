// roc 2011-06 00903a6e  unit: CXTIconHandle  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903a6e
//
// 00903a6e  8bff                 mov edi, edi
// 00903a70  55                   push ebp
// 00903a71  8bec                 mov ebp, esp
// 00903a73  a17093d100           mov eax, dword ptr [0xd19370]
// 00903a78  ff7508               push dword ptr [ebp + 8]
// 00903a7b  83f801               cmp eax, 1
// 00903a7e  7511                 jne 0x903a91
// 00903a80  6a00                 push 0
// 00903a82  ff15b801a400         call dword ptr [0xa401b8]
// 00903a88  50                   push eax
// 00903a89  ff15b401a400         call dword ptr [0xa401b4]
// 00903a8f  5d                   pop ebp
// 00903a90  c3                   ret 
// 00903a91  50                   push eax
// 00903a92  ff157493d100         call dword ptr [0xd19374]
// 00903a98  5d                   pop ebp
// 00903a99  c3                   ret 
// copied from an identical function in another client (function ?__FreeStdCallThunk_cmn@@YAXPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlthunk.obj