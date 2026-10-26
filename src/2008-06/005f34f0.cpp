// from server: 100% by king_originala




typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Object {
    ~Object();
};

struct CountBase {
    long strong;
    long weak;

    CountBase();
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* get_deleter(const void*) = 0;
};

struct CountImpl : CountBase {
    Object* object;

    CountImpl(Object*);
    virtual ~CountImpl();
    virtual void dispose();
    virtual void* get_deleter(const void*);
};

struct S {
    CountBase* count;
    S(Object*);
};

__forceinline CountBase::CountBase() : strong(1), weak(1) {}

__forceinline CountImpl::CountImpl(Object* p) : object(p) {}

S::S(Object* p) : count(0) {
    try {
        count = new CountImpl(p);
    } catch (...) {
        delete p;
        throw;
    }
}
