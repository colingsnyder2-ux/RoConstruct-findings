// from server: 40% by colin
// roc 2007-08 005501d0  size: 84 bytes

extern "C" int __stdcall _pubsync(void*);

struct Node {
    Node* next;
    void* data;
};

struct StreamBuf {
    virtual int sync();
};

struct Iter {
    int f(Node* first, Node* last, int flags, int* out);
};

int Iter::f(Node* first, Node* last, int flags, int* out)
{
    Node* cur = first;
    while (cur != last) {
        StreamBuf* sb = *(StreamBuf**)((char*)cur->data + 8);
        if (flags & 2) {
            _pubsync(sb);
        }
        sb->sync();
        cur = cur->next;
    }
    *out = flags;
    return flags;
}
