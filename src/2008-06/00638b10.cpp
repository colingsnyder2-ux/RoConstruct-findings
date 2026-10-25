// from server: 100% by king_originala
// roc 2008-06 00638b10  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638b10
//
// 00638b10  55                   push ebp
// 00638b11  8bec                 mov ebp, esp
// 00638b13  83e4c0               and esp, 0xffffffc0
// 00638b16  64a100000000         mov eax, dword ptr fs:[0]
// 00638b1c  6aff                 push -1
// 00638b1e  6828a47d00           push 0x7da428
// 00638b23  50                   push eax
// 00638b24  64892500000000       mov dword ptr fs:[0], esp
// 00638b2b  83ec70               sub esp, 0x70
// 00638b2e  56                   push esi
// 00638b2f  8d454c               lea eax, [ebp + 0x4c]
// 00638b32  50                   push eax
// 00638b33  8d4d0c               lea ecx, [ebp + 0xc]
// 00638b36  e81525ddff           call 0x40b050
// 00638b3b  84c0                 test al, al
// 00638b3d  7578                 jne 0x638bb7
// 00638b3f  8b3590288000         mov esi, dword ptr [0x802890]
// 00638b45  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 00638b48  803900               cmp byte ptr [ecx], 0
// 00638b4b  7552                 jne 0x638b9f
// 00638b4d  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00638b50  85c0                 test eax, eax
// 00638b52  7509                 jne 0x638b5d
// 00638b54  ffd6                 call esi
// 00638b56  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00638b59  85c0                 test eax, eax
// 00638b5b  7404                 je 0x638b61
// 00638b5d  8b00                 mov eax, dword ptr [eax]
// 00638b5f  eb02                 jmp 0x638b63
// 00638b61  33c0                 xor eax, eax
// 00638b63  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00638b66  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00638b69  7502                 jne 0x638b6d
// 00638b6b  ffd6                 call esi
// 00638b6d  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00638b70  8b4018               mov eax, dword ptr [eax + 0x18]
// 00638b73  8b4d44               mov ecx, dword ptr [ebp + 0x44]
// 00638b76  dd01                 fld qword ptr [ecx]
// 00638b78  8b4808               mov ecx, dword ptr [eax + 8]
// 00638b7b  83c008               add eax, 8
// 00638b7e  85c9                 test ecx, ecx
// 00638b80  744a                 je 0x638bcc
// 00638b82  8b5104               mov edx, dword ptr [ecx + 4]
// 00638b85  83ec08               sub esp, 8
// 00638b88  83c008               add eax, 8
// 00638b8b  dd1c24               fstp qword ptr [esp]
// 00638b8e  50                   push eax
// 00638b8f  ffd2                 call edx
// 00638b91  8b4548               mov eax, dword ptr [ebp + 0x48]
// 00638b94  83c40c               add esp, 0xc
// 00638b97  803800               cmp byte ptr [eax], 0
// 00638b9a  7503                 jne 0x638b9f
// 00638b9c  c60001               mov byte ptr [eax], 1
// 00638b9f  8d4d0c               lea ecx, [ebp + 0xc]
// 00638ba2  e82913e6ff           call 0x499ed0
// 00638ba7  8d454c               lea eax, [ebp + 0x4c]
// 00638baa  50                   push eax
// 00638bab  8d4d0c               lea ecx, [ebp + 0xc]
// 00638bae  e89d24ddff           call 0x40b050
// 00638bb3  84c0                 test al, al
// 00638bb5  748e                 je 0x638b45
// 00638bb7  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00638bbb  8b4508               mov eax, dword ptr [ebp + 8]
// 00638bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00638bc5  5e                   pop esi
// 00638bc6  8be5                 mov esp, ebp
// 00638bc8  5d                   pop ebp
// 00638bc9  c28400               ret 0x84
// 00638bcc  8d4c2418             lea ecx, [esp + 0x18]
// 00638bd0  ddd8                 fstp st(0)
// 00638bd2  e81913ddff           call 0x409ef0
// 00638bd7  50                   push eax
// 00638bd8  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00638be3  e81819ddff           call 0x40a500

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct ExceptionObject
{
    unsigned long words[10];
    ExceptionObject();
    ~ExceptionObject();
};

extern __declspec(noreturn) void __cdecl raise_exception(const void *);

struct FunctionManager
{
    void *reserved;
    void (__cdecl *invoke)(void *, double);
};

struct Callable
{
    FunctionManager *manager;
    unsigned long unused;
    unsigned long storage[2];

    void operator()(double value);
};

inline void Callable::operator()(double value)
{
    if (!manager)
        (raise_exception(&ExceptionObject()), __assume(0));
    manager->invoke(storage, value);
}

struct FunctionObject
{
    unsigned long reserved[2];
    Callable callable;
};

struct Node
{
    unsigned long reserved[6];
    FunctionObject *function;
};

struct Owner
{
    unsigned long reserved[5];
    Node *end;
};

struct Iterator
{
    unsigned long reserved[4];
    Owner **owner;
    Node *node;
    unsigned long unused[8];
    double *value;
    bool *done;

    bool equal(const Iterator &other);
    void advance();
};

void *__stdcall process(void *result, Iterator first, Iterator last)
{
    if (!first.equal(last))
    {
        void (__cdecl *invalid)() = invalid_parameter_noinfo;
        do
        {
            if (!*first.done)
            {
                if (!first.owner)
                    invalid();

                Owner *owner = first.owner ? *first.owner : 0;
                if (first.node == owner->end)
                    invalid();

                Callable *callable = &first.node->function->callable;
                (*callable)(*first.value);

                if (!*first.done)
                    *first.done = true;
            }

            first.advance();
        } while (!first.equal(last));
    }

    return result;
}
