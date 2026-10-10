// from server: 44% by colin
struct ArgHelper {
    void* p;
};

struct GetSetImpl {
    void* get;
    void* set;
    void (__thiscall *getFn)(void*, void*);
    void (__thiscall *setFn)(void*, void*);
    void construct(void* a, void* b);
};

extern "C" {
    void __stdcall sub_77E69C(void*, void*);
    void __stdcall sub_77E6AC(void*);
}

void GetSetImpl::construct(void* a, void* b)
{
    char buf[8];
    void* p = 0;
    if (a) {
        p = (char*)a - 4;
    }
    void* q = (char*)this->get + (int)p;
    this->getFn(q, buf);
    sub_77E69C(b, *(void**)buf);
    buf[0] = 0;
    sub_77E6AC(buf);
}
