// roc 2009-12 0043c1c0  unit: RefItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0043c1c0
//
// 0043c1c0  8d4c2404             lea ecx, [esp + 4]
// 0043c1c4  ff15c0de9800         call dword ptr [0x98dec0]
// 0043c1ca  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX00000d@@QAEXPAX@Z)

namespace ns_ROCX00000d {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
