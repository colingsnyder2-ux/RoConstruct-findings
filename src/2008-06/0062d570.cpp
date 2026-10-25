// from server: 100% by king_originala
// roc 2008-06 0062d570  unit: RBX::ForceField  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d570
//
// 0062d570  53                   push ebx
// 0062d571  56                   push esi
// 0062d572  8bf1                 mov esi, ecx
// 0062d574  807e1000             cmp byte ptr [esi + 0x10], 0
// 0062d578  57                   push edi
// 0062d579  8b7ed4               mov edi, dword ptr [esi - 0x2c]
// 0062d57c  7467                 je 0x62d5e5
// 0062d57e  6a00                 push 0
// 0062d580  68b8819400           push 0x9481b8
// 0062d585  687c909200           push 0x92907c
// 0062d58a  6a00                 push 0
// 0062d58c  57                   push edi
// 0062d58d  e834420700           call 0x6a17c6
// 0062d592  83c414               add esp, 0x14
// 0062d595  85c0                 test eax, eax
// 0062d597  754c                 jne 0x62d5e5
// 0062d599  8b4614               mov eax, dword ptr [esi + 0x14]
// 0062d59c  40                   inc eax
// 0062d59d  99                   cdq 
// 0062d59e  b91e000000           mov ecx, 0x1e
// 0062d5a3  f7f9                 idiv ecx
// 0062d5a5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0062d5a9  83ec0c               sub esp, 0xc
// 0062d5ac  8bc4                 mov eax, esp
// 0062d5ae  b900d26200           mov ecx, 0x62d200
// 0062d5b3  8908                 mov dword ptr [eax], ecx
// 0062d5b5  895804               mov dword ptr [eax + 4], ebx
// 0062d5b8  8bcf                 mov ecx, edi
// 0062d5ba  895614               mov dword ptr [esi + 0x14], edx
// 0062d5bd  895008               mov dword ptr [eax + 8], edx
// 0062d5c0  e83bfeffff           call 0x62d400
// 0062d5c5  8b5614               mov edx, dword ptr [esi + 0x14]
// 0062d5c8  52                   push edx
// 0062d5c9  53                   push ebx
// 0062d5ca  83ec08               sub esp, 8
// 0062d5cd  8bc4                 mov eax, esp
// 0062d5cf  89642420             mov dword ptr [esp + 0x20], esp
// 0062d5d3  57                   push edi
// 0062d5d4  50                   push eax
// 0062d5d5  e866b4feff           call 0x618a40
// 0062d5da  83c408               add esp, 8
// 0062d5dd  e81efcffff           call 0x62d200
// 0062d5e2  83c410               add esp, 0x10
// 0062d5e5  5f                   pop edi
// 0062d5e6  c6461001             mov byte ptr [esi + 0x10], 1
// 0062d5ea  5e                   pop esi
// 0062d5eb  5b                   pop ebx
// 0062d5ec  c20400               ret 4

struct Owner;

struct Pair {
    void* object;
    void* control;
    Pair();
    Pair(const Pair&);
    ~Pair();
};

inline Pair::~Pair()
{
}

extern "C" void* __cdecl runtimeCast(
    void*, int, const void*, const void*, int);

Pair __cdecl makePair(Owner*);
void __cdecl update(Pair, int, int);

struct Callback {
    void (__cdecl* function)(Pair, int, int);
    int argument;
    int frame;
};

struct Owner {
    void apply(Callback);
};

struct ForceField {
    char padding[16];
    unsigned char initialized;
    char alignment[3];
    int frame;

    void step(int argument);
};

void ForceField::step(int argument)
{
    Owner* owner = reinterpret_cast<Owner**>(this)[-11];

    if (initialized &&
        !runtimeCast(owner, 0,
                     reinterpret_cast<const void*>(0x92907C),
                     reinterpret_cast<const void*>(0x9481B8), 0))
    {
        frame = (frame + 1) % 30;

        Callback callback;
        callback.function = update;
        callback.argument = argument;
        callback.frame = frame;
        owner->apply(callback);

        update(makePair(owner), argument, frame);
    }

    initialized = 1;
}
