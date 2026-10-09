// roc 2008-06 00401670  unit: CAboutRobloxDialog  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401670
//
// 00401670  8b442408             mov eax, dword ptr [esp + 8]
// 00401674  c3                   ret 
// copied from an identical function in another client (function ?RBX_VFaceInstance_EnumPropDescriptor_f@ns_ROCX000003@@YAHHH@Z)

namespace ns_ROCX000003 {
struct RBX_VFaceInstance_EnumPropDescriptor {
    int f(int);
};

int RBX_VFaceInstance_EnumPropDescriptor_f(int this_ptr, int arg) {
    return arg;
}
}
