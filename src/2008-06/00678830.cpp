// from server: 94% by king_originala
struct String {
    unsigned char data[28];
};

extern "C" bool (__cdecl *less_string)(const String &, const String &);

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    String key;
    unsigned char reserved[85];
    unsigned char nil;
};

struct S {
    unsigned char reserved[24];
    Node *head;

    Node *lower_bound(const String &key);
};

Node *S::lower_bound(const String &key)
{
    Node *current = head->parent;
    Node *result = head;

    if (!current->nil) {
        bool (__cdecl *compare)(const String &, const String &) = less_string;
        do {
            if (compare(current->key, key))
                current = current->right;
            else {
                result = current;
                current = current->left;
            }
        } while (!current->nil);
    }

    return result;
}
