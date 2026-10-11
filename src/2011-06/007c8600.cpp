// from server: 75% by atomic.potato
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char pad[0x59 - 12];
    char color;
};

struct Tree {
    Node* head;
    void _Max();
};

void Tree::_Max()
{
    Node* x = head;
    if (x->color != 0) {
        return;
    }
    Node* y = x->right;
    if (y->color == 0) {
        Node* z = y->left;
        if (z->color == 0) {
            do {
                y = z;
                z = y->left;
            } while (z->color == 0);
        }
        head = y;
        return;
    }
    Node* p = x->parent;
    if (p->color == 0) {
        while (head == p->right) {
            head = p;
            p = p->parent;
            if (p->color != 0) {
                break;
            }
        }
    }
    head = p;
}
