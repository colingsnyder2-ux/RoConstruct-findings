// roc 2010-06 0043d8b0  unit: RefItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0043d8b0
//
// 0043d8b0  8d4c2404             lea ecx, [esp + 4]
// 0043d8b4  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0043d8ba  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX000009@@QAEXPAX@Z)

namespace ns_ROCX000009 {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
