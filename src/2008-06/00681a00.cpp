// from server: 94% by king_originala
struct Iterator {
    void* owner;
    void* node;
};

struct Container {
    void* owner;
    unsigned char padding[20];
    void* endNode;

    Iterator find(const unsigned int& key);
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct S {
    unsigned char padding[0x228];
    Container container;

    bool f(unsigned int key);
};

bool S::f(unsigned int key)
{
    Container& c = container;
    Iterator it = c.find(key);
    void* endNode = c.endNode;
    void* owner = c.owner;
    if (!it.owner || it.owner != owner)
        invalid_parameter_noinfo();
    return it.node != endNode;
}
