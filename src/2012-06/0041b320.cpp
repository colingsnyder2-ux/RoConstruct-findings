// roc 2012-06 0041b320  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b320
//
// 0041b320  8b442404             mov eax, dword ptr [esp + 4]
// 0041b324  ff4008               inc dword ptr [eax + 8]
// 0041b327  8b4008               mov eax, dword ptr [eax + 8]
// 0041b32a  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000024@@QAEHPAH@Z)

namespace ns_ROCX000024 {
struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
}
