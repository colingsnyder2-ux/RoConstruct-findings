// from server: 75% by colin
// from server: 70% by king_originala
// roc 2008-06 005b1830  unit: RBX::VHat::?$FactoryProduct  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1830
//
// 005b1830  6aff                 push -1
// 005b1832  64a100000000         mov eax, dword ptr fs:[0]
// 005b1838  6839377d00           push 0x7d3739
// 005b183d  50                   push eax
// 005b183e  64892500000000       mov dword ptr fs:[0], esp
// 005b1845  83ec64               sub esp, 0x64
// 005b1848  53                   push ebx
// 005b1849  55                   push ebp
// 005b184a  56                   push esi
// 005b184b  8bf1                 mov esi, ecx
// 005b184d  57                   push edi
// 005b184e  8d8e88010000         lea ecx, [esi + 0x188]
// 005b1854  e8d739feff           call 0x595230
// 005b1859  6a04                 push 4
// 005b185b  e8c0f00e00           call 0x6a0920
// 005b1860  33c9                 xor ecx, ecx
// 005b1862  83c404               add esp, 4
// 005b1865  3bc1                 cmp eax, ecx
// 005b1867  7408                 je 0x5b1871
// 005b1869  8d542410             lea edx, [esp + 0x10]
// 005b186d  8910                 mov dword ptr [eax], edx
// 005b186f  eb02                 jmp 0x5b1873
// 005b1871  33c0                 xor eax, eax
// 005b1873  89442410             mov dword ptr [esp + 0x10], eax
// 005b1877  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005b187b  894c2420             mov dword ptr [esp + 0x20], ecx
// 005b187f  894c2424             mov dword ptr [esp + 0x24], ecx
// 005b1883  8d442410             lea eax, [esp + 0x10]
// 005b1887  50                   push eax
// 005b1888  56                   push esi
// 005b1889  c784248400000001000000 mov dword ptr [esp + 0x84], 1
// 005b1894  e8a7adfeff           call 0x59c640
// 005b1899  8d4c2418             lea ecx, [esp + 0x18]
// 005b189d  51                   push ecx
// 005b189e  e8bdd30500           call 0x60ec60
// 005b18a3  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 005b18a9  50                   push eax
// 005b18aa  e871810200           call 0x5d9a20
// 005b18af  8be8                 mov ebp, eax
// 005b18b1  83c410               add esp, 0x10
// 005b18b4  8bcd                 mov ecx, ebp
// 005b18b6  e855710200           call 0x5d8a10
// 005b18bb  8bce                 mov ecx, esi
// 005b18bd  8bd8                 mov ebx, eax
// 005b18bf  e8dcefffff           call 0x5b08a0
// 005b18c4  8bf8                 mov edi, eax
// 005b18c6  85ff                 test edi, edi
// 005b18c8  7409                 je 0x5b18d3
// 005b18ca  6a00                 push 0
// 005b18cc  8bcf                 mov ecx, edi
// 005b18ce  e8adc4feff           call 0x59dd80
// 005b18d3  68444d8300           push 0x834d44
// 005b18d8  8d4c242c             lea ecx, [esp + 0x2c]
// 005b18dc  ff1558248000         call dword ptr [0x802458]
// 005b18e2  8d542428             lea edx, [esp + 0x28]
// 005b18e6  52                   push edx
// 005b18e7  8d8658010000         lea eax, [esi + 0x158]
// 005b18ed  50                   push eax
// 005b18ee  8d4c244c             lea ecx, [esp + 0x4c]
// 005b18f2  51                   push ecx
// 005b18f3  8bcd                 mov ecx, ebp
// 005b18f5  c684248800000002     mov byte ptr [esp + 0x88], 2
// 005b18fd  e89e5d0200           call 0x5d76a0
// 005b1902  50                   push eax
// 005b1903  57                   push edi
// 005b1904  53                   push ebx
// 005b1905  8d8e30010000         lea ecx, [esi + 0x130]
// 005b190b  e8c0760700           call 0x628fd0
// 005b1910  8d4c2428             lea ecx, [esp + 0x28]
// 005b1914  c644247c01           mov byte ptr [esp + 0x7c], 1
// 005b1919  ff1568248000         call dword ptr [0x802468]
// 005b191f  8d4c2410             lea ecx, [esp + 0x10]
// 005b1923  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005b192b  e820ecfdff           call 0x590550
// 005b1930  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005b1934  5f                   pop edi
// 005b1935  5e                   pop esi
// 005b1936  5d                   pop ebp
// 005b1937  5b                   pop ebx
// 005b1938  64890d00000000       mov dword ptr fs:[0], ecx
// 005b193f  83c470               add esp, 0x70
// 005b1942  c3                   ret 

typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct String;
typedef String* (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);
extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstructor(this, text);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Root;

struct Proxy {
    Root* owner;
    Proxy(Root*);
};

inline Proxy::Proxy(Root* p) : owner(p)
{
}

struct Storage {
    unsigned int unused;
    unsigned int first;
    unsigned int last;
    unsigned int count;

    Storage();
    ~Storage();
};

inline Storage::Storage() : first(0), last(0), count(0)
{
}

struct __declspec(dllimport) Root {
    Proxy* proxy;
    unsigned int unused;
    Storage storage;

    Root();
    ~Root();
};

struct Transform {
    float data[12];
};

struct Argument {
    char data[48];
};

struct Part {
    void detach(int);
};

struct Context {
    void* get();
    Transform calculate(const Argument&, const String&);
};

struct Receiver {
    char data[40];
    void assign(void*, Part*, const Transform&);
};

struct Resettable {
    void reset();
};

struct S {
    char padding0[0x104];
    void* context;
    char padding1[0x28];
    Receiver receiver;
    Argument argument;
    Resettable resettable;

    Part* getPart();
    void f();
};

void __cdecl initialize(S*, Root*);
void __cdecl finish(void*);
Context* __cdecl getContext(void*);

void S::f()
{
    resettable.reset();
    Root root;
    initialize(this, &root);
    finish(&root.storage);

    Context* c = getContext(context);
    void* value = c->get();
    Part* part = getPart();
    if (part)
        part->detach(0);

    String name("HeadWeld");
    receiver.assign(value, part, c->calculate(argument, name));
}
