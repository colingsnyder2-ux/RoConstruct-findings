// roc 2009-06 00484cd0  unit: RBX::MeshGen  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484cd0
//
// 00484cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00484cd4  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00484cd0 {

    int f(int a1);
};
int S_func_00484cd0::f(int a1)
{
    return a1;
}
