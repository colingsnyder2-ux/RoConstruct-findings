// from server: 36% by colin
// roc 2008-06 004c9930  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 118 bytes

struct Node {
    unsigned int color;
    Node* parent;
    Node* left;
    Node* right;
};

struct Tree {
    Node* header;
    unsigned int size;
};

extern "C" void __cdecl sub_4c6710(Node** out, Node* hint);
extern "C" void __cdecl sub_4c6870(Node* header, Node* node);

void __cdecl insert_node(Tree* tree, Node* hint, Node* node)
{
    Node* header = tree->header;
    if (header->parent != 0 && header->parent != hint) {
        Node* pos;
        sub_4c6710(&pos, hint);
        pos->parent = node;
        if (pos == header->right) {
            header->right = node;
        }
    } else {
        header->parent = node;
        if (header == hint) {
            header->right = node;
            header->left = node;
        } else if (header->left == hint) {
            header->left = node;
        }
    }
    node->color = (node->color & 1) | (unsigned int)header;
    node->parent = 0;
    node->left = 0;
    node->right = 0;
    sub_4c6870(header, node);
}
