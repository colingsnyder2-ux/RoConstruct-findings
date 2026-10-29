// roc 2009-06 00893776  unit: seg_00890000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893776
//
// 00893776  ff1530e28900         call dword ptr [0x89e230]
// 0089377c  680ad68900           push 0x89d60a
// 00893781  c705a02ba50068f89000 mov dword ptr [0xa52ba0], 0x90f868
// 0089378b  a3a42ba500           mov dword ptr [0xa52ba4], eax
// 00893790  c605a82ba50000       mov byte ptr [0xa52ba8], 0
// 00893797  e85f63e8ff           call 0x719afb
// 0089379c  59                   pop ecx
// 0089379d  c3                   ret 
// copied from an identical function in another client (function ??__Eg_strheap@ATL@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj