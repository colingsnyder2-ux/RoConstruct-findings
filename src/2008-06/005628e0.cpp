// from server: 83% by colin
// from server: 73% by king_originala
// roc 2008-06 005628e0  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005628e0
//
// 005628e0  6aff                 push -1
// 005628e2  68a0f07c00           push 0x7cf0a0
// 005628e7  64a100000000         mov eax, dword ptr fs:[0]
// 005628ed  50                   push eax
// 005628ee  64892500000000       mov dword ptr fs:[0], esp
// 005628f5  83ec58               sub esp, 0x58
// 005628f8  55                   push ebp
// 005628f9  56                   push esi
// 005628fa  57                   push edi
// 005628fb  8bf9                 mov edi, ecx
// 005628fd  83ec20               sub esp, 0x20
// 00562900  8bf4                 mov esi, esp
// 00562902  8d842494000000       lea eax, [esp + 0x94]
// 00562909  89642430             mov dword ptr [esp + 0x30], esp
// 0056290d  50                   push eax
// 0056290e  8bce                 mov ecx, esi
// 00562910  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0056291b  ff155c248000         call dword ptr [0x80245c]
// 00562921  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00562928  8d54242c             lea edx, [esp + 0x2c]
// 0056292c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0056292f  52                   push edx
// 00562930  8bcf                 mov ecx, edi
// 00562932  e8e9f5ffff           call 0x561f20
// 00562937  8b30                 mov esi, dword ptr [eax]
// 00562939  c70000000000         mov dword ptr [eax], 0
// 0056293f  89742414             mov dword ptr [esp + 0x14], esi
// 00562943  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00562947  c644246c03           mov byte ptr [esp + 0x6c], 3
// 0056294c  85c0                 test eax, eax
// 0056294e  7410                 je 0x562960
// 00562950  8b08                 mov ecx, dword ptr [eax]
// 00562952  8b5104               mov edx, dword ptr [ecx + 4]
// 00562955  8d0c02               lea ecx, [edx + eax]
// 00562958  8b01                 mov eax, dword ptr [ecx]
// 0056295a  8b10                 mov edx, dword ptr [eax]
// 0056295c  6a01                 push 1
// 0056295e  ffd2                 call edx
// 00562960  8b06                 mov eax, dword ptr [esi]
// 00562962  8b4804               mov ecx, dword ptr [eax + 4]
// 00562965  8b443128             mov eax, dword ptr [ecx + esi + 0x28]
// 00562969  50                   push eax
// 0056296a  8d4c2420             lea ecx, [esp + 0x20]
// 0056296e  e8dd29ebff           call 0x415350
// 00562973  8d542410             lea edx, [esp + 0x10]
// 00562977  52                   push edx
// 00562978  8d4c2420             lea ecx, [esp + 0x20]
// 0056297c  c644247004           mov byte ptr [esp + 0x70], 4
// 00562981  e83acd0200           call 0x58f6c0
// 00562986  8b38                 mov edi, dword ptr [eax]
// 00562988  c70000000000         mov dword ptr [eax], 0
// 0056298e  897c2418             mov dword ptr [esp + 0x18], edi
// 00562992  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00562996  c644246c07           mov byte ptr [esp + 0x6c], 7
// 0056299b  85c9                 test ecx, ecx
// 0056299d  7410                 je 0x5629af
// 0056299f  8be9                 mov ebp, ecx
// 005629a1  e8ca10ebff           call 0x413a70
// 005629a6  55                   push ebp
// 005629a7  e8cedc1300           call 0x6a067a
// 005629ac  83c404               add esp, 4
// 005629af  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 005629b6  50                   push eax
// 005629b7  57                   push edi
// 005629b8  8d8c249c000000       lea ecx, [esp + 0x9c]
// 005629bf  e88c080300           call 0x593250
// 005629c4  c644246c04           mov byte ptr [esp + 0x6c], 4
// 005629c9  85ff                 test edi, edi
// 005629cb  7410                 je 0x5629dd
// 005629cd  8bcf                 mov ecx, edi
// 005629cf  e89c10ebff           call 0x413a70
// 005629d4  57                   push edi
// 005629d5  e8a0dc1300           call 0x6a067a
// 005629da  83c404               add esp, 4
// 005629dd  8d4c241c             lea ecx, [esp + 0x1c]
// 005629e1  c644246c03           mov byte ptr [esp + 0x6c], 3
// 005629e6  e8d51debff           call 0x4147c0
// 005629eb  8b0e                 mov ecx, dword ptr [esi]
// 005629ed  8b5104               mov edx, dword ptr [ecx + 4]
// 005629f0  8b0432               mov eax, dword ptr [edx + esi]
// 005629f3  8d0c32               lea ecx, [edx + esi]
// 005629f6  8b10                 mov edx, dword ptr [eax]
// 005629f8  6a01                 push 1
// 005629fa  c644247000           mov byte ptr [esp + 0x70], 0
// 005629ff  ffd2                 call edx
// 00562a01  8d4c2474             lea ecx, [esp + 0x74]
// 00562a05  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 00562a0d  ff1568248000         call dword ptr [0x802468]
// 00562a13  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00562a17  5f                   pop edi
// 00562a18  5e                   pop esi
// 00562a19  64890d00000000       mov dword ptr fs:[0], ecx
// 00562a20  5d                   pop ebp
// 00562a21  83c464               add esp, 0x64
// 00562a24  c22400               ret 0x24

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
    __declspec(dllimport) ~ObjectProxy() throw();
};

ObjectProxy::ObjectProxy(const ObjectResult& other) {
    Object* p = other.pointer;
    other.pointer = 0;
    pointer = p;
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
