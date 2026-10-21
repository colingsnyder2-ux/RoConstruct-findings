// from server: 57% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_spatialchildnamedlookupc47d340cf2fce1b9.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" int __cdecl compare_objects(void*, void*);

struct Key {
    unsigned int a, b, c;
};

struct Node {
    unsigned short indices[8];
    unsigned short level;
    unsigned char mask;
    char padding[9];
    Key key;
    Node* next;
};

struct Record {
    void* object;
    Record* next;
    char padding[12];
    Key key;
};

struct BucketEntry {
    Record* node;
    unsigned int value;
};

struct Bucket { std::vector<BucketEntry> nodes; };

struct Manager {
    void process(void*, void*);
};

struct S {
    char padding[8];
    Manager* manager;
    Bucket buckets[1];

    Node* find(unsigned int, unsigned int, const Key*);
    void visit(Node*, void*);
};

void S::visit(Node* node, void* object)
{
    unsigned int a = node->key.a * 2;
    unsigned int b = node->key.b * 2;
    unsigned int c = node->key.c * 2;

    for (int i = 0; i < 8; ++i) {
        if (node->mask & static_cast<unsigned char>(1 << i)) {
            unsigned int index = node->indices[i];
            unsigned int x = a + (i & 1);
            unsigned int y = b + ((i >> 1) & 1);
            unsigned int z = c + ((i >> 2) & 1);
            Key key = { x, y, z };

            Bucket* bucket = &buckets[node->level - 1];
            Record* record = bucket->nodes[index].node;
            while (record) {
                void* other = record->object;
                if (other != object &&
                    record->key.a == x &&
                    record->key.b == y &&
                    record->key.c == z &&
                    !compare_objects(object, other)) {
                    manager->process(object, other);
                }
                record = record->next;
            }

            if (node->level > 1) {
                Node* child = find(node->level - 1, node->indices[i], &key);
                visit(child, object);
            }
        }
    }
}
