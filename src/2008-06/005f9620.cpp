// from server: 100% by king_originala
// roc 2008-06 005f9620  unit: UString_sink::?$stream_buffer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9620
//
// 005f9620  6aff                 push -1
// 005f9622  68a37b7d00           push 0x7d7ba3
// 005f9627  64a100000000         mov eax, dword ptr fs:[0]
// 005f962d  50                   push eax
// 005f962e  64892500000000       mov dword ptr fs:[0], esp
// 005f9635  83ec08               sub esp, 8
// 005f9638  56                   push esi
// 005f9639  8bf1                 mov esi, ecx
// 005f963b  89742408             mov dword ptr [esp + 8], esi
// 005f963f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005f9642  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005f964a  85c0                 test eax, eax
// 005f964c  740f                 je 0x5f965d
// 005f964e  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 005f9651  51                   push ecx
// 005f9652  50                   push eax
// 005f9653  8d4c240f             lea ecx, [esp + 0xf]
// 005f9657  ff1578238000         call dword ptr [0x802378]
// 005f965d  807e4400             cmp byte ptr [esi + 0x44], 0
// 005f9661  7404                 je 0x5f9667
// 005f9663  c6464400             mov byte ptr [esi + 0x44], 0
// 005f9667  8bce                 mov ecx, esi
// 005f9669  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f9671  ff1544258000         call dword ptr [0x802544]
// 005f9677  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f967b  5e                   pop esi
// 005f967c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9683  83c414               add esp, 0x14
// 005f9686  c3                   ret 

extern void (__thiscall *deallocate_call)(void *, char *, unsigned int);
extern void (__thiscall *streambuf_destructor_call)(void *);

struct Allocator {
    Allocator();
    void deallocate(char *, unsigned int);
};

__forceinline Allocator::Allocator()
{
}

__forceinline void Allocator::deallocate(char *p, unsigned int n)
{
    deallocate_call(this, p, n);
}

struct Streambuf {
    char storage[0x44];
    ~Streambuf();
};

__forceinline Streambuf::~Streambuf()
{
    streambuf_destructor_call(this);
}

struct Flag {
    unsigned char active;
    ~Flag();
};

__forceinline Flag::~Flag()
{
    if (active)
        active = 0;
}

struct S : Streambuf {
    Flag flag;
    unsigned char padding[7];
    char *buffer;
    unsigned int capacity;

    ~S();
};

S::~S()
{
    if (buffer)
        Allocator().deallocate(buffer, capacity);
}
