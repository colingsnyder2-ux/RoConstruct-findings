// from server: 100% by king_originala
// roc 2008-06 004b4ed0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b4ed0
//
// 004b4ed0  64a100000000         mov eax, dword ptr fs:[0]
// 004b4ed6  6aff                 push -1
// 004b4ed8  68d8f47b00           push 0x7bf4d8
// 004b4edd  50                   push eax
// 004b4ede  64892500000000       mov dword ptr fs:[0], esp
// 004b4ee5  83ec28               sub esp, 0x28
// 004b4ee8  56                   push esi
// 004b4ee9  8d842480000000       lea eax, [esp + 0x80]
// 004b4ef0  50                   push eax
// 004b4ef1  8d4c2444             lea ecx, [esp + 0x44]
// 004b4ef5  e85661f5ff           call 0x40b050
// 004b4efa  84c0                 test al, al
// 004b4efc  757c                 jne 0x4b4f7a
// 004b4efe  8b3590288000         mov esi, dword ptr [0x802890]
// 004b4f04  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 004b4f08  803900               cmp byte ptr [ecx], 0
// 004b4f0b  754f                 jne 0x4b4f5c
// 004b4f0d  8b442450             mov eax, dword ptr [esp + 0x50]
// 004b4f11  85c0                 test eax, eax
// 004b4f13  750a                 jne 0x4b4f1f
// 004b4f15  ffd6                 call esi
// 004b4f17  8b442450             mov eax, dword ptr [esp + 0x50]
// 004b4f1b  85c0                 test eax, eax
// 004b4f1d  7404                 je 0x4b4f23
// 004b4f1f  8b00                 mov eax, dword ptr [eax]
// 004b4f21  eb02                 jmp 0x4b4f25
// 004b4f23  33c0                 xor eax, eax
// 004b4f25  8b542454             mov edx, dword ptr [esp + 0x54]
// 004b4f29  3b5014               cmp edx, dword ptr [eax + 0x14]
// 004b4f2c  7502                 jne 0x4b4f30
// 004b4f2e  ffd6                 call esi
// 004b4f30  8b442454             mov eax, dword ptr [esp + 0x54]
// 004b4f34  8b4018               mov eax, dword ptr [eax + 0x18]
// 004b4f37  8b4808               mov ecx, dword ptr [eax + 8]
// 004b4f3a  83c008               add eax, 8
// 004b4f3d  85c9                 test ecx, ecx
// 004b4f3f  744f                 je 0x4b4f90
// 004b4f41  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b4f44  83c008               add eax, 8
// 004b4f47  50                   push eax
// 004b4f48  ffd1                 call ecx
// 004b4f4a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 004b4f51  83c404               add esp, 4
// 004b4f54  803800               cmp byte ptr [eax], 0
// 004b4f57  7503                 jne 0x4b4f5c
// 004b4f59  c60001               mov byte ptr [eax], 1
// 004b4f5c  8d4c2440             lea ecx, [esp + 0x40]
// 004b4f60  e86b4ffeff           call 0x499ed0
// 004b4f65  8d942480000000       lea edx, [esp + 0x80]
// 004b4f6c  52                   push edx
// 004b4f6d  8d4c2444             lea ecx, [esp + 0x44]
// 004b4f71  e8da60f5ff           call 0x40b050
// 004b4f76  84c0                 test al, al
// 004b4f78  748a                 je 0x4b4f04
// 004b4f7a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004b4f7e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004b4f82  5e                   pop esi
// 004b4f83  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4f8a  83c434               add esp, 0x34
// 004b4f8d  c28400               ret 0x84
// 004b4f90  8d4c2404             lea ecx, [esp + 4]
// 004b4f94  e8574ff5ff           call 0x409ef0
// 004b4f99  50                   push eax
// 004b4f9a  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004b4fa2  e85955f5ff           call 0x40a500

extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct Node;

struct Container {
    char padding[20];
    Node* sentinel;
};

struct CallbackTable {
    void* reserved;
    void (__cdecl *invoke)(void*);
};

struct Callback {
    CallbackTable* table;
    unsigned int reserved;
    char storage[16];
};

struct Value {
    char padding[8];
    Callback callback;
};

struct Node {
    char padding[24];
    Value* value;
};

struct Iterator {
    char prefix[16];
    Container** owner;
    Node* node;
    char padding[36];
    unsigned char* visited;

    bool equal(const Iterator*);
    void advance();
};

struct BadCall {
    char storage[40];
    BadCall();
    ~BadCall();
};

__declspec(noreturn) void __cdecl raise_bad_call(const BadCall&);

struct Result {
    Result() {}
};

Result __stdcall process(Iterator first, Iterator last)
{
    if (!first.equal(&last)) {
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        do {
            if (!*first.visited) {
                if (!first.owner)
                    invalid();

                Container* container = first.owner ? *first.owner : 0;
                if (first.node == container->sentinel)
                    invalid();

                Callback* callback = &first.node->value->callback;
                if (!callback->table)
                    raise_bad_call(BadCall());

                callback->table->invoke(callback->storage);

                if (!*first.visited)
                    *first.visited = 1;
            }
            first.advance();
        } while (!first.equal(&last));
    }
    return Result();
}
