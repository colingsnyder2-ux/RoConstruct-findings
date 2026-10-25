// from server: 100% by king_originala
// roc 2008-06 005e67c0  unit: RBX::Clump  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e67c0
//
// 005e67c0  83ec30               sub esp, 0x30
// 005e67c3  53                   push ebx
// 005e67c4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 005e67c8  56                   push esi
// 005e67c9  8b735c               mov esi, dword ptr [ebx + 0x5c]
// 005e67cc  57                   push edi
// 005e67cd  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 005e67d1  56                   push esi
// 005e67d2  8bcf                 mov ecx, edi
// 005e67d4  e8770d0000           call 0x5e7550
// 005e67d9  8b83a0000000         mov eax, dword ptr [ebx + 0xa0]
// 005e67df  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 005e67e5  50                   push eax
// 005e67e6  e8c5e00200           call 0x6148b0
// 005e67eb  b001                 mov al, 1
// 005e67ed  884614               mov byte ptr [esi + 0x14], al
// 005e67f0  884654               mov byte ptr [esi + 0x54], al
// 005e67f3  884669               mov byte ptr [esi + 0x69], al
// 005e67f6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005e67f9  85c9                 test ecx, ecx
// 005e67fb  7405                 je 0x5e6802
// 005e67fd  e89efaffff           call 0x5e62a0
// 005e6802  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 005e6808  57                   push edi
// 005e6809  53                   push ebx
// 005e680a  8d4c2414             lea ecx, [esp + 0x14]
// 005e680e  51                   push ecx
// 005e680f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005e6813  e818f10500           call 0x645930
// 005e6818  50                   push eax
// 005e6819  8bce                 mov ecx, esi
// 005e681b  e8b0da0200           call 0x6142d0
// 005e6820  5f                   pop edi
// 005e6821  5e                   pop esi
// 005e6822  5b                   pop ebx
// 005e6823  83c430               add esp, 0x30
// 005e6826  c3                   ret 

struct Blob {
    char data[0x30];
};

struct Ball;

struct Graph {
    void attach(Graph* other);
    void apply(const Blob& value);
};

struct Helper {
    Blob compute(Ball* first, Ball* second);
};

struct Owner {
    void update();
};

struct State {
    char pad0[0x14];
    volatile bool dirty14;
    char pad15[0x0b];
    Owner* volatile owner;
    char pad24[0x30];
    volatile bool dirty54;
    char pad55[0x14];
    volatile bool dirty69;
};

struct Ball {
    char pad0[0x5c];
    int field_5c;
    char pad60[0x40];
    Graph* graph;
    void setField(int value);
};

void transfer(Ball* first, Helper* helper, Ball* second)
{
    State* state = reinterpret_cast<State*>(first->field_5c);
    second->setField(first->field_5c);
    second->graph->attach(first->graph);

    state->dirty14 = true;
    state->dirty54 = true;
    state->dirty69 = true;

    Owner* owner = state->owner;
    if (owner)
        owner->update();

    Graph* graph = second->graph;
    graph->apply(helper->compute(first, second));
}
