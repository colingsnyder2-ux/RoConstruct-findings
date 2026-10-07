// roc 2011-06 004a14c0  unit: RBX::DS::CVideoStream  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a14c0
//
// 004a14c0  b8ffff0080           mov eax, 0x8000ffff
// 004a14c5  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004a14c0 {

    unsigned int f(int a1);
};
unsigned int S_func_004a14c0::f(int a1)
{
    return 0x8000ffffu;
}
