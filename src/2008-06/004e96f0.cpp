// from server: 88% by king_originala
typedef unsigned int uint;

extern void *valueTable[];
void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Value {
    void **table;
    uint data[3];

    Value(const Value &);
    ~Value();
    void copyFrom(const Value &);
    void release();
};

inline Value::Value(const Value &other) : table(valueTable)
{
    copyFrom(other);
}

struct Node {
    uint key;
    uint hash;
    Value value;
    Node *next;

    Node(uint, Value, uint, Node *);
};

struct S {
    uint reserved;
    int size;
    Node **buckets;
    int bucketCount;

    void resize(int);
    void set(const uint &, const Value &);
};

void S::set(const uint &key, const Value &value)
{
    uint hash = key;
    uint bucket = hash % (uint)bucketCount;
    Node *node = buckets[bucket];

    if (!node) {
        buckets[bucket] = new Node(key, value, hash, 0);
    } else {
        int length = 1;
        bool sameHash = true;

        do {
            sameHash = sameHash && hash == node->key;

            if (hash == node->key && node->hash == hash) {
                if (&node->value != &value) {
                    node->value.release();
                    node->value.copyFrom(value);
                }
                return;
            }

            node = node->next;
            ++length;
        } while (node);

        if ((!sameHash & (length > 5)) && bucketCount < size * 20)
            resize(bucketCount * 2 + 1);

        bucket = hash % (uint)bucketCount;
        buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    }

    ++size;
}
