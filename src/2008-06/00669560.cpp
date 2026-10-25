// from server: 100% by king_originala
// roc 2008-06 00669560  unit: RBX::TreeStage  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669560
//
// 00669560  83ec0c               sub esp, 0xc
// 00669563  53                   push ebx
// 00669564  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00669568  55                   push ebp
// 00669569  56                   push esi
// 0066956a  57                   push edi
// 0066956b  8b7b0c               mov edi, dword ptr [ebx + 0xc]
// 0066956e  8be9                 mov ebp, ecx
// 00669570  397c2424             cmp dword ptr [esp + 0x24], edi
// 00669574  7503                 jne 0x669579
// 00669576  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 00669579  8b775c               mov esi, dword ptr [edi + 0x5c]
// 0066957c  85f6                 test esi, esi
// 0066957e  740a                 je 0x66958a
// 00669580  c644242001           mov byte ptr [esp + 0x20], 1
// 00669585  397e1c               cmp dword ptr [esi + 0x1c], edi
// 00669588  7405                 je 0x66958f
// 0066958a  c644242000           mov byte ptr [esp + 0x20], 0
// 0066958f  8b03                 mov eax, dword ptr [ebx]
// 00669591  8b500c               mov edx, dword ptr [eax + 0xc]
// 00669594  8bcb                 mov ecx, ebx
// 00669596  ffd2                 call edx
// 00669598  85c0                 test eax, eax
// 0066959a  0f859c000000         jne 0x66963c
// 006695a0  8b03                 mov eax, dword ptr [ebx]
// 006695a2  8b5014               mov edx, dword ptr [eax + 0x14]
// 006695a5  8bcb                 mov ecx, ebx
// 006695a7  ffd2                 call edx
// 006695a9  83f806               cmp eax, 6
// 006695ac  7409                 je 0x6695b7
// 006695ae  83f807               cmp eax, 7
// 006695b1  0f8585000000         jne 0x66963c
// 006695b7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006695bb  3b715c               cmp esi, dword ptr [ecx + 0x5c]
// 006695be  752c                 jne 0x6695ec
// 006695c0  8b87a0000000         mov eax, dword ptr [edi + 0xa0]
// 006695c6  8b5014               mov edx, dword ptr [eax + 0x14]
// 006695c9  3b91a0000000         cmp edx, dword ptr [ecx + 0xa0]
// 006695cf  751b                 jne 0x6695ec
// 006695d1  83783400             cmp dword ptr [eax + 0x34], 0
// 006695d5  7515                 jne 0x6695ec
// 006695d7  57                   push edi
// 006695d8  53                   push ebx
// 006695d9  51                   push ecx
// 006695da  e861caf7ff           call 0x5e6040
// 006695df  83c40c               add esp, 0xc
// 006695e2  5f                   pop edi
// 006695e3  5e                   pop esi
// 006695e4  5d                   pop ebp
// 006695e5  5b                   pop ebx
// 006695e6  83c40c               add esp, 0xc
// 006695e9  c20800               ret 8
// 006695ec  85f6                 test esi, esi
// 006695ee  7426                 je 0x669616
// 006695f0  807c242000           cmp byte ptr [esp + 0x20], 0
// 006695f5  8bcd                 mov ecx, ebp
// 006695f7  7408                 je 0x669601
// 006695f9  56                   push esi
// 006695fa  e8e1fcffff           call 0x6692e0
// 006695ff  eb11                 jmp 0x669612
// 00669601  8b4624               mov eax, dword ptr [esi + 0x24]
// 00669604  50                   push eax
// 00669605  e8d6fbffff           call 0x6691e0
// 0066960a  57                   push edi
// 0066960b  8bce                 mov ecx, esi
// 0066960d  e87ed1f7ff           call 0x5e6790
// 00669612  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00669616  e855dff7ff           call 0x5e7570
// 0066961b  50                   push eax
// 0066961c  8bcd                 mov ecx, ebp
// 0066961e  e8bdfbffff           call 0x6691e0
// 00669623  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00669627  57                   push edi
// 00669628  53                   push ebx
// 00669629  51                   push ecx
// 0066962a  e891d1f7ff           call 0x5e67c0
// 0066962f  83c40c               add esp, 0xc
// 00669632  5f                   pop edi
// 00669633  5e                   pop esi
// 00669634  5d                   pop ebp
// 00669635  5b                   pop ebx
// 00669636  83c40c               add esp, 0xc
// 00669639  c20800               ret 8
// 0066963c  807c242000           cmp byte ptr [esp + 0x20], 0
// 00669641  7423                 je 0x669666
// 00669643  8b5624               mov edx, dword ptr [esi + 0x24]
// 00669646  52                   push edx
// 00669647  8bcd                 mov ecx, ebp
// 00669649  e892fbffff           call 0x6691e0
// 0066964e  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 00669654  6a00                 push 0
// 00669656  e855b2faff           call 0x6148b0
// 0066965b  6a00                 push 0
// 0066965d  8bce                 mov ecx, esi
// 0066965f  e86cd9f7ff           call 0x5e6fd0
// 00669664  eb21                 jmp 0x669687
// 00669666  85f6                 test esi, esi
// 00669668  7413                 je 0x66967d
// 0066966a  8b4624               mov eax, dword ptr [esi + 0x24]
// 0066966d  50                   push eax
// 0066966e  8bcd                 mov ecx, ebp
// 00669670  e86bfbffff           call 0x6691e0
// 00669675  57                   push edi
// 00669676  8bce                 mov ecx, esi
// 00669678  e813d1f7ff           call 0x5e6790
// 0066967d  57                   push edi
// 0066967e  8bcd                 mov ecx, ebp
// 00669680  e84bf6ffff           call 0x668cd0
// 00669685  8bf0                 mov esi, eax
// 00669687  8b13                 mov edx, dword ptr [ebx]
// 00669689  8b420c               mov eax, dword ptr [edx + 0xc]
// 0066968c  8bcb                 mov ecx, ebx
// 0066968e  ffd0                 call eax
// 00669690  85c0                 test eax, eax
// 00669692  7540                 jne 0x6696d4
// 00669694  8b13                 mov edx, dword ptr [ebx]
// 00669696  8b4214               mov eax, dword ptr [edx + 0x14]
// 00669699  8bcb                 mov ecx, ebx
// 0066969b  ffd0                 call eax
// 0066969d  83f808               cmp eax, 8
// 006696a0  7532                 jne 0x6696d4
// 006696a2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006696a6  e8c5def7ff           call 0x5e7570
// 006696ab  50                   push eax
// 006696ac  8bcd                 mov ecx, ebp
// 006696ae  e82dfbffff           call 0x6691e0
// 006696b3  56                   push esi
// 006696b4  8bcd                 mov ecx, ebp
// 006696b6  e8d5fbffff           call 0x669290
// 006696bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006696bf  57                   push edi
// 006696c0  53                   push ebx
// 006696c1  51                   push ecx
// 006696c2  e889d9f7ff           call 0x5e7050
// 006696c7  83c40c               add esp, 0xc
// 006696ca  5f                   pop edi
// 006696cb  5e                   pop esi
// 006696cc  5d                   pop ebp
// 006696cd  5b                   pop ebx
// 006696ce  83c40c               add esp, 0xc
// 006696d1  c20800               ret 8
// 006696d4  8b13                 mov edx, dword ptr [ebx]
// 006696d6  8b4214               mov eax, dword ptr [edx + 0x14]
// 006696d9  8bcb                 mov ecx, ebx
// 006696db  ffd0                 call eax
// 006696dd  83f809               cmp eax, 9
// 006696e0  7405                 je 0x6696e7
// 006696e2  83f805               cmp eax, 5
// 006696e5  751a                 jne 0x669701
// 006696e7  8d4c2424             lea ecx, [esp + 0x24]
// 006696eb  51                   push ecx
// 006696ec  8d542414             lea edx, [esp + 0x14]
// 006696f0  52                   push edx
// 006696f1  8d4d38               lea ecx, [ebp + 0x38]
// 006696f4  8974242c             mov dword ptr [esp + 0x2c], esi
// 006696f8  e843f5f7ff           call 0x5e8c40
// 006696fd  c6451401             mov byte ptr [ebp + 0x14], 1
// 00669701  5f                   pop edi
// 00669702  5e                   pop esi
// 00669703  5d                   pop ebp
// 00669704  5b                   pop ebx
// 00669705  83c40c               add esp, 0xc
// 00669708  c20800               ret 8

