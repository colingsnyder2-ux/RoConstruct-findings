// from server: 43% by colin
struct Node {
    int a;
    int b;
    int c;
    int d;
    char e;
    char f;
};

struct Alloc {
    void* alloc(unsigned int size);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl construct_node(Node* node, int* src);

struct S {
    Node* make(int a, int b, int c, int* d, char e);
};

Node* S::make(int a, int b, int c, int* d, char e)
{
    Node* n = (Node*)operator_new(0x20);
    if (n) {
        n->a = a;
        n->b = b;
        n->c = c;
        n->d = *d;
        construct_node(n, d + 1);
        n->e = e;
        n->f = 0;
    }
    return n;
}
