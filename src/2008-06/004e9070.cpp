// from server: 90% by king_originala
typedef unsigned int UInt;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    UInt data[3];

    Value(const Value& other) { copy(&other); }
    virtual ~Value();
    void copy(const Value* other);
};

struct Node {
    UInt key;
    UInt hash;
    Value value;
    Node* next;

    Node(UInt key, Value value, UInt hash, Node* next);
};

struct Table {
    UInt unused;
    int count;
    Node** buckets;
    UInt capacity;

    void resize(UInt capacity);
    void insert(const UInt* key, const Value* value);
};

void Table::insert(const UInt* key, const Value* value)
{
    UInt hash = *key;
    UInt bucket = hash % capacity;
    Node* node = buckets[bucket];

    if (!node) {
        buckets[bucket] = new Node(*key, *value, hash, 0);
    } else {
        int length = 1;
        bool sameHash = true;

        do {
            sameHash = sameHash && hash == node->key;

            if (hash == node->key && node->hash == hash) {
                Value* destination = &node->value;
                if (destination != value) {
                    destination->Value::~Value();
                    destination->copy(value);
                }
                return;
            }

            node = node->next;
            ++length;
        } while (node);

        if ((!sameHash) & (length > 5)) {
            if ((int)capacity < count * 20)
                resize(capacity * 2 + 1);
        }

        bucket = hash % capacity;
        buckets[bucket] = new Node(*key, *value, hash, buckets[bucket]);
    }

    ++count;
}
