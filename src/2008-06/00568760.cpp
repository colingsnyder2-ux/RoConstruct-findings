// from server: 91% by king_originala
void __cdecl operator delete(void *);

struct Text {
    unsigned int allocator;
    union {
        char buffer[16];
        char *pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
    ~Text();
};

extern "C" Text __cdecl getSourceName();

struct InputStream;
typedef void (__thiscall *StreamConstructor)(
    InputStream *, const char *, int, int, int);
typedef void (__thiscall *StreamDestructor)(InputStream *);

extern StreamConstructor constructStream;
extern StreamDestructor destroyStream;

struct InputStream {
    char storage[140];
    InputStream(const char *, int, int);
    ~InputStream();
};

__forceinline InputStream::InputStream(
    const char *path, int mode, int protection) {
    constructStream(this, path, mode, protection, 1);
}

__forceinline InputStream::~InputStream() {
    destroyStream(this);
}

struct Product {
    ~Product();
};

struct Owner {
    Product *pointer;
    explicit Owner(Product *p = 0);
    ~Owner();
    Product *release();
};

__forceinline Owner::Owner(Product *p) : pointer(p) {}

__forceinline Owner::~Owner() {
    if (pointer)
        delete pointer;
}

__forceinline Product *Owner::release() {
    Product *p = pointer;
    pointer = 0;
    return p;
}

struct ProductOwner {
    Product *pointer;
    char padding[4];
    explicit ProductOwner(Product *);
    ~ProductOwner();
};

__forceinline ProductOwner::ProductOwner(Product *p) : pointer(p) {}

__forceinline ProductOwner::~ProductOwner() {
    if (pointer)
        delete pointer;
}

struct Parser {
    char storage[72];
    explicit Parser(void *);
    ~Parser();
    Owner read();
};

struct Mutex {
    void lock();
    void unlock();
};

extern Mutex productMutex;

struct Lock {
    Mutex *mutex;
    bool acquired;
    explicit Lock(Mutex &);
    ~Lock();
};

__forceinline Lock::Lock(Mutex &m)
    : mutex(&m), acquired(false) {
    mutex->lock();
    acquired = true;
}

__forceinline Lock::~Lock() {
    if (acquired)
        mutex->unlock();
}

struct TokenData {
    char storage[24];
    ~TokenData();
};

struct Token {
    unsigned int tag;
    TokenData data;
    Token();
    void finish();
    ~Token();
};

__forceinline Token::~Token() {}

struct S {
    void load();
    void apply(Product *, Token *);
};

void S::load() {
    Text name = getSourceName();
    if (name.length) {
        try {
            const char *path = name.storage.pointer;
            if (name.capacity < 16)
                path = name.storage.buffer;
            InputStream stream(path, 0x21, 0x40);
            Parser parser(stream.storage + 8);
            ProductOwner product(parser.read().release());
            Lock lock(productMutex);
            Token token;
            apply(product.pointer, &token);
            token.finish();
        } catch (...) {
            throw;
        }
    }
}
