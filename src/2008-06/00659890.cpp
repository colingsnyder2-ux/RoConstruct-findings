// from server: 61% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Key {
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

struct Node {
    void* owner;
    Node* next;
    unsigned int reserved0;
    unsigned int reserved1;
    unsigned int a;
    unsigned int b;
    unsigned int c;
};

struct Entry {
    Node* node;
};

struct Bucket {
    unsigned int reserved[3];
    Entry* begin;
    Entry* end;
};

struct Other {
    unsigned int reserved[8];
    unsigned short shift;
};

struct S {
    unsigned int reserved[3];
    Bucket buckets[1];

    Node* find(void* owner, Key* key);
};

Node* S::find(void* owner, Key* key)
{
    unsigned int hash = key->b * 0x127409f;
    hash ^= key->c * 0x4f9ffb7;
    hash ^= key->a * 0x466f45d;

    unsigned int shift = ((Other*)owner)->shift;
    unsigned int mask = 0xffff;
    mask = (int)mask >> shift;

    Bucket* bucket = &buckets[shift * 3];
    hash &= mask;

    if (hash >= (unsigned int)(bucket->end - bucket->begin))
        _invalid_parameter_noinfo();

    Node* node = bucket->begin[hash].node;
    while (node) {
        if (node->owner == owner &&
            node->a == key->a &&
            node->b == key->b &&
            node->c == key->c)
            break;
        node = node->next;
    }
    return node;
}
