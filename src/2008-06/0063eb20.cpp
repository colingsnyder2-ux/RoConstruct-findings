// from server: 89% by king_originala
namespace RBX {
    class Instance;
    class ServiceProvider;
}

RBX::ServiceProvider* __cdecl func_00465210(RBX::Instance*);
extern "C" void (__cdecl* invalid_parameter_noinfo)();

void* __cdecl operator new(unsigned int);

struct Result;
void __cdecl func_005a1680(Result*, const Result*);

struct Result {
    void* object;
    void* control;

    Result(const Result&);
    ~Result();
};

inline Result::Result(const Result& other) {
    func_005a1680(this, &other);
}

struct String;
void __cdecl func_0055bd80(String*, const char*);

struct String {
    unsigned char storage[32];

    String(const char*);
    String(const String&);
    ~String();
};

inline String::String(const char* text) {
    func_0055bd80(this, text);
}

struct Vector;

struct VectorBase {
    struct Proxy {
        Vector* owner;
        Proxy(Vector*);
    };

    Proxy* proxy;
    unsigned int reserved[2];

    VectorBase(Vector*);
    ~VectorBase();
};

inline VectorBase::Proxy::Proxy(Vector* p) {
    owner = p;
}

inline VectorBase::VectorBase(Vector* p) {
    proxy = new Proxy(p);
}

struct Vector : VectorBase {
    Result* first;
    Result* last;
    Result* limit;

    Vector();
    ~Vector();
    Result& front();
};

inline Vector::Vector() : VectorBase(this) {
    first = 0;
    last = 0;
    limit = 0;
}

inline Result& Vector::front() {
    Result* p = first;
    void (__cdecl* report)() = invalid_parameter_noinfo;

    if (p > last)
        report();

    Vector* owner;
    if (!proxy) {
        report();
        owner = 0;
    } else {
        owner = proxy->owner;
    }

    if (p >= owner->last)
        report();

    return *p;
}

namespace RBX {
    class ServiceProvider {
    public:
        void func_005628e0(String, Vector*);
    };
}

struct RocketTool {
    unsigned char padding[24];
    RBX::Instance* instance;

    Result f();
};

Result RocketTool::f() {
    Vector objects;
    func_00465210(instance)->func_005628e0(String("Fonts\\Rocket.rbxm"), &objects);
    return objects.front();
}
