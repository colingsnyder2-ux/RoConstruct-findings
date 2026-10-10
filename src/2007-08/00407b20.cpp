// from server: 27% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct Inner {
    void ctor();
};

struct Creator {
    void init(void* p, int flag);
};

struct Outer {
    void* field0;
    void method(void* a, int b);
};

void Outer::method(void* a, int b)
{
    void* mem = malloc(0x11c);
    Inner* inner = 0;
    if (mem) {
        ((Inner*)mem)->ctor();
        inner = (Inner*)mem;
    }
    this->field0 = 0;
    Creator* c = (Creator*)this;
    c->init(inner, 0);
}
