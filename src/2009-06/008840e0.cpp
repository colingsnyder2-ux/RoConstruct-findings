// roc 2009-06 008840e0  unit: seg_00880000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008840e0
//
// 008840e0  6a00                 push 0
// 008840e2  b9d096a300           mov ecx, 0xa396d0
// 008840e7  ff15b0e48900         call dword ptr [0x89e4b0]
// 008840ed  c3                   ret 
// copied from an identical function in another client (function ??__Eid@@YAXXZ)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /Ob0 /GS- /MD
#include <locale>
std::locale::id id;