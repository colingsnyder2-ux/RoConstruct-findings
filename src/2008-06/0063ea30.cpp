// from server: 89% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern "C" void (__stdcall* _invalid_parameter_noinfo)();

struct SharedPtr;
void __cdecl copySharedPtr(SharedPtr*, const SharedPtr*);

struct SharedPtr {
    void* object;
    void* control;
    SharedPtr(const SharedPtr&);
    ~SharedPtr();
};

inline SharedPtr::SharedPtr(const SharedPtr& source) {
    copySharedPtr(this, &source);
}

struct Allocator {
    char storage[4];
    ~Allocator();
};

inline Allocator::~Allocator() {
}

struct String;
void __cdecl initializeString(String*, const char*);

struct String {
    Allocator allocator;
    char storage[28];
    String(const char*);
    String(const String&);
    ~String();
};

inline String::String(const char* text) {
    initializeString(this, text);
}

struct Instance;

struct Vector {
    struct Proxy {
        Vector* owner;
        Proxy(Vector*);
    };

    Proxy* proxy;
    char allocator1[4];
    char allocator2[4];
    SharedPtr* first;
    SharedPtr* last;
    SharedPtr* limit;

    Vector();
    ~Vector();
};

inline Vector::Proxy::Proxy(Vector* value) : owner(value) {
}

inline Vector::Vector()
    : proxy(new Proxy(this)), first(0), last(0), limit(0) {
}

struct ServiceProvider {
    void load(String, Vector*);
};

ServiceProvider* __cdecl func_00465210(Instance*);

struct SlingshotTool {
    char padding[0x18];
    Instance* instance;
    SharedPtr func();
};

SharedPtr SlingshotTool::func() {
    Vector result;
    func_00465210(instance)->load(
        String("Fonts\\SlingshotPellet.rbxm"), &result);

    SharedPtr* position = result.first;
    void (__stdcall* invalid)() = _invalid_parameter_noinfo;

    if (position > result.last)
        invalid();

    Vector* owner;
    if (!result.proxy) {
        invalid();
        owner = 0;
    } else {
        owner = result.proxy->owner;
    }

    if (position >= owner->last)
        invalid();

    return *position;
}
