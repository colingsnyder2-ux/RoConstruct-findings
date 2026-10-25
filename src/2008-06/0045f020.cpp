// from server: 100% by king_originala
// roc 2008-06 0045f020  unit: RBX::Stats::H::?$TypedStatsItem  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045f020
//
// 0045f020  6aff                 push -1
// 0045f022  683b467d00           push 0x7d463b
// 0045f027  64a100000000         mov eax, dword ptr fs:[0]
// 0045f02d  50                   push eax
// 0045f02e  64892500000000       mov dword ptr fs:[0], esp
// 0045f035  83ec08               sub esp, 8
// 0045f038  c7042400000000       mov dword ptr [esp], 0
// 0045f03f  6878010000           push 0x178
// 0045f044  c644240400           mov byte ptr [esp + 4], 0
// 0045f049  ff15b0288000         call dword ptr [0x8028b0]
// 0045f04f  83c404               add esp, 4
// 0045f052  89442404             mov dword ptr [esp + 4], eax
// 0045f056  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045f05e  85c0                 test eax, eax
// 0045f060  740e                 je 0x45f070
// 0045f062  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045f066  51                   push ecx
// 0045f067  8bc8                 mov ecx, eax
// 0045f069  e852fcffff           call 0x45ecc0
// 0045f06e  eb02                 jmp 0x45f072
// 0045f070  33c0                 xor eax, eax
// 0045f072  8b1424               mov edx, dword ptr [esp]
// 0045f075  56                   push esi
// 0045f076  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045f07a  52                   push edx
// 0045f07b  50                   push eax
// 0045f07c  8bce                 mov ecx, esi
// 0045f07e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0045f086  e8c5d1ffff           call 0x45c250
// 0045f08b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045f08f  8bc6                 mov eax, esi
// 0045f091  5e                   pop esi
// 0045f092  64890d00000000       mov dword ptr fs:[0], ecx
// 0045f099  83c414               add esp, 0x14
// 0045f09c  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
extern "C" void __cdecl free(void*);

struct Object
{
    unsigned char storage[0x178];

    Object(int);
    static void* operator new(unsigned int) throw();
    static void operator delete(void*);
};

__forceinline void* Object::operator new(unsigned int size) throw()
{
    return malloc(size);
}

__forceinline void Object::operator delete(void* memory)
{
    free(memory);
}

struct Shared
{
    Object* object;
    void* control;

    Shared(Object*, int);
};

union Tag
{
    int value;
    unsigned char byte;
};

Shared create(int argument)
{
    volatile Tag tag;
    tag.value = 0;
    tag.byte = 0;
    return Shared(new Object(argument), tag.value);
}
