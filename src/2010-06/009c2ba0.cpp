// roc 2010-06 009c2ba0  unit: seg_009c0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c2ba0
//
// 009c2ba0  6a00                 push 0
// 009c2ba2  b968fabf00           mov ecx, 0xbffa68
// 009c2ba7  ff1514a49e00         call dword ptr [0x9ea414]
// 009c2bad  c3                   ret 
// copied from an identical function in another client (function ??__Eid@@YAXXZ)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /Ob0 /GS- /MD
#include <locale>
std::locale::id id;