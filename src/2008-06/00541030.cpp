// from server: 22% by colin
struct S_func_004e5b30 { virtual ~S_func_004e5b30(); };
S_func_004e5b30::~S_func_004e5b30()
{
}

struct Bucket {
    void f_00542820();
    void f_004e5b30();
    void f();
};

void Bucket::f()
{
    *(void**)this = (void*)0x82cf04;
    this->f_00542820();
    this->f_004e5b30();
}
