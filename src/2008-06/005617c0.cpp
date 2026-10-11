// from server: 42% by colin
// roc 2008-06 005617c0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005617c0

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_6A067A(void*);
extern "C" void __cdecl sub_561020(void*);

struct Node {
    Node* next;
    Node* prev;
    int   pad[2];
};

struct S {
    Node* head;
    int   pad[4];
    Node* sentinel;
    int   count;
    void  insert(int* out, Node* pos, Node* node);
};

void S::insert(int* out, Node* pos, Node* node)
{
    if (node == 0) {
        _invalid_parameter_noinfo();
        if (node == 0) {
            int* p = 0;
            if (pos != (Node*)p[5]) {
                _invalid_parameter_noinfo();
            }
        }
    }
    int* p = (int*)node;
    int v = p[0];
    if (pos != sentinel) {
        Node* n = node;
        Node* next = n->next;
        Node* prev = n->prev;
        next->prev = prev;
        prev->next = next;
        sub_561020(&n->pad[0]);
        sub_6A067A(n);
        count--;
    }
    Node* h = head;
    out[1] = v;
    out[0] = (int)h;
}
