// from server: 75% by colin
// from server: 70% by king_originala
// roc 2008-06 005fe6d0  unit: RBX::Tool  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe6d0
//
// 005fe6d0  6aff                 push -1
// 005fe6d2  64a100000000         mov eax, dword ptr fs:[0]
// 005fe6d8  6839377d00           push 0x7d3739
// 005fe6dd  50                   push eax
// 005fe6de  64892500000000       mov dword ptr fs:[0], esp
// 005fe6e5  83ec64               sub esp, 0x64
// 005fe6e8  53                   push ebx
// 005fe6e9  55                   push ebp
// 005fe6ea  56                   push esi
// 005fe6eb  8bf1                 mov esi, ecx
// 005fe6ed  57                   push edi
// 005fe6ee  8d8e04020000         lea ecx, [esi + 0x204]
// 005fe6f4  e8376bf9ff           call 0x595230
// 005fe6f9  6a04                 push 4
// 005fe6fb  e820220a00           call 0x6a0920
// 005fe700  33c9                 xor ecx, ecx
// 005fe702  83c404               add esp, 4
// 005fe705  3bc1                 cmp eax, ecx
// 005fe707  7408                 je 0x5fe711
// 005fe709  8d542410             lea edx, [esp + 0x10]
// 005fe70d  8910                 mov dword ptr [eax], edx
// 005fe70f  eb02                 jmp 0x5fe713
// 005fe711  33c0                 xor eax, eax
// 005fe713  89442410             mov dword ptr [esp + 0x10], eax
// 005fe717  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005fe71b  894c2420             mov dword ptr [esp + 0x20], ecx
// 005fe71f  894c2424             mov dword ptr [esp + 0x24], ecx
// 005fe723  8d442410             lea eax, [esp + 0x10]
// 005fe727  50                   push eax
// 005fe728  56                   push esi
// 005fe729  c784248400000001000000 mov dword ptr [esp + 0x84], 1
// 005fe734  e807dff9ff           call 0x59c640
// 005fe739  8d4c2418             lea ecx, [esp + 0x18]
// 005fe73d  51                   push ecx
// 005fe73e  e81d050100           call 0x60ec60
// 005fe743  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 005fe749  50                   push eax
// 005fe74a  e8d1b2fdff           call 0x5d9a20
// 005fe74f  8be8                 mov ebp, eax
// 005fe751  83c410               add esp, 0x10
// 005fe754  8bcd                 mov ecx, ebp
// 005fe756  e8b5a7fdff           call 0x5d8f10
// 005fe75b  8bce                 mov ecx, esi
// 005fe75d  8bd8                 mov ebx, eax
// 005fe75f  e83c21fbff           call 0x5b08a0
// 005fe764  8bf8                 mov edi, eax
// 005fe766  85ff                 test edi, edi
// 005fe768  7409                 je 0x5fe773
// 005fe76a  6a00                 push 0
// 005fe76c  8bcf                 mov ecx, edi
// 005fe76e  e80df6f9ff           call 0x59dd80
// 005fe773  68c4d58300           push 0x83d5c4
// 005fe778  8d4c242c             lea ecx, [esp + 0x2c]
// 005fe77c  ff1558248000         call dword ptr [0x802458]
// 005fe782  8d542428             lea edx, [esp + 0x28]
// 005fe786  52                   push edx
// 005fe787  8d86cc010000         lea eax, [esi + 0x1cc]
// 005fe78d  50                   push eax
// 005fe78e  8d4c244c             lea ecx, [esp + 0x4c]
// 005fe792  51                   push ecx
// 005fe793  8bcd                 mov ecx, ebp
// 005fe795  c684248800000002     mov byte ptr [esp + 0x88], 2
// 005fe79d  e88e92fdff           call 0x5d7a30
// 005fe7a2  50                   push eax
// 005fe7a3  57                   push edi
// 005fe7a4  53                   push ebx
// 005fe7a5  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 005fe7ab  e820a80200           call 0x628fd0
// 005fe7b0  8d4c2428             lea ecx, [esp + 0x28]
// 005fe7b4  c644247c01           mov byte ptr [esp + 0x7c], 1
// 005fe7b9  ff1568248000         call dword ptr [0x802468]
// 005fe7bf  8d4c2410             lea ecx, [esp + 0x10]
// 005fe7c3  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005fe7cb  e8801df9ff           call 0x590550
// 005fe7d0  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005fe7d4  5f                   pop edi
// 005fe7d5  5e                   pop esi
// 005fe7d6  5d                   pop ebp
// 005fe7d7  5b                   pop ebx
// 005fe7d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe7df  83c470               add esp, 0x70
// 005fe7e2  c3                   ret 

typedef unsigned int size_t;
void* __cdecl operator new(size_t);

struct Collection;

struct Allocator {
    ~Allocator();
};

struct Owner {
    Collection** pointer;
    ~Owner();
};

struct __declspec(dllimport) Collection : Allocator {
    Owner owner;
    char reserved[8];
    void* first;
    void* last;
    void* end;

    Collection();
    ~Collection();
};

struct String;
typedef void (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);
extern StringConstructor constructString;
extern StringDestructor destroyString;

struct String {
    char storage[28];
    String(const char* p) { constructString(this, p); }
    ~String() { destroyString(this); }
};

struct Transform {
    float data[12];
};

struct Connection {
    char storage[4];
    void disconnect();
};

struct Part {
    void setParent(void*);
};

struct Context {
    void* getState();
    Transform getTransform(const Transform*, const String*);
};

struct Grip {
    char storage[4];
    void update(void*, Part*, const Transform&);
};

struct Tool {
    char padding0[0x104];
    void* parent;
    char padding1[0x98];
    Grip grip;
    char padding2[0x28];
    Transform transform;
    char padding3[8];
    Connection connection;

    Part* getPart();
    void updateGrip();
};

extern "C" void __cdecl collect(Tool*, Collection*);
extern "C" void __cdecl prepare(Collection*);
extern "C" Context* __cdecl getContext(void*);

void Tool::updateGrip()
{
    connection.disconnect();
    Collection objects;
    collect(this, &objects);
    prepare(&objects);
    Context* context = getContext(parent);
    void* state = context->getState();
    Part* part = getPart();
    if (part)
        part->setParent(0);
    String name("RightGrip");
    grip.update(state, part, context->getTransform(&transform, &name));
}
