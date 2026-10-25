// from server: 100% by king_originala
// roc 2008-06 00432790  unit: RBX::VAccoutrement::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432790
//
// 00432790  6aff                 push -1
// 00432792  683b467d00           push 0x7d463b
// 00432797  64a100000000         mov eax, dword ptr fs:[0]
// 0043279d  50                   push eax
// 0043279e  64892500000000       mov dword ptr fs:[0], esp
// 004327a5  83ec08               sub esp, 8
// 004327a8  c7042400000000       mov dword ptr [esp], 0
// 004327af  68d8010000           push 0x1d8
// 004327b4  c644240400           mov byte ptr [esp + 4], 0
// 004327b9  ff15b0288000         call dword ptr [0x8028b0]
// 004327bf  83c404               add esp, 4
// 004327c2  89442404             mov dword ptr [esp + 4], eax
// 004327c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004327ce  85c0                 test eax, eax
// 004327d0  740b                 je 0x4327dd
// 004327d2  6a01                 push 1
// 004327d4  8bc8                 mov ecx, eax
// 004327d6  e835051800           call 0x5b2d10
// 004327db  eb02                 jmp 0x4327df
// 004327dd  33c0                 xor eax, eax
// 004327df  8b0c24               mov ecx, dword ptr [esp]
// 004327e2  56                   push esi
// 004327e3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004327e7  51                   push ecx
// 004327e8  50                   push eax
// 004327e9  8bce                 mov ecx, esi
// 004327eb  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004327f3  e8e8feffff           call 0x4326e0
// 004327f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004327fc  8bc6                 mov eax, esi
// 004327fe  5e                   pop esi
// 004327ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00432806  83c414               add esp, 0x14
// 00432809  c3                   ret 

extern "C" void *(__cdecl *malloc)(unsigned int);

struct Object {
    char storage[0x1d8];

    Object(int);
    static void *operator new(unsigned int size);
    static void operator delete(void *);
};

inline void *Object::operator new(unsigned int size)
{
    return malloc(size);
}

struct Result {
    void construct(Object *, int);
};

union Tag {
    int value;
    volatile unsigned char byte;
};

Result *__cdecl create(Result *result)
{
    Tag tag;
    tag.value = 0;
    tag.byte = 0;
    Object *object = new Object(1);
    result->construct(object, tag.value);
    return result;
}
