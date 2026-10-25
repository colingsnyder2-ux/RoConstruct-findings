// from server: 100% by Espeon
// roc 2008-06 0063eb20  unit: RBX::RocketTool  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063eb20
//
// 0063eb20  6aff                 push -1
// 0063eb22  68a1a87d00           push 0x7da8a1
// 0063eb27  64a100000000         mov eax, dword ptr fs:[0]
// 0063eb2d  50                   push eax
// 0063eb2e  64892500000000       mov dword ptr fs:[0], esp
// 0063eb35  83ec20               sub esp, 0x20
// 0063eb38  53                   push ebx
// 0063eb39  56                   push esi
// 0063eb3a  57                   push edi
// 0063eb3b  33db                 xor ebx, ebx
// 0063eb3d  6a04                 push 4
// 0063eb3f  8bf1                 mov esi, ecx
// 0063eb41  895c2410             mov dword ptr [esp + 0x10], ebx
// 0063eb45  e8d61d0600           call 0x6a0920
// 0063eb4a  83c404               add esp, 4
// 0063eb4d  3bc3                 cmp eax, ebx
// 0063eb4f  7408                 je 0x63eb59
// 0063eb51  8d4c2414             lea ecx, [esp + 0x14]
// 0063eb55  8908                 mov dword ptr [eax], ecx
// 0063eb57  eb02                 jmp 0x63eb5b
// 0063eb59  33c0                 xor eax, eax
// 0063eb5b  89442414             mov dword ptr [esp + 0x14], eax
// 0063eb5f  895c2420             mov dword ptr [esp + 0x20], ebx
// 0063eb63  895c2424             mov dword ptr [esp + 0x24], ebx
// 0063eb67  895c2428             mov dword ptr [esp + 0x28], ebx
// 0063eb6b  8d542414             lea edx, [esp + 0x14]
// 0063eb6f  52                   push edx
// 0063eb70  83ec20               sub esp, 0x20
// 0063eb73  8bc4                 mov eax, esp
// 0063eb75  89642434             mov dword ptr [esp + 0x34], esp
// 0063eb79  68cca38400           push 0x84a3cc
// 0063eb7e  50                   push eax
// 0063eb7f  c744246002000000     mov dword ptr [esp + 0x60], 2
// 0063eb87  e8f4d1f1ff           call 0x55bd80
// 0063eb8c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063eb8f  51                   push ecx
// 0063eb90  c644246403           mov byte ptr [esp + 0x64], 3
// 0063eb95  e87666e2ff           call 0x465210
// 0063eb9a  83c40c               add esp, 0xc
// 0063eb9d  8bc8                 mov ecx, eax
// 0063eb9f  c644245802           mov byte ptr [esp + 0x58], 2
// 0063eba4  e8373df2ff           call 0x5628e0
// 0063eba9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0063ebad  8b3d90288000         mov edi, dword ptr [0x802890]
// 0063ebb3  8bf0                 mov esi, eax
// 0063ebb5  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0063ebb9  7602                 jbe 0x63ebbd
// 0063ebbb  ffd7                 call edi
// 0063ebbd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063ebc1  3bc3                 cmp eax, ebx
// 0063ebc3  7544                 jne 0x63ec09
// 0063ebc5  ffd7                 call edi
// 0063ebc7  33c0                 xor eax, eax
// 0063ebc9  3b7010               cmp esi, dword ptr [eax + 0x10]
// 0063ebcc  7202                 jb 0x63ebd0
// 0063ebce  ffd7                 call edi
// 0063ebd0  56                   push esi
// 0063ebd1  8b742440             mov esi, dword ptr [esp + 0x40]
// 0063ebd5  56                   push esi
// 0063ebd6  e8a52af6ff           call 0x5a1680
// 0063ebdb  83c408               add esp, 8
// 0063ebde  8d4c2414             lea ecx, [esp + 0x14]
// 0063ebe2  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0063ebea  885c2434             mov byte ptr [esp + 0x34], bl
// 0063ebee  e8ed43f6ff           call 0x5a2fe0
// 0063ebf3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0063ebf7  5f                   pop edi
// 0063ebf8  8bc6                 mov eax, esi
// 0063ebfa  5e                   pop esi
// 0063ebfb  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ec02  5b                   pop ebx
// 0063ec03  83c42c               add esp, 0x2c
// 0063ec06  c20400               ret 4
// 0063ec09  8b00                 mov eax, dword ptr [eax]
// 0063ec0b  ebbc                 jmp 0x63ebc9




extern "C" __declspec(dllimport) void __stdcall _invalid_parameter_noinfo();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);


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
String* __cdecl initializeString(String*, const char*);

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

struct VectorBuy : Vector {
    VectorBuy();
    ~VectorBuy();
    bool buy(unsigned int capacity)
    {
        first = 0; last = 0; limit = 0;
        if (capacity == 0)
            return false;
        first = (SharedPtr*)operator new(capacity * sizeof(SharedPtr));
        last = first;
        limit = first + capacity;
        return true;
    }
};

inline Vector::Vector()
    : proxy(new Proxy(this)) {
}

inline VectorBuy::VectorBuy() {
    buy(0);
}

String __cdecl makeString(const char*);

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
    VectorBuy result;
    func_00465210(instance)->load(
        makeString("Fonts\\Rocket.rbxm"), &result);

    SharedPtr* position = result.first;

    if (position > result.last)
        _invalid_parameter_noinfo();

    Vector::Proxy* aux = result.proxy;
    if (!(aux != 0))
        _invalid_parameter_noinfo();
    Vector* owner = aux ? aux->owner : 0;

    if (position >= owner->last)
        _invalid_parameter_noinfo();

    return *position;
}