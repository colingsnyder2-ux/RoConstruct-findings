// from server: 100% by king_originala
// roc 2008-06 005bd1d0  unit: VStockSound::?$FactoryProduct  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bd1d0
//
// 005bd1d0  6aff                 push -1
// 005bd1d2  683b467d00           push 0x7d463b
// 005bd1d7  64a100000000         mov eax, dword ptr fs:[0]
// 005bd1dd  50                   push eax
// 005bd1de  64892500000000       mov dword ptr fs:[0], esp
// 005bd1e5  83ec08               sub esp, 8
// 005bd1e8  c7042400000000       mov dword ptr [esp], 0
// 005bd1ef  6870010000           push 0x170
// 005bd1f4  c644240400           mov byte ptr [esp + 4], 0
// 005bd1f9  ff15b0288000         call dword ptr [0x8028b0]
// 005bd1ff  83c404               add esp, 4
// 005bd202  89442404             mov dword ptr [esp + 4], eax
// 005bd206  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bd20e  85c0                 test eax, eax
// 005bd210  740e                 je 0x5bd220
// 005bd212  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bd216  51                   push ecx
// 005bd217  8bc8                 mov ecx, eax
// 005bd219  e822faffff           call 0x5bcc40
// 005bd21e  eb02                 jmp 0x5bd222
// 005bd220  33c0                 xor eax, eax
// 005bd222  8b1424               mov edx, dword ptr [esp]
// 005bd225  56                   push esi
// 005bd226  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005bd22a  52                   push edx
// 005bd22b  50                   push eax
// 005bd22c  8bce                 mov ecx, esi
// 005bd22e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bd236  e8c5aaffff           call 0x5b7d00
// 005bd23b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bd23f  8bc6                 mov eax, esi
// 005bd241  5e                   pop esi
// 005bd242  64890d00000000       mov dword ptr fs:[0], ecx
// 005bd249  83c414               add esp, 0x14
// 005bd24c  c3                   ret 

typedef unsigned int size_t;

extern "C" void* (__cdecl *malloc)(size_t);
extern "C" void __cdecl free(void*);

inline void* __cdecl operator new(size_t size)
{
    return malloc(size);
}

inline void __cdecl operator delete(void* memory)
{
    free(memory);
}

struct Object {
    char storage[0x170];
    Object(const char*);
};

struct Deleter {
};

struct Result {
    void* object;
    void* control;

    Result(Object*, Deleter);
    ~Result();
};

Result __cdecl create(const char* text)
{
    return Result(new Object(text), Deleter());
}
