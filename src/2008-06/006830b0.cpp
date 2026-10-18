// from server: 70% by colin
struct Vector4 {
    float x, y, z, w;
};

struct RenderSystem {
    virtual void setWorldMatrix(const Vector4* m, const Vector4* v);
};

struct Root {
    static Root& getSingleton();
    RenderSystem* getRenderSystem();
};

struct ListNodeBase {
    ListNodeBase* next;
    ListNodeBase* prev;
};

struct ListHead {
    ListNodeBase* node;
    int size;
};

struct Node {
    char data[48];
};

struct List {
    ListHead head;
    ListNodeBase* insert(ListNodeBase* pos, Node* node);
    void erase(ListNodeBase* pos);
};

struct RbxSceneNode {
    char pad[0x3c];
    List list;
    char pad2[0x50 - 0x3c - sizeof(List)];
    ListNodeBase* node;
    void update(float a, float b, float c, float d, const Vector4* v);
};

void RbxSceneNode::update(float a, float b, float c, float d, const Vector4* v) {
    Vector4 t;
    t.x = a;
    t.y = b;
    t.z = c;
    t.w = d;

    RenderSystem* rs = Root::getSingleton().getRenderSystem();

    Vector4 m;
    m.x = v->x;
    m.y = v->y;
    m.z = v->z;
    m.w = v->w;

    rs->setWorldMatrix(&m, &t);

    Node n;
    *(int*)(n.data + 0) = 0;
    *(int*)(n.data + 4) = 2;
    *(int*)(n.data + 8) = 1;

    ListNodeBase* pos = this->node;
    List* lst = &this->list;
    ListNodeBase* result = lst->insert(pos->next, &n);
    lst->erase(result);
    pos->next = result;
    result->next->next = result;
}
