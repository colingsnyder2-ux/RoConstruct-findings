// from server: 90% by king_originala
typedef unsigned int UInt;

extern void *valueTable;

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Value {
    void *table;
    UInt data[3];

    Value(const Value &other) : table(&valueTable) {
        copy(other);
    }

    ~Value();
    void copy(const Value &other);
};

struct Node {
    UInt key;
    UInt hash;
    Value value;
    Node *next;

    Node(UInt key, Value value, UInt hash, Node *next);
};

struct S {
    UInt reserved;
    int size;
    Node **buckets;
    int bucketCount;

    void rehash(int count);
    void f(const UInt &key, const Value &value);
};

void S::f(const UInt &key, const Value &value)
{
    UInt hash = key;
    UInt bucket = hash % bucketCount;
    Node *node = buckets[bucket];

    if (!node) {
        buckets[bucket] = new Node(key, value, hash, 0);
    } else {
        int count = 1;
        bool sameHash = true;

        while (node) {
            sameHash = sameHash && hash == node->key;

            if (hash == node->key && node->hash == hash) {
                if (&node->value != &value) {
                    node->value.~Value();
                    node->value.copy(value);
                }
                return;
            }

            node = node->next;
            ++count;
        }

        if ((!sameHash) & (count > 5)) {
            if (bucketCount < size * 20)
                rehash(bucketCount * 2 + 1);
        }

        bucket = hash % bucketCount;
        buckets[bucket] = new Node(key, value, hash, buckets[bucket]);
    }

    ++size;
}
