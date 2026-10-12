// from server: 70% by king_originala
typedef void (__cdecl *Callback)(void *);

extern "C" void __cdecl callbackA(void *);
extern "C" void __cdecl callbackB(void *);
bool __cdecl func_0060a2f0();

inline void *operator new(unsigned int, void *p) { return p; }
inline void operator delete(void *, void *) {}

struct Result {
    unsigned int value;
    ~Result();
};

struct Pair {
    Callback function;
    void *argument;
    Pair(Callback, void *);
};

__forceinline Pair::Pair(Callback f, void *a)
    : function(f), argument(a) {}

template<unsigned int Manager>
struct Function {
    unsigned int manager;
    unsigned int reserved;
    unsigned char storage[24];

    Function(Pair);
    Function(const Function &);
    ~Function();
};

template<unsigned int Manager>
__forceinline Function<Manager>::Function(Pair p)
    : manager(0)
{
    typedef bool (__cdecl *EmptyTest)(const Pair *);
    if (!reinterpret_cast<EmptyTest>(&func_0060a2f0)(&p)) {
        new (storage) Pair(p);
        manager = Manager;
    } else {
        manager = 0;
    }
}

struct S {
    Result f(int, int, int, void *);
    void invoke(int, int, int,
                Function<0x8345ac>, Function<0x8345b4>);
};

Result S::f(int a, int b, int c, void *context)
{
    Result result;
    result.value = 0;
    invoke(a, b, c,
           Function<0x8345ac>(Pair(callbackB, context)),
           Function<0x8345b4>(Pair(callbackA, &result)));
    return result;
}
