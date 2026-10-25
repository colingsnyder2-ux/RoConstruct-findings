// from server: 100% by atomic.potato
// roc 2010-06 00761660  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00761660
//
// 00761660  51                   push ecx
// 00761661  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00761665  e876210000           call 0x7637e0
// 0076166a  c20400               ret 4

struct S_func_007637e0 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct S {
    void f(S_func_007637e0 *a1);
};

void S::f(S_func_007637e0 *a1)
{
    a1->f((int)this);
}
