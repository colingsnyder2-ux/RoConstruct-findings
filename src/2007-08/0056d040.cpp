// from server: 23% by colin
struct Lua_State;

struct RBX_Lua_FunctionRef {
    void* ref;
    void* state;
    void assign(void* other);
};

extern "C" {
    void* __stdcall sub_4142F0();
    void* __stdcall sub_535E40(void*);
    void* __stdcall sub_56C880();
    void __stdcall sub_56CE80(void*);
    void __stdcall sub_412DC0(void*, void*);
    void __stdcall sub_630B9E(void*, void*);
    void* __stdcall sub_77E698(const char*);
    int __stdcall sub_77E708(void*, void*);
    void __stdcall sub_8410C0();
}

void RBX_Lua_FunctionRef::assign(void* other)
{
    void* p = sub_4142F0();
    void* q = 0;
    sub_535E40(&q);
    void* tmp = *(void**)q;
    *(void**)q = this->state;
    this->state = tmp;
    if (q) {
        void** vt = *(void***)q;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(q, 1);
    }
    sub_56CE80(&p);
    this->ref = sub_56C880();
}
