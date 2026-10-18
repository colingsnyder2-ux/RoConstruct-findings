// from server: 91% by colin
// from server: 89% by king_originala
// roc 2008-06 00459ba0  unit: VCRobloxView::?$VerbBinder  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459ba0
//
// 00459ba0  6aff                 push -1
// 00459ba2  68cb287c00           push 0x7c28cb
// 00459ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00459bad  50                   push eax
// 00459bae  64892500000000       mov dword ptr fs:[0], esp
// 00459bb5  51                   push ecx
// 00459bb6  53                   push ebx
// 00459bb7  56                   push esi
// 00459bb8  8bf1                 mov esi, ecx
// 00459bba  8d5e78               lea ebx, [esi + 0x78]
// 00459bbd  57                   push edi
// 00459bbe  8974240c             mov dword ptr [esp + 0xc], esi
// 00459bc2  c7063c938100         mov dword ptr [esi], 0x81933c
// 00459bc8  c70330938100         mov dword ptr [ebx], 0x819330
// 00459bce  c786a000000024938100 mov dword ptr [esi + 0xa0], 0x819324
// 00459bd8  c786a400000018938100 mov dword ptr [esi + 0xa4], 0x819318
// 00459be2  c786a80000000c938100 mov dword ptr [esi + 0xa8], 0x81930c
// 00459bec  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 00459bf2  c744241809000000     mov dword ptr [esp + 0x18], 9
// 00459bfa  85c9                 test ecx, ecx
// 00459bfc  7409                 je 0x459c07
// 00459bfe  8b01                 mov eax, dword ptr [ecx]
// 00459c00  8b5004               mov edx, dword ptr [eax + 4]
// 00459c03  6a01                 push 1
// 00459c05  ffd2                 call edx
// 00459c07  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 00459c0d  c644241808           mov byte ptr [esp + 0x18], 8
// 00459c12  85c9                 test ecx, ecx
// 00459c14  7409                 je 0x459c1f
// 00459c16  8b01                 mov eax, dword ptr [ecx]
// 00459c18  8b5004               mov edx, dword ptr [eax + 4]
// 00459c1b  6a01                 push 1
// 00459c1d  ffd2                 call edx
// 00459c1f  8b8ee4010000         mov ecx, dword ptr [esi + 0x1e4]
// 00459c25  c644241807           mov byte ptr [esp + 0x18], 7
// 00459c2a  85c9                 test ecx, ecx
// 00459c2c  7409                 je 0x459c37
// 00459c2e  8b01                 mov eax, dword ptr [ecx]
// 00459c30  8b5004               mov edx, dword ptr [eax + 4]
// 00459c33  6a01                 push 1
// 00459c35  ffd2                 call edx
// 00459c37  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 00459c3d  c644241806           mov byte ptr [esp + 0x18], 6
// 00459c42  85c9                 test ecx, ecx
// 00459c44  7409                 je 0x459c4f
// 00459c46  8b01                 mov eax, dword ptr [ecx]
// 00459c48  8b5004               mov edx, dword ptr [eax + 4]
// 00459c4b  6a01                 push 1
// 00459c4d  ffd2                 call edx
// 00459c4f  8b8edc010000         mov ecx, dword ptr [esi + 0x1dc]
// 00459c55  c644241805           mov byte ptr [esp + 0x18], 5
// 00459c5a  85c9                 test ecx, ecx
// 00459c5c  7409                 je 0x459c67
// 00459c5e  8b01                 mov eax, dword ptr [ecx]
// 00459c60  8b5004               mov edx, dword ptr [eax + 4]
// 00459c63  6a01                 push 1
// 00459c65  ffd2                 call edx
// 00459c67  8d8e80010000         lea ecx, [esi + 0x180]
// 00459c6d  c644241804           mov byte ptr [esp + 0x18], 4
// 00459c72  e8d991fdff           call 0x432e50
// 00459c77  8d8e78010000         lea ecx, [esi + 0x178]
// 00459c7d  c644241803           mov byte ptr [esp + 0x18], 3
// 00459c82  c701dcfb8000         mov dword ptr [ecx], 0x80fbdc
// 00459c88  e893722400           call 0x6a0f20
// 00459c8d  8bbe74010000         mov edi, dword ptr [esi + 0x174]
// 00459c93  c644241802           mov byte ptr [esp + 0x18], 2
// 00459c98  85ff                 test edi, edi
// 00459c9a  742a                 je 0x459cc6
// 00459c9c  8d4704               lea eax, [edi + 4]
// 00459c9f  83c9ff               or ecx, 0xffffffff
// 00459ca2  f00fc108             lock xadd dword ptr [eax], ecx
// 00459ca6  751e                 jne 0x459cc6
// 00459ca8  8b17                 mov edx, dword ptr [edi]
// 00459caa  8b4204               mov eax, dword ptr [edx + 4]
// 00459cad  8bcf                 mov ecx, edi
// 00459caf  ffd0                 call eax
// 00459cb1  8d4f08               lea ecx, [edi + 8]
// 00459cb4  83caff               or edx, 0xffffffff
// 00459cb7  f00fc111             lock xadd dword ptr [ecx], edx
// 00459cbb  7509                 jne 0x459cc6
// 00459cbd  8b07                 mov eax, dword ptr [edi]
// 00459cbf  8b5008               mov edx, dword ptr [eax + 8]
// 00459cc2  8bcf                 mov ecx, edi
// 00459cc4  ffd2                 call edx
// 00459cc6  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00459ccc  c644241801           mov byte ptr [esp + 0x18], 1
// 00459cd1  e80a5f0000           call 0x45fbe0
// 00459cd6  8bcb                 mov ecx, ebx
// 00459cd8  c644241800           mov byte ptr [esp + 0x18], 0
// 00459cdd  e8fe951200           call 0x5832e0
// 00459ce2  8d4e58               lea ecx, [esi + 0x58]
// 00459ce5  c74424180a000000     mov dword ptr [esp + 0x18], 0xa
// 00459ced  e88ea00f00           call 0x553d80
// 00459cf2  8bce                 mov ecx, esi
// 00459cf4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00459cfc  e897722400           call 0x6a0f98
// 00459d01  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00459d05  5f                   pop edi
// 00459d06  5e                   pop esi
// 00459d07  5b                   pop ebx
// 00459d08  64890d00000000       mov dword ptr fs:[0], ecx
// 00459d0f  83c410               add esp, 0x10
// 00459d12  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object {
    virtual void first();
    virtual ~Object();
};

