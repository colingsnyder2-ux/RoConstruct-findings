// roc 2012-06 0045f350  unit: RefItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0045f350
//
// 0045f350  8d4c2404             lea ecx, [esp + 4]
// 0045f354  ff15d047b200         call dword ptr [0xb247d0]
// 0045f35a  c20400               ret 4
// copied from an identical function in another client (function ?method@RefItem@ns_ROCX000000@@QAEXPAX@Z)

namespace ns_ROCX000000 {
struct RefItem {
    void method(void* arg);
};

extern "C" void (__fastcall *sub_77ddbc)(void*);

void RefItem::method(void* arg) {
    sub_77ddbc(&arg);
}
}
