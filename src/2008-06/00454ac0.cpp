// from server: 73% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

namespace std {
template<class T> struct char_traits;
template<class T> class allocator;
template<class C, class T, class A> class basic_string {
    unsigned char storage[28];
public:
    ~basic_string();
    const C* c_str() const;
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Owner {
    Owner** proxy;
    unsigned int reserved[2];
    unsigned int first;
    unsigned int last;
    unsigned int end;
    Owner();
    ~Owner();
};

struct Holder {
    Owner* value;
    ~Holder();
};

struct Runner {
    Holder run(int, const char*, const char*, Owner*);
};

struct Model {
    Runner* runner();
};

struct Result {
    Model* first;
    Control* second;
    Result();
    Result(const Result&);
    ~Result();
};

struct Lock {
    unsigned char storage[12];
    Lock(Result);
    ~Lock();
};

struct Source {
    void copy(Result*);
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Result* f(Result*);
    int execute(String);
};

inline Result::Result() {}

inline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
    if (second)
        _InterlockedExchangeAdd(&second->strong, 1);
}

inline Result::~Result()
{
    Control* p = second;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

inline Owner::Owner()
{
    Owner** p = new Owner*(this);
    proxy = p;
    first = 0;
    last = 0;
    end = 0;
}

inline Holder::~Holder()
{
    Owner* p = value;
    if (p) {
        p->~Owner();
        operator delete(p);
    }
}

int S::execute(String text)
{
    try {
        Lock lock(*f(&Result()));
        Owner owner;
        {
            Result temporary;
            Model* model = f(&temporary)->first;
            const char* script = text.c_str();
            Runner* runner = model->runner();
            runner->run(1, script, "Doc script", &owner);
        }
        return 1;
    }
    catch (...) {
        return 0;
    }
}
