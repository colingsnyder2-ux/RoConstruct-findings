// from server: 100% by king_originala
// roc 2008-06 0043d290  unit: RBX::Soundscape::VSoundId::?$XItem  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d290
//
// 0043d290  55                   push ebp
// 0043d291  8bec                 mov ebp, esp
// 0043d293  6aff                 push -1
// 0043d295  6851077c00           push 0x7c0751
// 0043d29a  64a100000000         mov eax, dword ptr fs:[0]
// 0043d2a0  50                   push eax
// 0043d2a1  64892500000000       mov dword ptr fs:[0], esp
// 0043d2a8  83ec0c               sub esp, 0xc
// 0043d2ab  53                   push ebx
// 0043d2ac  56                   push esi
// 0043d2ad  57                   push edi
// 0043d2ae  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043d2b1  6a2c                 push 0x2c
// 0043d2b3  e868362600           call 0x6a0920
// 0043d2b8  8bf0                 mov esi, eax
// 0043d2ba  83c404               add esp, 4
// 0043d2bd  8975ec               mov dword ptr [ebp - 0x14], esi
// 0043d2c0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0043d2c7  8975e8               mov dword ptr [ebp - 0x18], esi
// 0043d2ca  c645fc01             mov byte ptr [ebp - 4], 1
// 0043d2ce  85f6                 test esi, esi
// 0043d2d0  742f                 je 0x43d301
// 0043d2d2  8b4508               mov eax, dword ptr [ebp + 8]
// 0043d2d5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0043d2d8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0043d2db  8906                 mov dword ptr [esi], eax
// 0043d2dd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0043d2e0  894e04               mov dword ptr [esi + 4], ecx
// 0043d2e3  895608               mov dword ptr [esi + 8], edx
// 0043d2e6  8b08                 mov ecx, dword ptr [eax]
// 0043d2e8  83c004               add eax, 4
// 0043d2eb  894e0c               mov dword ptr [esi + 0xc], ecx
// 0043d2ee  50                   push eax
// 0043d2ef  8d4e10               lea ecx, [esi + 0x10]
// 0043d2f2  e809f81600           call 0x5acb00
// 0043d2f7  8a5518               mov dl, byte ptr [ebp + 0x18]
// 0043d2fa  885628               mov byte ptr [esi + 0x28], dl
// 0043d2fd  c6462900             mov byte ptr [esi + 0x29], 0
// 0043d301  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0043d304  5f                   pop edi
// 0043d305  8bc6                 mov eax, esi
// 0043d307  5e                   pop esi
// 0043d308  64890d00000000       mov dword ptr fs:[0], ecx
// 0043d30f  5b                   pop ebx
// 0043d310  8be5                 mov esp, ebp
// 0043d312  5d                   pop ebp
// 0043d313  c21400               ret 0x14

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
void __cdecl operator delete(void*, void*);

__forceinline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

struct Text {
    char data[24];
    Text(const Text&);
};

struct Value {
    int id;
    Text text;
};

struct Item {
    Item* first;
    Item* second;
    Item* third;
    Value value;
    bool flag;
    bool extra;

    Item(Item*, Item*, Item*, const Value&, bool);
};

__forceinline Item::Item(Item* a, Item* b, Item* c,
                        const Value& v, bool f)
    : first(a), second(b), third(c), value(v), flag(f), extra(false)
{
}

Item* __stdcall createItem(Item* a, Item* b, Item* c,
                          const Value& v, bool f)
{
    Item* p = static_cast<Item*>(operator new(sizeof(Item)));
    try {
        new (p) Item(a, b, c, v, f);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
