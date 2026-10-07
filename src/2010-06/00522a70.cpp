// roc 2010-06 00522a70  unit: RBX::MeshGen  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522a70
//
// 00522a70  8b442404             mov eax, dword ptr [esp + 4]
// 00522a74  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00522a70 {

    int f(int a1);
};
int S_func_00522a70::f(int a1)
{
    return a1;
}
