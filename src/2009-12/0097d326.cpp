// roc 2009-12 0097d326  unit: seg_00970000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097d326
//
// 0097d326  ff152cb29800         call dword ptr [0x98b22c]
// 0097d32c  68caa79800           push 0x98a7ca
// 0097d331  c705f8bfb900d8fca000 mov dword ptr [0xb9bff8], 0xa0fcd8
// 0097d33b  a3fcbfb900           mov dword ptr [0xb9bffc], eax
// 0097d340  c60500c0b90000       mov byte ptr [0xb9c000], 0
// 0097d347  e8dd75e7ff           call 0x7f4929
// 0097d34c  59                   pop ecx
// 0097d34d  c3                   ret 
// copied from an identical function in another client (function ??__Eg_strheap@ATL@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj