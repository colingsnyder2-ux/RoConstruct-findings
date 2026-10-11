// from server: 24% by atomic.potato
struct Node;

struct Tree {
    Node* find(Node*);
    Node* begin();
};

struct Node {
    Node* left;
    Node* right;
    Node* parent;
    char color;
    char pad[3];
};

extern "C" Node* __stdcall sub_541DA0(Node*);
extern "C" Node* __stdcall sub_54C630(Node*);
extern "C" Node* __stdcall sub_54C640(Node*);
extern "C" char* __stdcall sub_54C600(Node*);

struct Mesh {
    Node* insert_unique(Node*);
};

Node* Mesh::insert_unique(Node* hint)
{
    Node* pos = sub_541DA0(hint);
    Node* cur = pos->left;
    Node* existing = sub_54C630(cur);
    Node* p = sub_541DA0(hint);
    p->left = existing->left;
    Node* e2 = sub_54C630(cur);
    char* chk = sub_54C600(e2->left);
    if (*chk == 0) {
        Node* e3 = sub_54C630(cur);
        Node* r = sub_54C640(e3->left);
        r->left = hint;
    }
    Node* a = sub_54C640(hint);
    Node* b = sub_54C640(cur);
    a->left = b->left;
    Node* root = ((Tree*)this)->find(0);
    if (hint == root->left) {
        Node* r2 = ((Tree*)this)->find(0);
        r2->left = cur;
    } else {
        Node* c = sub_54C640(hint);
        Node* d = sub_54C630(c->left);
        if (hint == d->left) {
            Node* e = sub_54C640(hint);
            Node* f = sub_54C630(e->left);
            f->left = cur;
        } else {
            Node* g = sub_54C640(hint);
            Node* h = sub_541DA0(g->left);
            h->left = cur;
        }
    }
    Node* i = sub_54C630(cur);
    i->left = hint;
    Node* j = sub_54C640(hint);
    j->left = cur;
    return 0;
}
