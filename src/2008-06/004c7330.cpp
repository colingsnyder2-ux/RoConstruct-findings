// from server: 76% by king_originala
struct Node {
    Node* next;
};

extern unsigned int* __cdecl allocate_values(unsigned int, unsigned int);
extern int __cdecl sub_5122C0(unsigned int*);
extern "C" __declspec(nothrow) void __cdecl release_values(void*);

struct Table {
    unsigned int count;
    unsigned int unused;
    unsigned int capacity;
    Node** buckets;

    Table(unsigned int*, void*, unsigned int);
    ~Table();
    void swap(Table&);
};

inline Table::~Table() {
    if (capacity)
        release_values(buckets);
}

inline void Table::swap(Table& other) {
    if (&count != &other.count)
        count = other.count;

    if (&capacity != &other.capacity) {
        unsigned int old = capacity;
        capacity = other.capacity;
        other.capacity = old;
    }

    if (&buckets != &other.buckets) {
        Node** old = buckets;
        buckets = other.buckets;
        other.buckets = old;
    }
}

struct Values {
    unsigned int count;
    unsigned int* volatile data;

    Values(unsigned int);
    ~Values();
};

inline Values::Values(unsigned int n)
    : count(n), data(count ? allocate_values(count, 0) : 0) {
}

inline Values::~Values() {
    if (count)
        release_values(data);
}

struct S {
    unsigned int unknown0;
    unsigned int unknown4;
    Table table;
    float factor;
    unsigned int limit;
    unsigned int first;

    void f(unsigned int);
};

void S::f(unsigned int n) {
    char* base = this ? reinterpret_cast<char*>(this) - 12 : 0;
    char* owner = *reinterpret_cast<char**>(base + 4);
    Table replacement(&n, owner ? owner + 0x290 : 0, n);

    base = this ? reinterpret_cast<char*>(this) - 12 : 0;
    Values hashes(*reinterpret_cast<unsigned int*>(base + 0x30));

    unsigned int index = 0;
    Node** end = table.buckets + table.count;

    for (Node** bucket = table.buckets; bucket != end; ++bucket) {
        Node* node = *bucket;
        while (node != reinterpret_cast<Node*>(bucket)) {
            unsigned int* key = node
                ? reinterpret_cast<unsigned int*>(
                    reinterpret_cast<char*>(node) - 0x290)
                : 0;
            hashes.data[index] = sub_5122C0(key);
            node = node->next;
            ++index;
        }
    }

    Node** newBuckets = replacement.buckets;
    index = 0;
    for (Node** bucket = table.buckets; bucket != end; ++bucket) {
        Node* node = *bucket;
        while (node != reinterpret_cast<Node*>(bucket)) {
            unsigned int slot = hashes.data[index] % replacement.count;
            Node* next = node->next;
            ++index;
            Node** destination = newBuckets + slot;
            node->next = *destination;
            *destination = node;
            node = next;
        }
    }

    table.swap(replacement);

    float scaled = static_cast<float>(table.count) * factor;
    limit = 0xffffffff;
    if (scaled < 4294967296.0f)
        limit = static_cast<unsigned int>(scaled);

    Node** bucket = table.buckets;
    unsigned int position = 0;
    while (*bucket == reinterpret_cast<Node*>(bucket)) {
        ++bucket;
        ++position;
    }
    first = position;
}
