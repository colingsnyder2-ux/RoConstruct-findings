// from server: 100% by king_originala
// roc 2008-06 00498270  unit: RBX::VInstance::?$NonFactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498270
//
// 00498270  6aff                 push -1
// 00498272  689c6a7c00           push 0x7c6a9c
// 00498277  64a100000000         mov eax, dword ptr fs:[0]
// 0049827d  50                   push eax
// 0049827e  64892500000000       mov dword ptr fs:[0], esp
// 00498285  51                   push ecx
// 00498286  56                   push esi
// 00498287  57                   push edi
// 00498288  8bf9                 mov edi, ecx
// 0049828a  8b4714               mov eax, dword ptr [edi + 0x14]
// 0049828d  8b30                 mov esi, dword ptr [eax]
// 0049828f  8900                 mov dword ptr [eax], eax
// 00498291  8b4714               mov eax, dword ptr [edi + 0x14]
// 00498294  894004               mov dword ptr [eax + 4], eax
// 00498297  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0049829e  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004982a1  743f                 je 0x4982e2
// 004982a3  53                   push ebx
// 004982a4  55                   push ebp
// 004982a5  8b1e                 mov ebx, dword ptr [esi]
// 004982a7  8d6e08               lea ebp, [esi + 8]
// 004982aa  896c2410             mov dword ptr [esp + 0x10], ebp
// 004982ae  8d4d20               lea ecx, [ebp + 0x20]
// 004982b1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004982b9  ff1568248000         call dword ptr [0x802468]
// 004982bf  8d4d04               lea ecx, [ebp + 4]
// 004982c2  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004982ca  ff1568248000         call dword ptr [0x802468]
// 004982d0  56                   push esi
// 004982d1  e8a4832000           call 0x6a067a
// 004982d6  83c404               add esp, 4
// 004982d9  8bf3                 mov esi, ebx
// 004982db  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004982de  75c5                 jne 0x4982a5
// 004982e0  5d                   pop ebp
// 004982e1  5b                   pop ebx
// 004982e2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004982e6  5f                   pop edi
// 004982e7  5e                   pop esi
// 004982e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004982ef  83c410               add esp, 0x10
// 004982f2  c3                   ret 

extern void (__thiscall *destroy_string)(void *);

struct String {
    char storage[28];
    ~String();
};

__forceinline String::~String()
{
    destroy_string(this);
}

struct Value {
    unsigned int tag;
    String first;
    String second;
};

struct Node {
    Node *next;
    Node *previous;
    Value value;
};

struct S {
    char padding[20];
    Node *head;
    unsigned int count;
    void clear();
};

void S::clear()
{
    Node *current = head->next;
    head->next = head;
    head->previous = head;
    count = 0;

    while (current != head) {
        Node *next = current->next;
        delete current;
        current = next;
    }
}
