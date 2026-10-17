// from server: 54% by colin
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
    char padding0[4];
    Node* node;
};

struct Receiver {
    bool find(Node* node, void* out, unsigned char flag);
    void* allocate(void* arg, void* storage);
    bool method(void* arg1, void* arg2);
};

extern "C" void __cdecl finalize(void* a, void* b, void* c, void* d);

bool Receiver::method(void* arg1, void* arg2)
{
    unsigned char flag = 0;
    void* out = 0;
    Node* node = *(Node**)((char*)arg1 + 8);

    if (!find(node, &out, flag))
    {
        if (out != 0)
            return (char*)out - 0x280 != 0;
        return false;
    }

    void* result = allocate(arg1, arg2);
    if (result == arg2)
    {
        Owner* owner = 0;
        if (this != 0)
            owner = (Owner*)((char*)this - 0xc);
        Node* n1 = 0;
        if (owner != 0)
            n1 = *(Node**)((char*)owner + 4);
        void* p1 = 0;
        if (n1 != 0)
            p1 = (char*)n1 + 0x280;
        void* p2 = 0;
        if (arg2 != 0)
            p2 = (char*)arg2 + 0x280;
        finalize(p2, out, arg1, p1);
    }
    return result != 0;
}
