// roc 2007-03 004759a0  unit: seg_00470000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004759a0
//
// 004759a0  8b442404             mov eax, dword ptr [esp + 4]
// 004759a4  6a00                 push 0
// 004759a6  6a00                 push 0
// 004759a8  50                   push eax
// 004759a9  e852f4ffff           call 0x474e00
// 004759ae  c20800               ret 8
// copied from an identical function in another client (function ?f@CNameItem@CInstanceRecord@ns_ROCX00001a@@QAEHHH@Z)

namespace ns_ROCX00001a {
extern "C" int __stdcall SomeFunction(int, int, int);

struct CInstanceRecord {
    struct CNameItem {
        int f(int a, int b);
    };
};

int CInstanceRecord::CNameItem::f(int a, int b) {
    return SomeFunction(a, 0, 0);
}
}
