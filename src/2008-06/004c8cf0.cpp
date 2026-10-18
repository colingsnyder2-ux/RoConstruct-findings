// from server: 59% by colin
inline void* operator new(unsigned int, void* p) { return p; }
inline void operator delete(void*, void*) {}

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
    char pad[8];
    Node* node;
};

struct Receiver {
    bool find(unsigned int key, Node** out, bool flag);
    void* alloc(Node* n, void* arg);
};

extern "C" void sub_4c6980(void* a, void* b, void* c, void* d);

void* __stdcall sub_4c8cf0(Receiver* self, unsigned int key, void* arg)
{
    Node* out = 0;
    bool flag = false;
    if (!self->find(key, &out, flag))
    {
        if (out)
            return (char*)out - 0x280;
        return 0;
    }
    void* result = self->alloc(out, arg);
    if (result == arg)
    {
        Node* n = self ? (Node*)((char*)self - 0xc) : 0;
        Owner* owner = n ? (Owner*)n->reserved[1] : 0;
        void* a = owner ? (void*)((char*)owner + 0x280) : 0;
        void* b = arg ? (void*)((char*)arg + 0x280) : 0;
        sub_4c6980(b, out, a, b);
    }
    return result;
}
