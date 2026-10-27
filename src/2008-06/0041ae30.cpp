// from server: 100% by king_originala
// roc 2008-06 0041ae30  unit: VDHTMLWindow::?$BoundFuncDesc  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ae30
//
// 0041ae30  55                   push ebp
// 0041ae31  8bec                 mov ebp, esp
// 0041ae33  6aff                 push -1
// 0041ae35  68b0df7b00           push 0x7bdfb0
// 0041ae3a  64a100000000         mov eax, dword ptr fs:[0]
// 0041ae40  50                   push eax
// 0041ae41  64892500000000       mov dword ptr fs:[0], esp
// 0041ae48  51                   push ecx
// 0041ae49  53                   push ebx
// 0041ae4a  56                   push esi
// 0041ae4b  57                   push edi
// 0041ae4c  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041ae4f  8bf1                 mov esi, ecx
// 0041ae51  6a10                 push 0x10
// 0041ae53  c70600000000         mov dword ptr [esi], 0
// 0041ae59  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041ae60  e8bb5a2800           call 0x6a0920
// 0041ae65  83c404               add esp, 4
// 0041ae68  85c0                 test eax, eax
// 0041ae6a  7419                 je 0x41ae85
// 0041ae6c  b901000000           mov ecx, 1
// 0041ae71  894804               mov dword ptr [eax + 4], ecx
// 0041ae74  894808               mov dword ptr [eax + 8], ecx
// 0041ae77  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0041ae7a  c700fcec8000         mov dword ptr [eax], 0x80ecfc
// 0041ae80  89480c               mov dword ptr [eax + 0xc], ecx
// 0041ae83  eb02                 jmp 0x41ae87
// 0041ae85  33c0                 xor eax, eax
// 0041ae87  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041ae8a  8906                 mov dword ptr [esi], eax
// 0041ae8c  5f                   pop edi
// 0041ae8d  8bc6                 mov eax, esi
// 0041ae8f  5e                   pop esi
// 0041ae90  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ae97  5b                   pop ebx
// 0041ae98  8be5                 mov esp, ebp
// 0041ae9a  5d                   pop ebp
// 0041ae9b  c20400               ret 4
// 0041ae9e  8b5508               mov edx, dword ptr [ebp + 8]
// 0041aea1  52                   push edx
// 0041aea2  e869ffffff           call 0x41ae10
// 0041aea7  83c404               add esp, 4
// 0041aeaa  6a00                 push 0
// 0041aeac  6a00                 push 0
// 0041aeae  e8d9662800           call 0x6a158c

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual ~Object();
};

namespace boost { template<class T> void checked_delete(T*); }

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
        boost::checked_delete(p);
        throw;
    }
}
