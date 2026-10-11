// from server: 44% by tester
struct TreeNode {
    TreeNode* left;
    TreeNode* parent;
    unsigned int key;
    char color;
    char pad[3];
};

struct Tree {
    TreeNode* header;
    int size;
};

struct Map {
    Tree tree;
};

struct GettingUp {
    char pad[0x30];
    Map map;
    void erase(int* key);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __stdcall sub_667fd0(void* a, void* b);
extern "C" void __stdcall sub_5539d0(void* a, void* b, void* c);
extern "C" void __stdcall sub_68dfa0(void* a);

void GettingUp::erase(int* key)
{
    if (key == 0)
        return;

    TreeNode* first = 0;
    TreeNode* last = 0;

    sub_667fd0(&first, key);

loop:
    TreeNode* node = map.tree.header->parent;
    TreeNode* result = map.tree.header;
    while (node->color == 0) {
        if (*key < node->key) {
            result = node;
            node = node->left;
        } else {
            node = node->parent;
        }
    }

    TreeNode* root = map.tree.header->left;
    if (first != 0 && first != root) {
        _invalid_parameter_noinfo();
    }

    if (last == result)
        return;

    if (first == 0) {
        _invalid_parameter_noinfo();
        TreeNode* n = 0;
        if (last != n->parent) {
            _invalid_parameter_noinfo();
        }
    } else {
        first = first->left;
        if (last != first->parent) {
            _invalid_parameter_noinfo();
        }
    }

    if (last->key != *key) {
        sub_68dfa0(&first);
        last = first;
        first = 0;
        goto loop;
    }

    sub_5539d0(&first, last, key);
}
