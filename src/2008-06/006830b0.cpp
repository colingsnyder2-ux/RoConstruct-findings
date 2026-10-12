// from server: 39% by colin
struct Vec4 {
    float x, y, z, w;
};

struct RenderSystem {
    virtual void setProjectionMatrix(void*, void*, int);
};

struct Root {
    static Root& getSingleton();
    RenderSystem* getRenderSystem();
};

struct Node {
    char pad[0x3c];
    struct List {
        struct Item {
            Item* next;
            Item* prev;
        };
        Item* head;
        void insert(Item* pos, Item* item);
        void erase(Item* item);
    } list;
    char pad2[0x50 - 0x3c - 4];
    List::Item* item;
};

struct RbxSceneNode : Node {
    void setProjectionMatrix(const Vec4&, const Vec4&, const Vec4&, const Vec4&, int);
};

void RbxSceneNode::setProjectionMatrix(const Vec4& a, const Vec4& b, const Vec4& c, const Vec4& d, int e) {
    float m[16];
    m[0] = a.x; m[1] = a.y; m[2] = a.z; m[3] = a.w;
    m[4] = b.x; m[5] = b.y; m[6] = b.z; m[7] = b.w;
    m[8] = c.x; m[9] = c.y; m[10] = c.z; m[11] = c.w;
    m[12] = d.x; m[13] = d.y; m[14] = d.z; m[15] = d.w;
    RenderSystem* rs = Root::getSingleton().getRenderSystem();
    rs->setProjectionMatrix(m, m + 4, e);
    List::Item* it = item;
    List::Item* n = new List::Item;
    n->next = 0;
    n->prev = 0;
    list.insert(it, n);
    list.erase(it);
    item = n;
    n->next->prev = n;
}
