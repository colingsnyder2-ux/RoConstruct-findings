// from server: 100% by colin
// roc 2008-06 00651730  unit: RBX::ScoreHud  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651730
//
// 00651730  55                   push ebp
// 00651731  8bec                 mov ebp, esp
// 00651733  6aff                 push -1
// 00651735  6861b77d00           push 0x7db761
// 0065173a  64a100000000         mov eax, dword ptr fs:[0]
// 00651740  50                   push eax
// 00651741  64892500000000       mov dword ptr fs:[0], esp
// 00651748  83ec0c               sub esp, 0xc
// 0065174b  53                   push ebx
// 0065174c  56                   push esi
// 0065174d  57                   push edi
// 0065174e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00651751  6a2c                 push 0x2c
// 00651753  e8c8f10400           call 0x6a0920
// 00651758  8bf0                 mov esi, eax
// 0065175a  83c404               add esp, 4
// 0065175d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00651760  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00651767  8975e8               mov dword ptr [ebp - 0x18], esi
// 0065176a  c645fc01             mov byte ptr [ebp - 4], 1
// 0065176e  85f6                 test esi, esi
// 00651770  742f                 je 0x6517a1
// 00651772  8b4508               mov eax, dword ptr [ebp + 8]
// 00651775  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00651778  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0065177b  8906                 mov dword ptr [esi], eax
// 0065177d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00651780  894e04               mov dword ptr [esi + 4], ecx
// 00651783  895608               mov dword ptr [esi + 8], edx
// 00651786  8b08                 mov ecx, dword ptr [eax]
// 00651788  83c004               add eax, 4
// 0065178b  894e0c               mov dword ptr [esi + 0xc], ecx
// 0065178e  50                   push eax
// 0065178f  8d4e10               lea ecx, [esi + 0x10]
// 00651792  e82982ddff           call 0x4299c0
// 00651797  8a5518               mov dl, byte ptr [ebp + 0x18]
// 0065179a  885628               mov byte ptr [esi + 0x28], dl
// 0065179d  c6462900             mov byte ptr [esi + 0x29], 0
// 006517a1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006517a4  5f                   pop edi
// 006517a5  8bc6                 mov eax, esi
// 006517a7  5e                   pop esi
// 006517a8  64890d00000000       mov dword ptr fs:[0], ecx
// 006517af  5b                   pop ebx
// 006517b0  8be5                 mov esp, ebp
// 006517b2  5d                   pop ebp
// 006517b3  c21400               ret 0x14

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
