// from server: 100% by colin
// roc 2008-06 004a21c0  unit: RBX::Network::P8Players::?$GetImpl  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a21c0
//
// 004a21c0  6aff                 push -1
// 004a21c2  683b467d00           push 0x7d463b
// 004a21c7  64a100000000         mov eax, dword ptr fs:[0]
// 004a21cd  50                   push eax
// 004a21ce  64892500000000       mov dword ptr fs:[0], esp
// 004a21d5  83ec08               sub esp, 8
// 004a21d8  c7042400000000       mov dword ptr [esp], 0
// 004a21df  68782d0000           push 0x2d78
// 004a21e4  c644240400           mov byte ptr [esp + 4], 0
// 004a21e9  ff15b0288000         call dword ptr [0x8028b0]
// 004a21ef  83c404               add esp, 4
// 004a21f2  89442404             mov dword ptr [esp + 4], eax
// 004a21f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a21fe  85c0                 test eax, eax
// 004a2200  7418                 je 0x4a221a
// 004a2202  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a2206  8b542420             mov edx, dword ptr [esp + 0x20]
// 004a220a  51                   push ecx
// 004a220b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a220f  52                   push edx
// 004a2210  51                   push ecx
// 004a2211  8bc8                 mov ecx, eax
// 004a2213  e8b8fcffff           call 0x4a1ed0
// 004a2218  eb02                 jmp 0x4a221c
// 004a221a  33c0                 xor eax, eax
// 004a221c  8b1424               mov edx, dword ptr [esp]
// 004a221f  56                   push esi
// 004a2220  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004a2224  52                   push edx
// 004a2225  50                   push eax
// 004a2226  8bce                 mov ecx, esi
// 004a2228  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004a2230  e86bfeffff           call 0x4a20a0
// 004a2235  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a2239  8bc6                 mov eax, esi
// 004a223b  5e                   pop esi
// 004a223c  64890d00000000       mov dword ptr fs:[0], ecx
// 004a2243  83c414               add esp, 0x14
// 004a2246  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
void __cdecl operator delete(void*);

struct Client
{
    char storage[0x2d78];

    Client(void*, void*, void*);

    static void* operator new(unsigned int size)
    {
        return malloc(size);
    }

    static void operator delete(void* p)
    {
        ::operator delete(p);
    }
};

struct Shared
{
    Client* pointer;
    void* count;

    Shared(Client*, int);
};

Shared __cdecl createClient(void* a, void* b, void* c)
{
    int tag = 0;
    *reinterpret_cast<volatile char*>(&tag) = 0;
    return Shared(new Client(a, b, c), tag);
}
