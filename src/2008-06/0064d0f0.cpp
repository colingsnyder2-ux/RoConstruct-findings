// from server: 89% by king_originala
// roc 2008-06 0064d0f0  unit: RBX::SimJobStage  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d0f0
//
// 0064d0f0  53                   push ebx
// 0064d0f1  55                   push ebp
// 0064d0f2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0064d0f6  8b4500               mov eax, dword ptr [ebp]
// 0064d0f9  8b5008               mov edx, dword ptr [eax + 8]
// 0064d0fc  56                   push esi
// 0064d0fd  8bf1                 mov esi, ecx
// 0064d0ff  57                   push edi
// 0064d100  8bcd                 mov ecx, ebp
// 0064d102  ffd2                 call edx
// 0064d104  85c0                 test eax, eax
// 0064d106  740d                 je 0x64d115
// 0064d108  8b4500               mov eax, dword ptr [ebp]
// 0064d10b  8b5008               mov edx, dword ptr [eax + 8]
// 0064d10e  8bcd                 mov ecx, ebp
// 0064d110  ffd2                 call edx
// 0064d112  896840               mov dword ptr [eax + 0x40], ebp
// 0064d115  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0064d118  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064d11b  83c610               add esi, 0x10
// 0064d11e  8d442414             lea eax, [esp + 0x14]
// 0064d122  50                   push eax
// 0064d123  51                   push ecx
// 0064d124  57                   push edi
// 0064d125  8bce                 mov ecx, esi
// 0064d127  e884ffffff           call 0x64d0b0
// 0064d12c  6a01                 push 1
// 0064d12e  8bce                 mov ecx, esi
// 0064d130  8bd8                 mov ebx, eax
// 0064d132  e88955faff           call 0x5f26c0
// 0064d137  895f04               mov dword ptr [edi + 4], ebx
// 0064d13a  8b5304               mov edx, dword ptr [ebx + 4]
// 0064d13d  891a                 mov dword ptr [edx], ebx
// 0064d13f  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0064d142  8b36                 mov esi, dword ptr [esi]
// 0064d144  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0064d14a  85f6                 test esi, esi
// 0064d14c  7502                 jne 0x64d150
// 0064d14e  ffd3                 call ebx
// 0064d150  8b7f04               mov edi, dword ptr [edi + 4]
// 0064d153  85f6                 test esi, esi
// 0064d155  7404                 je 0x64d15b
// 0064d157  8b06                 mov eax, dword ptr [esi]
// 0064d159  eb02                 jmp 0x64d15d
// 0064d15b  33c0                 xor eax, eax
// 0064d15d  3b7814               cmp edi, dword ptr [eax + 0x14]
// 0064d160  7502                 jne 0x64d164
// 0064d162  ffd3                 call ebx
// 0064d164  89751c               mov dword ptr [ebp + 0x1c], esi
// 0064d167  897d20               mov dword ptr [ebp + 0x20], edi
// 0064d16a  5f                   pop edi
// 0064d16b  5e                   pop esi
// 0064d16c  5d                   pop ebp
// 0064d16d  5b                   pop ebx
// 0064d16e  c20400               ret 4

struct Edge;

struct Object {
    char padding[0x40];
    Edge* edge;
};

struct Node {
    Node* next;
    Node* previous;
    Edge* value;
};

struct List;

struct Proxy {
    List* owner;
};

struct List {
    Proxy* proxy;
    char padding[0x10];
    Node* head;
    unsigned size;

    Node* makeNode(Node*, Node*, Edge**);
    void grow(unsigned);
};

struct Edge {
    virtual void slot0();
    virtual void slot1();
    virtual Object* getObject();

    char padding[0x18];
    Proxy* proxy;
    Node* position;
};

extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct Stage {
    char padding[0x10];
    List edges;

    void addEdge(Edge*);
};

void Stage::addEdge(Edge* edge)
{
    Edge* saved = edge;

    if (saved->getObject())
        saved->getObject()->edge = saved;

    List* list = &edges;
    Node* head = list->head;
    Node* node = list->makeNode(head, head->previous, &edge);
    list->grow(1);
    head->previous = node;
    node->previous->next = node;

    Node* position = list->head;
    Proxy* proxy = list->proxy;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;

    if (!proxy)
        invalid();

    position = position->previous;

    List* owner = proxy ? proxy->owner : 0;
    if (position == owner->head)
        invalid();

    saved->proxy = proxy;
    saved->position = position;
}
