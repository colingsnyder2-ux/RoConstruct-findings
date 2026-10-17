// from server: 45% by colin
struct Root {
    static Root& getSingleton();
    void* getRenderSystem();
};

struct RenderSystem {
    void* vtable;
};

struct Vec4 {
    float x, y, z, w;
};

struct Node {
    char pad[0x3c];
    struct List {
        struct Node2 {
            char pad[4];
            Node2* next;
        };
        Node2* head;
        Node2* insert(Node2* pos, Node2* val);
        void erase(Node2* pos);
    } list;
    char pad2[0x50 - 0x3c - 4];
    List::Node2* node;
};

struct RbxSceneNode {
    char pad[0x50];
    Node::List::Node2* node;
    void setPosition(float x, float y, float z, float w, const Vec4& v);
};

extern "C" {
    extern void* (__stdcall* getSingletonFn)();
    extern void* (__stdcall* getRenderSystemFn)(void*);
}

void RbxSceneNode::setPosition(float x, float y, float z, float w, const Vec4& v) {
    float a = x;
    float b = y;
    float c = z;
    float d = w;

    Root& root = Root::getSingleton();
    RenderSystem* rs = (RenderSystem*)root.getRenderSystem();

    Vec4 tmp;
    tmp.x = v.x;
    tmp.y = v.y;
    tmp.z = v.z;
    tmp.w = v.w;

    void* vt = rs->vtable;
    typedef void (__thiscall* Fn)(RenderSystem*, Vec4*, Vec4*);
    Fn fn = *(Fn*)((char*)vt + 0x108);
    fn(rs, &tmp, &tmp);

    Node::List::Node2* n = this->node;
    Node::List::Node2* result = ((Node::List*)((char*)this + 0x3c))->insert(n, n);
    ((Node::List*)((char*)this + 0x3c))->erase(result);
    this->node = result;
    result->next->next = result;
}
