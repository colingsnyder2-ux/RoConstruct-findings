// from server: 100% by king_originala
// roc 2008-06 004ea900  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea900
//
// 004ea900  6aff                 push -1
// 004ea902  686ea87c00           push 0x7ca86e
// 004ea907  64a100000000         mov eax, dword ptr fs:[0]
// 004ea90d  50                   push eax
// 004ea90e  64892500000000       mov dword ptr fs:[0], esp
// 004ea915  51                   push ecx
// 004ea916  56                   push esi
// 004ea917  8bf1                 mov esi, ecx
// 004ea919  c70600000000         mov dword ptr [esi], 0
// 004ea91f  89742404             mov dword ptr [esp + 4], esi
// 004ea923  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea92a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ea92e  8b4804               mov ecx, dword ptr [eax + 4]
// 004ea931  8b10                 mov edx, dword ptr [eax]
// 004ea933  6a00                 push 0
// 004ea935  51                   push ecx
// 004ea936  52                   push edx
// 004ea937  8d4e08               lea ecx, [esi + 8]
// 004ea93a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ea942  e879f9ffff           call 0x4ea2c0
// 004ea947  6a28                 push 0x28
// 004ea949  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea94e  e8cd5f1b00           call 0x6a0920
// 004ea953  83c404               add esp, 4
// 004ea956  89442418             mov dword ptr [esp + 0x18], eax
// 004ea95a  c644241002           mov byte ptr [esp + 0x10], 2
// 004ea95f  85c0                 test eax, eax
// 004ea961  7409                 je 0x4ea96c
// 004ea963  8bc8                 mov ecx, eax
// 004ea965  e8d603f3ff           call 0x41ad40
// 004ea96a  eb02                 jmp 0x4ea96e
// 004ea96c  33c0                 xor eax, eax
// 004ea96e  50                   push eax
// 004ea96f  8bce                 mov ecx, esi
// 004ea971  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea976  e87507f3ff           call 0x41b0f0
// 004ea97b  8bce                 mov ecx, esi
// 004ea97d  e8beae0a00           call 0x595840
// 004ea982  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ea986  8bc6                 mov eax, esi
// 004ea988  5e                   pop esi
// 004ea989  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea990  83c410               add esp, 0x10
// 004ea993  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    char storage[40];
    Object();
};

struct Counter {
    int value;
    Counter();
    ~Counter();
};

inline Counter::Counter() : value(0) {}

struct Member {
    Member(int, int, int);
    ~Member();
};

struct S {
    int first;
    Counter second;
    Member member;

    S(const int*);
    void attach(Object*);
    void finish();
};

S::S(const int* p)
    : first(0), second(), member(p[0], p[1], 0)
{
    attach(new Object);
    finish();
}
