// from server: 87% by king_originala
extern "C" long (__stdcall *InterlockedDecrement)(volatile long *);

struct Resource {
    virtual ~Resource();
    volatile long references;
    void cleanup();
};

struct Reference {
    Resource *pointer;
    ~Reference();
};

inline Reference::~Reference()
{
    if (pointer) {
        if (InterlockedDecrement(&pointer->references) == 0) {
            pointer->cleanup();
            delete pointer;
        }
        pointer = 0;
    }
}

struct Base {
    virtual ~Base();
    int reserved;
};

inline Base::~Base()
{
}

struct Level : Base {
    Reference first;
    Reference second;
    virtual ~Level();
};

Level::~Level()
{
}
