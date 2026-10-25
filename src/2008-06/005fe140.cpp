// from server: 100% by king_originala
// roc 2008-06 005fe140  unit: RBX::Tool  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe140
//
// 005fe140  53                   push ebx
// 005fe141  8bd9                 mov ebx, ecx
// 005fe143  56                   push esi
// 005fe144  53                   push ebx
// 005fe145  e836cbe9ff           call 0x49ac80
// 005fe14a  8bf0                 mov esi, eax
// 005fe14c  83c404               add esp, 4
// 005fe14f  85f6                 test esi, esi
// 005fe151  746f                 je 0x5fe1c2
// 005fe153  57                   push edi
// 005fe154  8bbe70010000         mov edi, dword ptr [esi + 0x170]
// 005fe15a  85ff                 test edi, edi
// 005fe15c  7428                 je 0x5fe186
// 005fe15e  57                   push edi
// 005fe15f  e8bcb8fdff           call 0x5d9a20
// 005fe164  83c404               add esp, 4
// 005fe167  85c0                 test eax, eax
// 005fe169  741b                 je 0x5fe186
// 005fe16b  8bcf                 mov ecx, edi
// 005fe16d  e88efdffff           call 0x5fdf00
// 005fe172  85c0                 test eax, eax
// 005fe174  7410                 je 0x5fe186
// 005fe176  8b10                 mov edx, dword ptr [eax]
// 005fe178  8bc8                 mov ecx, eax
// 005fe17a  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 005fe180  ffd0                 call eax
// 005fe182  84c0                 test al, al
// 005fe184  743b                 je 0x5fe1c1
// 005fe186  8bbb04010000         mov edi, dword ptr [ebx + 0x104]
// 005fe18c  8bce                 mov ecx, esi
// 005fe18e  e8dde2e8ff           call 0x48c470
// 005fe193  3bf8                 cmp edi, eax
// 005fe195  751b                 jne 0x5fe1b2
// 005fe197  56                   push esi
// 005fe198  e843feffff           call 0x5fdfe0
// 005fe19d  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 005fe1a3  83c404               add esp, 4
// 005fe1a6  51                   push ecx
// 005fe1a7  8bcb                 mov ecx, ebx
// 005fe1a9  e842c7f5ff           call 0x55a8f0
// 005fe1ae  5f                   pop edi
// 005fe1af  5e                   pop esi
// 005fe1b0  5b                   pop ebx
// 005fe1b1  c3                   ret 
// 005fe1b2  8bce                 mov ecx, esi
// 005fe1b4  e8b7e2e8ff           call 0x48c470
// 005fe1b9  50                   push eax
// 005fe1ba  8bcb                 mov ecx, ebx
// 005fe1bc  e82fc7f5ff           call 0x55a8f0
// 005fe1c1  5f                   pop edi
// 005fe1c2  5e                   pop esi
// 005fe1c3  5b                   pop ebx
// 005fe1c4  c3                   ret 

struct State {
    virtual void v0(), v1(), v2(), v3(), v4(), v5(), v6();
    virtual void v7(), v8(), v9(), v10(), v11(), v12(), v13();
    virtual void v14(), v15(), v16(), v17(), v18(), v19(), v20();
    virtual void v21(), v22(), v23(), v24(), v25(), v26(), v27();
    virtual void v28(), v29(), v30(), v31(), v32(), v33(), v34();
    virtual bool check();
};

struct Node {
    State* getState();
};

struct Object {
    char padding[0x170];
    Node* node;
    void* getParent();
};

struct Tool {
    char padding[0x104];
    void* parent;
    void update();
    void setParent(void*);
};

extern "C" void* findObject(void*);
extern "C" int validNode(Node*);
extern "C" void processObject(Object*);

void Tool::update()
{
    Object* object = (Object*)findObject(this);
    if (object) {
        Node* node = object->node;
        if (node && validNode(node)) {
            State* state = node->getState();
            if (state && !state->check())
                return;
        }

        void* oldParent = parent;
        if (oldParent == object->getParent()) {
            processObject(object);
            setParent(object->node);
        } else {
            setParent(object->getParent());
        }
    }
}
