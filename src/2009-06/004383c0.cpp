// roc 2009-06 004383c0  unit: RefItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004383c0
//
// 004383c0  8d4c2404             lea ecx, [esp + 4]
// 004383c4  ff1510fd8900         call dword ptr [0x89fd10]
// 004383ca  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX00000f@@QAEXPAX@Z)

namespace ns_ROCX00000f {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
