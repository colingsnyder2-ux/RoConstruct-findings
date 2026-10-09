// roc 2009-12 004766c0  unit: CWebToolbox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004766c0
//
// 004766c0  e86bd73700           call 0x7f3e30
// 004766c5  8b442404             mov eax, dword ptr [esp + 4]
// 004766c9  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 004766d0  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CWebToolbox@ns_ROCX000007@@QAEXPAH@Z)

namespace ns_ROCX000007 {
extern "C" void __cdecl helper_63023e();

struct CWebToolbox {
    void setValue(int* p);
};

void CWebToolbox::setValue(int* p) {
    helper_63023e();
    p[3] = 0x32;
}
}
