// from server: 95% by king_originala
struct Node {
    unsigned char data[24];
    Node* next;
};

struct S {
    int index;
    Node* node;
    int state;
    int count;
    Node** buckets;
    bool end;
    unsigned char padding[3];

    S operator++(int);
};

S S::operator++(int)
{
    S previous = *this;
    node = node->next;

    if (!node) {
        int limit = count;
        do {
            int current = ++index;
            if (current >= limit) {
                end = true;
                return previous;
            }
            node = buckets[current];
        } while (!node);
    }

    return previous;
}
