// from server: 96% by colin
#include <intrin.h>
// from server: 92% by king_originala
// roc 2008-06 0058c3c0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058c3c0
//
// 0058c3c0  6aff                 push -1
// 0058c3c2  6853177d00           push 0x7d1753
// 0058c3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0058c3cd  50                   push eax
// 0058c3ce  64892500000000       mov dword ptr fs:[0], esp
// 0058c3d5  51                   push ecx
// 0058c3d6  56                   push esi
// 0058c3d7  8bf1                 mov esi, ecx
// 0058c3d9  57                   push edi
// 0058c3da  8bbe34010000         mov edi, dword ptr [esi + 0x134]
// 0058c3e0  85ff                 test edi, edi
// 0058c3e2  7441                 je 0x58c425
// 0058c3e4  8bcf                 mov ecx, edi
// 0058c3e6  e8e5faffff           call 0x58bed0
// 0058c3eb  57                   push edi
// 0058c3ec  e889421100           call 0x6a067a
// 0058c3f1  6a40                 push 0x40
// 0058c3f3  e828451100           call 0x6a0920
// 0058c3f8  83c408               add esp, 8
// 0058c3fb  89442408             mov dword ptr [esp + 8], eax
// 0058c3ff  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058c407  85c0                 test eax, eax
// 0058c409  740a                 je 0x58c415
// 0058c40b  56                   push esi
// 0058c40c  8bc8                 mov ecx, eax
// 0058c40e  e80dfbffff           call 0x58bf20
// 0058c413  eb02                 jmp 0x58c417
// 0058c415  33c0                 xor eax, eax
// 0058c417  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0058c41f  898634010000         mov dword ptr [esi + 0x134], eax
// 0058c425  53                   push ebx
// 0058c426  55                   push ebp
// 0058c427  8bae4c010000         mov ebp, dword ptr [esi + 0x14c]
// 0058c42d  8bc5                 mov eax, ebp
// 0058c42f  8b18                 mov ebx, dword ptr [eax]
// 0058c431  3bdd                 cmp ebx, ebp
// 0058c433  7438                 je 0x58c46d
// 0058c435  8b7b08               mov edi, dword ptr [ebx + 8]
// 0058c438  897c2410             mov dword ptr [esp + 0x10], edi
// 0058c43c  85ff                 test edi, edi
// 0058c43e  7429                 je 0x58c469
// 0058c440  8d4f24               lea ecx, [edi + 0x24]
// 0058c443  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0058c44b  ff1568248000         call dword ptr [0x802468]
// 0058c451  8bcf                 mov ecx, edi
// 0058c453  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058c45b  e8f0f9ffff           call 0x58be50
// 0058c460  57                   push edi
// 0058c461  e814421100           call 0x6a067a
// 0058c466  83c404               add esp, 4
// 0058c469  8b1b                 mov ebx, dword ptr [ebx]
// 0058c46b  ebc4                 jmp 0x58c431
// 0058c46d  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0058c473  8b01                 mov eax, dword ptr [ecx]
// 0058c475  8909                 mov dword ptr [ecx], ecx
// 0058c477  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0058c47d  894904               mov dword ptr [ecx + 4], ecx
// 0058c480  5d                   pop ebp
// 0058c481  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 0058c48b  5b                   pop ebx
// 0058c48c  3b864c010000         cmp eax, dword ptr [esi + 0x14c]
// 0058c492  7415                 je 0x58c4a9
// 0058c494  8b38                 mov edi, dword ptr [eax]
// 0058c496  50                   push eax
// 0058c497  e8de411100           call 0x6a067a
// 0058c49c  83c404               add esp, 4
// 0058c49f  8bc7                 mov eax, edi
// 0058c4a1  3bbe4c010000         cmp edi, dword ptr [esi + 0x14c]
// 0058c4a7  75eb                 jne 0x58c494
// 0058c4a9  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0058c4af  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0058c4b5  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0058c4bb  898658010000         mov dword ptr [esi + 0x158], eax
// 0058c4c1  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0058c4c7  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0058c4cd  8b00                 mov eax, dword ptr [eax]
// 0058c4cf  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 0058c4d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058c4d9  898660010000         mov dword ptr [esi + 0x160], eax
// 0058c4df  5f                   pop edi
// 0058c4e0  5e                   pop esi
// 0058c4e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c4e8  83c410               add esp, 0x10
// 0058c4eb  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct Current {
    char storage[64];
    Current(S*);
    ~Current();
};

struct Base {
    char storage[36];
    ~Base();
};

extern void (__thiscall* destroy_string)(void*);

struct String {
    char storage[28];
    ~String();
};

inline String::~String()
{
    destroy_string(this);
}

struct Entry : Base {
    String text;
};

struct Node {
    Node* next;
    Node* previous;
    Entry* value;
};

struct Iterator {
    void* owner;
    Node* node;

    Iterator(Node*, void*);
    Iterator& operator++();
    bool operator!=(const Iterator&) const;
};

inline Iterator::Iterator(Node* n, void* p)
    : node(n)
{
    owner = p;
}

inline Iterator& Iterator::operator++()
{
    node = node->next;
    return *this;
}

inline bool Iterator::operator!=(const Iterator& other) const
{
    return node != other.node;
}

struct S {
    char padding[0x134];
    Current* current;
    void* owner;
    char padding2[0x10];
    Node* head;
    unsigned int count;
    Iterator endPosition;
    Iterator beginPosition;

    void reset();
};

void S::reset()
{
    if (current) {
        delete current;
        current = new Current(this);
    }

    {
        Iterator last(head, owner);
        Iterator position(last.node->next, owner);

    check:
        if (position != last) {
            delete position.node->value;
            ++position;
            goto check;
        }
    }

    Node* node = head->next;
    head->next = head;
    head->previous = head;
    count = 0;

    while (node != head) {
        Node* next = node->next;
        operator delete(node);
        node = next;
    }

    endPosition = Iterator(head, owner);
    _ReadWriteBarrier();
    beginPosition = Iterator(head->next, owner);
}
