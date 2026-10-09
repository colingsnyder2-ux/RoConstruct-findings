// roc 2011-06 0049bb60  unit: CWebToolbox  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049bb60
//
// 0049bb60  e8c9ea3600           call 0x80a62e
// 0049bb65  8b442404             mov eax, dword ptr [esp + 4]
// 0049bb69  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 0049bb70  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CWebToolbox@ns_ROCX000005@@QAEXPAH@Z)

namespace ns_ROCX000005 {
extern "C" void __cdecl helper_63023e();

struct CWebToolbox {
    void setValue(int* p);
};

void CWebToolbox::setValue(int* p) {
    helper_63023e();
    p[3] = 0x32;
}
}
