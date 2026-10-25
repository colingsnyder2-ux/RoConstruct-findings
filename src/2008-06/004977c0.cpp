// from server: 100% by king_originala
// roc 2008-06 004977c0  unit: RBX::Network::Players  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004977c0
//
// 004977c0  55                   push ebp
// 004977c1  8bec                 mov ebp, esp
// 004977c3  6aff                 push -1
// 004977c5  68016d7c00           push 0x7c6d01
// 004977ca  64a100000000         mov eax, dword ptr fs:[0]
// 004977d0  50                   push eax
// 004977d1  64892500000000       mov dword ptr fs:[0], esp
// 004977d8  83ec08               sub esp, 8
// 004977db  53                   push ebx
// 004977dc  56                   push esi
// 004977dd  57                   push edi
// 004977de  8965f0               mov dword ptr [ebp - 0x10], esp
// 004977e1  6a44                 push 0x44
// 004977e3  e838912000           call 0x6a0920
// 004977e8  8bf0                 mov esi, eax
// 004977ea  83c404               add esp, 4
// 004977ed  8975ec               mov dword ptr [ebp - 0x14], esi
// 004977f0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004977f7  85f6                 test esi, esi
// 004977f9  7405                 je 0x497800
// 004977fb  8b4508               mov eax, dword ptr [ebp + 8]
// 004977fe  8906                 mov dword ptr [esi], eax
// 00497800  8d4604               lea eax, [esi + 4]
// 00497803  85c0                 test eax, eax
// 00497805  7405                 je 0x49780c
// 00497807  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0049780a  8908                 mov dword ptr [eax], ecx
// 0049780c  8d4e08               lea ecx, [esi + 8]
// 0049780f  894d08               mov dword ptr [ebp + 8], ecx
// 00497812  894d0c               mov dword ptr [ebp + 0xc], ecx
// 00497815  c645fc01             mov byte ptr [ebp - 4], 1
// 00497819  85c9                 test ecx, ecx
// 0049781b  7409                 je 0x497826
// 0049781d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00497820  52                   push edx
// 00497821  e8eae8ffff           call 0x496110
// 00497826  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00497829  5f                   pop edi
// 0049782a  8bc6                 mov eax, esi
// 0049782c  5e                   pop esi
// 0049782d  64890d00000000       mov dword ptr fs:[0], ecx
// 00497834  5b                   pop ebx
// 00497835  8be5                 mov esp, ebp
// 00497837  5d                   pop ebp
// 00497838  c20c00               ret 0xc

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(size_t, void* p) { return p; }
inline void __cdecl operator delete(void*, void*) {}

struct Value {
    char data[60];
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
