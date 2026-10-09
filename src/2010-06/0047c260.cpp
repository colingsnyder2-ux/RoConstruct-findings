// roc 2010-06 0047c260  unit: CWebToolbox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047c260
//
// 0047c260  e80bbd3200           call 0x7a7f70
// 0047c265  8b442404             mov eax, dword ptr [esp + 4]
// 0047c269  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 0047c270  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CWebToolbox@ns_ROCX00000b@@QAEXPAH@Z)

namespace ns_ROCX00000b {
extern "C" void __cdecl helper_63023e();

struct CWebToolbox {
    void setValue(int* p);
};

void CWebToolbox::setValue(int* p) {
    helper_63023e();
    p[3] = 0x32;
}
}
