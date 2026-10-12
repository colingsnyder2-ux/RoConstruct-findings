// from server: 70% by king_originala
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

Mutex *__cdecl getMutex();

struct Lock {
    Mutex *mutex;
    bool active;

    Lock(Mutex *p) : mutex(p), active(false) {
        mutex->lock();
        active = true;
    }

    ~Lock() {
        if (active)
            mutex->unlock();
    }
};

struct Iterator {
    void *owner;
    unsigned int position;
};

struct Range {
    void *owner;
    char padding[8];
    unsigned int first;
    unsigned int last;

    Iterator begin();
    Iterator end();
};

inline Iterator Range::begin()
{
    Iterator result;
    result.position = first;
    if (result.position > last)
        _invalid_parameter_noinfo();
    result.owner = owner;
    return result;
}

inline Iterator Range::end()
{
    Iterator result;
    result.position = last;
    if (first > result.position)
        _invalid_parameter_noinfo();
    result.owner = owner;
    return result;
}

struct Source {
    char padding0[8];
    Range firstRange;
    char padding1[0x20];
    Range secondRange;
    char padding2[0x20];
    Range thirdRange;
};

struct CDeclarationView;

typedef void (__cdecl *MemberFunction)(CDeclarationView *, void *);

struct Function {
    MemberFunction function;
    int adjustment;
    CDeclarationView *object;
    int unused;

    Function(MemberFunction f, CDeclarationView *p);
};

inline Function::Function(MemberFunction f, CDeclarationView *p)
    : function(f), adjustment(0), object(p)
{
}

Function __cdecl traverse(Iterator first, Iterator last, Function function);

void __cdecl firstCallback(CDeclarationView *, void *);
void __cdecl secondCallback(CDeclarationView *, void *);
void __cdecl thirdCallback(CDeclarationView *, void *);
int __stdcall compareItems(long, long, long);

struct Sort {
    long parameter;
    int (__stdcall *compare)(long, long, long);
};

struct CDeclarationView {
    char padding0[0x20];
    void *window;
    char padding1[0x88];
    Source *source;

    void update(Source *);
};

void CDeclarationView::update(Source *p)
{
    SendMessageA(window, 0x1101, 0, (long)0xffff0000);
    source = p;
    Lock lock(getMutex());

    traverse(p->firstRange.begin(), p->firstRange.end(),
             Function(firstCallback, this));
    traverse(p->thirdRange.begin(), p->thirdRange.end(),
             Function(thirdCallback, this));
    traverse(p->secondRange.begin(), p->secondRange.end(),
             Function(secondCallback, this));

    Sort sort;
    sort.parameter = (long)0xffff0000;
    sort.compare = compareItems;
    SendMessageA(window, 0x1115, 0, (long)&sort);
}
