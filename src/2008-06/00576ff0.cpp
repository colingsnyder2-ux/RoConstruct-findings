// from server: 100% by king_originala
// roc 2008-06 00576ff0  unit: RBX::DataModel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576ff0
//
// 00576ff0  6aff                 push -1
// 00576ff2  683b467d00           push 0x7d463b
// 00576ff7  64a100000000         mov eax, dword ptr fs:[0]
// 00576ffd  50                   push eax
// 00576ffe  64892500000000       mov dword ptr fs:[0], esp
// 00577005  83ec08               sub esp, 8
// 00577008  c7042400000000       mov dword ptr [esp], 0
// 0057700f  685c040000           push 0x45c
// 00577014  c644240400           mov byte ptr [esp + 4], 0
// 00577019  ff15b0288000         call dword ptr [0x8028b0]
// 0057701f  83c404               add esp, 4
// 00577022  89442404             mov dword ptr [esp + 4], eax
// 00577026  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057702e  85c0                 test eax, eax
// 00577030  7428                 je 0x57705a
// 00577032  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00577036  85d2                 test edx, edx
// 00577038  7412                 je 0x57704c
// 0057703a  81c2f0010000         add edx, 0x1f0
// 00577040  6a01                 push 1
// 00577042  52                   push edx
// 00577043  8bc8                 mov ecx, eax
// 00577045  e846dd0200           call 0x5a4d90
// 0057704a  eb10                 jmp 0x57705c
// 0057704c  33d2                 xor edx, edx
// 0057704e  6a01                 push 1
// 00577050  52                   push edx
// 00577051  8bc8                 mov ecx, eax
// 00577053  e838dd0200           call 0x5a4d90
// 00577058  eb02                 jmp 0x57705c
// 0057705a  33c0                 xor eax, eax
// 0057705c  8b0c24               mov ecx, dword ptr [esp]
// 0057705f  56                   push esi
// 00577060  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00577064  51                   push ecx
// 00577065  50                   push eax
// 00577066  8bce                 mov ecx, esi
// 00577068  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00577070  e8abfaffff           call 0x576b20
// 00577075  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577079  8bc6                 mov eax, esi
// 0057707b  5e                   pop esi
// 0057707c  64890d00000000       mov dword ptr fs:[0], ecx
// 00577083  83c414               add esp, 0x14
// 00577086  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);

struct Base
{
    char data;
};

struct Source
{
    char padding[0x1f0];
    Base base;
};

struct Object
{
    char storage[0x45c];

    Object(Base*, bool);
    static void* operator new(unsigned int size);
    static void operator delete(void*);
};

inline void* Object::operator new(unsigned int size)
{
    return malloc(size);
}

struct Tag
{
    int value;
    Tag();
};

inline Tag::Tag() : value(0)
{
    *reinterpret_cast<volatile char*>(&value) = 0;
}

struct Result
{
    Result(Object*, Tag);
};

Result __cdecl func_00576ff0(Source* source)
{
    Tag tag;
    Object* object = new Object(source ? &source->base : 0, true);
    return Result(object, tag);
}
