// from server: 100% by king_originala
// roc 2008-06 005616e0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005616e0
//
// 005616e0  64a100000000         mov eax, dword ptr fs:[0]
// 005616e6  6aff                 push -1
// 005616e8  6838ee7c00           push 0x7cee38
// 005616ed  50                   push eax
// 005616ee  64892500000000       mov dword ptr fs:[0], esp
// 005616f5  56                   push esi
// 005616f6  57                   push edi
// 005616f7  8bf1                 mov esi, ecx
// 005616f9  8d442418             lea eax, [esp + 0x18]
// 005616fd  50                   push eax
// 005616fe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00561706  c70600000000         mov dword ptr [esi], 0
// 0056170c  e8df8b0a00           call 0x60a2f0
// 00561711  83c404               add esp, 4
// 00561714  84c0                 test al, al
// 00561716  7522                 jne 0x56173a
// 00561718  6a28                 push 0x28
// 0056171a  e801f21300           call 0x6a0920
// 0056171f  8d4c241c             lea ecx, [esp + 0x1c]
// 00561723  8bf8                 mov edi, eax
// 00561725  51                   push ecx
// 00561726  57                   push edi
// 00561727  e874dfffff           call 0x55f6a0
// 0056172c  83c40c               add esp, 0xc
// 0056172f  897e08               mov dword ptr [esi + 8], edi
// 00561732  c7068cde8200         mov dword ptr [esi], 0x82de8c
// 00561738  eb06                 jmp 0x561740
// 0056173a  c70600000000         mov dword ptr [esi], 0
// 00561740  8b442420             mov eax, dword ptr [esp + 0x20]
// 00561744  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056174c  85c0                 test eax, eax
// 0056174e  7415                 je 0x561765
// 00561750  8b00                 mov eax, dword ptr [eax]
// 00561752  85c0                 test eax, eax
// 00561754  740f                 je 0x561765
// 00561756  8d542428             lea edx, [esp + 0x28]
// 0056175a  6a01                 push 1
// 0056175c  52                   push edx
// 0056175d  8bca                 mov ecx, edx
// 0056175f  51                   push ecx
// 00561760  ffd0                 call eax
// 00561762  83c40c               add esp, 0xc
// 00561765  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00561769  5f                   pop edi
// 0056176a  8bc6                 mov eax, esi
// 0056176c  64890d00000000       mov dword ptr fs:[0], ecx
// 00561773  5e                   pop esi
// 00561774  83c40c               add esp, 0xc
// 00561777  c22c00               ret 0x2c

typedef void (__cdecl *Manager)(void *, void *, int);

struct Argument {
    unsigned char prefix[8];
    Manager *manager;
    unsigned char padding[4];
    unsigned char storage[28];

    ~Argument();
};

inline Argument::~Argument()
{
    if (manager) {
        Manager f = *manager;
        if (f)
            f(storage, storage, 1);
    }
}

extern bool __cdecl func_0060a2f0();
extern void *__cdecl allocate(unsigned int);
extern void __cdecl initialize(void *, Argument *);
extern Manager managerTable[];

struct S {
    Manager *manager;
    unsigned int padding;
    void *object;

    S(Argument argument);
};

S::S(Argument argument) : manager(0)
{
    typedef bool (__cdecl *Predicate)(Argument *);

    if (!reinterpret_cast<Predicate>(&func_0060a2f0)(&argument)) {
        void *p = allocate(40);
        initialize(p, &argument);
        object = p;
        manager = managerTable;
    } else {
        manager = 0;
    }
}
