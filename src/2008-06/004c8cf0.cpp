// from server: 4% by colin
struct Link {
    unsigned int parent;
    Link* left;
    Link* right;
};

struct Node {
    unsigned int reserved[2];
    unsigned int key;
    char padding[0x280 - 12];
    Link link;
};

struct Owner {
    char pad[0x280];
    Node node;
};

struct S {
    bool find(unsigned int key, unsigned int* out, bool flag);
    void* insert(unsigned int key, void* value);
};

void __stdcall sub_4c6980(void* a, unsigned int b, unsigned int c, void* d);

bool S::find(unsigned int key, unsigned int* out, bool flag)
{
    return false;
}

void* S::insert(unsigned int key, void* value)
{
    return 0;
}

void* __stdcall sub_4c8cf0(S* self, unsigned int key, void* value)
{
    unsigned int out = 0;
    unsigned char flag = 0;
    if (!self->find(key, &out, flag))
    {
        if (out)
            return (void*)(out - 0x280);
        return 0;
    }
    void* result = self->insert(key, value);
    if (result == value)
    {
        Owner* owner = (Owner*)((char*)self - 0xc);
        Node* n1 = owner->node.link.left ? (Node*)((char*)owner->node.link.left - 0x280) : 0;
        Node* n2 = value ? (Node*)((char*)value - 0x280) : 0;
        sub_4c6980(n2, out, (unsigned int)n1, 0);
    }
    return result;
}
