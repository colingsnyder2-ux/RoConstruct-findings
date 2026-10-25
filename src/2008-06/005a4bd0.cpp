// from server: 100% by king_originala
// roc 2008-06 005a4bd0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4bd0
//
// 005a4bd0  6aff                 push -1
// 005a4bd2  684c2d7d00           push 0x7d2d4c
// 005a4bd7  64a100000000         mov eax, dword ptr fs:[0]
// 005a4bdd  50                   push eax
// 005a4bde  64892500000000       mov dword ptr fs:[0], esp
// 005a4be5  83ec10               sub esp, 0x10
// 005a4be8  56                   push esi
// 005a4be9  c744240800000000     mov dword ptr [esp + 8], 0
// 005a4bf1  6878010000           push 0x178
// 005a4bf6  c744242001000000     mov dword ptr [esp + 0x20], 1
// 005a4bfe  c644240800           mov byte ptr [esp + 8], 0
// 005a4c03  ff15b0288000         call dword ptr [0x8028b0]
// 005a4c09  8bf0                 mov esi, eax
// 005a4c0b  83c404               add esp, 4
// 005a4c0e  8974240c             mov dword ptr [esp + 0xc], esi
// 005a4c12  c644241c02           mov byte ptr [esp + 0x1c], 2
// 005a4c17  85f6                 test esi, esi
// 005a4c19  7438                 je 0x5a4c53
// 005a4c1b  83ec20               sub esp, 0x20
// 005a4c1e  8bc4                 mov eax, esp
// 005a4c20  c70000000000         mov dword ptr [eax], 0
// 005a4c26  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4c2a  89642430             mov dword ptr [esp + 0x30], esp
// 005a4c2e  85c9                 test ecx, ecx
// 005a4c30  7418                 je 0x5a4c4a
// 005a4c32  8908                 mov dword ptr [eax], ecx
// 005a4c34  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005a4c38  8b11                 mov edx, dword ptr [ecx]
// 005a4c3a  83c008               add eax, 8
// 005a4c3d  6a00                 push 0
// 005a4c3f  50                   push eax
// 005a4c40  8d442458             lea eax, [esp + 0x58]
// 005a4c44  50                   push eax
// 005a4c45  ffd2                 call edx
// 005a4c47  83c40c               add esp, 0xc
// 005a4c4a  8bce                 mov ecx, esi
// 005a4c4c  e8fff3ffff           call 0x5a4050
// 005a4c51  eb02                 jmp 0x5a4c55
// 005a4c53  33c0                 xor eax, eax
// 005a4c55  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a4c59  8b742424             mov esi, dword ptr [esp + 0x24]
// 005a4c5d  51                   push ecx
// 005a4c5e  50                   push eax
// 005a4c5f  8bce                 mov ecx, esi
// 005a4c61  c644242401           mov byte ptr [esp + 0x24], 1
// 005a4c66  e805c8ffff           call 0x5a1470
// 005a4c6b  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4c6f  c744240801000000     mov dword ptr [esp + 8], 1
// 005a4c77  c644241c00           mov byte ptr [esp + 0x1c], 0
// 005a4c7c  85c0                 test eax, eax
// 005a4c7e  7415                 je 0x5a4c95
// 005a4c80  8b00                 mov eax, dword ptr [eax]
// 005a4c82  85c0                 test eax, eax
// 005a4c84  740f                 je 0x5a4c95
// 005a4c86  8d542430             lea edx, [esp + 0x30]
// 005a4c8a  6a01                 push 1
// 005a4c8c  52                   push edx
// 005a4c8d  8bca                 mov ecx, edx
// 005a4c8f  51                   push ecx
// 005a4c90  ffd0                 call eax
// 005a4c92  83c40c               add esp, 0xc
// 005a4c95  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a4c99  8bc6                 mov eax, esi
// 005a4c9b  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4ca2  5e                   pop esi
// 005a4ca3  83c41c               add esp, 0x1c
// 005a4ca6  c3                   ret 

extern "C" void* (__cdecl * const malloc)(unsigned int);

struct Buffer {
    char data[24];
};

typedef void (__cdecl *Manager)(const Buffer*, Buffer*, int);

struct Table {
    Manager manager;
};

struct Function {
    Table* table;
    unsigned int reserved;
    Buffer buffer;

    Function(const Function&);
    ~Function();
};

__forceinline Function::Function(const Function& other) : table(0) {
    if (other.table) {
        table = other.table;
        other.table->manager(&other.buffer, &buffer, 0);
    }
}

__forceinline Function::~Function() {
    if (table) {
        Manager manager = table->manager;
        if (manager)
            manager(&buffer, &buffer, 1);
    }
}

struct Tag {};

struct Object {
    char storage[0x178];

    Object(Function);
    static void* __cdecl operator new(unsigned int);
    static void __cdecl operator delete(void*);
};

__forceinline void* __cdecl Object::operator new(unsigned int size) {
    return malloc(size);
}

struct Result {
    Object* pointer;
    void* control;

    Result(Object*, Tag);
    ~Result();
};

Result __cdecl f(Function function) {
    return Result(new Object(function), Tag());
}
