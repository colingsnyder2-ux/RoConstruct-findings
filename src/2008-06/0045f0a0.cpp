// from server: 100% by colin
// roc 2008-06 0045f0a0  unit: RBX::Stats::H::?$TypedStatsItem  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045f0a0
//
// 0045f0a0  6aff                 push -1
// 0045f0a2  683b467d00           push 0x7d463b
// 0045f0a7  64a100000000         mov eax, dword ptr fs:[0]
// 0045f0ad  50                   push eax
// 0045f0ae  64892500000000       mov dword ptr fs:[0], esp
// 0045f0b5  83ec08               sub esp, 8
// 0045f0b8  c7042400000000       mov dword ptr [esp], 0
// 0045f0bf  6878010000           push 0x178
// 0045f0c4  c644240400           mov byte ptr [esp + 4], 0
// 0045f0c9  ff15b0288000         call dword ptr [0x8028b0]
// 0045f0cf  83c404               add esp, 4
// 0045f0d2  89442404             mov dword ptr [esp + 4], eax
// 0045f0d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045f0de  85c0                 test eax, eax
// 0045f0e0  740e                 je 0x45f0f0
// 0045f0e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0045f0e6  51                   push ecx
// 0045f0e7  8bc8                 mov ecx, eax
// 0045f0e9  e802feffff           call 0x45eef0
// 0045f0ee  eb02                 jmp 0x45f0f2
// 0045f0f0  33c0                 xor eax, eax
// 0045f0f2  8b1424               mov edx, dword ptr [esp]
// 0045f0f5  56                   push esi
// 0045f0f6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0045f0fa  52                   push edx
// 0045f0fb  50                   push eax
// 0045f0fc  8bce                 mov ecx, esi
// 0045f0fe  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0045f106  e8f5d1ffff           call 0x45c300
// 0045f10b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045f10f  8bc6                 mov eax, esi
// 0045f111  5e                   pop esi
// 0045f112  64890d00000000       mov dword ptr fs:[0], ecx
// 0045f119  83c414               add esp, 0x14
// 0045f11c  c3                   ret 

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
