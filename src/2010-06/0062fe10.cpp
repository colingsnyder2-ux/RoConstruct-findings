// roc 2010-06 0062fe10  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062fe10
//
// 0062fe10  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 0062fe16  e9b5fbffff           jmp 0x62f9d0
// auto-matched from its assembly shape

struct P_func_0062fe10 { void g(); };
struct S_func_0062fe10 {
    char pad[180];
    P_func_0062fe10* m_p;
    void f();
};
void S_func_0062fe10::f()
{
    m_p->g();
}
