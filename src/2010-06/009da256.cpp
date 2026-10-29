// roc 2010-06 009da256  unit: seg_009d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da256
//
// 009da256  ff1504a39e00         call dword ptr [0x9ea304]
// 009da25c  68ca919e00           push 0x9e91ca
// 009da261  c7052867c200d03fa700 mov dword ptr [0xc26728], 0xa73fd0
// 009da26b  a32c67c200           mov dword ptr [0xc2672c], eax
// 009da270  c6053067c20000       mov byte ptr [0xc26730], 0
// 009da277  e8e7e7dcff           call 0x7a8a63
// 009da27c  59                   pop ecx
// 009da27d  c3                   ret 
// copied from an identical function in another client (function ??__Eg_strheap@ATL@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj