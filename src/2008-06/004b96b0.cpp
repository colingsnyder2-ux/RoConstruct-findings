// from server: 100% by colin
// roc 2008-06 004b96b0  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b96b0
//
// 004b96b0  6aff                 push -1
// 004b96b2  683c8f7c00           push 0x7c8f3c
// 004b96b7  64a100000000         mov eax, dword ptr fs:[0]
// 004b96bd  50                   push eax
// 004b96be  64892500000000       mov dword ptr fs:[0], esp
// 004b96c5  83ec08               sub esp, 8
// 004b96c8  53                   push ebx
// 004b96c9  55                   push ebp
// 004b96ca  56                   push esi
// 004b96cb  8bf1                 mov esi, ecx
// 004b96cd  8dae742b0000         lea ebp, [esi + 0x2b74]
// 004b96d3  8974240c             mov dword ptr [esp + 0xc], esi
// 004b96d7  c706fc548200         mov dword ptr [esi], 0x8254fc
// 004b96dd  c74610f0548200       mov dword ptr [esi + 0x10], 0x8254f0
// 004b96e4  c74614e8548200       mov dword ptr [esi + 0x14], 0x8254e8
// 004b96eb  c74620e0548200       mov dword ptr [esi + 0x20], 0x8254e0
// 004b96f2  c74624d0548200       mov dword ptr [esi + 0x24], 0x8254d0
// 004b96f9  c74644c0548200       mov dword ptr [esi + 0x44], 0x8254c0
// 004b9700  c74664b0548200       mov dword ptr [esi + 0x64], 0x8254b0
// 004b9707  c78684000000a0548200 mov dword ptr [esi + 0x84], 0x8254a0
// 004b9711  c786a400000090548200 mov dword ptr [esi + 0xa4], 0x825490
// 004b971b  c786c400000080548200 mov dword ptr [esi + 0xc4], 0x825480
// 004b9725  c7450050548200       mov dword ptr [ebp], 0x825450
// 004b972c  8b8e502d0000         mov ecx, dword ptr [esi + 0x2d50]
// 004b9732  33db                 xor ebx, ebx
// 004b9734  c744241c1a000000     mov dword ptr [esp + 0x1c], 0x1a
// 004b973c  3bcb                 cmp ecx, ebx
// 004b973e  740b                 je 0x4b974b
// 004b9740  8b01                 mov eax, dword ptr [ecx]
// 004b9742  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 004b9748  55                   push ebp
// 004b9749  ffd2                 call edx
// 004b974b  8b8e482d0000         mov ecx, dword ptr [esi + 0x2d48]
// 004b9751  c644241c19           mov byte ptr [esp + 0x1c], 0x19
// 004b9756  3bcb                 cmp ecx, ebx
// 004b9758  7408                 je 0x4b9762
// 004b975a  8b01                 mov eax, dword ptr [ecx]
// 004b975c  8b10                 mov edx, dword ptr [eax]
// 004b975e  6a01                 push 1
// 004b9760  ffd2                 call edx
// 004b9762  8b8e442d0000         mov ecx, dword ptr [esi + 0x2d44]
// 004b9768  c644241c18           mov byte ptr [esp + 0x1c], 0x18
// 004b976d  3bcb                 cmp ecx, ebx
// 004b976f  7408                 je 0x4b9779
// 004b9771  8b01                 mov eax, dword ptr [ecx]
// 004b9773  8b10                 mov edx, dword ptr [eax]
// 004b9775  6a01                 push 1
// 004b9777  ffd2                 call edx
// 004b9779  8b8e402d0000         mov ecx, dword ptr [esi + 0x2d40]
// 004b977f  c644241c17           mov byte ptr [esp + 0x1c], 0x17
// 004b9784  3bcb                 cmp ecx, ebx
// 004b9786  7408                 je 0x4b9790
// 004b9788  8b01                 mov eax, dword ptr [ecx]
// 004b978a  8b10                 mov edx, dword ptr [eax]
// 004b978c  6a01                 push 1
// 004b978e  ffd2                 call edx
// 004b9790  8b8e3c2d0000         mov ecx, dword ptr [esi + 0x2d3c]
// 004b9796  c644241c16           mov byte ptr [esp + 0x1c], 0x16
// 004b979b  3bcb                 cmp ecx, ebx
// 004b979d  7408                 je 0x4b97a7
// 004b979f  8b01                 mov eax, dword ptr [ecx]
// 004b97a1  8b10                 mov edx, dword ptr [eax]
// 004b97a3  6a01                 push 1
// 004b97a5  ffd2                 call edx
// 004b97a7  8b8e382d0000         mov ecx, dword ptr [esi + 0x2d38]
// 004b97ad  c644241c15           mov byte ptr [esp + 0x1c], 0x15
// 004b97b2  3bcb                 cmp ecx, ebx
// 004b97b4  7408                 je 0x4b97be
// 004b97b6  8b01                 mov eax, dword ptr [ecx]
// 004b97b8  8b10                 mov edx, dword ptr [eax]
// 004b97ba  6a01                 push 1
// 004b97bc  ffd2                 call edx
// 004b97be  8b8e342d0000         mov ecx, dword ptr [esi + 0x2d34]
// 004b97c4  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 004b97c9  3bcb                 cmp ecx, ebx
// 004b97cb  7408                 je 0x4b97d5
// 004b97cd  8b01                 mov eax, dword ptr [ecx]
// 004b97cf  8b10                 mov edx, dword ptr [eax]
// 004b97d1  6a01                 push 1
// 004b97d3  ffd2                 call edx
// 004b97d5  8b8e302d0000         mov ecx, dword ptr [esi + 0x2d30]
// 004b97db  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 004b97e0  3bcb                 cmp ecx, ebx
// 004b97e2  7408                 je 0x4b97ec
// 004b97e4  8b01                 mov eax, dword ptr [ecx]
// 004b97e6  8b10                 mov edx, dword ptr [eax]
// 004b97e8  6a01                 push 1
// 004b97ea  ffd2                 call edx
// 004b97ec  8b8e2c2d0000         mov ecx, dword ptr [esi + 0x2d2c]
// 004b97f2  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 004b97f7  3bcb                 cmp ecx, ebx
// 004b97f9  7408                 je 0x4b9803
// 004b97fb  8b01                 mov eax, dword ptr [ecx]
// 004b97fd  8b10                 mov edx, dword ptr [eax]
// 004b97ff  6a01                 push 1
// 004b9801  ffd2                 call edx
// 004b9803  8b8e282d0000         mov ecx, dword ptr [esi + 0x2d28]
// 004b9809  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 004b980e  3bcb                 cmp ecx, ebx
// 004b9810  7408                 je 0x4b981a
// 004b9812  8b01                 mov eax, dword ptr [ecx]
// 004b9814  8b10                 mov edx, dword ptr [eax]
// 004b9816  6a01                 push 1
// 004b9818  ffd2                 call edx
// 004b981a  8b8e242d0000         mov ecx, dword ptr [esi + 0x2d24]
// 004b9820  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 004b9825  3bcb                 cmp ecx, ebx
// 004b9827  7408                 je 0x4b9831
// 004b9829  8b01                 mov eax, dword ptr [ecx]
// 004b982b  8b10                 mov edx, dword ptr [eax]
// 004b982d  6a01                 push 1
// 004b982f  ffd2                 call edx
// 004b9831  8b8e202d0000         mov ecx, dword ptr [esi + 0x2d20]
// 004b9837  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 004b983c  3bcb                 cmp ecx, ebx
// 004b983e  7408                 je 0x4b9848
// 004b9840  8b01                 mov eax, dword ptr [ecx]
// 004b9842  8b10                 mov edx, dword ptr [eax]
// 004b9844  6a01                 push 1
// 004b9846  ffd2                 call edx
// 004b9848  8b8e1c2d0000         mov ecx, dword ptr [esi + 0x2d1c]
// 004b984e  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 004b9853  3bcb                 cmp ecx, ebx
// 004b9855  7408                 je 0x4b985f
// 004b9857  8b01                 mov eax, dword ptr [ecx]
// 004b9859  8b10                 mov edx, dword ptr [eax]
// 004b985b  6a01                 push 1
// 004b985d  ffd2                 call edx
// 004b985f  57                   push edi
// 004b9860  8d8efc2c0000         lea ecx, [esi + 0x2cfc]
// 004b9866  c64424200d           mov byte ptr [esp + 0x20], 0xd
// 004b986b  e8307effff           call 0x4b16a0
// 004b9870  8dbedc2c0000         lea edi, [esi + 0x2cdc]
// 004b9876  897c2414             mov dword ptr [esp + 0x14], edi
// 004b987a  8bcf                 mov ecx, edi
// 004b987c  c64424201b           mov byte ptr [esp + 0x20], 0x1b
// 004b9881  e82a59ffff           call 0x4af1b0
// 004b9886  8b3f                 mov edi, dword ptr [edi]
// 004b9888  57                   push edi
// 004b9889  e8ec6d1e00           call 0x6a067a
// 004b988e  83c404               add esp, 4
// 004b9891  8d8eb02c0000         lea ecx, [esi + 0x2cb0]
// 004b9897  c64424200b           mov byte ptr [esp + 0x20], 0xb
// 004b989c  e88f191900           call 0x64b230
// 004b98a1  8d8e902c0000         lea ecx, [esi + 0x2c90]
// 004b98a7  c64424200a           mov byte ptr [esp + 0x20], 0xa
// 004b98ac  e87f191900           call 0x64b230
// 004b98b1  8d8e742c0000         lea ecx, [esi + 0x2c74]
// 004b98b7  c644242009           mov byte ptr [esp + 0x20], 9
// 004b98bc  e8bf71ffff           call 0x4b0a80
// 004b98c1  8b86642c0000         mov eax, dword ptr [esi + 0x2c64]
// 004b98c7  3bc3                 cmp eax, ebx
// 004b98c9  7409                 je 0x4b98d4
// 004b98cb  50                   push eax
// 004b98cc  e8a96d1e00           call 0x6a067a
// 004b98d1  83c404               add esp, 4
// 004b98d4  8b86582c0000         mov eax, dword ptr [esi + 0x2c58]
// 004b98da  50                   push eax
// 004b98db  899e642c0000         mov dword ptr [esi + 0x2c64], ebx
// 004b98e1  899e682c0000         mov dword ptr [esi + 0x2c68], ebx
// 004b98e7  899e6c2c0000         mov dword ptr [esi + 0x2c6c], ebx
// 004b98ed  e8886d1e00           call 0x6a067a
// 004b98f2  83c404               add esp, 4
// 004b98f5  8d8e382c0000         lea ecx, [esi + 0x2c38]
// 004b98fb  c644242007           mov byte ptr [esp + 0x20], 7
// 004b9900  e8bb7bffff           call 0x4b14c0
// 004b9905  8b86242c0000         mov eax, dword ptr [esi + 0x2c24]
// 004b990b  8dbef42b0000         lea edi, [esi + 0x2bf4]
// 004b9911  c644242006           mov byte ptr [esp + 0x20], 6
// 004b9916  3bc3                 cmp eax, ebx
// 004b9918  7409                 je 0x4b9923
// 004b991a  50                   push eax
// 004b991b  e85a6d1e00           call 0x6a067a
// 004b9920  83c404               add esp, 4
// 004b9923  8b4724               mov eax, dword ptr [edi + 0x24]
// 004b9926  50                   push eax
// 004b9927  895f30               mov dword ptr [edi + 0x30], ebx
// 004b992a  895f34               mov dword ptr [edi + 0x34], ebx
// 004b992d  895f38               mov dword ptr [edi + 0x38], ebx
// 004b9930  e8456d1e00           call 0x6a067a
// 004b9935  83c404               add esp, 4
// 004b9938  8bcf                 mov ecx, edi
// 004b993a  e841a40900           call 0x553d80
// 004b993f  8b86e02b0000         mov eax, dword ptr [esi + 0x2be0]
// 004b9945  8dbeb02b0000         lea edi, [esi + 0x2bb0]
// 004b994b  c644242005           mov byte ptr [esp + 0x20], 5
// 004b9950  3bc3                 cmp eax, ebx
// 004b9952  7409                 je 0x4b995d
// 004b9954  50                   push eax
// 004b9955  e8206d1e00           call 0x6a067a
// 004b995a  83c404               add esp, 4
// 004b995d  8b4724               mov eax, dword ptr [edi + 0x24]
// 004b9960  50                   push eax
// 004b9961  895f30               mov dword ptr [edi + 0x30], ebx
// 004b9964  895f34               mov dword ptr [edi + 0x34], ebx
// 004b9967  895f38               mov dword ptr [edi + 0x38], ebx
// 004b996a  e80b6d1e00           call 0x6a067a
// 004b996f  83c404               add esp, 4
// 004b9972  8bcf                 mov ecx, edi
// 004b9974  e807a40900           call 0x553d80
// 004b9979  8d8e902b0000         lea ecx, [esi + 0x2b90]
// 004b997f  c644242004           mov byte ptr [esp + 0x20], 4
// 004b9984  e8177dffff           call 0x4b16a0
// 004b9989  8bbe8c2b0000         mov edi, dword ptr [esi + 0x2b8c]
// 004b998f  c644242003           mov byte ptr [esp + 0x20], 3
// 004b9994  3bfb                 cmp edi, ebx
// 004b9996  742a                 je 0x4b99c2
// 004b9998  8d4704               lea eax, [edi + 4]
// 004b999b  83c9ff               or ecx, 0xffffffff
// 004b999e  f00fc108             lock xadd dword ptr [eax], ecx
// 004b99a2  751e                 jne 0x4b99c2
// 004b99a4  8b17                 mov edx, dword ptr [edi]
// 004b99a6  8b4204               mov eax, dword ptr [edx + 4]
// 004b99a9  8bcf                 mov ecx, edi
// 004b99ab  ffd0                 call eax
// 004b99ad  8d4f08               lea ecx, [edi + 8]
// 004b99b0  83caff               or edx, 0xffffffff
// 004b99b3  f00fc111             lock xadd dword ptr [ecx], edx
// 004b99b7  7509                 jne 0x4b99c2
// 004b99b9  8b07                 mov eax, dword ptr [edi]
// 004b99bb  8b5008               mov edx, dword ptr [eax + 8]
// 004b99be  8bcf                 mov ecx, edi
// 004b99c0  ffd2                 call edx
// 004b99c2  8b8e842b0000         mov ecx, dword ptr [esi + 0x2b84]
// 004b99c8  c644242002           mov byte ptr [esp + 0x20], 2
// 004b99cd  5f                   pop edi
// 004b99ce  3bcb                 cmp ecx, ebx
// 004b99d0  7408                 je 0x4b99da
// 004b99d2  8b01                 mov eax, dword ptr [ecx]
// 004b99d4  8b10                 mov edx, dword ptr [eax]
// 004b99d6  6a01                 push 1
// 004b99d8  ffd2                 call edx
// 004b99da  8b8e802b0000         mov ecx, dword ptr [esi + 0x2b80]
// 004b99e0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004b99e5  3bcb                 cmp ecx, ebx
// 004b99e7  7408                 je 0x4b99f1
// 004b99e9  8b01                 mov eax, dword ptr [ecx]
// 004b99eb  8b10                 mov edx, dword ptr [eax]
// 004b99ed  6a01                 push 1
// 004b99ef  ffd2                 call edx
// 004b99f1  8bcd                 mov ecx, ebp
// 004b99f3  885c241c             mov byte ptr [esp + 0x1c], bl
// 004b99f7  e84453feff           call 0x49ed40
// 004b99fc  8bce                 mov ecx, esi
// 004b99fe  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b9a06  e835faffff           call 0x4b9440
// 004b9a0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b9a0f  5e                   pop esi
// 004b9a10  5d                   pop ebp
// 004b9a11  5b                   pop ebx
// 004b9a12  64890d00000000       mov dword ptr fs:[0], ecx
// 004b9a19  83c414               add esp, 0x14
// 004b9a1c  c3                   ret 

