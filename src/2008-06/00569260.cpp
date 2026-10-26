// from server: 100% by tester
// roc 2008-06 00569260  unit: RBX::ServiceProvider  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569260
//
// 00569260  55                   push ebp
// 00569261  8bec                 mov ebp, esp
// 00569263  6aff                 push -1
// 00569265  6860f87c00           push 0x7cf860
// 0056926a  64a100000000         mov eax, dword ptr fs:[0]
// 00569270  50                   push eax
// 00569271  64892500000000       mov dword ptr fs:[0], esp
// 00569278  51                   push ecx
// 00569279  53                   push ebx
// 0056927a  56                   push esi
// 0056927b  57                   push edi
// 0056927c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0056927f  8bf1                 mov esi, ecx
// 00569281  6a10                 push 0x10
// 00569283  c70600000000         mov dword ptr [esi], 0
// 00569289  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00569290  e88b761300           call 0x6a0920
// 00569295  83c404               add esp, 4
// 00569298  85c0                 test eax, eax
// 0056929a  7419                 je 0x5692b5
// 0056929c  b901000000           mov ecx, 1
// 005692a1  894804               mov dword ptr [eax + 4], ecx
// 005692a4  894808               mov dword ptr [eax + 8], ecx
// 005692a7  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005692aa  c700fcf48200         mov dword ptr [eax], 0x82f4fc
// 005692b0  89480c               mov dword ptr [eax + 0xc], ecx
// 005692b3  eb02                 jmp 0x5692b7
// 005692b5  33c0                 xor eax, eax
// 005692b7  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005692ba  8906                 mov dword ptr [esi], eax
// 005692bc  5f                   pop edi
// 005692bd  8bc6                 mov eax, esi
// 005692bf  5e                   pop esi
// 005692c0  64890d00000000       mov dword ptr fs:[0], ecx
// 005692c7  5b                   pop ebx
// 005692c8  8be5                 mov esp, ebp
// 005692ca  5d                   pop ebp
// 005692cb  c20400               ret 4
// 005692ce  8b5508               mov edx, dword ptr [ebp + 8]
// 005692d1  52                   push edx
// 005692d2  e899e8ebff           call 0x427b70
// 005692d7  83c404               add esp, 4
// 005692da  6a00                 push 0
// 005692dc  6a00                 push 0
// 005692de  e8a9821300           call 0x6a158c

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
