// roc 2011-06 00a2faa6  unit: seg_00a20000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2faa6
//
// 00a2faa6  ff15b801a400         call dword ptr [0xa401b8]
// 00a2faac  687afda300           push 0xa3fd7a
// 00a2fab1  c7051093d1002804ae00 mov dword ptr [0xd19310], 0xae0428
// 00a2fabb  a31493d100           mov dword ptr [0xd19314], eax
// 00a2fac0  c6051893d10000       mov byte ptr [0xd19318], 0
// 00a2fac7  e891b6ddff           call 0x80b15d
// 00a2facc  59                   pop ecx
// 00a2facd  c3                   ret 
// copied from an identical function in another client (function ??__Eg_strheap@ATL@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj