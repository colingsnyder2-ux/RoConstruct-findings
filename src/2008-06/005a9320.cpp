// from server: 82% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std
{
    template<class T> struct allocator {};
    template<class T> struct char_traits {};

    template<class T, class Traits, class Allocator>
    class basic_string
    {
    public:
        unsigned long allocator_data;
        union
        {
            T buffer[16];
            T* pointer;
        };
        unsigned long length;
        unsigned long capacity;

        basic_string();
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
        basic_string& operator+=(T);
        basic_string& operator+=(const T*);
        const T* c_str() const;
    };

    template<class T, class Traits, class Allocator>
    inline const T* basic_string<T, Traits, Allocator>::c_str() const
    {
        const T* result = pointer;
        if (capacity < 16)
            result = buffer;
        return result;
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception
    {
    public:
        char* message;
        int owned;
        exception();
        virtual ~exception();
        virtual const char* what() const;
    };

    class runtime_error : public exception
    {
    public:
        string text;
        runtime_error(const string&);
        virtual ~runtime_error();
        virtual const char* what() const;
    };

    inline runtime_error::runtime_error(const string& s) : text(s) {}
    inline runtime_error::~runtime_error() {}
    inline const char* runtime_error::what() const
    {
        return text.c_str();
    }
}

struct LuaState;

extern "C" int __cdecl lua_gettop(LuaState*);
extern "C" void __cdecl lua_settop(LuaState*, int);
extern "C" void __cdecl lua_pushvalue(LuaState*, int);
extern "C" const char* __cdecl lua_tolstring(LuaState*, int, unsigned long*);
extern "C" void __cdecl lua_getfield(LuaState*, int, const char*);
extern "C" void __cdecl lua_call(LuaState*, int, int);
extern "C" char* __cdecl __iob_func();
extern "C" int __cdecl fputs(const char*, void*);

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Output;

struct OutputHandle
{
    Output* pointer;
    Control* control;
    ~OutputHandle();
};

inline OutputHandle::~OutputHandle()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

OutputHandle __cdecl get_output();
void __cdecl write_output(Output*, int, const char*);

int __cdecl f(LuaState* state)
{
    std::string text;
    int count = lua_gettop(state);
    lua_getfield(state, -10002, "tostring");

    for (int i = 1; i <= count; ++i)
    {
        if (i > 1)
            text += ' ';

        lua_pushvalue(state, -1);
        lua_pushvalue(state, i);
        lua_call(state, 1, 1);

        const char* value = lua_tolstring(state, -1, 0);
        if (!value)
        {
            std::string error("'tostring' must return a string to 'print'");
            throw std::runtime_error(error);
        }

        text += value;

        if (i > 1)
            fputs("\t", __iob_func() + 32);

        lua_settop(state, -2);
    }

    write_output(get_output().pointer, 0, text.c_str());
    return 0;
}
