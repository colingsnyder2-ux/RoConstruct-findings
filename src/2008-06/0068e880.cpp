// from server: 100% by auto
// roc 2008-06 0068e880  unit: RBX::VInstance::?$NonFactoryProduct  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068e880
//
// 0068e880  32c0                 xor al, al
// 0068e882  c20400               ret 4

struct S_func_0068e880 {

    bool f(int a1);
};
bool S_func_0068e880::f(int a1)
{
    return false;
}
