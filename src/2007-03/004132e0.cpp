// roc 2007-03 004132e0  unit: seg_00410000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004132e0
//
// 004132e0  8b442404             mov eax, dword ptr [esp + 4]
// 004132e4  83400801             add dword ptr [eax + 8], 1
// 004132e8  8b4008               mov eax, dword ptr [eax + 8]
// 004132eb  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000017@@QAEHPAH@Z)

namespace ns_ROCX000017 {
struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
}
