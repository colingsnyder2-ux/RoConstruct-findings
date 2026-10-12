// from server: 89% by king_originala
struct Tag {
    bool value;
};

struct Link {
    unsigned int tagged;
    Link *left;
    Link *right;
};

struct Node {
    char padding0[8];
    double key;
    char padding1[80];
    Link link;
};

extern "C" void __cdecl insert(
    Link *node, Link *root, Link **left, Link **right);

struct Factory {
    bool check(Node *node, Node *position, Tag tag);
    bool find(const double *key, Link **position, Tag tag);
    void remove(Node *node);
    bool attach(Node *node);
};

bool Factory::attach(Node *node)
{
    Tag tag;
    tag.value = false;

    if (!check(node, node, tag)) {
        Node *rightOwner = *reinterpret_cast<Node **>(
            (this ? reinterpret_cast<char *>(this) - 12 : 0) + 4);
        Node *leftOwner = *reinterpret_cast<Node **>(
            (this ? reinterpret_cast<char *>(this) - 12 : 0) + 4);
        Node *rootOwner = *reinterpret_cast<Node **>(
            (this ? reinterpret_cast<char *>(this) - 12 : 0) + 4);

        insert(node ? &node->link : 0,
               &rootOwner->link,
               &leftOwner->link.left,
               &rightOwner->link.right);

        Link *position;
        tag.value = false;

        try {
            try {
                try {
                    if (!find(&node->key, &position, tag)) {
                        remove(node);
                        return false;
                    }
                }
                catch (...) {
                    remove(node);
                    throw;
                }
            }
            catch (...) {
                throw;
            }
        }
        catch (...) {
            throw;
        }
    }

    return true;
}