struct Node;
struct Group;

struct Receiver {
    char pad0[0x14];
    Receiver* parent;
    char pad18[0x1C];
    int state;
    void reset(int value);
};

struct Node {
    char pad0[0x5C];
    Group* group;
    char pad60[0x40];
    Receiver* receiver;
    void* getShape();
};

struct Group {
    char pad0[0x1C];
    Node* root;
    char pad20[4];
    void* shape;
    void remove(Node* node);
    void reset(int value);
};

struct Edge {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int isSpecial();
    virtual int v4();
    virtual int getType();
    char pad4[8];
    Node* first;
    Node* second;
};

struct InsertResult {
    unsigned int data[3];
};

struct Pending {
    InsertResult insert(Node* const& node);
};

extern "C" void __cdecl apply(Node*, Edge*, Node*);
extern "C" void __cdecl attach(Node*, Edge*, Node*);
extern "C" void __cdecl assign(Node*, Edge*, Node*);

struct Stage {
    char pad0[0x14];
    bool dirty;
    char pad15[0x23];
    Pending pending;

    Group* create(Node* node);
    void invalidate(void* shape);
    void prepare(Group* group);
    void remove(Group* group);
    void process(Edge* edge, Node* node);
};

void Stage::process(Edge* edge, Node* node)
{
    Node* other = edge->first;
    if (node == other)
        other = edge->second;

    Group* group = other->group;
    bool isRoot = group && group->root == other;

    if (!edge->isSpecial()) {
        int type = edge->getType();
        if (type == 6 || type == 7) {
            if (group == node->group &&
                other->receiver->parent == node->receiver &&
                other->receiver->state == 0) {
                apply(node, edge, other);
                return;
            }

            if (group) {
                if (isRoot) {
                    remove(group);
                } else {
                    invalidate(group->shape);
                    group->remove(other);
                }
            }

            invalidate(node->getShape());
            attach(node, edge, other);
            return;
        }
    }

    if (isRoot) {
        invalidate(group->shape);
        other->receiver->reset(0);
        group->reset(0);
    } else {
        if (group) {
            invalidate(group->shape);
            group->remove(other);
        }
        group = create(other);
    }

    if (!edge->isSpecial() && edge->getType() == 8) {
        invalidate(node->getShape());
        prepare(group);
        assign(node, edge, other);
        return;
    }

    int type = edge->getType();
    if (type == 9 || type == 5) {
        node = reinterpret_cast<Node*>(group);
        pending.insert(node);
        dirty = true;
    }
}
