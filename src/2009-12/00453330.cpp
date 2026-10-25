// from server: 100% by colin
// roc 2009-12 00453330  unit: CRobloxControlMaterialSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453330
//
// 00453330  8b442404             mov eax, dword ptr [esp + 4]
// 00453334  c70024010000         mov dword ptr [eax], 0x124
// 0045333a  c7400424000000       mov dword ptr [eax + 4], 0x24
// 00453341  c20800               ret 8

// from server: 95% by atomic.potato
struct S
{
    void f(int* p, int dummy);
};

void S::f(int* p, int dummy)
{
    p[0] = 0x124;
    p[1] = 0x24;
}