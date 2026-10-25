// from server: 100% by king_originala
// roc 2008-06 0069a6b0  unit: Ogre::RbxSceneManager  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069a6b0
//
// 0069a6b0  83ec14               sub esp, 0x14
// 0069a6b3  53                   push ebx
// 0069a6b4  55                   push ebp
// 0069a6b5  56                   push esi
// 0069a6b6  8bf1                 mov esi, ecx
// 0069a6b8  8b16                 mov edx, dword ptr [esi]
// 0069a6ba  57                   push edi
// 0069a6bb  8d442414             lea eax, [esp + 0x14]
// 0069a6bf  50                   push eax
// 0069a6c0  8b8218020000         mov eax, dword ptr [edx + 0x218]
// 0069a6c6  ffd0                 call eax
// 0069a6c8  8bc8                 mov ecx, eax
// 0069a6ca  ff15b04a8000         call dword ptr [0x804ab0]
// 0069a6d0  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0069a6d6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0069a6da  85ff                 test edi, edi
// 0069a6dc  7406                 je 0x69a6e4
// 0069a6de  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0069a6e2  7406                 je 0x69a6ea
// 0069a6e4  ffd5                 call ebp
// 0069a6e6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0069a6ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0069a6ee  3b4c2420             cmp ecx, dword ptr [esp + 0x20]
// 0069a6f2  0f84c7000000         je 0x69a7bf
// 0069a6f8  85ff                 test edi, edi
// 0069a6fa  750a                 jne 0x69a706
// 0069a6fc  ffd5                 call ebp
// 0069a6fe  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0069a702  85ff                 test edi, edi
// 0069a704  7404                 je 0x69a70a
// 0069a706  8b07                 mov eax, dword ptr [edi]
// 0069a708  eb02                 jmp 0x69a70c
// 0069a70a  33c0                 xor eax, eax
// 0069a70c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0069a710  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0069a713  7506                 jne 0x69a71b
// 0069a715  ffd5                 call ebp
// 0069a717  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0069a71b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0069a71f  8a430c               mov al, byte ptr [ebx + 0xc]
// 0069a722  8d4c2414             lea ecx, [esp + 0x14]
// 0069a726  88442410             mov byte ptr [esp + 0x10], al
// 0069a72a  e87138ffff           call 0x68dfa0
// 0069a72f  85ff                 test edi, edi
// 0069a731  0f8581000000         jne 0x69a7b8
// 0069a737  ffd5                 call ebp
// 0069a739  3b5f18               cmp ebx, dword ptr [edi + 0x18]
// 0069a73c  7502                 jne 0x69a740
// 0069a73e  ffd5                 call ebp
// 0069a740  8b16                 mov edx, dword ptr [esi]
// 0069a742  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0069a746  8b8238020000         mov eax, dword ptr [edx + 0x238]
// 0069a74c  8b5b10               mov ebx, dword ptr [ebx + 0x10]
// 0069a74f  57                   push edi
// 0069a750  8bce                 mov ecx, esi
// 0069a752  ffd0                 call eax
// 0069a754  84c0                 test al, al
// 0069a756  0f847affffff         je 0x69a6d6
// 0069a75c  8d642400             lea esp, [esp]
// 0069a760  83be548a000001       cmp dword ptr [esi + 0x8a54], 1
// 0069a767  a1a44a8000           mov eax, dword ptr [0x804aa4]
// 0069a76c  7405                 je 0x69a773
// 0069a76e  a1fc458000           mov eax, dword ptr [0x8045fc]
// 0069a773  50                   push eax
// 0069a774  57                   push edi
// 0069a775  8bce                 mov ecx, esi
// 0069a777  e8e488ffff           call 0x693060
// 0069a77c  84c0                 test al, al
// 0069a77e  0f8552ffffff         jne 0x69a6d6
// 0069a784  8b16                 mov edx, dword ptr [esi]
// 0069a786  8b828c030000         mov eax, dword ptr [edx + 0x38c]
// 0069a78c  6a01                 push 1
// 0069a78e  53                   push ebx
// 0069a78f  8bce                 mov ecx, esi
// 0069a791  ffd0                 call eax
// 0069a793  83be548a000001       cmp dword ptr [esi + 0x8a54], 1
// 0069a79a  a1a44a8000           mov eax, dword ptr [0x804aa4]
// 0069a79f  7405                 je 0x69a7a6
// 0069a7a1  a1fc458000           mov eax, dword ptr [0x8045fc]
// 0069a7a6  50                   push eax
// 0069a7a7  57                   push edi
// 0069a7a8  8bce                 mov ecx, esi
// 0069a7aa  e88189ffff           call 0x693130
// 0069a7af  84c0                 test al, al
// 0069a7b1  75ad                 jne 0x69a760
// 0069a7b3  e91effffff           jmp 0x69a6d6
// 0069a7b8  8b3f                 mov edi, dword ptr [edi]
// 0069a7ba  e97affffff           jmp 0x69a739
// 0069a7bf  5f                   pop edi
// 0069a7c0  5e                   pop esi
// 0069a7c1  5d                   pop ebp
// 0069a7c2  5b                   pop ebx
// 0069a7c3  83c414               add esp, 0x14
// 0069a7c6  c3                   ret 

extern "C" void (__cdecl *invalidParameter)();

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    unsigned char key;
    unsigned char padding[3];
    void *value;
};

struct Container {
    unsigned char padding[24];
    Node *head;
};

struct Iterator {
    Container **owner;
    Node *current;
    Container **endOwner;
    Node *end;

    void increment();
};

struct Queue;
extern Iterator *(__thiscall *getIterator)(Queue *, Iterator *);

struct String;
extern String *shadowInvocation;
extern String *blankInvocation;

struct Scene {
    typedef Queue *(__thiscall *GetQueue)(Scene *);
    typedef bool (__thiscall *QueueStarted)(Scene *, unsigned char);
    typedef void (__thiscall *RenderGroup)(Scene *, void *, bool);

    struct Table {
        void *padding0[134];
        GetQueue getQueue;
        void *padding1[7];
        QueueStarted queueStarted;
        void *padding2[84];
        RenderGroup renderGroup;
    };

    Table *table;
    unsigned char padding[0x8a50];
    int stage;

    bool started(unsigned char, const String &);
    bool ended(unsigned char, const String &);
    void render();
};

void Scene::render()
{
    Iterator i;
    getIterator(table->getQueue(this), &i);
    void (__cdecl *invalid)() = invalidParameter;

    for (;;) {
        if (!i.owner || i.owner != i.endOwner)
            invalid();

        if (i.current == i.end)
            break;

        if (!i.owner)
            invalid();

        Container *container = i.owner ? *i.owner : 0;
        if (i.current == container->head)
            invalid();

        Node *node = i.current;
        unsigned char key = node->key;
        Container **owner = i.owner;
        i.increment();

        if (!owner)
            invalid();

        container = owner ? *owner : 0;
        if (node == container->head)
            invalid();

        void *group = node->value;
        if (!table->queueStarted(this, key))
            continue;

        do {
            if (started(key, *(stage == 1 ? shadowInvocation : blankInvocation)))
                break;

            table->renderGroup(this, group, true);
        } while (ended(key, *(stage == 1 ? shadowInvocation : blankInvocation)));
    }
}
