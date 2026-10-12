// from server: 81% by king_originala
void* __cdecl operator new(unsigned int);
extern unsigned int globalValue;

struct S;
struct Result;

struct VTable {
    void* reserved0;
    bool (__thiscall *check)(S*);
    void* reserved[8];
    void (__thiscall *fill)(S*, void*, Result*);
};

struct Metadata {
    unsigned int reserved[3];
    unsigned int value;
};

struct Node {
    Node* next;
    unsigned int reserved0;
    unsigned int value;
    unsigned int count;
    void* name;
    unsigned int reserved1;
};

struct Result {
    unsigned int field0;
    unsigned int field4;
    unsigned int field8;
    unsigned int reserved0;
    unsigned int value;
    unsigned int field14;
    unsigned int reserved1[2];
    Node* first;
    Node* last;
};

struct S {
    VTable* table;
    void* name;
    unsigned int reserved[2];
    unsigned int flags;
    Metadata* metadata;

    Result* f(void* argument, bool force);
};

Result* S::f(void* argument, bool force)
{
    if (!force) {
        if (table->check(this))
            return 0;
        if (!((flags >> 1) & 1))
            return 0;
    }

    Result* result = static_cast<Result*>(operator new(40));
    if (result) {
        unsigned int value = metadata->value;
        result->field0 = 0;
        result->field4 = 0;
        result->field8 = 0;
        result->field14 = 0;
        result->value = value;
        result->first = 0;
        result->last = 0;
    }

    unsigned int value = globalValue;
    void* nodeName = name;
    Node* node = static_cast<Node*>(operator new(24));
    if (node) {
        node->next = 0;
        node->value = value;
        node->count = 1;
        node->name = nodeName;
    } else {
        node = 0;
    }

    if (!result->last)
        result->first = node;
    else
        result->last->next = node;
    result->last = node;

    table->fill(this, argument, result);
    return result;
}
