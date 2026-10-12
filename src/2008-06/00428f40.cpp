// from server: 72% by king_originala
struct Time {
    unsigned long low;
    unsigned long high;
};

union Payload {
    struct {
        unsigned long tag;
        Time time;
        unsigned long padding[77];
    } data;
    double alignment;
};

struct Node {
    Node* next;
    Node* previous;
    Payload value;
};

struct Iterator {
    void* owner;
    Node* node;
};

Iterator* findBoundary(Iterator* result, Iterator first, Iterator last,
                      volatile Time limit)
{
    for (;;) {
        if (first.node == last.node)
            break;

        unsigned long high = limit.high;
        Payload value = first.node->value;
        unsigned long low = limit.low;

        if (((unsigned __int64)low |
             ((unsigned __int64)high << 32)) <
            ((unsigned __int64)value.data.time.low |
             ((unsigned __int64)value.data.time.high << 32)))
            break;

        first.node = first.node->next;
    }

    result->owner = first.owner;
    result->node = first.node;
    return result;
}
