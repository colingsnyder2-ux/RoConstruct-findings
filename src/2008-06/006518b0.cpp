// from server: 82% by king_originala
typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);
void __cdecl operator delete(void *, void *);

inline void * __cdecl operator new(size_t, void *p)
{
    return p;
}

struct Vector;

struct Proxy {
    Vector *owner;
    Proxy(Vector *);
};

inline Proxy::Proxy(Vector *p) : owner(p)
{
}

struct VectorBase {
    Proxy *proxy;
    unsigned int allocator[2];

    VectorBase(Vector *);
    ~VectorBase();
};

inline VectorBase::VectorBase(Vector *owner)
{
    proxy = new Proxy(owner);
}

inline VectorBase::~VectorBase()
{
    operator delete(proxy);
}

struct VectorData {
    void *first;
    void *last;
    void *limit;

    VectorData();
    ~VectorData();
};

inline VectorData::VectorData() : first(0), last(0), limit(0)
{
}

inline VectorData::~VectorData()
{
    if (first)
        operator delete(first);
}

struct Vector : VectorBase, VectorData {
    Vector();
    Vector(const Vector &);
    ~Vector();
    void swap(Vector &);
};

inline Vector::Vector() : VectorBase(this), VectorData()
{
}

inline Vector::~Vector()
{
}

template<class T>
inline void exchange(T &left, T &right)
{
    if (&left != &right) {
        T value = left;
        left = right;
        right = value;
    }
}

inline void Vector::swap(Vector &other)
{
    if (this != &other) {
        Proxy *p = proxy;
        proxy = other.proxy;
        other.proxy = p;
        exchange(proxy->owner, p->owner);
        exchange(first, other.first);
        exchange(last, other.last);
        exchange(limit, other.limit);
    }
}

inline void construct(Vector *p, const Vector &value)
{
    void *storage = p;
    new (storage) Vector(value);
}

Vector * __cdecl move_vectors(Vector *first, Vector *last, Vector *destination)
{
    Vector *begin = destination;
    Vector empty;
    try {
        for (; first != last; ++first, ++destination) {
            construct(destination, empty);
            destination->swap(*first);
        }
    }
    catch (...) {
        for (; begin != destination; ++begin)
            begin->~Vector();
        throw;
    }
    return destination;
}
