// roc 2011-06 00412f90  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412f90
//
// 00412f90  8b442404             mov eax, dword ptr [esp + 4]
// 00412f94  ff4008               inc dword ptr [eax + 8]
// 00412f97  8b4008               mov eax, dword ptr [eax + 8]
// 00412f9a  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX00001a@@QAEHPAH@Z)

namespace ns_ROCX00001a {
struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
}
