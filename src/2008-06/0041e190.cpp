// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Deleter {
    void operator()(void* p) const { operator delete(p); }
};

struct CountBase {
    long strong;
    long weak;

    CountBase() : strong(1), weak(1) {}
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* get_deleter(const void*) = 0;
};

struct CountBlock : CountBase {
    void* pointer;
    Deleter deleter;

    CountBlock(void* p, Deleter d) : pointer(p), deleter(d) {}
    virtual ~CountBlock();
    virtual void dispose();
    virtual void* get_deleter(const void*);
};

struct S {
    CountBase* count;
    S(void* p, Deleter d);
};

S::S(void* p, Deleter d) : count(0)
{
    try {
        count = new CountBlock(p, d);
    }
    catch (...) {
        d(p);
        throw;
    }
}
