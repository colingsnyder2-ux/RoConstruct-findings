// from server: 98% by king_originala
struct Link {
    int reserved;
    int previous;
};

extern "C" void* __stdcall get_context();
extern void __stdcall release_context(int, void*);

struct Context {
    int previous;
    Link* link;
    void* handle;
    int active;

    Context(void*);
    ~Context();
};

struct String {
    char storage[28];

    String(const char*);
    String(const String&);
    ~String();
};

extern String* (__thiscall *construct_string)(String*, const char*);

struct Service {
    void run(String, int);
};

extern Service* service;

__forceinline String::String(const char* text)
{
    construct_string(this, text);
}

__forceinline Context::~Context()
{
    if (link)
        link->previous = previous;
    if (active)
        release_context(0, handle);
}

void __cdecl func(const char* text)
{
    Context context(get_context());
    service->run(String(text), 0);
}
