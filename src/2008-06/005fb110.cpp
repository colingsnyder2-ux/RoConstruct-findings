// from server: 100% by king_originala
// roc 2008-06 005fb110  unit: RBX::Kernel  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb110
//
// 005fb110  56                   push esi
// 005fb111  57                   push edi
// 005fb112  8bf1                 mov esi, ecx
// 005fb114  e8f7e10400           call 0x649310
// 005fb119  ddd8                 fstp st(0)
// 005fb11b  8b7610               mov esi, dword ptr [esi + 0x10]
// 005fb11e  8b0e                 mov ecx, dword ptr [esi]
// 005fb120  8b5604               mov edx, dword ptr [esi + 4]
// 005fb123  8b5491fc             mov edx, dword ptr [ecx + edx*4 - 4]
// 005fb127  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fb12b  8b07                 mov eax, dword ptr [edi]
// 005fb12d  891481               mov dword ptr [ecx + eax*4], edx
// 005fb130  8902                 mov dword ptr [edx], eax
// 005fb132  8b4604               mov eax, dword ptr [esi + 4]
// 005fb135  6a00                 push 0
// 005fb137  48                   dec eax
// 005fb138  50                   push eax
// 005fb139  8bce                 mov ecx, esi
// 005fb13b  e830f6ffff           call 0x5fa770
// 005fb140  57                   push edi
// 005fb141  8bce                 mov ecx, esi
// 005fb143  c707ffffffff         mov dword ptr [edi], 0xffffffff
// 005fb149  e8d2fdffff           call 0x5faf20
// 005fb14e  8b7f2c               mov edi, dword ptr [edi + 0x2c]
// 005fb151  85ff                 test edi, edi
// 005fb153  7405                 je 0x5fb15a
// 005fb155  d9ee                 fldz 
// 005fb157  d95f04               fstp dword ptr [edi + 4]
// 005fb15a  5f                   pop edi
// 005fb15b  5e                   pop esi
// 005fb15c  c20400               ret 4

extern float __cdecl infinity();

struct State {
    char reserved[4];
    float value;
};

struct Node {
    int index;
    char reserved[40];
    State* state;
};

struct Array {
    Node** data;
    int size;

    void resize(int count, Node* value);
    void remove(Node* node);
};

struct Kernel {
    char reserved[16];
    Array* nodes;

    void removeNode(Node* node);
};

void Kernel::removeNode(Node* node)
{
    infinity();
    Array* array = nodes;
    int index = node->index;
    Node* last = array->data[array->size - 1];
    array->data[index] = last;
    last->index = index;
    array->resize(array->size - 1, 0);
    node->index = -1;
    array->remove(node);
    State* state = node->state;
    if (state)
        state->value = 0.0f;
}
