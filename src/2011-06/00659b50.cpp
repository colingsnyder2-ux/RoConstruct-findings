// roc 2011-06 00659b50  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00659b50
//
// 00659b50  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 00659b56  e945fcffff           jmp 0x6597a0
// auto-matched from its assembly shape

struct P_func_00659b50 { void g(); };
struct S_func_00659b50 {
    char pad[172];
    P_func_00659b50* m_p;
    void f();
};
void S_func_00659b50::f()
{
    m_p->g();
}
