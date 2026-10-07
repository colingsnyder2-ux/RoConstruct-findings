// roc 2012-06 00421900  unit: RBX::DS::CVideoStream  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00421900
//
// 00421900  b8ffff0080           mov eax, 0x8000ffff
// 00421905  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00421900 {

    unsigned int f(int a1);
};
unsigned int S_func_00421900::f(int a1)
{
    return 0x8000ffffu;
}
