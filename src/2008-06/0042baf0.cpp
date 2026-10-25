// from server: 100% by king_originala
// roc 2008-06 0042baf0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042baf0
//
// 0042baf0  6aff                 push -1
// 0042baf2  682bf57b00           push 0x7bf52b
// 0042baf7  64a100000000         mov eax, dword ptr fs:[0]
// 0042bafd  50                   push eax
// 0042bafe  64892500000000       mov dword ptr fs:[0], esp
// 0042bb05  83ec08               sub esp, 8
// 0042bb08  53                   push ebx
// 0042bb09  55                   push ebp
// 0042bb0a  56                   push esi
// 0042bb0b  57                   push edi
// 0042bb0c  6a20                 push 0x20
// 0042bb0e  8be9                 mov ebp, ecx
// 0042bb10  e80b4e2700           call 0x6a0920
// 0042bb15  8bd8                 mov ebx, eax
// 0042bb17  83c404               add esp, 4
// 0042bb1a  895c2410             mov dword ptr [esp + 0x10], ebx
// 0042bb1e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0042bb26  85db                 test ebx, ebx
// 0042bb28  7453                 je 0x42bb7d
// 0042bb2a  6a00                 push 0
// 0042bb2c  83ec20               sub esp, 0x20
// 0042bb2f  8bf4                 mov esi, esp
// 0042bb31  c70600000000         mov dword ptr [esi], 0
// 0042bb37  a18c058100           mov eax, dword ptr [0x81058c]
// 0042bb3c  89642438             mov dword ptr [esp + 0x38], esp
// 0042bb40  8d7e08               lea edi, [esi + 8]
// 0042bb43  85c0                 test eax, eax
// 0042bb45  7409                 je 0x42bb50
// 0042bb47  6a01                 push 1
// 0042bb49  57                   push edi
// 0042bb4a  57                   push edi
// 0042bb4b  ffd0                 call eax
// 0042bb4d  83c40c               add esp, 0xc
// 0042bb50  b810a64200           mov eax, 0x42a610
// 0042bb55  85c0                 test eax, eax
// 0042bb57  7415                 je 0x42bb6e
// 0042bb59  c70710a64200         mov dword ptr [edi], 0x42a610
// 0042bb5f  8bcb                 mov ecx, ebx
// 0042bb61  c7068c058100         mov dword ptr [esi], 0x81058c
// 0042bb67  e8e4feffff           call 0x42ba50
// 0042bb6c  eb11                 jmp 0x42bb7f
// 0042bb6e  8bcb                 mov ecx, ebx
// 0042bb70  c70600000000         mov dword ptr [esi], 0
// 0042bb76  e8d5feffff           call 0x42ba50
// 0042bb7b  eb02                 jmp 0x42bb7f
// 0042bb7d  33c0                 xor eax, eax
// 0042bb7f  50                   push eax
// 0042bb80  8bcd                 mov ecx, ebp
// 0042bb82  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0042bb8a  e871d6ffff           call 0x429200
// 0042bb8f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042bb93  5f                   pop edi
// 0042bb94  5e                   pop esi
// 0042bb95  8bc5                 mov eax, ebp
// 0042bb97  5d                   pop ebp
// 0042bb98  64890d00000000       mov dword ptr fs:[0], ecx
// 0042bb9f  5b                   pop ebx
// 0042bba0  83c414               add esp, 0x14
// 0042bba3  c3                   ret 

typedef void (__cdecl *Manager)(void *, void *, int);
typedef void (__cdecl *Callback)(const void *);

struct ManagerTable {
    Manager destroy;
};

extern ManagerTable managerTable;
extern "C" void __cdecl callback(const void *);

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Argument {
    ManagerTable *table;
    unsigned int reserved;
    char storage[24];

    Argument(Callback);
    ~Argument();
};

inline Argument::Argument(Callback fn)
{
    table = 0;
    Callback *target = reinterpret_cast<Callback *>(storage);
    if (managerTable.destroy)
        managerTable.destroy(target, target, 1);
    if (fn) {
        *target = fn;
        table = &managerTable;
    } else {
        table = 0;
    }
}

inline Argument::~Argument()
{
    if (table)
        table->destroy(storage, storage, 2);
}

struct Node {
    char data[32];
    Node(Argument, int);
};

struct S {
    void assign(Node *);
    S *f();
};

S *S::f()
{
    assign(new Node(callback, 0));
    return this;
}
