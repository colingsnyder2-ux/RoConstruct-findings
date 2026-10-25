// from server: 100% by king_originala
// roc 2008-06 00497860  unit: RBX::Network::Players  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497860
//
// 00497860  55                   push ebp
// 00497861  8bec                 mov ebp, esp
// 00497863  6aff                 push -1
// 00497865  68216d7c00           push 0x7c6d21
// 0049786a  64a100000000         mov eax, dword ptr fs:[0]
// 00497870  50                   push eax
// 00497871  64892500000000       mov dword ptr fs:[0], esp
// 00497878  83ec08               sub esp, 8
// 0049787b  53                   push ebx
// 0049787c  56                   push esi
// 0049787d  57                   push edi
// 0049787e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00497881  6a50                 push 0x50
// 00497883  e898902000           call 0x6a0920
// 00497888  8bf0                 mov esi, eax
// 0049788a  83c404               add esp, 4
// 0049788d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00497890  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00497897  85f6                 test esi, esi
// 00497899  7405                 je 0x4978a0
// 0049789b  8b4508               mov eax, dword ptr [ebp + 8]
// 0049789e  8906                 mov dword ptr [esi], eax
// 004978a0  8d4604               lea eax, [esi + 4]
// 004978a3  85c0                 test eax, eax
// 004978a5  7405                 je 0x4978ac
// 004978a7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004978aa  8908                 mov dword ptr [eax], ecx
// 004978ac  8d4e08               lea ecx, [esi + 8]
// 004978af  894d08               mov dword ptr [ebp + 8], ecx
// 004978b2  894d0c               mov dword ptr [ebp + 0xc], ecx
// 004978b5  c645fc01             mov byte ptr [ebp - 4], 1
// 004978b9  85c9                 test ecx, ecx
// 004978bb  7409                 je 0x4978c6
// 004978bd  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004978c0  52                   push edx
// 004978c1  e8baebffff           call 0x496480
// 004978c6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004978c9  5f                   pop edi
// 004978ca  8bc6                 mov eax, esi
// 004978cc  5e                   pop esi
// 004978cd  64890d00000000       mov dword ptr fs:[0], ecx
// 004978d4  5b                   pop ebx
// 004978d5  8be5                 mov esp, ebp
// 004978d7  5d                   pop ebp
// 004978d8  c20c00               ret 0xc

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(size_t, void* p) { return p; }
inline void __cdecl operator delete(void*, void*) {}

struct Value {
    char data[72];
    Value(const Value&);
};

struct Node {
    Node* next;
    Node* prev;
    Value value;
};

template<class T>
inline void construct(T* p, const T& value)
{
    new (p) T(value);
}

Node* __stdcall make_node(Node* next, Node* prev, const Value& value)
{
    Node* p = static_cast<Node*>(operator new(sizeof(Node)));
    try {
        construct(&p->next, next);
        construct(&p->prev, prev);
        construct(&p->value, value);
    } catch (...) {
        operator delete(p);
        throw;
    }
    return p;
}
