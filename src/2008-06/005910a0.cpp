// from server: 100% by king_originala
// roc 2008-06 005910a0  unit: RBX::RootInstance  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005910a0
//
// 005910a0  64a100000000         mov eax, dword ptr fs:[0]
// 005910a6  6aff                 push -1
// 005910a8  68e1517d00           push 0x7d51e1
// 005910ad  50                   push eax
// 005910ae  64892500000000       mov dword ptr fs:[0], esp
// 005910b5  83ec28               sub esp, 0x28
// 005910b8  57                   push edi
// 005910b9  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005910bd  80bf0004000000       cmp byte ptr [edi + 0x400], 0
// 005910c4  0f85e9000000         jne 0x5911b3
// 005910ca  56                   push esi
// 005910cb  51                   push ecx
// 005910cc  e8fffcffff           call 0x590dd0
// 005910d1  8bf0                 mov esi, eax
// 005910d3  83c404               add esp, 4
// 005910d6  8d442440             lea eax, [esp + 0x40]
// 005910da  50                   push eax
// 005910db  8bcf                 mov ecx, edi
// 005910dd  e8be0a0400           call 0x5d1ba0
// 005910e2  8b08                 mov ecx, dword ptr [eax]
// 005910e4  51                   push ecx
// 005910e5  8bce                 mov ecx, esi
// 005910e7  e8344e0400           call 0x5d5f20
// 005910ec  84c0                 test al, al
// 005910ee  0f85be000000         jne 0x5911b2
// 005910f4  8d54240c             lea edx, [esp + 0xc]
// 005910f8  52                   push edx
// 005910f9  e84280e7ff           call 0x409140
// 005910fe  83c404               add esp, 4
// 00591101  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00591105  56                   push esi
// 00591106  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0059110e  e8dd97fcff           call 0x55a8f0
// 00591113  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00591117  8d442440             lea eax, [esp + 0x40]
// 0059111b  50                   push eax
// 0059111c  8bcf                 mov ecx, edi
// 0059111e  e87d0a0400           call 0x5d1ba0
// 00591123  8b08                 mov ecx, dword ptr [eax]
// 00591125  51                   push ecx
// 00591126  8bce                 mov ecx, esi
// 00591128  e8d355fdff           call 0x566700
// 0059112d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00591131  68101e8300           push 0x831e10
// 00591136  8d54240c             lea edx, [esp + 0xc]
// 0059113a  52                   push edx
// 0059113b  8bcf                 mov ecx, edi
// 0059113d  e85e0a0400           call 0x5d1ba0
// 00591142  8bc8                 mov ecx, eax
// 00591144  e867500200           call 0x5b61b0
// 00591149  50                   push eax
// 0059114a  8d44241c             lea eax, [esp + 0x1c]
// 0059114e  50                   push eax
// 0059114f  ff15e4238000         call dword ptr [0x8023e4]
// 00591155  83c40c               add esp, 0xc
// 00591158  8b16                 mov edx, dword ptr [esi]
// 0059115a  50                   push eax
// 0059115b  8b4204               mov eax, dword ptr [edx + 4]
// 0059115e  8bce                 mov ecx, esi
// 00591160  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00591165  ffd0                 call eax
// 00591167  8d4c2414             lea ecx, [esp + 0x14]
// 0059116b  c644243800           mov byte ptr [esp + 0x38], 0
// 00591170  ff1568248000         call dword ptr [0x802468]
// 00591176  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059117a  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00591182  85c0                 test eax, eax
// 00591184  742c                 je 0x5911b2
// 00591186  8bf0                 mov esi, eax
// 00591188  83c004               add eax, 4
// 0059118b  83c9ff               or ecx, 0xffffffff
// 0059118e  f00fc108             lock xadd dword ptr [eax], ecx
// 00591192  751e                 jne 0x5911b2
// 00591194  8b16                 mov edx, dword ptr [esi]
// 00591196  8b4204               mov eax, dword ptr [edx + 4]
// 00591199  8bce                 mov ecx, esi
// 0059119b  ffd0                 call eax
// 0059119d  8d4e08               lea ecx, [esi + 8]
// 005911a0  83caff               or edx, 0xffffffff
// 005911a3  f00fc111             lock xadd dword ptr [ecx], edx
// 005911a7  7509                 jne 0x5911b2
// 005911a9  8b06                 mov eax, dword ptr [esi]
// 005911ab  8b5008               mov edx, dword ptr [eax + 8]
// 005911ae  8bce                 mov ecx, esi
// 005911b0  ffd2                 call edx
// 005911b2  5e                   pop esi
// 005911b3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005911b7  5f                   pop edi
// 005911b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005911bf  83c434               add esp, 0x34
// 005911c2  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
typedef void (__thiscall *StringDestructor)(String*);
extern StringDestructor stringDestructor;

struct String {
    unsigned char storage[28];
    ~String();
};

inline String::~String()
{
    stringDestructor(this);
}

typedef String (__cdecl *StringConcat)(const String&, const char*);
extern StringConcat stringConcat;

struct Name {
    const String* value;
    Name();
    const String& text() const;
};

struct Instance {
    unsigned char storage[0x400];
    unsigned char disabled;
    Name name() const;
};

struct ServiceProvider {
    bool contains(const String*);
};

extern ServiceProvider* __cdecl func_00590dd0(Instance*);

struct Product {
    virtual void unused();
    virtual void setName(const String&);
    void attach(ServiceProvider*);
    void configure(const String*);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared;
extern void __cdecl createProduct(Shared*);

struct Shared {
    Product* object;
    Control* control;
    Shared();
    ~Shared();
};

inline Shared::Shared()
{
    createProduct(this);
}

__forceinline Shared::~Shared()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct RootInstance {
    void process(Instance*);
};

void RootInstance::process(Instance* instance)
{
    if (!instance->disabled) {
        ServiceProvider* provider =
            func_00590dd0(reinterpret_cast<Instance*>(this));
        if (!provider->contains(instance->name().value)) {
            Shared product;
            product.object->attach(provider);
            Product* current = product.object;
            current->configure(instance->name().value);
            current = product.object;
            current->setName(
                stringConcat(instance->name().text(), " Team"));
        }
    }
}