struct Owner {
    Object* pointer;
    ~Owner();
};

inline Owner::~Owner()
{
    delete pointer;
}

struct Control {
    virtual void first();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Root {
    virtual ~Root();
    char data[0x54];
};

struct Chunk {
    char data[0x20];
    ~Chunk();
};

struct Primary : Root {
    Chunk chunk;
    ~Primary();
};

inline Primary::~Primary()
{
}

struct Verb {
    virtual ~Verb();
    char data[0x24];
};

struct Interface1 {
    virtual void method1() = 0;
};

struct Interface2 {
    virtual void method2() = 0;
};

struct Interface3 {
    virtual void method3() = 0;
};

struct Storage {
    char data[0xc0];
    ~Storage();
};

struct SmallBase {
    virtual ~SmallBase();
    char data[4];
};

struct __declspec(dllimport) Small : SmallBase {
    ~Small();
};

struct B_func_00432e50 {
    virtual ~B_func_00432e50();
};

struct S_func_00432e50 : B_func_00432e50 {
    char data[0x58];
    ~S_func_00432e50();
};

struct Binder : Primary, Verb, Interface1, Interface2, Interface3 {
    char padding[4];
    Storage storage;
    Shared shared;
    Small small;
    S_func_00432e50 member;
    Owner owner1;
    Owner owner2;
    Owner owner3;
    Owner owner4;
    Owner owner5;

    virtual void method1();
    virtual void method2();
    virtual void method3();
    ~Binder();
};

Binder::~Binder()
{
}
