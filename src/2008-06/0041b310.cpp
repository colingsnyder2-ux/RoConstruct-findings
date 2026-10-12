// from server: 94% by king_originala
// roc 2008-06 0041b310  unit: Marshaller  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b310
//
// 0041b310  6aff                 push -1
// 0041b312  683ee07b00           push 0x7be03e
// 0041b317  64a100000000         mov eax, dword ptr fs:[0]
// 0041b31d  50                   push eax
// 0041b31e  64892500000000       mov dword ptr fs:[0], esp
// 0041b325  51                   push ecx
// 0041b326  a1c42d8000           mov eax, dword ptr [0x802dc4]
// 0041b32b  53                   push ebx
// 0041b32c  33db                 xor ebx, ebx
// 0041b32e  56                   push esi
// 0041b32f  8bf1                 mov esi, ecx
// 0041b331  895e04               mov dword ptr [esi + 4], ebx
// 0041b334  895e14               mov dword ptr [esi + 0x14], ebx
// 0041b337  57                   push edi
// 0041b338  8974240c             mov dword ptr [esp + 0xc], esi
// 0041b33c  895e18               mov dword ptr [esi + 0x18], ebx
// 0041b33f  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0041b342  894620               mov dword ptr [esi + 0x20], eax
// 0041b345  6a04                 push 4
// 0041b347  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0041b34b  c706ccec8000         mov dword ptr [esi], 0x80eccc
// 0041b351  895e24               mov dword ptr [esi + 0x24], ebx
// 0041b354  8d7e2c               lea edi, [esi + 0x2c]
// 0041b357  e8c4552800           call 0x6a0920
// 0041b35c  83c404               add esp, 4
// 0041b35f  3bc3                 cmp eax, ebx
// 0041b361  7404                 je 0x41b367
// 0041b363  8938                 mov dword ptr [eax], edi
// 0041b365  eb02                 jmp 0x41b369
// 0041b367  33c0                 xor eax, eax
// 0041b369  8907                 mov dword ptr [edi], eax
// 0041b36b  895f10               mov dword ptr [edi + 0x10], ebx
// 0041b36e  895f14               mov dword ptr [edi + 0x14], ebx
// 0041b371  895f18               mov dword ptr [edi + 0x18], ebx
// 0041b374  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0041b377  8d4e4c               lea ecx, [esi + 0x4c]
// 0041b37a  c644241801           mov byte ptr [esp + 0x18], 1
// 0041b37f  e80c991700           call 0x594c90
// 0041b384  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041b388  53                   push ebx
// 0041b389  51                   push ecx
// 0041b38a  8bc4                 mov eax, esp
// 0041b38c  89642428             mov dword ptr [esp + 0x28], esp
// 0041b390  53                   push ebx
// 0041b391  6800000080           push 0x80000000
// 0041b396  53                   push ebx
// 0041b397  51                   push ecx
// 0041b398  894e28               mov dword ptr [esi + 0x28], ecx
// 0041b39b  8918                 mov dword ptr [eax], ebx
// 0041b39d  8bc4                 mov eax, esp
// 0041b39f  89642438             mov dword ptr [esp + 0x38], esp
// 0041b3a3  53                   push ebx
// 0041b3a4  8bce                 mov ecx, esi
// 0041b3a6  c644243402           mov byte ptr [esp + 0x34], 2
// 0041b3ab  8918                 mov dword ptr [eax], ebx
// 0041b3ad  e88ee6ffff           call 0x419a40
// 0041b3b2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041b3b6  5f                   pop edi
// 0041b3b7  8bc6                 mov eax, esi
// 0041b3b9  5e                   pop esi
// 0041b3ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0041b3c1  5b                   pop ebx
// 0041b3c2  83c410               add esp, 0x10
// 0041b3c5  c20400               ret 4

void* __cdecl operator new(unsigned int);

extern unsigned long defaultProcedure;

struct WindowBase {
    unsigned long handle;
    unsigned long reserved[3];
    unsigned long message;
    unsigned long state;
    unsigned long flags;
    unsigned long procedure;

    WindowBase(unsigned long proc)
        : handle(0), message(0), state(0), flags(0), procedure(proc) {}
    virtual ~WindowBase();
};

struct Entries {
    Entries** owner;
    unsigned long reserved[3];
    unsigned long first;
    unsigned long last;
    unsigned long capacity;
    unsigned long count;

    Entries()
        : owner(new Entries*(this)),
          first(0), last(0), capacity(0), count(0) {}
    ~Entries();
};

struct Thunk {
    unsigned long data;
    unsigned char initialized;

    Thunk();
    ~Thunk();
};

struct RectArgument {
    void* value;
    RectArgument(void* p) : value(p) {}
    RectArgument(const RectArgument& p) : value(p.value) {}
    ~RectArgument() {}
};

struct MenuArgument {
    void* value;
    MenuArgument(void* p) : value(p) {}
    MenuArgument(const MenuArgument& p) : value(p.value) {}
    ~MenuArgument() {}
};

struct Marshaller : WindowBase {
    unsigned long userData;
    unsigned long parent;
    Entries entries;
    Thunk thunk;

    Marshaller(unsigned long p);
    virtual ~Marshaller();
    unsigned long Create(unsigned long, RectArgument, const char*,
                         unsigned long, unsigned long, MenuArgument, void*);
};

Marshaller::Marshaller(unsigned long p)
    : WindowBase(defaultProcedure), userData(0), entries(), thunk()
{
    parent = p;
    Create(0, RectArgument(0), 0, 0x80000000UL, 0, MenuArgument(0), 0);
}
