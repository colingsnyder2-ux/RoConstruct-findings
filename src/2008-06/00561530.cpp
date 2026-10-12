// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Resource {
    unsigned char data[24];
    Resource();
    ~Resource();
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct ControlHolder {
    Control* p;
    explicit ControlHolder(Resource*);
};

void __cdecl initialize(ControlHolder*, Resource*, Resource*);

struct Shared {
    Resource* p;
    ControlHolder control;
    explicit Shared(Resource*);
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(Resource* q) : p(q), control(q)
{
    initialize(&control, q, q);
}

inline Shared::Shared(const Shared& q) : p(q.p), control(q.control)
{
    if (control.p)
        _InterlockedExchangeAdd(&control.p->strong, 1);
}

inline Shared::~Shared()
{
    Control* q = control.p;
    if (q && _InterlockedExchangeAdd(&q->strong, -1) == 0) {
        q->dispose();
        if (_InterlockedExchangeAdd(&q->weak, -1) == 0)
            q->destroy();
    }
}

struct TemporaryOwner {
    mutable Resource* p;
    ~TemporaryOwner();
};

inline TemporaryOwner::~TemporaryOwner()
{
    if (p)
        delete p;
}

struct Owner {
    Resource* p;
    explicit Owner(const TemporaryOwner&);
    ~Owner();
};

inline Owner::Owner(const TemporaryOwner& q) : p(q.p)
{
    q.p = 0;
}

inline Owner::~Owner()
{
    if (p)
        delete p;
}

struct Reader {
    unsigned char data[72];
    explicit Reader(void*);
    ~Reader();
    TemporaryOwner read();
};

struct Loader {
    unsigned char data[4];
    Loader(Resource*, Resource*);
};

struct Stream {
    int* table;
};

struct FunctionManager;

struct FunctionStorage {
    void* pointers[3];
    void invoke(FunctionManager*, Shared);
};

struct FunctionManager {
    void (__cdecl *manage)(FunctionStorage*, FunctionStorage*, int);
};

struct Callback {
    FunctionManager* manager;
    unsigned int padding;
    FunctionStorage storage;
    ~Callback();
};

inline Callback::~Callback()
{
    FunctionManager* m = manager;
    if (m) {
        void (__cdecl *f)(FunctionStorage*, FunctionStorage*, int) = m->manage;
        if (f)
            f(&storage, &storage, 1);
    }
}

void __cdecl reconstructed(int mode, Stream* stream, Callback callback)
{
    Shared value(new Resource);

    if (mode == 1) {
        void* input = *reinterpret_cast<void**>(
            reinterpret_cast<unsigned char*>(stream) +
            stream->table[1] + 40);
        Reader reader(input);
        Owner object(reader.read());
        Loader loader(object.p, value.p);
    }

    callback.storage.invoke(callback.manager, value);
}
