// from server: 92% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void __cdecl operator delete(void*) throw();
extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    char data[28];
    String& operator=(const String&);
    ~String();
};

struct VectorBase {
    void* proxy;
    unsigned int reserved[2];
    ~VectorBase();
};

struct Vector : VectorBase {
    String* first;
    String* last;
    String* limit;

    ~Vector();
    unsigned int size() const;
    String& operator[](unsigned int);
};

__forceinline VectorBase::~VectorBase()
{
    operator delete(proxy);
}

__forceinline Vector::~Vector()
{
    if (first) {
        String* p = first;
        String* end = last;
        while (p != end) {
            p->~String();
            ++p;
        }
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline unsigned int Vector::size() const
{
    return last - first;
}

__forceinline String& Vector::operator[](unsigned int i)
{
    if (i >= size())
        _invalid_parameter_noinfo();
    return first[i];
}

__forceinline const int& maximum(const int& a, const int& b)
{
    return a > b ? a : b;
}

struct Collector {
    Vector collect();
};

Collector* __cdecl getCollector();

struct Mutex {
    char storage[12];
    void acquire();
    void release();
};

struct Guard {
    Mutex* mutex;
    bool active;

    Guard(Mutex*);
    ~Guard();
};

__forceinline Guard::Guard(Mutex* p) : mutex(p)
{
    mutex->acquire();
    active = true;
}

__forceinline Guard::~Guard()
{
    if (active)
        mutex->release();
}

struct Object {
    char reserved[32];
    Mutex mutex;
    String text;

    void append(const String&);
};

struct Count {
    long reserved;
    volatile long strong;
};

struct Shared {
    Object* object;
    Count* count;

    Shared(const Shared&);
    ~Shared();
    Object* operator->() const;
};

__forceinline Object* Shared::operator->() const
{
    return object;
}

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
    if (count) {
        volatile long* strong = &count->strong;
        _InterlockedExchangeAdd(strong, 1);
    }
}

int __cdecl process(Shared);

struct Event {
    void wait();
};

struct S {
    Shared shared;
    Event event;

    void f(String, bool);
};

void S::f(String text, bool drain)
{
    Vector items = getCollector()->collect();

    {
        Guard guard(&shared->mutex);
        shared->text = text;

        int start = static_cast<int>(items.size()) - 12;
        int zero = 0;
        unsigned int i = maximum(start, zero);
        for (; i < items.size(); ++i)
            shared->append(items[i]);
    }

    if (!drain) {
        event.wait();
    } else {
        while (process(shared)) {
        }
    }
}
