// from server: 100% by king_originala
// roc 2008-06 005e1e00  unit: RBX::Lighting  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1e00
//
// 005e1e00  64a100000000         mov eax, dword ptr fs:[0]
// 005e1e06  6aff                 push -1
// 005e1e08  68d8f47b00           push 0x7bf4d8
// 005e1e0d  50                   push eax
// 005e1e0e  64892500000000       mov dword ptr fs:[0], esp
// 005e1e15  83ec2c               sub esp, 0x2c
// 005e1e18  56                   push esi
// 005e1e19  8d842484000000       lea eax, [esp + 0x84]
// 005e1e20  50                   push eax
// 005e1e21  8d4c2448             lea ecx, [esp + 0x48]
// 005e1e25  e82692e2ff           call 0x40b050
// 005e1e2a  84c0                 test al, al
// 005e1e2c  0f859a000000         jne 0x5e1ecc
// 005e1e32  8b3590288000         mov esi, dword ptr [0x802890]
// 005e1e38  eb06                 jmp 0x5e1e40
// 005e1e3a  8d9b00000000         lea ebx, [ebx]
// 005e1e40  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005e1e47  803900               cmp byte ptr [ecx], 0
// 005e1e4a  755e                 jne 0x5e1eaa
// 005e1e4c  8b442454             mov eax, dword ptr [esp + 0x54]
// 005e1e50  85c0                 test eax, eax
// 005e1e52  750a                 jne 0x5e1e5e
// 005e1e54  ffd6                 call esi
// 005e1e56  8b442454             mov eax, dword ptr [esp + 0x54]
// 005e1e5a  85c0                 test eax, eax
// 005e1e5c  7404                 je 0x5e1e62
// 005e1e5e  8b00                 mov eax, dword ptr [eax]
// 005e1e60  eb02                 jmp 0x5e1e64
// 005e1e62  33c0                 xor eax, eax
// 005e1e64  8b542458             mov edx, dword ptr [esp + 0x58]
// 005e1e68  3b5014               cmp edx, dword ptr [eax + 0x14]
// 005e1e6b  7502                 jne 0x5e1e6f
// 005e1e6d  ffd6                 call esi
// 005e1e6f  8b442458             mov eax, dword ptr [esp + 0x58]
// 005e1e73  8b4018               mov eax, dword ptr [eax + 0x18]
// 005e1e76  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 005e1e7a  8a11                 mov dl, byte ptr [ecx]
// 005e1e7c  8b4808               mov ecx, dword ptr [eax + 8]
// 005e1e7f  83c008               add eax, 8
// 005e1e82  88542404             mov byte ptr [esp + 4], dl
// 005e1e86  85c9                 test ecx, ecx
// 005e1e88  7458                 je 0x5e1ee2
// 005e1e8a  8b542404             mov edx, dword ptr [esp + 4]
// 005e1e8e  83c008               add eax, 8
// 005e1e91  52                   push edx
// 005e1e92  50                   push eax
// 005e1e93  8b4104               mov eax, dword ptr [ecx + 4]
// 005e1e96  ffd0                 call eax
// 005e1e98  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 005e1e9f  83c408               add esp, 8
// 005e1ea2  803800               cmp byte ptr [eax], 0
// 005e1ea5  7503                 jne 0x5e1eaa
// 005e1ea7  c60001               mov byte ptr [eax], 1
// 005e1eaa  8d4c2444             lea ecx, [esp + 0x44]
// 005e1eae  e81d80ebff           call 0x499ed0
// 005e1eb3  8d8c2484000000       lea ecx, [esp + 0x84]
// 005e1eba  51                   push ecx
// 005e1ebb  8d4c2448             lea ecx, [esp + 0x48]
// 005e1ebf  e88c91e2ff           call 0x40b050
// 005e1ec4  84c0                 test al, al
// 005e1ec6  0f8474ffffff         je 0x5e1e40
// 005e1ecc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e1ed0  8b442440             mov eax, dword ptr [esp + 0x40]
// 005e1ed4  5e                   pop esi
// 005e1ed5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1edc  83c438               add esp, 0x38
// 005e1edf  c28400               ret 0x84
// 005e1ee2  8d4c2408             lea ecx, [esp + 8]
// 005e1ee6  e80580e2ff           call 0x409ef0
// 005e1eeb  50                   push eax
// 005e1eec  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e1ef4  e80786e2ff           call 0x40a500

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct Failure {
    char data[40];
    Failure();
    ~Failure();
};

__declspec(noreturn) void __cdecl raiseFailure(const Failure&);

struct Dispatcher {
    void* reserved;
    void (__cdecl* invoke)(void*, char);
};

struct Function {
    Dispatcher* dispatcher;
    char padding[4];
    char storage[16];

    void operator()(char value);
};

__forceinline void Function::operator()(char value)
{
    if (!dispatcher)
        raiseFailure(Failure());

    dispatcher->invoke(storage, value);
}

struct Callable {
    char reserved[8];
    Function function;
};

struct Node {
    char reserved[24];
    Callable* callable;
};

struct Container {
    char reserved[20];
    Node* sentinel;
};

struct Owner {
    Container* container;
};

struct Iterator {
    char reserved[16];
    Owner* owner;
    Node* node;
    char padding[32];
    const char* value;
    bool* visited;

    bool equal(const Iterator&);
    void advance();
};

void* __stdcall process(void* result, Iterator first, Iterator last)
{
    if (!first.equal(last)) {
        void (__cdecl* const invalid)() = invalid_parameter_noinfo;

        do {
            if (!*first.visited) {
                if (!first.owner)
                    invalid();

                Container* container =
                    first.owner ? first.owner->container : 0;

                if (first.node == container->sentinel)
                    invalid();

                Function& function = first.node->callable->function;
                char value = *first.value;
                function(value);

                if (!*first.visited)
                    *first.visited = true;
            }

            first.advance();
        } while (!first.equal(last));
    }

    return result;
}
