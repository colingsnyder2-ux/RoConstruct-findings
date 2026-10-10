// from server: 87% by colin
struct Node {
    char pad[0x48];
    Node* next;
    int key;
};

struct List {
    char pad0[4];
    Node** buckets;
    unsigned int bucketCount;
    int RemoveKey(unsigned int key);
    void RemoveNode(Node* node);
};

extern "C" int __stdcall sub_68F840(Node* node, unsigned int* key);

int List::RemoveKey(unsigned int key) {
    Node** buckets = this->buckets;
    if (buckets == 0) {
        return 0;
    }
    unsigned int index = key >> 4;
    unsigned int bucket = index % this->bucketCount;
    Node* node = buckets[bucket];
    Node** link = &buckets[bucket];
    while (node != 0) {
        if (node->key == (int)index) {
            unsigned int tmp;
            if (sub_68F840(node, &tmp) != 0) {
                *link = node->next;
                this->RemoveNode(node);
                return 1;
            }
        }
        link = &node->next;
        node = node->next;
    }
    return 0;
}
