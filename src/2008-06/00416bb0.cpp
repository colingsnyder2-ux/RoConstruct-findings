// from server: 92% by colin
// from server: 89% by king_originala
extern const unsigned char primaryTable[];
extern const unsigned char firstInterfaceTable[];
extern const unsigned char secondInterfaceTable[];

extern void (__thiscall *streamConstruct)(void *, int, int);
extern void (__thiscall *streamDestroy)(void *);

struct Module {
    virtual void unused() = 0;
    virtual void lock() = 0;
};

extern Module *module;

struct Stream {
    unsigned char storage[156];
    Stream(int mode);
    ~Stream();
};

__forceinline Stream::Stream(int mode) {
    streamConstruct(this, mode, 1);
}

__forceinline Stream::~Stream() {
    streamDestroy(this);
}

struct Base {
    const void * volatile table;
    long references;
    const void *firstInterface;
    const void *secondInterface;
    void *owner;
    Stream stream;

    Base(void *value);
};

__forceinline Base::Base(void *value)
    : table((references = 0, primaryTable)), owner(0), stream(3)
{
    firstInterface = firstInterfaceTable;
    secondInterface = secondInterfaceTable;
    owner = value;
}

struct Object : Base {
    Object(void *value);
};

Object::Object(void *value)
    : Base(value)
{
    module->lock();
}
