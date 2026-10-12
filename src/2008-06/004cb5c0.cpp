// from server: 71% by king_originala
unsigned* __cdecl allocate_hashes(unsigned, unsigned);
extern "C" void __cdecl release_storage(void*) throw();

struct Node {
    Node* next;
};

struct Buckets {
    unsigned count;
    unsigned reserved;
    unsigned capacity;
    Node** data;

    Buckets(unsigned*, void*, unsigned);
    ~Buckets();
};

inline Buckets::~Buckets()
{
    if (capacity)
        release_storage(data);
}

struct Owner {
    unsigned key;
    void* context;
    char padding[40];
    unsigned size;
};

struct S {
    unsigned reserved[2];
    Buckets buckets;
    float load;
    unsigned limit;
    unsigned first;

    void rehash(unsigned);
};

void S::rehash(unsigned n)
{
    Owner* owner = this ? reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 12) : 0;
    void* context = owner->context;
    context = context ? reinterpret_cast<char*>(context) + 112 : 0;

    Buckets replacement(&n, context, n);

    owner = this ? reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 12) : 0;
    unsigned size = owner->size;
    unsigned* hashes = size ? allocate_hashes(size, 0) : 0;
    unsigned index = 0;

    Node** slot = buckets.data;
    n = reinterpret_cast<unsigned>(slot + buckets.count);
    for (; slot != reinterpret_cast<Node**>(n); ++slot) {
        Node* node = *slot;
        while (node != reinterpret_cast<Node*>(slot)) {
            Owner* item = node ? reinterpret_cast<Owner*>(
                reinterpret_cast<char*>(node) - 112) : 0;
            unsigned key = item->key;
            hashes[index++] = key + (key >> 3);
            node = node->next;
        }
    }

    unsigned secondIndex = 0;
    for (slot = buckets.data; slot != reinterpret_cast<Node**>(n); ++slot) {
        Node* node = *slot;
        while (node != reinterpret_cast<Node*>(slot)) {
            unsigned bucket = hashes[secondIndex++] % replacement.count;
            Node** destination = replacement.data + bucket;
            Node* next = node->next;
            node->next = *destination;
            *destination = node;
            node = next;
        }
    }

    Buckets* destination = &buckets;
    if (destination != &replacement)
        destination->count = replacement.count;

    if (&destination->capacity != &replacement.capacity) {
        unsigned old = destination->capacity;
        destination->capacity = replacement.capacity;
        replacement.capacity = old;
    }

    if (&destination->data != &replacement.data) {
        Node** old = destination->data;
        destination->data = replacement.data;
        replacement.data = old;
    }

    double maximum = static_cast<double>(destination->count) * load;
    limit = 0xffffffffU;
    if (maximum < 4294967296.0f)
        limit = static_cast<unsigned>(maximum);

    slot = buckets.data;
    unsigned empty = 0;
    while (*slot == reinterpret_cast<Node*>(slot)) {
        ++slot;
        ++empty;
    }
    first = empty;

    if (size)
        release_storage(hashes);
}
