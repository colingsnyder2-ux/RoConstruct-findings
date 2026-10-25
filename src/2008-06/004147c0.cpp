// from server: 100% by king_originala
// roc 2008-06 004147c0  unit: CopyVerb  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004147c0
//
// 004147c0  6aff                 push -1
// 004147c2  6848d97b00           push 0x7bd948
// 004147c7  64a100000000         mov eax, dword ptr fs:[0]
// 004147cd  50                   push eax
// 004147ce  64892500000000       mov dword ptr fs:[0], esp
// 004147d5  51                   push ecx
// 004147d6  56                   push esi
// 004147d7  8bf1                 mov esi, ecx
// 004147d9  89742404             mov dword ptr [esp + 4], esi
// 004147dd  8d4e28               lea ecx, [esi + 0x28]
// 004147e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004147e8  e853ffffff           call 0x414740
// 004147ed  83c608               add esi, 8
// 004147f0  8bce                 mov ecx, esi
// 004147f2  e819b22300           call 0x64fa10
// 004147f7  8b06                 mov eax, dword ptr [esi]
// 004147f9  50                   push eax
// 004147fa  e87bbe2800           call 0x6a067a
// 004147ff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00414803  83c404               add esp, 4
// 00414806  5e                   pop esi
// 00414807  64890d00000000       mov dword ptr fs:[0], ecx
// 0041480e  83c410               add esp, 0x10
// 00414811  c3                   ret 

extern "C" void __cdecl releaseMemory(void*) throw();

struct Storage {
    void* allocation;
    char reserved[28];

    void clear() throw();
    ~Storage();
};

struct Tail {
    ~Tail();
};

struct CopyVerb {
    char reserved[8];
    Storage storage;
    Tail tail;

    ~CopyVerb();
};

inline Storage::~Storage()
{
    clear();
    releaseMemory(allocation);
}

CopyVerb::~CopyVerb()
{
}
