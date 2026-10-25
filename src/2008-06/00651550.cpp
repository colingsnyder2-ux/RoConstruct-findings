// from server: 100% by king_originala
// roc 2008-06 00651550  unit: RBX::ScoreHud  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651550
//
// 00651550  6aff                 push -1
// 00651552  68e8727d00           push 0x7d72e8
// 00651557  64a100000000         mov eax, dword ptr fs:[0]
// 0065155d  50                   push eax
// 0065155e  64892500000000       mov dword ptr fs:[0], esp
// 00651565  51                   push ecx
// 00651566  56                   push esi
// 00651567  8d7104               lea esi, [ecx + 4]
// 0065156a  89742404             mov dword ptr [esp + 4], esi
// 0065156e  8bce                 mov ecx, esi
// 00651570  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00651578  e85362dbff           call 0x4077d0
// 0065157d  8b06                 mov eax, dword ptr [esi]
// 0065157f  50                   push eax
// 00651580  e8f5f00400           call 0x6a067a
// 00651585  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00651589  83c404               add esp, 4
// 0065158c  5e                   pop esi
// 0065158d  64890d00000000       mov dword ptr fs:[0], ecx
// 00651594  83c410               add esp, 0x10
// 00651597  c3                   ret 

void __cdecl operator delete(void *) throw();

struct Allocation {
    void *pointer;
    ~Allocation();
};

struct Storage {
    Allocation allocation;
    unsigned data[4];

    void clear();
    ~Storage();
};

struct S {
    unsigned prefix;
    Storage storage;

    ~S();
};

inline Allocation::~Allocation()
{
    operator delete(pointer);
}

inline Storage::~Storage()
{
    clear();
}

S::~S()
{
}
