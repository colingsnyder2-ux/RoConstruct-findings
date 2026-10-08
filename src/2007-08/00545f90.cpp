// from server: 47% by colin
// roc 2007-08 00545f90  unit: RBX::MD5HasherImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545f90

extern "C" int __cdecl string_less(const void*, const void*);

struct MD5HasherImpl {
    struct Node {
        Node* next;
        char data[8];
    };
    struct Result {
        Node* first;
        Node* second;
    };
    Result* findRange(Node* first, Node* last, const void* key);
};

MD5HasherImpl::Result* MD5HasherImpl::findRange(Node* first, Node* last, const void* key)
{
    Node* cur = first;
    while (cur != last) {
        if (string_less(cur->data, key))
            cur = cur->next;
        else
            break;
    }
    Result* out = (Result*)((char*)first - 4);
    out->second = cur;
    out->first = last;
    return out;
}
