// roc 2008-06 0043dbf0  unit: RefItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043dbf0
//
// 0043dbf0  8d4c2404             lea ecx, [esp + 4]
// 0043dbf4  ff15143f8000         call dword ptr [0x803f14]
// 0043dbfa  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX00000c@@QAEXPAX@Z)

namespace ns_ROCX00000c {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
