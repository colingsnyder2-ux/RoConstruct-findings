// from server: 72% by king_originala
extern int initializationFlag;
extern void __cdecl initializeDescriptor();
extern void __cdecl runOnce(void (__cdecl *)(), int *);
extern void * __cdecl getDescriptor();
extern void * __cdecl getSettings();
extern void __cdecl operator delete(void *);

struct Owner {
    void *pointer;
    ~Owner();
    void *release();
};

inline Owner::~Owner()
{
    if (pointer)
        operator delete(pointer);
}

inline void *Owner::release()
{
    void *result = pointer;
    pointer = 0;
    return result;
}

extern Owner __cdecl createBinding(int, int, int, int);

struct Base {
    unsigned char storage[20];
    void *descriptor;

    Base(int, int, int);
    void initialize(void *, void *, int, int, int);
    virtual ~Base();
};

inline Base::Base(int a, int b, int g)
{
    runOnce(initializeDescriptor, &initializationFlag);
    void *cached = getDescriptor();
    initialize(getSettings(), cached, a, b, g);
    descriptor = cached;
}

struct S : Base {
    void *binding;
    void *settings;

    S(int, int, int, int, int, int, int);
    virtual ~S();
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : Base(a, b, g),
      binding(createBinding(c, d, e, f).release())
{
    runOnce(initializeDescriptor, &initializationFlag);
    settings = getDescriptor();
}
