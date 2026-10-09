// roc 2007-03 004666a0  unit: seg_00460000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004666a0
//
// 004666a0  e82d801b00           call 0x61e6d2
// 004666a5  8b442404             mov eax, dword ptr [esp + 4]
// 004666a9  c7400c32000000       mov dword ptr [eax + 0xc], 0x32
// 004666b0  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CWebToolbox@ns_ROCX000002@@QAEXPAH@Z)

namespace ns_ROCX000002 {
extern "C" void __cdecl helper_63023e();

struct CWebToolbox {
    void setValue(int* p);
};

void CWebToolbox::setValue(int* p) {
    helper_63023e();
    p[3] = 0x32;
}
}
