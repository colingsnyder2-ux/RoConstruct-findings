// from server: 100% by king_originala
// roc 2008-06 0040d4f0  unit: RBX::Reflection::Metadata::Item  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d4f0
//
// 0040d4f0  64a100000000         mov eax, dword ptr fs:[0]
// 0040d4f6  6aff                 push -1
// 0040d4f8  68d8f47b00           push 0x7bf4d8
// 0040d4fd  50                   push eax
// 0040d4fe  64892500000000       mov dword ptr fs:[0], esp
// 0040d505  83ec28               sub esp, 0x28
// 0040d508  56                   push esi
// 0040d509  8d842480000000       lea eax, [esp + 0x80]
// 0040d510  50                   push eax
// 0040d511  8d4c2444             lea ecx, [esp + 0x44]
// 0040d515  e836dbffff           call 0x40b050
// 0040d51a  84c0                 test al, al
// 0040d51c  0f858b000000         jne 0x40d5ad
// 0040d522  8b3590288000         mov esi, dword ptr [0x802890]
// 0040d528  eb06                 jmp 0x40d530
// 0040d52a  8d9b00000000         lea ebx, [ebx]
// 0040d530  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0040d534  803900               cmp byte ptr [ecx], 0
// 0040d537  7556                 jne 0x40d58f
// 0040d539  8b442450             mov eax, dword ptr [esp + 0x50]
// 0040d53d  85c0                 test eax, eax
// 0040d53f  750a                 jne 0x40d54b
// 0040d541  ffd6                 call esi
// 0040d543  8b442450             mov eax, dword ptr [esp + 0x50]
// 0040d547  85c0                 test eax, eax
// 0040d549  7404                 je 0x40d54f
// 0040d54b  8b00                 mov eax, dword ptr [eax]
// 0040d54d  eb02                 jmp 0x40d551
// 0040d54f  33c0                 xor eax, eax
// 0040d551  8b542454             mov edx, dword ptr [esp + 0x54]
// 0040d555  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0040d558  7502                 jne 0x40d55c
// 0040d55a  ffd6                 call esi
// 0040d55c  8b442454             mov eax, dword ptr [esp + 0x54]
// 0040d560  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040d563  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0040d567  8b11                 mov edx, dword ptr [ecx]
// 0040d569  8b4808               mov ecx, dword ptr [eax + 8]
// 0040d56c  83c008               add eax, 8
// 0040d56f  85c9                 test ecx, ecx
// 0040d571  7450                 je 0x40d5c3
// 0040d573  52                   push edx
// 0040d574  8b5104               mov edx, dword ptr [ecx + 4]
// 0040d577  83c008               add eax, 8
// 0040d57a  50                   push eax
// 0040d57b  ffd2                 call edx
// 0040d57d  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0040d584  83c408               add esp, 8
// 0040d587  803800               cmp byte ptr [eax], 0
// 0040d58a  7503                 jne 0x40d58f
// 0040d58c  c60001               mov byte ptr [eax], 1
// 0040d58f  8d4c2440             lea ecx, [esp + 0x40]
// 0040d593  e838c90800           call 0x499ed0
// 0040d598  8d842480000000       lea eax, [esp + 0x80]
// 0040d59f  50                   push eax
// 0040d5a0  8d4c2444             lea ecx, [esp + 0x44]
// 0040d5a4  e8a7daffff           call 0x40b050
// 0040d5a9  84c0                 test al, al
// 0040d5ab  7483                 je 0x40d530
// 0040d5ad  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0040d5b1  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0040d5b5  5e                   pop esi
// 0040d5b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d5bd  83c434               add esp, 0x34
// 0040d5c0  c28400               ret 0x84
// 0040d5c3  8d4c2404             lea ecx, [esp + 4]
// 0040d5c7  e824c9ffff           call 0x409ef0
// 0040d5cc  50                   push eax
// 0040d5cd  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0040d5d5  e826cfffff           call 0x40a500

extern "C" {
    extern void (__cdecl * const _invalid_parameter_noinfo)();
}

struct Failure {
    unsigned char storage[40];
    Failure();
    ~Failure();
};

__declspec(noreturn) void __cdecl raise_failure(const Failure&);

struct CallableTable {
    void* unused;
    void (__cdecl *invoke)(void*, void*);
};

struct Callable {
    CallableTable* table;
    unsigned char unused[4];
    unsigned char data[1];
};

struct Value {
    unsigned char prefix[8];
    Callable callable;
};

struct Node {
    unsigned char prefix[24];
    Value* value;
};

struct Container {
    unsigned char prefix[20];
    Node* end;
};

struct Iterator {
    unsigned char prefix[16];
    Container** owner;
    Node* node;
    unsigned char unused[32];
    void** argument;
    unsigned char* invoked;

    bool equal(const Iterator&);
    void advance();
};

struct Result {
    Result() {}
};

Result __stdcall apply(Iterator first, Iterator last)
{
    if (!first.equal(last)) {
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        do {
            if (!*first.invoked) {
                if (!first.owner)
                    invalid();

                Container* container = first.owner ? *first.owner : 0;
                if (first.node == container->end)
                    invalid();

                Callable* callable = &first.node->value->callable;
                void* argument = *first.argument;

                if (!callable->table)
                    raise_failure(Failure());

                callable->table->invoke(callable->data, argument);
                if (!*first.invoked)
                    *first.invoked = 1;
            }
            first.advance();
        } while (!first.equal(last));
    }
    return Result();
}
