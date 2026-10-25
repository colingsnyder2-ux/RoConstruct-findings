// from server: 100% by king_originala
// roc 2008-06 004ea9a0  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea9a0
//
// 004ea9a0  6aff                 push -1
// 004ea9a2  686ea87c00           push 0x7ca86e
// 004ea9a7  64a100000000         mov eax, dword ptr fs:[0]
// 004ea9ad  50                   push eax
// 004ea9ae  64892500000000       mov dword ptr fs:[0], esp
// 004ea9b5  51                   push ecx
// 004ea9b6  56                   push esi
// 004ea9b7  8bf1                 mov esi, ecx
// 004ea9b9  c70600000000         mov dword ptr [esi], 0
// 004ea9bf  89742404             mov dword ptr [esp + 4], esi
// 004ea9c3  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea9ca  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ea9ce  8b4804               mov ecx, dword ptr [eax + 4]
// 004ea9d1  8b10                 mov edx, dword ptr [eax]
// 004ea9d3  6a00                 push 0
// 004ea9d5  51                   push ecx
// 004ea9d6  52                   push edx
// 004ea9d7  8d4e08               lea ecx, [esi + 8]
// 004ea9da  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ea9e2  e839f9ffff           call 0x4ea320
// 004ea9e7  6a28                 push 0x28
// 004ea9e9  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea9ee  e82d5f1b00           call 0x6a0920
// 004ea9f3  83c404               add esp, 4
// 004ea9f6  89442418             mov dword ptr [esp + 0x18], eax
// 004ea9fa  c644241002           mov byte ptr [esp + 0x10], 2
// 004ea9ff  85c0                 test eax, eax
// 004eaa01  7409                 je 0x4eaa0c
// 004eaa03  8bc8                 mov ecx, eax
// 004eaa05  e83603f3ff           call 0x41ad40
// 004eaa0a  eb02                 jmp 0x4eaa0e
// 004eaa0c  33c0                 xor eax, eax
// 004eaa0e  50                   push eax
// 004eaa0f  8bce                 mov ecx, esi
// 004eaa11  c644241401           mov byte ptr [esp + 0x14], 1
// 004eaa16  e8d506f3ff           call 0x41b0f0
// 004eaa1b  8bce                 mov ecx, esi
// 004eaa1d  e81eae0a00           call 0x595840
// 004eaa22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004eaa26  8bc6                 mov eax, esi
// 004eaa28  5e                   pop esi
// 004eaa29  64890d00000000       mov dword ptr fs:[0], ecx
// 004eaa30  83c410               add esp, 0x10
// 004eaa33  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Pair
{
    int first;
    int second;
};

struct Base
{
    int value;

    Base();
    ~Base();
};

Base::Base() : value(0)
{
}

struct Member
{
    Member(int, int, int);
    ~Member();
};

struct Object
{
    char storage[40];

    Object();
};

struct S
{
    int first;
    Base second;
    Member member;

    S(const Pair&);
    void set(Object*);
    void finish();
};

S::S(const Pair& value)
    : first(0), second(), member(value.first, value.second, 0)
{
    set(new Object);
    finish();
}
