// from server: 90% by king_originala
typedef unsigned int UInt;

extern int valueTag;

void * __cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Value {
    void *tag;
    UInt data[3];

    Value(const Value &);
    void copy(const Value &);
    void release();
};

inline Value::Value(const Value &other)
{
    tag = &valueTag;
    copy(other);
}

struct Node {
    UInt key;
    UInt hash;
    Value value;
    Node *next;

    Node(UInt, Value, UInt, Node *);
};

struct Table {
    UInt reserved;
    int size;
    Node **buckets;
    int capacity;

    void resize(int);
    void insert(const UInt &, const Value &);
};

void Table::insert(const UInt &key, const Value &value)
{
    UInt hash = key;
    UInt bucket = hash % capacity;
    Node *node = buckets[bucket];

    if (!node) {
        buckets[bucket] = new Node(key, value, hash, 0);
    } else {
        int length = 1;
        bool sameHash = true;

        do {
            sameHash = sameHash && hash == node->key;

            if (hash == node->key && node->hash == hash) {
                Value *destination = &node->value;
                if (destination != &value) {
                    destination->release();
                    destination->copy(value);
                }
                return;
            }

            node = node->next;
            ++length;
        } while (node);

        if ((length > 5) & !sameHash) {
            if (capacity < size * 20)
                resize(capacity * 2 + 1);
        }

        bucket = hash % capacity;
        buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    }

    ++size;
}
