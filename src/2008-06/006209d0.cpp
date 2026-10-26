// from server: 100% by tester
// roc 2008-06 006209d0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006209d0
//
// 006209d0  55                   push ebp
// 006209d1  8bec                 mov ebp, esp
// 006209d3  6aff                 push -1
// 006209d5  68f0967d00           push 0x7d96f0
// 006209da  64a100000000         mov eax, dword ptr fs:[0]
// 006209e0  50                   push eax
// 006209e1  64892500000000       mov dword ptr fs:[0], esp
// 006209e8  51                   push ecx
// 006209e9  53                   push ebx
// 006209ea  56                   push esi
// 006209eb  57                   push edi
// 006209ec  8965f0               mov dword ptr [ebp - 0x10], esp
// 006209ef  8bf1                 mov esi, ecx
// 006209f1  6a10                 push 0x10
// 006209f3  c70600000000         mov dword ptr [esi], 0
// 006209f9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00620a00  e81bff0700           call 0x6a0920
// 00620a05  83c404               add esp, 4
// 00620a08  85c0                 test eax, eax
// 00620a0a  7419                 je 0x620a25
// 00620a0c  b901000000           mov ecx, 1
// 00620a11  894804               mov dword ptr [eax + 4], ecx
// 00620a14  894808               mov dword ptr [eax + 8], ecx
// 00620a17  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00620a1a  c7008c478400         mov dword ptr [eax], 0x84478c
// 00620a20  89480c               mov dword ptr [eax + 0xc], ecx
// 00620a23  eb02                 jmp 0x620a27
// 00620a25  33c0                 xor eax, eax
// 00620a27  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00620a2a  8906                 mov dword ptr [esi], eax
// 00620a2c  5f                   pop edi
// 00620a2d  8bc6                 mov eax, esi
// 00620a2f  5e                   pop esi
// 00620a30  64890d00000000       mov dword ptr fs:[0], ecx
// 00620a37  5b                   pop ebx
// 00620a38  8be5                 mov esp, ebp
// 00620a3a  5d                   pop ebp
// 00620a3b  c20400               ret 4
// 00620a3e  8b5508               mov edx, dword ptr [ebp + 8]
// 00620a41  52                   push edx
// 00620a42  e829ffffff           call 0x620970
// 00620a47  83c404               add esp, 4
// 00620a4a  6a00                 push 0
// 00620a4c  6a00                 push 0
// 00620a4e  e8390b0800           call 0x6a158c

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
