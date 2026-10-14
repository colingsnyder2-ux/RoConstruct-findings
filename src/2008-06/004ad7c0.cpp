// from server: 100% by colin
// roc 2008-06 004ad7c0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ad7c0
//
// 004ad7c0  55                   push ebp
// 004ad7c1  8bec                 mov ebp, esp
// 004ad7c3  6aff                 push -1
// 004ad7c5  6841847c00           push 0x7c8441
// 004ad7ca  64a100000000         mov eax, dword ptr fs:[0]
// 004ad7d0  50                   push eax
// 004ad7d1  64892500000000       mov dword ptr fs:[0], esp
// 004ad7d8  83ec0c               sub esp, 0xc
// 004ad7db  53                   push ebx
// 004ad7dc  56                   push esi
// 004ad7dd  57                   push edi
// 004ad7de  8965f0               mov dword ptr [ebp - 0x10], esp
// 004ad7e1  6a40                 push 0x40
// 004ad7e3  e838311f00           call 0x6a0920
// 004ad7e8  8bf0                 mov esi, eax
// 004ad7ea  83c404               add esp, 4
// 004ad7ed  8975ec               mov dword ptr [ebp - 0x14], esi
// 004ad7f0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004ad7f7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004ad7fa  c645fc01             mov byte ptr [ebp - 4], 1
// 004ad7fe  85f6                 test esi, esi
// 004ad800  742f                 je 0x4ad831
// 004ad802  8b4508               mov eax, dword ptr [ebp + 8]
// 004ad805  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004ad808  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004ad80b  8906                 mov dword ptr [esi], eax
// 004ad80d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004ad810  894e04               mov dword ptr [esi + 4], ecx
// 004ad813  895608               mov dword ptr [esi + 8], edx
// 004ad816  8b08                 mov ecx, dword ptr [eax]
// 004ad818  83c004               add eax, 4
// 004ad81b  894e0c               mov dword ptr [esi + 0xc], ecx
// 004ad81e  50                   push eax
// 004ad81f  8d4e10               lea ecx, [esi + 0x10]
// 004ad822  e8f9e4ffff           call 0x4abd20
// 004ad827  8a5518               mov dl, byte ptr [ebp + 0x18]
// 004ad82a  88563c               mov byte ptr [esi + 0x3c], dl
// 004ad82d  c6463d00             mov byte ptr [esi + 0x3d], 0
// 004ad831  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004ad834  5f                   pop edi
// 004ad835  8bc6                 mov eax, esi
// 004ad837  5e                   pop esi
// 004ad838  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad83f  5b                   pop ebx
// 004ad840  8be5                 mov esp, ebp
// 004ad842  5d                   pop ebp
// 004ad843  c21400               ret 0x14

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
void __cdecl operator delete(void*, void*);

__forceinline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

struct Text {
    char data[44];
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
