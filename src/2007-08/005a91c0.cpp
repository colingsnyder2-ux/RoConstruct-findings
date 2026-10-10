// from server: 87% by tester
struct Geometry {
    char pad[0x20];
    Geometry* bulletCollisionObject;
    Geometry* getBulletCollisionObject();
};

struct Node {
    virtual int getType();
    char pad[4];
    Node* next;
};

struct Holder {
    char pad[0x34];
    Node* node;
    void addChild(Geometry* g);
};

struct SignalDesc {
    void addChild(Geometry* g);
};

void SignalDesc::addChild(Geometry* g)
{
    Geometry* obj = g->getBulletCollisionObject();
    if (obj) {
        Node* n = ((Holder*)this)->node;
        while (n->getType() != 5) {
            n = n->next;
        }
        ((Holder*)n)->addChild(obj);
    }
}
