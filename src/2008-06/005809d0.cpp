// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pair {
    void* object;
    Control* control;
    ~Pair();
};

inline Pair::~Pair()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Collection {
    unsigned char padding[12];
    Pair* begin;
    Pair* end;
};

struct Node {
    unsigned char padding[0x154];
    Collection* collection;
    Node* resolve();
    Pair first();
    Pair second();
};

void __cdecl combine(void*, void*);

struct JoinCommand {
    unsigned char padding[12];
    Node* volatile node;
    void prepare();
    void execute(int);
};

void JoinCommand::execute(int)
{
    Node* p = node;
    prepare();
    Node* current = node;
    if (current)
        p = current->resolve();
    else
        p = 0;

    if (static_cast<unsigned>(p->collection->end -
                              p->collection->begin) == 2) {
        Pair a = p->first();
        Pair b = p->second();
        combine(a.object, b.object);
    }
}
