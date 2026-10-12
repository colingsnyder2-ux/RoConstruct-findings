// from server: 97% by king_originala
extern "C" void __cdecl release(void *);

struct Vector3 {
    float x, y, z;
};

struct TemporaryOwner {
    void *p;
    void *take() const;
    ~TemporaryOwner();
};

inline void *TemporaryOwner::take() const {
    void *result = p;
    const_cast<TemporaryOwner *>(this)->p = 0;
    return result;
}

inline TemporaryOwner::~TemporaryOwner() {
    if (p)
        release(p);
}

struct Owner {
    void *p;
    Owner(const TemporaryOwner &);
    Owner(const Owner &);
    void *take() const;
    ~Owner();
};

inline Owner::Owner(const TemporaryOwner &other) : p(other.take()) {
}

inline Owner::Owner(const Owner &other) : p(other.take()) {
}

inline void *Owner::take() const {
    void *result = p;
    const_cast<Owner *>(this)->p = 0;
    return result;
}

inline Owner::~Owner() {
    if (p)
        release(p);
}

TemporaryOwner __cdecl makeOwner(int, Vector3);
void *__cdecl getDescriptor();

struct Base {
    unsigned int table;
    Base(void *, int, int, Owner, int);
};

struct S : Base {
    S(int, int, int, Vector3, int);
};

S::S(int a, int b, int c, Vector3 v, int d)
    : Base(getDescriptor(), a, b, makeOwner(c, v), d) {
    table = 0x008428B8;
}
