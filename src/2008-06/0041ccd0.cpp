// from server: 98% by king_originala
struct String;
extern "C" {
extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);
}

struct String {
    unsigned char data[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    stringCopy(this, other);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Service;

struct Shared {
    void* object;
    void* control;
    Shared(const Shared&);
};

Shared __cdecl getShared(Service*);

struct Callback {
    void (__cdecl *function)();
    int adjustment;
};

void __cdecl callback();

struct Bind {
    unsigned char data[48];
    Bind(const Bind&);
};

Bind __cdecl makeBind(Callback, Shared, String);

struct FunctionTable {
    void (__cdecl *manager)(void*, void*, int);
};

struct Function {
    FunctionTable* table;
    unsigned int reserved;
    unsigned int storage[6];
    Function(const Function&);
    Function(Bind, int);
};

struct Queue {
    void append(Function);
};

extern Queue* queue;

struct Service {
    void submit(String);
};

void Service::submit(String text)
{
    Callback target = { callback, 0 };
    queue->append(Function(makeBind(target, getShared(this), text), 0));
}
