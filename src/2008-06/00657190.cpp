// from server: 100% by king_originala
// roc 2008-06 00657190  unit: RBX::ImageKeyButton  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00657190
//
// 00657190  6aff                 push -1
// 00657192  68fdbb7d00           push 0x7dbbfd
// 00657197  64a100000000         mov eax, dword ptr fs:[0]
// 0065719d  50                   push eax
// 0065719e  64892500000000       mov dword ptr fs:[0], esp
// 006571a5  83ec0c               sub esp, 0xc
// 006571a8  c744240400000000     mov dword ptr [esp + 4], 0
// 006571b0  6890010000           push 0x190
// 006571b5  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006571bd  c644240400           mov byte ptr [esp + 4], 0
// 006571c2  ff15b0288000         call dword ptr [0x8028b0]
// 006571c8  83c404               add esp, 4
// 006571cb  89442408             mov dword ptr [esp + 8], eax
// 006571cf  c644241402           mov byte ptr [esp + 0x14], 2
// 006571d4  85c0                 test eax, eax
// 006571d6  7422                 je 0x6571fa
// 006571d8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006571dc  8b542444             mov edx, dword ptr [esp + 0x44]
// 006571e0  51                   push ecx
// 006571e1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006571e5  52                   push edx
// 006571e6  51                   push ecx
// 006571e7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006571eb  8d542430             lea edx, [esp + 0x30]
// 006571ef  52                   push edx
// 006571f0  51                   push ecx
// 006571f1  8bc8                 mov ecx, eax
// 006571f3  e8a8feffff           call 0x6570a0
// 006571f8  eb02                 jmp 0x6571fc
// 006571fa  33c0                 xor eax, eax
// 006571fc  8b1424               mov edx, dword ptr [esp]
// 006571ff  56                   push esi
// 00657200  8b742420             mov esi, dword ptr [esp + 0x20]
// 00657204  52                   push edx
// 00657205  50                   push eax
// 00657206  8bce                 mov ecx, esi
// 00657208  c644242001           mov byte ptr [esp + 0x20], 1
// 0065720d  e89efcffff           call 0x656eb0
// 00657212  8d4c2428             lea ecx, [esp + 0x28]
// 00657216  c744240801000000     mov dword ptr [esp + 8], 1
// 0065721e  c644241800           mov byte ptr [esp + 0x18], 0
// 00657223  ff1568248000         call dword ptr [0x802468]
// 00657229  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065722d  8bc6                 mov eax, esi
// 0065722f  5e                   pop esi
// 00657230  64890d00000000       mov dword ptr fs:[0], ecx
// 00657237  83c418               add esp, 0x18
// 0065723a  c3                   ret 

extern "C" {
    extern void* (__cdecl *malloc)(unsigned int);
    void __cdecl free(void*);
}

struct String {
    char storage[28];
    ~String();
};

extern void (__thiscall *destroyString)(String*);

__forceinline String::~String()
{
    destroyString(this);
}

struct S {
    unsigned long data[0x190 / 4];

    S(void*, void*, void*, void*, void*);
    static void* operator new(unsigned int) throw();
    static void operator delete(void*);
};

void* S::operator new(unsigned int size) throw()
{
    return malloc(size);
}

void S::operator delete(void* p)
{
    free(p);
}

struct Deleter {};

struct Shared {
    void* object;
    void* control;

    Shared(S*, Deleter);
    ~Shared();
};

Shared __cdecl create(void* a, String b, void* c, void* d, void* e)
{
    return Shared(new S(a, &b, c, d, e), Deleter());
}