// from server: 91% by king_originala
// roc 2008-06 004b96b0  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b96b0
//

#include <intrin.h>

void __cdecl operator delete(void*) throw();

struct Object {
    virtual ~Object();
};

struct Owner {
    Object* p;
    ~Owner();
};

__forceinline Owner::~Owner()
{
    if (p) delete p;
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* p;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0) {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct I00 { virtual void f00(); unsigned char data[0xc]; };
struct I10 { virtual void f10(); };
struct I14 { virtual void f14(); unsigned char data[0x8]; };
struct I20 { virtual void f20(); };
struct I24 { virtual void f24(); unsigned char data[0x1c]; };
struct I44 { virtual void f44(); unsigned char data[0x1c]; };
struct I64 { virtual void f64(); unsigned char data[0x1c]; };
struct I84 { virtual void f84(); unsigned char data[0x1c]; };
struct Ia4 { virtual void fa4(); unsigned char data[0x1c]; };
struct Ic4 { virtual void fc4(); unsigned char data[0x2b74 - 0xc8]; };

struct Base : I00, I10, I14, I20, I24, I44, I64, I84, Ia4, Ic4 {
    ~Base();
};

struct Sub {
    virtual void f0();
    char data[8];
    ~Sub();
};

struct Container32 {
    char data[32];
    ~Container32();
};

struct Container44 {
    char data[44];
    ~Container44();
};

struct Container28 {
    char data[28];
    ~Container28();
};

struct Other32 {
    char data[32];
    ~Other32();
};

struct Head {
    void* p;
    ~Head();
};

__forceinline Head::~Head()
{
    void* d = p;
    operator delete(d);
}

struct Tree {
    Head head;
    char data[28];
    void clear();
    ~Tree();
};

__forceinline Tree::~Tree()
{
    clear();
}

struct Buffer {
    void* storage;
    unsigned long a;
    unsigned long b;
    void* first;
    void* last;
    void* limit;
    unsigned long c;
    ~Buffer();
};

__forceinline Buffer::~Buffer()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    void* st = storage;
    operator delete(st);
}

