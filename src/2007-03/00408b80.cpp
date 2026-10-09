// roc 2007-03 00408b80  unit: seg_00400000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408b80
//
// 00408b80  e8cbfaffff           call 0x408650
// 00408b85  8bc8                 mov ecx, eax
// 00408b87  e874e11300           call 0x546d00
// 00408b8c  33c0                 xor eax, eax
// 00408b8e  c20400               ret 4
// copied from an identical function in another client (function ?Wrapper@ns_ROCX000008@@YGHH@Z)

namespace ns_ROCX000008 {
struct Target {
    void Call();
};

extern "C" Target* __cdecl CreateTarget();

int __stdcall Wrapper(int unused) {
    Target* t = CreateTarget();
    t->Call();
    return 0;
}
}
