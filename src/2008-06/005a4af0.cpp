// from server: 100% by king_originala
// roc 2008-06 005a4af0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4af0
//
// 005a4af0  6aff                 push -1
// 005a4af2  684c2d7d00           push 0x7d2d4c
// 005a4af7  64a100000000         mov eax, dword ptr fs:[0]
// 005a4afd  50                   push eax
// 005a4afe  64892500000000       mov dword ptr fs:[0], esp
// 005a4b05  83ec10               sub esp, 0x10
// 005a4b08  56                   push esi
// 005a4b09  c744240800000000     mov dword ptr [esp + 8], 0
// 005a4b11  6878010000           push 0x178
// 005a4b16  c744242001000000     mov dword ptr [esp + 0x20], 1
// 005a4b1e  c644240800           mov byte ptr [esp + 8], 0
// 005a4b23  ff15b0288000         call dword ptr [0x8028b0]
// 005a4b29  8bf0                 mov esi, eax
// 005a4b2b  83c404               add esp, 4
// 005a4b2e  8974240c             mov dword ptr [esp + 0xc], esi
// 005a4b32  c644241c02           mov byte ptr [esp + 0x1c], 2
// 005a4b37  85f6                 test esi, esi
// 005a4b39  7438                 je 0x5a4b73
// 005a4b3b  83ec20               sub esp, 0x20
// 005a4b3e  8bc4                 mov eax, esp
// 005a4b40  c70000000000         mov dword ptr [eax], 0
// 005a4b46  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4b4a  89642430             mov dword ptr [esp + 0x30], esp
// 005a4b4e  85c9                 test ecx, ecx
// 005a4b50  7418                 je 0x5a4b6a
// 005a4b52  8908                 mov dword ptr [eax], ecx
// 005a4b54  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4b58  8b11                 mov edx, dword ptr [ecx]
// 005a4b5a  83c008               add eax, 8
// 005a4b5d  6a00                 push 0
// 005a4b5f  50                   push eax
// 005a4b60  8d442458             lea eax, [esp + 0x58]
// 005a4b64  50                   push eax
// 005a4b65  ffd2                 call edx
// 005a4b67  83c40c               add esp, 0xc
// 005a4b6a  8bce                 mov ecx, esi
// 005a4b6c  e8bff3ffff           call 0x5a3f30
// 005a4b71  eb02                 jmp 0x5a4b75
// 005a4b73  33c0                 xor eax, eax
// 005a4b75  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a4b79  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a4b7d  51                   push ecx
// 005a4b7e  50                   push eax
// 005a4b7f  8bce                 mov ecx, esi
// 005a4b81  c644242401           mov byte ptr [esp + 0x24], 1
// 005a4b86  e835c8ffff           call 0x5a13c0
// 005a4b8b  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4b8f  c744240801000000     mov dword ptr [esp + 8], 1
// 005a4b97  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005a4b9c  85c0                 test eax, eax
// 005a4b9e  7415                 je 0x5a4bb5
// 005a4ba0  8b00                 mov eax, dword ptr [eax]
// 005a4ba2  85c0                 test eax, eax
// 005a4ba4  740f                 je 0x5a4bb5
// 005a4ba6  8d542430             lea edx, [esp + 0x30]
// 005a4baa  6a01                 push 1
// 005a4bac  52                   push edx
// 005a4bad  8bca                 mov ecx, edx
// 005a4baf  51                   push ecx
// 005a4bb0  ffd0                 call eax
// 005a4bb2  83c40c               add esp, 0xc
// 005a4bb5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a4bb9  8bc6                 mov eax, esi
// 005a4bbb  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4bc2  5e                   pop esi
// 005a4bc3  83c41c               add esp, 0x1c
// 005a4bc6  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
extern "C" void __cdecl free(void*);

struct Function {
    typedef void (__cdecl *Manager)(const void*, void*, int);
    struct Table {
        Manager manage;
    };

    const Table* table;
    unsigned int reserved;
    unsigned char storage[24];

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : table(0) {
    if (other.table) {
        table = other.table;
        other.table->manage(other.storage, storage, 0);
    }
}

inline Function::~Function() {
    if (table) {
        Manager manager = table->manage;
        if (manager)
            manager(storage, storage, 1);
    }
}

struct Object {
    unsigned char storage[0x178];

    Object(Function);
    static void* operator new(unsigned int);
    static void operator delete(void*);
};

inline void* Object::operator new(unsigned int size) {
    return malloc(size);
}

inline void Object::operator delete(void* p) {
    free(p);
}

struct Deleter {
    unsigned char unused;
    Deleter();
};

inline Deleter::Deleter() : unused(0) {}

struct Result {
    Object* pointer;
    void* control;

    Result(Object*, Deleter);
    ~Result();
};

Result makeResult(Function function) {
    Deleter deleter;
    Result result(new Object(function), deleter);
    return result;
}
