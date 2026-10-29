// roc 2009-12 00967dc0  unit: seg_00960000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00967dc0
//
// 00967dc0  6a00                 push 0
// 00967dc2  b9b894b700           mov ecx, 0xb794b8
// 00967dc7  ff15f8b69800         call dword ptr [0x98b6f8]
// 00967dcd  c3                   ret 
// copied from an identical function in another client (function ??__Eid@@YAXXZ)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /Ob0 /GS- /MD
#include <locale>
std::locale::id id;