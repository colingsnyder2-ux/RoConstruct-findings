// roc 2009-06 0046d840  unit: CWebToolbox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046d840
//
// 0046d840  e8c3b72a00           call 0x719008
// 0046d845  8b442404             mov eax, dword ptr [esp + 4]
// 0046d849  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 0046d850  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CWebToolbox@ns_ROCX000001@@QAEXPAH@Z)

namespace ns_ROCX000001 {
extern "C" void __cdecl helper_63023e();

struct CWebToolbox {
    void setValue(int* p);
};

void CWebToolbox::setValue(int* p) {
    helper_63023e();
    p[3] = 0x32;
}
}
