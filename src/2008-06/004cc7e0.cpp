// from server: 75% by king_originala
struct Link {
    Link* next;
};

struct Node {
    unsigned key;
    char padding[108];
    Link link;
};

struct S {
    unsigned reserved0[2];
    unsigned bucketCount;
    unsigned reserved1[2];
    Link* buckets;
    unsigned reserved2[2];
    unsigned current;

    void release(Node*);
    bool insert(Node*);
};

bool S::insert(Node* node)
{
    Link* link = node ? &node->link : 0;
    Link* first = link->next;
    Link* last = first;
    while (last->next != link)
        last = last->next;
    last->next = first;

    unsigned key = node->key;
    unsigned bucket = (key + (key >> 3)) % bucketCount;

    try {
        Link* head = buckets + bucket;
        Link* p = head->next;
        while (p != head) {
            Node* entry = p
                ? reinterpret_cast<Node*>(reinterpret_cast<char*>(p) - 112)
                : 0;
            if (key == entry->key)
                break;
            p = p->next;
        }

        if (p != head) {
            unsigned index = current;
            while (buckets[index].next == buckets + index)
                ++index;
            current = index;
            release(node);
            return false;
        }

        Link* added = node ? &node->link : 0;
        added->next = head->next;
        head->next = added;
        if (bucket < current)
            current = bucket;
        return true;
    }
    catch (...) {
        release(node);
        throw;
    }
}
