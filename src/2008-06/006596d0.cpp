// from server: 76% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_contactpoolinteger5b64fd5f1e0c62cd.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
void* __cdecl operator new(unsigned int);


struct Vector3 {
    unsigned int x, y, z;
};

struct Node {
    unsigned int keys[4];
    unsigned short category;
    unsigned char flag;
    unsigned char padding;
    unsigned int state;
    unsigned int index;
    Vector3 position;
    Node* next;

    Node();
    void reset();
};

inline void Node::reset()
{
    unsigned short invalid = 65535;
    state = 0;
    category = invalid;
    index = ~0u;
    next = 0;
    flag = 0;
    unsigned int packed = static_cast<unsigned int>(invalid);
    packed |= static_cast<unsigned int>(invalid) << 16;
    keys[0] = packed;
    keys[1] = packed;
    keys[2] = packed;
    keys[3] = packed;
}

inline Node::Node()
{
    position.x = 0;
    position.y = 0;
    position.z = 0;
    reset();
}

struct Entry {
    unsigned int value;
    Node* head;
};

typedef std::vector<Entry> Group;

struct S {
    unsigned int count;
    unsigned int padding[2];
    Group groups[4];
    unsigned int reserved[2];
    Node* freeList;

    Node* f(unsigned int category, unsigned int index,
            const Vector3& position);
};

Node* S::f(unsigned int category, unsigned int index,
           const Vector3& position)
{
    Node* node = freeList;
    if (node) {
        freeList = node->next;
        node->reset();
    } else {
        node = new Node;
        ++count;
    }

    node->state = 0;
    node->category = static_cast<unsigned short>(category);
    node->index = index;
    node->position = position;

    Group& group = groups[category];
    node->next = group[index].head;

    group[index].head = node;
    return node;
}
