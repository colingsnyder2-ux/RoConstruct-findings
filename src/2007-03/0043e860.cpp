// roc 2007-03 0043e860  unit: seg_00430000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043e860
//
// 0043e860  8d4c2404             lea ecx, [esp + 4]
// 0043e864  ff1578dd7700         call dword ptr [0x77dd78]
// 0043e86a  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX000007@@QAEXPAX@Z)

namespace ns_ROCX000007 {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
