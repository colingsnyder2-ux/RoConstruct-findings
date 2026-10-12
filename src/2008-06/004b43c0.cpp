// from server: 91% by king_originala
void __cdecl operator delete(void*);

struct Link {
    Link* next;
};

struct Node {
    char padding[0x290];
    Link link;
    ~Node();
};

struct S {
    char padding0[8];
    unsigned count;
    char padding1[8];
    Link* buckets;

    void clear();
};

void S::clear()
{
    Link* bucket = buckets;
    Link* end = bucket + count;
    for (; bucket != end; ++bucket) {
        Link* current = bucket->next;
        while (current != bucket) {
            Link* next = current->next;
            Node* node = reinterpret_cast<Node*>(
                reinterpret_cast<char*>(current) - 0x290);
            node->~Node();
            operator delete(node);
            current = next;
        }
    }
}
