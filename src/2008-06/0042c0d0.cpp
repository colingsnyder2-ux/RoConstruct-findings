// from server: 69% by king_originala
typedef unsigned long ULONG;
typedef long HRESULT;

struct Guid {
    unsigned long a;
    unsigned short b, c;
    unsigned char d[8];
};

extern const Guid inputInterface;

struct Interface;
typedef HRESULT (__stdcall *QueryProc)(Interface *, const Guid &, void **);
typedef ULONG (__stdcall *RefProc)(Interface *);
typedef HRESULT (__stdcall *AttachProc)(Interface *, unsigned short *, Interface *, short *);

struct Interface {
    struct Table {
        QueryProc query;
        RefProc addRef;
        RefProc release;
        void *reserved[63];
        AttachProc attach;
    } *table;
};

struct InterfacePtr {
    Interface *p;

    InterfacePtr(Interface *value = 0) : p(value) {
        if (p)
            p->table->addRef(p);
    }

    ~InterfacePtr() {
        if (p)
            p->table->release(p);
    }

    void assign(Interface *value) {
        if (p != value) {
            if (value)
                value->table->addRef(value);
            if (p)
                p->table->release(p);
            p = value;
        }
    }
};

struct State {
    unsigned char storage[28];
    State();
    ~State();
};

struct Handler;
extern void __cdecl eventHandler(Handler *);

struct BoundHandler {
    void (__cdecl *function)(Handler *);
    int adjustment;
    Handler *object;
    unsigned char argument;
};

struct Function {
    unsigned char storage[32];
    Function(BoundHandler, int);
    Function(const Function &);
    ~Function();
};

struct Callback {
    unsigned char storage[48];
    Callback(Function);
};

extern "C" void __stdcall SysFreeString(unsigned short *);

struct WideString {
    unsigned short *value;
    WideString(const char *);
    ~WideString() {
        SysFreeString(value);
    }
};

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

struct Error {
    unsigned char storage[40];
    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct HandlerBase {
    virtual void dispatch();
    unsigned long references;
    void *owner;

    HandlerBase() : references(0), owner(0) {}
    ~HandlerBase();
};

struct Handler : HandlerBase {
    State state;
    bool active;
    InterfacePtr callback;
    InterfacePtr source;

    Handler(Interface *);
};

Handler::Handler(Interface *value)
    : active(false), callback(0), source(value)
{
    BoundHandler bound;
    bound.function = eventHandler;
    bound.adjustment = 0;
    bound.object = this;

    Callback *created = new Callback(Function(bound, 0));
    callback.assign(reinterpret_cast<Interface *>(created));

    InterfacePtr input;
    if (value)
        value->table->query(value, inputInterface,
                            reinterpret_cast<void **>(&input.p));

    Interface *element = input.p;
    short attached;
    HRESULT result = element->table->attach(
        element, WideString("onchange").value, callback.p, &attached);

    if (result != 0) {
        String message("attachEvent failed");
        throw Error(message);
    }

    if (attached == 0) {
        String message("attachEvent failed");
        throw Error(message);
    }
}
