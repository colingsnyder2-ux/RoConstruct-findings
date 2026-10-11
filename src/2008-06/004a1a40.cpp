// from server: 78% by colin
struct Node {
    Node* m_left;
    Node* m_right;
    char pad8[4];
    char m_str[32];
    char m_flag;
};

struct S_func_004a1a40 {
    char pad0[0x18];
    Node* m_root;
    Node* f(const char* key);
};

extern "C" int __stdcall string_less(const char* a, const char* b);

Node* S_func_004a1a40::f(const char* key)
{
    Node* node = m_root->m_right;
    Node* result = m_root;
    if (node->m_flag == 0) {
        do {
            if (string_less(node->m_str, key)) {
                node = node->m_right;
            } else {
                result = node;
                node = node->m_left;
            }
        } while (node->m_flag == 0);
    }
    return result;
}