struct ContainerBase {
    char data[36];
    ~ContainerBase();
};

struct LargeContainer : ContainerBase {
    void* storage;
    unsigned long a;
    unsigned long b;
    void* first;
    void* last;
    void* limit;
    char tail[8];
    ~LargeContainer();
};

__forceinline LargeContainer::~LargeContainer()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    void* st = storage;
    operator delete(st);
}

struct Callback {
    typedef void (__thiscall *Function)(Callback*, Sub*);
    Function* table;
};

struct S : Base, Sub {
    Owner owner2b80;
    Owner owner2b84;
    Shared shared;
    Container32 container2b90;
    LargeContainer container2bb0;
    LargeContainer container2bf4;
    Other32 container2c38;
    Buffer buffer2c58;
    Container28 container2c74;
    Container32 container2c90;
    Container44 container2cb0;
    Tree tree2cdc;
    Container32 container2cfc;
    Owner owner2d1c;
    Owner owner2d20;
    Owner owner2d24;
    Owner owner2d28;
    Owner owner2d2c;
    Owner owner2d30;
    Owner owner2d34;
    Owner owner2d38;
    Owner owner2d3c;
    Owner owner2d40;
    Owner owner2d44;
    Owner owner2d48;
    unsigned long padding2d4c;
    Callback* volatile callback;
    ~S();
};

S::~S()
{
    Sub* s = this;
    Callback* c = callback;
    if (c)
        c->table[59](c, s);
}
