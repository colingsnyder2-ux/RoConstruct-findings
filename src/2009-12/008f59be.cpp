// roc 2009-12 008f59be  unit: CXTIconHandle  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f59be
//
// 008f59be  80790800             cmp byte ptr [ecx + 8], 0
// 008f59c2  c701d8fca000         mov dword ptr [ecx], 0xa0fcd8
// 008f59c8  740e                 je 0x8f59d8
// 008f59ca  8b4904               mov ecx, dword ptr [ecx + 4]
// 008f59cd  85c9                 test ecx, ecx
// 008f59cf  7407                 je 0x8f59d8
// 008f59d1  51                   push ecx
// 008f59d2  ff1504b39800         call dword ptr [0x98b304]
// 008f59d8  c3                   ret 
// copied from an identical function in another client (function ??1CWin32Heap@ATL@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlstr.obj