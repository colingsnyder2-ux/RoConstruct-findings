// from server: 100% by colin
// roc 2008-06 004b5ca0  unit: RBX::Network::VClient::?$FactoryProduct  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5ca0
//
// 004b5ca0  6aff                 push -1
// 004b5ca2  683b467d00           push 0x7d463b
// 004b5ca7  64a100000000         mov eax, dword ptr fs:[0]
// 004b5cad  50                   push eax
// 004b5cae  64892500000000       mov dword ptr fs:[0], esp
// 004b5cb5  83ec08               sub esp, 8
// 004b5cb8  c7042400000000       mov dword ptr [esp], 0
// 004b5cbf  6878010000           push 0x178
// 004b5cc4  c644240400           mov byte ptr [esp + 4], 0
// 004b5cc9  ff15b0288000         call dword ptr [0x8028b0]
// 004b5ccf  83c404               add esp, 4
// 004b5cd2  89442404             mov dword ptr [esp + 4], eax
// 004b5cd6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b5cde  85c0                 test eax, eax
// 004b5ce0  740e                 je 0x4b5cf0
// 004b5ce2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b5ce6  51                   push ecx
// 004b5ce7  8bc8                 mov ecx, eax
// 004b5ce9  e812f4ffff           call 0x4b5100
// 004b5cee  eb02                 jmp 0x4b5cf2
// 004b5cf0  33c0                 xor eax, eax
// 004b5cf2  8b1424               mov edx, dword ptr [esp]
// 004b5cf5  56                   push esi
// 004b5cf6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004b5cfa  52                   push edx
// 004b5cfb  50                   push eax
// 004b5cfc  8bce                 mov ecx, esi
// 004b5cfe  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b5d06  e85578ffff           call 0x4ad560
// 004b5d0b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5d0f  8bc6                 mov eax, esi
// 004b5d11  5e                   pop esi
// 004b5d12  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5d19  83c414               add esp, 0x14
// 004b5d1c  c3                   ret 

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
