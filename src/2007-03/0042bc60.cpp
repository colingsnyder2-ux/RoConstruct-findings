// roc 2007-03 0042bc60  unit: seg_00420000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042bc60
//
// 0042bc60  8b442408             mov eax, dword ptr [esp + 8]
// 0042bc64  c70000000000         mov dword ptr [eax], 0
// 0042bc6a  33c0                 xor eax, eax
// 0042bc6c  c20800               ret 8
// copied from an identical function in another client (function ?setFlag@EventHandler@ns_ROCX000003@@QAEHHPAH@Z)

namespace ns_ROCX000003 {
struct EventHandler {
    int setFlag(int unused, int* out);
};

int EventHandler::setFlag(int unused, int* out) {
    *out = 0;
    return 0;
}
}
