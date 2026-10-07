// roc 2011-06 00921f30  unit: RBX::MeshGen  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00921f30
//
// 00921f30  8b442404             mov eax, dword ptr [esp + 4]
// 00921f34  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00921f30 {

    int f(int a1);
};
int S_func_00921f30::f(int a1)
{
    return a1;
}
