// roc 2011-06 0044b1c0  unit: RefItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044b1c0
//
// 0044b1c0  8d4c2404             lea ecx, [esp + 4]
// 0044b1c4  ff15082ea400         call dword ptr [0xa42e08]
// 0044b1ca  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX00000e@@QAEXPAX@Z)

namespace ns_ROCX00000e {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
