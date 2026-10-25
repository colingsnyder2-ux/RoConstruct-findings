// from server: 100% by tester
// roc 2008-06 005f8580  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8580
//
// 005f8580  55                   push ebp
// 005f8581  8bec                 mov ebp, esp
// 005f8583  6aff                 push -1
// 005f8585  68a0797d00           push 0x7d79a0
// 005f858a  64a100000000         mov eax, dword ptr fs:[0]
// 005f8590  50                   push eax
// 005f8591  64892500000000       mov dword ptr fs:[0], esp
// 005f8598  51                   push ecx
// 005f8599  53                   push ebx
// 005f859a  56                   push esi
// 005f859b  57                   push edi
// 005f859c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f859f  8bf1                 mov esi, ecx
// 005f85a1  6a10                 push 0x10
// 005f85a3  c70600000000         mov dword ptr [esi], 0
// 005f85a9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f85b0  e86b830a00           call 0x6a0920
// 005f85b5  83c404               add esp, 4
// 005f85b8  85c0                 test eax, eax
// 005f85ba  7419                 je 0x5f85d5
// 005f85bc  b901000000           mov ecx, 1
// 005f85c1  894804               mov dword ptr [eax + 4], ecx
// 005f85c4  894808               mov dword ptr [eax + 8], ecx
// 005f85c7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005f85ca  c7008c088400         mov dword ptr [eax], 0x84088c
// 005f85d0  89480c               mov dword ptr [eax + 0xc], ecx
// 005f85d3  eb02                 jmp 0x5f85d7
// 005f85d5  33c0                 xor eax, eax
// 005f85d7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f85da  8906                 mov dword ptr [esi], eax
// 005f85dc  5f                   pop edi
// 005f85dd  8bc6                 mov eax, esi
// 005f85df  5e                   pop esi
// 005f85e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005f85e7  5b                   pop ebx
// 005f85e8  8be5                 mov esp, ebp
// 005f85ea  5d                   pop ebp
// 005f85eb  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual ~Object();
};

struct CountBase {
    long useCount;
    long weakCount;

    CountBase() : useCount(1), weakCount(1) {}
    virtual ~CountBase();
    virtual void dispose() = 0;
    virtual void destroy();
    virtual void* getDeleter(const void*) = 0;
};

struct Count : CountBase {
    Object* object;

    explicit Count(Object* p) : object(p) {}
    virtual ~Count();
    virtual void dispose();
    virtual void* getDeleter(const void*);
};

struct S {
    CountBase* count;
    explicit S(Object*);
};

S::S(Object* p) : count(0)
{
    try {
        count = new Count(p);
    }
    catch (...) {
        delete p;
        throw;
    }
}
