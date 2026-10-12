// from server: 78% by king_originala
inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

extern bool __cdecl func_0060a2f0();
extern void __cdecl callback_005ad6d0(void*);
extern void __cdecl callback_005abf90(void*);

struct Result {
    void* pointer;
    Result();
    ~Result();
};

inline Result::Result() : pointer(0)
{
}

struct BoundCall {
    void (__cdecl *function)(void*);
    void* argument;
    BoundCall(void (__cdecl *fn)(void*), void* arg);
};

inline BoundCall::BoundCall(void (__cdecl *fn)(void*), void* arg)
    : function(fn), argument(arg)
{
}

struct FunctionTable {
    void (__cdecl *destroy)(void*);
};

extern const FunctionTable table_008345b4;
extern const FunctionTable table_008345ac;

template<int Tag>
struct Function {
    const FunctionTable* table;
    unsigned int reserved;
    unsigned char storage[24];

    Function(BoundCall call);
    ~Function();
};

template<int Tag>
inline Function<Tag>::Function(BoundCall call) : table(0)
{
    if (!reinterpret_cast<bool (__cdecl *)(const BoundCall*)>(
            func_0060a2f0)(&call)) {
        new (storage) BoundCall(call);
        table = Tag ? &table_008345ac : &table_008345b4;
    } else {
        table = 0;
    }
}

template<int Tag>
Function<Tag>::~Function()
{
    if (table)
        table->destroy(storage);
}

struct S {
    Result f(void* input, void* context);
    void dispatch(void* input, Function<1> first, Function<0> second);
};

Result S::f(void* input, void* context)
{
    Result result;
    dispatch(input,
             BoundCall(callback_005abf90, context),
             BoundCall(callback_005ad6d0, &result));
    return result;
}
