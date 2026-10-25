// from server: 100% by king_originala
// roc 2008-06 006587e0  unit: RBX::ArrowButton  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006587e0
//
// 006587e0  6aff                 push -1
// 006587e2  6823bf7d00           push 0x7dbf23
// 006587e7  64a100000000         mov eax, dword ptr fs:[0]
// 006587ed  50                   push eax
// 006587ee  64892500000000       mov dword ptr fs:[0], esp
// 006587f5  51                   push ecx
// 006587f6  56                   push esi
// 006587f7  57                   push edi
// 006587f8  6a04                 push 4
// 006587fa  e821810400           call 0x6a0920
// 006587ff  8bf0                 mov esi, eax
// 00658801  83c404               add esp, 4
// 00658804  89742408             mov dword ptr [esp + 8], esi
// 00658808  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00658810  85f6                 test esi, esi
// 00658812  7414                 je 0x658828
// 00658814  c70600000000         mov dword ptr [esi], 0
// 0065881a  8bce                 mov ecx, esi
// 0065881c  c644241401           mov byte ptr [esp + 0x14], 1
// 00658821  e83afeffff           call 0x658660
// 00658826  eb02                 jmp 0x65882a
// 00658828  33f6                 xor esi, esi
// 0065882a  8b3d44d99700         mov edi, dword ptr [0x97d944]
// 00658830  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00658838  893544d99700         mov dword ptr [0x97d944], esi
// 0065883e  85ff                 test edi, edi
// 00658840  741f                 je 0x658861
// 00658842  8b37                 mov esi, dword ptr [edi]
// 00658844  85f6                 test esi, esi
// 00658846  7410                 je 0x658858
// 00658848  8bce                 mov ecx, esi
// 0065884a  e8b1f9ffff           call 0x658200
// 0065884f  56                   push esi
// 00658850  e8257e0400           call 0x6a067a
// 00658855  83c404               add esp, 4
// 00658858  57                   push edi
// 00658859  e81c7e0400           call 0x6a067a
// 0065885e  83c404               add esp, 4
// 00658861  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00658865  5f                   pop edi
// 00658866  5e                   pop esi
// 00658867  64890d00000000       mov dword ptr fs:[0], ecx
// 0065886e  83c410               add esp, 0x10
// 00658871  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    ~Value();
};

struct Owner {
    Value* pointer;
    Owner();
    ~Owner();
};

inline Owner::Owner() : pointer(0) {}
inline Owner::~Owner() {
    delete pointer;
}

struct Name {
    Owner value;
    Name();
    ~Name();
    void initialize();
};

inline Name::Name() {
    initialize();
}

inline Name::~Name() {}

extern Name* globalName;

void initializeGlobalName() {
    Name* replacement = new Name;
    Name* previous = globalName;
    globalName = replacement;
    delete previous;
}
