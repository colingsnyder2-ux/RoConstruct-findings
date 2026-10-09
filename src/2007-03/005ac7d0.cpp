// roc 2007-03 005ac7d0  unit: seg_005a0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ac7d0
//
// 005ac7d0  8d442404             lea eax, [esp + 4]
// 005ac7d4  50                   push eax
// 005ac7d5  83c118               add ecx, 0x18
// 005ac7d8  e813feffff           call 0x5ac5f0
// 005ac7dd  c20400               ret 4
// copied from an identical function in another client (function ?f@Assembly@ns_ROCX00000d@@QAEXPAX@Z)

namespace ns_ROCX00000d {
struct Inner {
    void method(void** p);
};

struct Assembly {
    char pad[0x18];
    Inner inner;
    void f(void* arg);
};

void Assembly::f(void* arg) {
    inner.method(&arg);
}
}
