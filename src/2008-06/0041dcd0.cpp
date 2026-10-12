// from server: 92% by king_originala
struct S;

extern S* (__thiscall *construct_string)(S*, const wchar_t*);
extern const char* (__thiscall *get_string)(S*);
extern void (__thiscall *destroy_string)(S*);
extern bool __cdecl process_string(const char*);

struct S
{
    void* data;
    S(const wchar_t*, S*&);
    ~S() throw();
    const char* get();
};

S::S(const wchar_t* text, S*& result)
{
    result = construct_string(this, text);
}

S::~S() throw()
{
    destroy_string(this);
}

const char* S::get()
{
    return get_string(this);
}

long __cdecl func_0041dcd0(const wchar_t* text)
{
    S* result;
    S value(text, result);
    return process_string(result->get()) ? 0 : (long)0x80004005;
}
