// from server: 55% by king_originala
struct Service;

struct Pair
{
    unsigned int data[2];
    Pair(const Pair&);
    ~Pair();
};

struct Bound
{
    unsigned int data[6];
    Bound(const Bound&);
    ~Bound();
};

struct Wrapper
{
    unsigned int data[8];
    Wrapper(const Wrapper&);
    Wrapper(Bound value, int tag);
    ~Wrapper();
};

inline Pair::~Pair() {}
inline Bound::~Bound() {}
inline Wrapper::~Wrapper() {}

struct Receiver
{
    void submit(Wrapper value);
};

extern Receiver* receiver;

void __cdecl callback();
Pair __cdecl acquire(Service* object);
Bound __cdecl bind(void (__cdecl* function)(), int tag, Pair object,
                   int first, int second);

struct Service
{
    void invoke(int first, int second);
};

void Service::invoke(int first, int second)
{
    receiver->submit(Wrapper(bind(callback, 0, acquire(this), first, second), 0));
}
