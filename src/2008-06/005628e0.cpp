// from server: 73% by king_originala
typedef unsigned int size_t;
void __cdecl operator delete(void*);

struct String;
extern void (__thiscall* string_copy_ctor)(String*, const String&);
extern void (__thiscall* string_dtor)(String*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;
    String(const String&);
    ~String();
};

String::String(const String& other) {
    string_copy_ctor(this, other);
}

String::~String() {
    string_dtor(this);
}

struct Request {
    String name;
    int mode;
    Request(const String&, int);
};

Request::Request(const String& value, int flags)
    : name(value), mode(flags) {
}

struct StreamBase {
    virtual ~StreamBase();
    char reserved[36];
    void* resource;
};

struct Stream : virtual StreamBase {
};

struct Object {
    ~Object();
};

struct StreamResult {
    mutable Stream* pointer;
    ~StreamResult();
};

StreamResult::~StreamResult() {
    if (pointer)
        delete pointer;
}

struct StreamProxy {
    mutable Stream* pointer;
    StreamProxy(const StreamResult&);
    ~StreamProxy();
};

StreamProxy::StreamProxy(const StreamResult& other) {
    Stream* p = other.pointer;
    other.pointer = 0;
    pointer = p;
}

StreamProxy::~StreamProxy() {
    if (pointer)
        delete pointer;
}

struct StreamOwner {
    Stream* pointer;
    StreamOwner(const StreamProxy&);
    ~StreamOwner();
};

StreamOwner::StreamOwner(const StreamProxy& other) {
    Stream* p = other.pointer;
    other.pointer = 0;
    pointer = p;
}

StreamOwner::~StreamOwner() {
    if (pointer)
        delete pointer;
}

struct ObjectResult {
    mutable Object* pointer;
    ~ObjectResult();
};

ObjectResult::~ObjectResult() {
    if (pointer)
        delete pointer;
}

struct ObjectProxy {
    mutable Object* pointer;
    ObjectProxy(const ObjectResult&);
    ~ObjectProxy();
};

ObjectProxy::ObjectProxy(const ObjectResult& other) {
    Object* p = other.pointer;
    other.pointer = 0;
    pointer = p;
}

ObjectProxy::~ObjectProxy() {
    if (pointer)
        delete pointer;
}

struct ObjectOwner {
    Object* pointer;
    ObjectOwner(const ObjectProxy&);
    ~ObjectOwner();
};

ObjectOwner::ObjectOwner(const ObjectProxy& other) {
    Object* p = other.pointer;
    other.pointer = 0;
    pointer = p;
}

ObjectOwner::~ObjectOwner() {
    if (pointer)
        delete pointer;
}

struct Builder {
    char storage[72];
    Builder(void*);
    ~Builder();
    ObjectResult create();
};

struct PointerSlot {
    void* pointer;
    void assign(Object*, void*);
};

struct S {
    StreamResult open(Request);
    void f(String, int, void*);
};

void S::f(String name, int mode, void* value) {
    StreamOwner stream((StreamProxy(open(Request(name, mode)))));
    Builder builder(stream.pointer->resource);
    ObjectOwner object((ObjectProxy(builder.create())));
    reinterpret_cast<PointerSlot*>(&value)->assign(object.pointer, value);
}
