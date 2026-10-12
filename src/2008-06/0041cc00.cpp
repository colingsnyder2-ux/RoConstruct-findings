// from server: 70% by king_originala
struct String;
extern "C" {
extern void (__thiscall *copyString)(String*, const String&);
extern void (__thiscall *destroyString)(String*);
}

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    copyString(this, other);
}

inline String::~String()
{
    destroyString(this);
}

struct Shared {
    unsigned int storage[2];
    Shared(const Shared&);
    ~Shared();
};

struct Binder {
    unsigned int storage[12];
    Binder(const Binder&);
    ~Binder();
};

struct FunctionTable {
    void (__cdecl *manager)(void*, void*, int);
};

struct Function {
    FunctionTable* table;
    unsigned int reserved;
    unsigned int storage[6];
    Function(Binder, int = 0);
    Function(const Function&);
    ~Function();
};

struct Service {
    void f(String);
};

struct Queue {
    void append(Function);
};

extern Queue* queue;
extern Shared __cdecl getShared(Service*);
extern void __cdecl callback();
extern Binder __cdecl bind(void (__cdecl *)(), int, Shared, String);

void Service::f(String text)
{
    queue->append(bind(callback, 0, getShared(this), text));
}
