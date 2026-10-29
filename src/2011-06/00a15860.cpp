// roc 2011-06 00a15860  unit: seg_00a10000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a15860
//
// 00a15860  6a00                 push 0
// 00a15862  b97415cb00           mov ecx, 0xcb1574
// 00a15867  ff15c004a400         call dword ptr [0xa404c0]
// 00a1586d  c3                   ret 
// copied from an identical function in another client (function ??__Eid@@YAXXZ)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /Ob0 /GS- /MD
#include <locale>
std::locale::id id;