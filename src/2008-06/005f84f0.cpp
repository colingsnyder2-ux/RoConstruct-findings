// from server: 100% by king_originala
// roc 2008-06 005f84f0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f84f0
//
// 005f84f0  55                   push ebp
// 005f84f1  8bec                 mov ebp, esp
// 005f84f3  6aff                 push -1
// 005f84f5  6890797d00           push 0x7d7990
// 005f84fa  64a100000000         mov eax, dword ptr fs:[0]
// 005f8500  50                   push eax
// 005f8501  64892500000000       mov dword ptr fs:[0], esp
// 005f8508  51                   push ecx
// 005f8509  53                   push ebx
// 005f850a  56                   push esi
// 005f850b  57                   push edi
// 005f850c  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f850f  8bf1                 mov esi, ecx
// 005f8511  6a10                 push 0x10
// 005f8513  c70600000000         mov dword ptr [esi], 0
// 005f8519  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f8520  e8fb830a00           call 0x6a0920
// 005f8525  83c404               add esp, 4
// 005f8528  85c0                 test eax, eax
// 005f852a  7419                 je 0x5f8545
// 005f852c  b901000000           mov ecx, 1
// 005f8531  894804               mov dword ptr [eax + 4], ecx
// 005f8534  894808               mov dword ptr [eax + 8], ecx
// 005f8537  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005f853a  c70078088400         mov dword ptr [eax], 0x840878
// 005f8540  89480c               mov dword ptr [eax + 0xc], ecx
// 005f8543  eb02                 jmp 0x5f8547
// 005f8545  33c0                 xor eax, eax
// 005f8547  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f854a  8906                 mov dword ptr [esi], eax
// 005f854c  5f                   pop edi
// 005f854d  8bc6                 mov eax, esi
// 005f854f  5e                   pop esi
// 005f8550  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8557  5b                   pop ebx
// 005f8558  8be5                 mov esp, ebp
// 005f855a  5d                   pop ebp
// 005f855b  c20400               ret 4
// 005f855e  8b5508               mov edx, dword ptr [ebp + 8]
// 005f8561  52                   push edx
// 005f8562  e859feffff           call 0x5f83c0
// 005f8567  83c404               add esp, 4
// 005f856a  6a00                 push 0
// 005f856c  6a00                 push 0
// 005f856e  e819900a00           call 0x6a158c

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
