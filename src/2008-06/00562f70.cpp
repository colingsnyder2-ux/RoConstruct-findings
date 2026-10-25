// from server: 100% by king_originala
// roc 2008-06 00562f70  unit: RBX::ContentProvider  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00562f70
//
// 00562f70  6aff                 push -1
// 00562f72  6808f27c00           push 0x7cf208
// 00562f77  64a100000000         mov eax, dword ptr fs:[0]
// 00562f7d  50                   push eax
// 00562f7e  64892500000000       mov dword ptr fs:[0], esp
// 00562f85  51                   push ecx
// 00562f86  53                   push ebx
// 00562f87  56                   push esi
// 00562f88  57                   push edi
// 00562f89  8bf1                 mov esi, ecx
// 00562f8b  83ec20               sub esp, 0x20
// 00562f8e  8964242c             mov dword ptr [esp + 0x2c], esp
// 00562f92  8bfc                 mov edi, esp
// 00562f94  6a00                 push 0
// 00562f96  83ec28               sub esp, 0x28
// 00562f99  89642458             mov dword ptr [esp + 0x58], esp
// 00562f9d  8bdc                 mov ebx, esp
// 00562f9f  83ec20               sub esp, 0x20
// 00562fa2  8bc4                 mov eax, esp
// 00562fa4  c70000000000         mov dword ptr [eax], 0
// 00562faa  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00562fb1  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 00562fbc  89642478             mov dword ptr [esp + 0x78], esp
// 00562fc0  85c9                 test ecx, ecx
// 00562fc2  741e                 je 0x562fe2
// 00562fc4  8908                 mov dword ptr [eax], ecx
// 00562fc6  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00562fcd  8b11                 mov edx, dword ptr [ecx]
// 00562fcf  83c008               add eax, 8
// 00562fd2  6a00                 push 0
// 00562fd4  50                   push eax
// 00562fd5  8d8424a0000000       lea eax, [esp + 0xa0]
// 00562fdc  50                   push eax
// 00562fdd  ffd2                 call edx
// 00562fdf  83c40c               add esp, 0xc
// 00562fe2  0fb605ed409700       movzx eax, byte ptr [0x9740ed]
// 00562fe9  0fb60dec409700       movzx ecx, byte ptr [0x9740ec]
// 00562ff0  50                   push eax
// 00562ff1  51                   push ecx
// 00562ff2  6830155600           push 0x561530
// 00562ff7  53                   push ebx
// 00562ff8  e8b3c3ffff           call 0x55f3b0
// 00562ffd  83c430               add esp, 0x30
// 00563000  8bcf                 mov ecx, edi
// 00563002  e8d9e8ffff           call 0x5618e0
// 00563007  8b542440             mov edx, dword ptr [esp + 0x40]
// 0056300b  52                   push edx
// 0056300c  8bce                 mov ecx, esi
// 0056300e  e81df5ffff           call 0x562530
// 00563013  8b442424             mov eax, dword ptr [esp + 0x24]
// 00563017  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056301f  85c0                 test eax, eax
// 00563021  7415                 je 0x563038
// 00563023  8b00                 mov eax, dword ptr [eax]
// 00563025  85c0                 test eax, eax
// 00563027  740f                 je 0x563038
// 00563029  8d4c242c             lea ecx, [esp + 0x2c]
// 0056302d  6a01                 push 1
// 0056302f  51                   push ecx
// 00563030  8bd1                 mov edx, ecx
// 00563032  52                   push edx
// 00563033  ffd0                 call eax
// 00563035  83c40c               add esp, 0xc
// 00563038  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056303c  5f                   pop edi
// 0056303d  5e                   pop esi
// 0056303e  64890d00000000       mov dword ptr fs:[0], ecx
// 00563045  5b                   pop ebx
// 00563046  83c410               add esp, 0x10
// 00563049  c22400               ret 0x24

typedef void (__cdecl *Manager)(const void *, void *, int);

struct Result;

struct Function {
    Manager *manager;
    union Storage {
        double alignment[3];
        char bytes[24];
    } storage;

    Function(Result, int);
    Function(const Function &);
    ~Function();
};

struct Result {
    double data[5];
    Result(const Result &);
};

struct String {
    unsigned char data[32];
};

extern unsigned char flag1;
extern unsigned char flag2;
extern void __cdecl callback();
extern Result __cdecl bindCallback(void (__cdecl *)(), int, int, Function);

struct S {
    void invoke(const String &, Function);
    void f(const String &, Function);
};

inline Function::Function(const Function &other)
{
    manager = 0;
    if (other.manager) {
        manager = other.manager;
        (*other.manager)(&other.storage, &storage, 0);
    }
}

inline Function::~Function()
{
    if (manager) {
        Manager destroy = *manager;
        if (destroy)
            destroy(&storage, &storage, 1);
    }
}

void S::f(const String &s, Function function)
{
    invoke(s, Function(bindCallback(callback, flag1, flag2, function), 0));
}
