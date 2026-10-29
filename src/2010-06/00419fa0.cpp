// roc 2010-06 00419fa0  unit: CInsertObjectDialog  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00419fa0
//
// 00419fa0  8b01                 mov eax, dword ptr [ecx]
// 00419fa2  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00419fa8  ffd2                 call edx
// 00419faa  8b442408             mov eax, dword ptr [esp + 8]
// 00419fae  c70000000000         mov dword ptr [eax], 0
// 00419fb4  c20800               ret 8
// copied from an identical function in another client (function ?sub_00419ED0@CInsertObjectDialog@ns_ROCX000004@@QAEXHPAH@Z)

namespace ns_ROCX000004 {
// from server: 100% by tester
struct CInsertObjectDialog {
    void sub_00419ED0(int, int*);
};

void CInsertObjectDialog::sub_00419ED0(int, int* p) {
    (*(void (__thiscall **)(CInsertObjectDialog *))(*(int *)this + 0x160))(this);
    *p = 0;
}
}