// from server: 27% by atomic.potato
struct Node {
    Node* left;
    Node* right;
    char key;
    char pad[3];
    Node* parent;
};

struct Tree {
    Node* header;
    Node* insert_node(Node* n);
};

extern "C" Node** __cdecl get_left(Node* n);
extern "C" Node** __cdecl get_right(Node* n);
extern "C" Node** __cdecl get_parent(Node* n);
extern "C" char* __cdecl get_key(Node* n);
extern "C" Node** __cdecl get_header(Tree* t);

Node* Tree::insert_node(Node* n) {
    Node* y = *get_header(this);
    Node* x = *get_left(y);
    while (x != 0) {
        y = x;
        if (get_key(n)[0] < get_key(x)[0])
            x = *get_left(x);
        else
            x = *get_right(x);
    }
    Node* p = *get_parent(n);
    if (p == 0) {
        *get_left(n) = 0;
        *get_right(n) = 0;
    }
    *get_parent(n) = y;
    if (y == *get_header(this)) {
        *get_left(y) = n;
        *get_right(y) = n;
    } else if (get_key(n)[0] < get_key(y)[0]) {
        *get_left(y) = n;
    } else {
        *get_right(y) = n;
    }
    *get_left(n) = 0;
    *get_right(n) = 0;
    return n;
}
