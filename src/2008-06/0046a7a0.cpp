// roc 2008-06 0046a7a0  unit: CWebToolbox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a7a0
//
// 0046a7a0  e8c3642300           call 0x6a0c68
// 0046a7a5  8b442404             mov eax, dword ptr [esp + 4]
// 0046a7a9  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 0046a7b0  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CWebToolbox@ns_ROCX00000a@@QAEXPAH@Z)

namespace ns_ROCX00000a {
extern "C" void __cdecl helper_63023e();

struct CWebToolbox {
    void setValue(int* p);
};

void CWebToolbox::setValue(int* p) {
    helper_63023e();
    p[3] = 0x32;
}
}
