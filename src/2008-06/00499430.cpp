// from server: 76% by king_originala
extern "C" void __cdecl alignedFree(void *);

struct Storage {
    void *data;
    int size;
    int capacity;

    Storage(const Storage &);
    ~Storage();
};

inline Storage::~Storage()
{
    alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

struct Container {
    Storage storage;
    unsigned char first;
    unsigned char second;
};

struct Small {
    int value;

    Small(const Small &);
    ~Small();
};

inline Small::Small(const Small &source)
    : value(source.value)
{
}

inline Small::~Small()
{
    value = 0;
}

struct Temporary {
    int value;
    Container container;

    Temporary(Small, int, Container);
    ~Temporary();
};

inline Temporary::~Temporary()
{
}

struct Result {
    int first;
    int second;
    int value;
    Container container;

    Result(int, int, const Temporary &);
};

inline Result::Result(int a, int b, const Temporary &source)
    : first(a), second(b), value(source.value), container(source.container)
{
}

Result __cdecl reconstruct(int a, int b, Small c, int d, Container e)
{
    return Result(a, b, Temporary(c, d, e));
}
