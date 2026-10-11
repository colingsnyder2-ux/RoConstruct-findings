// from server: 52% by atomic.potato
struct B_func_0080b740 { virtual ~B_func_0080b740(); };
struct S_func_0080b740 : B_func_0080b740 { ~S_func_0080b740(); };

struct CInner {
    char pad[0x20];
    ~CInner();
};

struct S {
    void* vfptr;
    char pad1[0x1c];
    CInner inner;
    void method_80c780();
    void method_7f43e2();
    ~S();
};

void S::method_80c780() {}
void S::method_7f43e2() {}

S::~S()
{
    vfptr = (void*)0x9f3154;
    method_80c780();
    inner.~CInner();
    method_7f43e2();
}
