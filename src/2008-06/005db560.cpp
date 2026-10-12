// from server: 91% by king_originala
struct Link {
    void connect();
    void disconnect();
};

struct Node {
    Link* getLink(void*);
};

struct Resource {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void release(int);
};

struct Humanoid {
    char padding[0x130];
    char signal[0xEC];
    Node* node;
    Resource* resource;

    void baseUpdate(void*);
    void refresh();
    void update(void*);
};

Node* __cdecl findNode(Humanoid*);
Resource* __cdecl findResource(Humanoid*);

void Humanoid::update(void* argument)
{
    baseUpdate(argument);

    Node* nextNode = findNode(this);
    if (nextNode != node) {
        if (node)
            node->getLink(signal)->disconnect();

        node = nextNode;
        if (nextNode) {
            Resource* nextResource = findResource(this);
            if (nextResource != resource && resource)
                resource->release(1);

            resource = nextResource;
            node->getLink(signal)->connect();
            refresh();
        }
    }
}
