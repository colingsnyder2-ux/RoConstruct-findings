// from server: 100% by king_originala
struct State;

extern "C" int __cdecl lua_gettop(State*);
extern "C" void __cdecl lua_settop(State*, int);

struct BadFunctionCall
{
    char data[68];
    BadFunctionCall();
    ~BadFunctionCall();
};

__declspec(noreturn) void __cdecl throw_exception(const BadFunctionCall&);

typedef void (__cdecl *Manager)(void*, void*, int);

struct FunctionTable
{
    Manager manager;
    void (__cdecl *invoke)(void*, void*);
};

struct Loader
{
    FunctionTable* table;
    unsigned int unused;
    char storage[24];

    int operator()(State*);
    void clear();
    ~Loader();
};

struct Results
{
    FunctionTable* table;
    unsigned int unused;
    char storage[24];

    void operator()(State*, int);
    void clear();
    ~Results();
};

inline void Loader::clear()
{
    if (table)
    {
        Manager manager = table->manager;
        if (manager)
            manager(storage, storage, 1);
        table = 0;
    }
}

inline Loader::~Loader()
{
    clear();
}

inline void Results::clear()
{
    if (table)
    {
        Manager manager = table->manager;
        if (manager)
            manager(storage, storage, 1);
        table = 0;
    }
}

inline Results::~Results()
{
    clear();
}

struct ScriptContext
{
    int run(State*, int);
    void execute(State*, Loader, Results);
};

void ScriptContext::execute(State* state, Loader loader, Results results)
{
    int top = lua_gettop(state);
    if (run(state, loader(state)) != 2)
    {
        int count = lua_gettop(state);
        count += 1 - top;
        try
        {
            results(state, count);
        }
        catch (...)
        {
            lua_settop(state, -1 - count);
            throw;
        }
        lua_settop(state, -1 - count);
    }
    else
    {
        BadFunctionCall error;
        throw_exception(error);
    }
}
