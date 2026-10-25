// from server: 100% by king_originala
// roc 2008-06 00438940  unit: IIHAAH::?$CMap  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438940
//
// 00438940  6aff                 push -1
// 00438942  6838077d00           push 0x7d0738
// 00438947  64a100000000         mov eax, dword ptr fs:[0]
// 0043894d  50                   push eax
// 0043894e  64892500000000       mov dword ptr fs:[0], esp
// 00438955  51                   push ecx
// 00438956  56                   push esi
// 00438957  8bf1                 mov esi, ecx
// 00438959  33c0                 xor eax, eax
// 0043895b  8906                 mov dword ptr [esi], eax
// 0043895d  89742404             mov dword ptr [esp + 4], esi
// 00438961  894604               mov dword ptr [esi + 4], eax
// 00438964  89442410             mov dword ptr [esp + 0x10], eax
// 00438968  894608               mov dword ptr [esi + 8], eax
// 0043896b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0043896f  50                   push eax
// 00438970  e88be51300           call 0x576f00
// 00438975  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00438979  8bc6                 mov eax, esi
// 0043897b  5e                   pop esi
// 0043897c  64890d00000000       mov dword ptr fs:[0], ecx
// 00438983  83c410               add esp, 0x10
// 00438986  c20400               ret 4

struct First
{
    void* first;

    First() : first(0) {}
};

struct Storage
{
    void* last;

    Storage() : last(0) {}
    ~Storage();
};

struct S : First, Storage
{
    void* limit;

    explicit S(unsigned int count);
    void initialize(unsigned int count);
};

S::S(unsigned int count) : First(), Storage(), limit(0)
{
    initialize(count);
}
