// from server: 100% by king_originala
// roc 2008-06 004ea720  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea720
//
// 004ea720  6aff                 push -1
// 004ea722  686ea87c00           push 0x7ca86e
// 004ea727  64a100000000         mov eax, dword ptr fs:[0]
// 004ea72d  50                   push eax
// 004ea72e  64892500000000       mov dword ptr fs:[0], esp
// 004ea735  51                   push ecx
// 004ea736  56                   push esi
// 004ea737  8bf1                 mov esi, ecx
// 004ea739  c70600000000         mov dword ptr [esi], 0
// 004ea73f  89742404             mov dword ptr [esp + 4], esi
// 004ea743  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea74a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ea74e  8b4804               mov ecx, dword ptr [eax + 4]
// 004ea751  8b10                 mov edx, dword ptr [eax]
// 004ea753  6a00                 push 0
// 004ea755  51                   push ecx
// 004ea756  52                   push edx
// 004ea757  8d4e08               lea ecx, [esi + 8]
// 004ea75a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ea762  e819f7ffff           call 0x4e9e80
// 004ea767  6a28                 push 0x28
// 004ea769  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea76e  e8ad611b00           call 0x6a0920
// 004ea773  83c404               add esp, 4
// 004ea776  89442418             mov dword ptr [esp + 0x18], eax
// 004ea77a  c644241002           mov byte ptr [esp + 0x10], 2
// 004ea77f  85c0                 test eax, eax
// 004ea781  7409                 je 0x4ea78c
// 004ea783  8bc8                 mov ecx, eax
// 004ea785  e8b605f3ff           call 0x41ad40
// 004ea78a  eb02                 jmp 0x4ea78e
// 004ea78c  33c0                 xor eax, eax
// 004ea78e  50                   push eax
// 004ea78f  8bce                 mov ecx, esi
// 004ea791  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea796  e85509f3ff           call 0x41b0f0
// 004ea79b  8bce                 mov ecx, esi
// 004ea79d  e89eb00a00           call 0x595840
// 004ea7a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ea7a6  8bc6                 mov eax, esi
// 004ea7a8  5e                   pop esi
// 004ea7a9  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea7b0  83c410               add esp, 0x10
// 004ea7b3  c20400               ret 4

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
