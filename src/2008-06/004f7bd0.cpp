// from server: 95% by king_originala
extern "C" long (__stdcall *InterlockedDecrement)(volatile long*);

extern unsigned char derivedTable[];

struct Resource {
    virtual ~Resource();
    volatile long references;
    void release();
};

struct Handle {
    void* value;
    void assign(void*);
    ~Handle();
};

struct S {
    unsigned long table;
    float x, y, z;
    unsigned long flags;
    Handle handle;
    float a, b, c;

    S(const S&);
};

struct Value : S {
    Value(const Value&);
};

struct Pair {
    unsigned short first, second;
    Pair(unsigned short, unsigned short);
};

struct Builder {
    void submit(Value, Pair, int);
    void build(Value, unsigned short, unsigned short, int);
};

inline Handle::~Handle()
{
    if (value &&
        InterlockedDecrement(&static_cast<Resource*>(value)->references) == 0) {
        static_cast<Resource*>(value)->release();
        if (value)
            delete static_cast<Resource*>(value);
    }
}

inline Value::Value(const Value& other) : S(other)
{
    table = reinterpret_cast<unsigned long>(derivedTable);
}

inline Pair::Pair(unsigned short a, unsigned short b)
    : first(a), second(b)
{
}

void Builder::build(Value value, unsigned short first,
                    unsigned short second, int purpose)
{
    submit(value, Pair(first, second), purpose);
}
