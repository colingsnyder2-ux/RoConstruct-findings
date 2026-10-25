// from server: 100% by king_originala
// roc 2008-06 005bc9d0  unit: RBX::Stats::I::?$TypedStatsItem  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bc9d0
//
// 005bc9d0  6aff                 push -1
// 005bc9d2  683b467d00           push 0x7d463b
// 005bc9d7  64a100000000         mov eax, dword ptr fs:[0]
// 005bc9dd  50                   push eax
// 005bc9de  64892500000000       mov dword ptr fs:[0], esp
// 005bc9e5  83ec08               sub esp, 8
// 005bc9e8  c7042400000000       mov dword ptr [esp], 0
// 005bc9ef  6878010000           push 0x178
// 005bc9f4  c644240400           mov byte ptr [esp + 4], 0
// 005bc9f9  ff15b0288000         call dword ptr [0x8028b0]
// 005bc9ff  83c404               add esp, 4
// 005bca02  89442404             mov dword ptr [esp + 4], eax
// 005bca06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bca0e  85c0                 test eax, eax
// 005bca10  740e                 je 0x5bca20
// 005bca12  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005bca16  51                   push ecx
// 005bca17  8bc8                 mov ecx, eax
// 005bca19  e842feffff           call 0x5bc860
// 005bca1e  eb02                 jmp 0x5bca22
// 005bca20  33c0                 xor eax, eax
// 005bca22  8b1424               mov edx, dword ptr [esp]
// 005bca25  56                   push esi
// 005bca26  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005bca2a  52                   push edx
// 005bca2b  50                   push eax
// 005bca2c  8bce                 mov ecx, esi
// 005bca2e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bca36  e815b5ffff           call 0x5b7f50
// 005bca3b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bca3f  8bc6                 mov eax, esi
// 005bca41  5e                   pop esi
// 005bca42  64890d00000000       mov dword ptr fs:[0], ecx
// 005bca49  83c414               add esp, 0x14
// 005bca4c  c3                   ret 

extern "C" void* (__cdecl *malloc)(unsigned int);
extern "C" void __cdecl free(void*);

struct Object {
    char storage[0x178];

    Object(unsigned int);
    static void* operator new(unsigned int n) { return malloc(n); }
    static void operator delete(void* p) { free(p); }
};

struct Empty {};

struct Result {
    Object* object;
    void* control;

    Result(Object*, Empty = Empty());
    ~Result();
};

Result create(unsigned int argument)
{
    return Result(new Object(argument));
}
