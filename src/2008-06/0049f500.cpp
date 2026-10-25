// from server: 100% by king_originala
// roc 2008-06 0049f500  unit: RBX::Network::Client  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f500
//
// 0049f500  6aff                 push -1
// 0049f502  683b467d00           push 0x7d463b
// 0049f507  64a100000000         mov eax, dword ptr fs:[0]
// 0049f50d  50                   push eax
// 0049f50e  64892500000000       mov dword ptr fs:[0], esp
// 0049f515  83ec08               sub esp, 8
// 0049f518  c7042400000000       mov dword ptr [esp], 0
// 0049f51f  68682d0000           push 0x2d68
// 0049f524  c644240400           mov byte ptr [esp + 4], 0
// 0049f529  ff15b0288000         call dword ptr [0x8028b0]
// 0049f52f  83c404               add esp, 4
// 0049f532  89442404             mov dword ptr [esp + 4], eax
// 0049f536  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049f53e  85c0                 test eax, eax
// 0049f540  7418                 je 0x49f55a
// 0049f542  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049f546  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049f54a  51                   push ecx
// 0049f54b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049f54f  52                   push edx
// 0049f550  51                   push ecx
// 0049f551  8bc8                 mov ecx, eax
// 0049f553  e878a60100           call 0x4b9bd0
// 0049f558  eb02                 jmp 0x49f55c
// 0049f55a  33c0                 xor eax, eax
// 0049f55c  8b1424               mov edx, dword ptr [esp]
// 0049f55f  56                   push esi
// 0049f560  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049f564  52                   push edx
// 0049f565  50                   push eax
// 0049f566  8bce                 mov ecx, esi
// 0049f568  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0049f570  e83bf1ffff           call 0x49e6b0
// 0049f575  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049f579  8bc6                 mov eax, esi
// 0049f57b  5e                   pop esi
// 0049f57c  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f583  83c414               add esp, 0x14
// 0049f586  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
void __cdecl operator delete(void*);

struct Client
{
    char storage[0x2d68];

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
