// from server: 100% by colin
// roc 2008-06 004ea860  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea860
//
// 004ea860  6aff                 push -1
// 004ea862  686ea87c00           push 0x7ca86e
// 004ea867  64a100000000         mov eax, dword ptr fs:[0]
// 004ea86d  50                   push eax
// 004ea86e  64892500000000       mov dword ptr fs:[0], esp
// 004ea875  51                   push ecx
// 004ea876  56                   push esi
// 004ea877  8bf1                 mov esi, ecx
// 004ea879  c70600000000         mov dword ptr [esi], 0
// 004ea87f  89742404             mov dword ptr [esp + 4], esi
// 004ea883  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea88a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ea88e  8b4804               mov ecx, dword ptr [eax + 4]
// 004ea891  8b10                 mov edx, dword ptr [eax]
// 004ea893  6a00                 push 0
// 004ea895  51                   push ecx
// 004ea896  52                   push edx
// 004ea897  8d4e08               lea ecx, [esi + 8]
// 004ea89a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ea8a2  e8b9f9ffff           call 0x4ea260
// 004ea8a7  6a28                 push 0x28
// 004ea8a9  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea8ae  e86d601b00           call 0x6a0920
// 004ea8b3  83c404               add esp, 4
// 004ea8b6  89442418             mov dword ptr [esp + 0x18], eax
// 004ea8ba  c644241002           mov byte ptr [esp + 0x10], 2
// 004ea8bf  85c0                 test eax, eax
// 004ea8c1  7409                 je 0x4ea8cc
// 004ea8c3  8bc8                 mov ecx, eax
// 004ea8c5  e87604f3ff           call 0x41ad40
// 004ea8ca  eb02                 jmp 0x4ea8ce
// 004ea8cc  33c0                 xor eax, eax
// 004ea8ce  50                   push eax
// 004ea8cf  8bce                 mov ecx, esi
// 004ea8d1  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea8d6  e81508f3ff           call 0x41b0f0
// 004ea8db  8bce                 mov ecx, esi
// 004ea8dd  e85eaf0a00           call 0x595840
// 004ea8e2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ea8e6  8bc6                 mov eax, esi
// 004ea8e8  5e                   pop esi
// 004ea8e9  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea8f0  83c410               add esp, 0x10
// 004ea8f3  c20400               ret 4

typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Pair {
    int a;
    int b;
};

struct Object {
    char storage[40];
    Object();
};

struct Count {
    int value;
    Count();
};

inline Count::Count() : value(0) {}

struct Owner {
    int a;
    Count b;
    Owner();
    ~Owner();
    void attach(Object*);
};

inline Owner::Owner() : a(0) {}

struct Member {
    int storage[3];
    Member(int, int, int);
    ~Member();
};

struct S : Owner {
    Member member;
    S(const Pair&);
    void finish();
};

S::S(const Pair& p) : Owner(), member(p.a, p.b, 0)
{
    attach(new Object);
    finish();
}
