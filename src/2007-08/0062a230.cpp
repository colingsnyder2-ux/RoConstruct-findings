// from server: 31% by colin
struct Assembly;

struct EdgeBuffer {
    struct Node {
        Node* left;
        Node* right;
        Node* parent;
        char color;
        char pad[3];
        void* key;
    };
};

struct AssemblyStage : EdgeBuffer {
    struct Impl {
        Node* head;
        Node* tail;
    };
    Impl* impl;

    struct Result {
        void* first;
        void* second;
        char flag;
        char pad[3];
    };

    Result* findLowerBound(Result* out, const void* key, int mode);
};

extern "C" int __stdcall StringLess(const void* a, const void* b);

AssemblyStage::Result* AssemblyStage::findLowerBound(Result* out, const void* key, int mode)
{
    Node* header = impl->head;
    Node* node = header->parent;
    char found = 1;

    while (node->color == 0) {
        if (StringLess(&node->key, key)) {
            node = node->left;
        } else {
            found = 0;
            node = node->right;
        }
    }

    Node* saved = header;

    if (found) {
        if (header == impl->head) {
            Result* r = findLowerBound(out, key, 1);
            out->first = r->first;
            out->second = r->second;
            out->flag = 1;
            return out;
        }
        findLowerBound(out, key, 0);
    }

    if (StringLess(&node->key, key)) {
        Result* r = findLowerBound(out, key, (int)found);
        out->first = r->first;
        out->second = r->second;
        out->flag = 1;
        return out;
    }

    out->first = saved;
    out->second = node;
    out->flag = 0;
    return out;
}
