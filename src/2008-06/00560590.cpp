// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    ~String();
};

typedef void (__thiscall *StringDestructor)(String*);
typedef String& (__thiscall *StringAssignment)(String*, const char*);
typedef int (__stdcall *PathPredicate)(const char*);

extern StringDestructor destroyString;
extern StringAssignment assignString;
extern PathPredicate pathIsRelative;
extern PathPredicate pathIsDirectory;
extern String assetFolder;

String::~String()
{
    destroyString(this);
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Header;

struct Allocator {
    virtual void unused() = 0;
    virtual void release(Header*) = 0;
};

struct Header {
    Allocator* allocator;
    long length;
    long capacity;
    volatile long references;
};

struct Path {
    char* text;
    Path(const char*);
    ~Path();
    void normalize();
};

Path::~Path()
{
    Header* p = reinterpret_cast<Header*>(text) - 1;
    if (_InterlockedExchangeAdd(&p->references, -1) - 1 <= 0)
        p->allocator->release(p);
}

struct Exception {
    char storage[40];
    Exception(const String&);
    Exception(const Exception&);
    ~Exception();
};

extern String* __cdecl construct(String*);
extern Shared* __cdecl getLogger(Shared*);
extern void __cdecl logMessage(void*, int, const char*, ...);
extern String __cdecl format(const char*, ...);

void __cdecl setAssetFolder(const char* folder)
{
    char scratch[28];
    construct(reinterpret_cast<String*>(scratch));
    destroyString(reinterpret_cast<String*>(scratch));

    {
        Shared logger;
        logMessage(getLogger(&logger)->object, 1, "setAssetFolder %s", folder);
    }

    Path path(folder);

    if (pathIsRelative(path.text))
        throw Exception(format("The path '%s' is a relative path", path.text));

    if (!pathIsDirectory(path.text))
        throw Exception(format("The path '%s' does not exist", path.text));

    path.normalize();
    assignString(&assetFolder, path.text);
}
