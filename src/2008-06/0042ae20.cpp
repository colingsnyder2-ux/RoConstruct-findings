// roc 2008-06 0042ae20  unit: EventHandler  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ae20
//
// 0042ae20  8b442408             mov eax, dword ptr [esp + 8]
// 0042ae24  c70000000000         mov dword ptr [eax], 0
// 0042ae2a  33c0                 xor eax, eax
// 0042ae2c  c20800               ret 8
// copied from an identical function in another client (function ?setFlag@EventHandler@ns_ROCX000007@@QAEHHPAH@Z)

namespace ns_ROCX000007 {
struct EventHandler {
    int setFlag(int unused, int* out);
};

int EventHandler::setFlag(int unused, int* out) {
    *out = 0;
    return 0;
}
}
