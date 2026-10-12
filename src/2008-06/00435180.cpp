// from server: 75% by king_originala
extern "C" {
extern long (__stdcall *SendMessageA)(void *, unsigned int, unsigned int, long);
extern void (__cdecl *_invalid_parameter_noinfo)();
}

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

extern Mutex *__cdecl getMutex();
extern void __cdecl visitCallback();
extern void __cdecl compareCallback();

struct Lock {
    Mutex *mutex;
    bool held;
    Lock(Mutex *p) : mutex(p), held(false) {
        mutex->lock();
        held = true;
    }
    ~Lock() {
        if (held)
            mutex->unlock();
    }
};

struct Range {
    char padding[16];
    void *volatile data;
    unsigned int unused[2];
    unsigned int first;
    unsigned int last;
};

struct CDeclarationView;

struct Visitor {
    void (__cdecl *callback)();
    unsigned int zero;
    CDeclarationView *object;
    unsigned int unused;
};

struct Result {
    void *data;
    unsigned int index;
    unsigned int unused;
};

extern Result __cdecl traverse(
    void *, unsigned int, void *, unsigned int, Visitor);

struct SortInfo {
    unsigned int parent;
    void (__cdecl *compare)();
    unsigned int parameter;
};

struct CDeclarationView {
    char padding[32];
    void *window;
    char remainder[136];
    Range *range;
    void update(Range *);
};

void CDeclarationView::update(Range *value)
{
    SendMessageA(window, 0x1101, 0, (long)0xffff0000);
    range = value;

    Lock guard(getMutex());

    unsigned int last = value->last;
    void (__cdecl *volatile callback)() = visitCallback;
    volatile unsigned int zero = 0;
    Visitor visitor;
    visitor.object = this;

    if (value->first > last)
        _invalid_parameter_noinfo();

    void *firstData = value->data;
    unsigned int first = value->first;
    if (first > value->last)
        _invalid_parameter_noinfo();

    void *data = value->data;
    visitor.callback = callback;
    visitor.zero = zero;
    traverse(data, first, firstData, last, visitor);

    SortInfo sort;
    sort.parent = 0xffff0000;
    sort.compare = compareCallback;
    SendMessageA(window, 0x1115, 0, (long)&sort);
}
