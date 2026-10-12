// from server: 88% by king_originala
struct Vector3 { float x, y, z; };
struct Camera;
struct Entity;
struct Renderable;
struct RenderQueue;

typedef const Vector3& (__thiscall *PositionFunction)(Camera*);
typedef void (__thiscall *QueueFunction)(RenderQueue*, Renderable*, unsigned int, unsigned short);

extern PositionFunction getDerivedPosition;
extern Renderable* (__thiscall *getSubEntity)(Entity*, unsigned int);
extern QueueFunction addRenderable;

#define V(n) virtual void v##n();
#define V10(n) V(n##0) V(n##1) V(n##2) V(n##3) V(n##4) V(n##5) V(n##6) V(n##7) V(n##8) V(n##9)

struct Node
{
    V10(0) V10(1)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26)
    virtual void update(const Vector3&);
};

struct Special
{
    void update(Camera*, RenderQueue*, unsigned int);
};

struct S
{
    V10(0) V10(1) V10(2) V10(3) V10(4)
    V10(5) V10(6) V10(7) V10(8) V10(9)
    V10(10) V10(11) V10(12)
    V(130) V(131) V(132) V(133)
    virtual RenderQueue* getRenderQueue();

    char padding0[0xe0];
    Entity* entity;
    Entity* entities5[5];
    Entity* entities6[6];
    Node* node114;
    Node* node118;
    Node* node11c;
    unsigned char enabled120;
    unsigned char mode121;
    char padding1[0x26];
    unsigned char enabled148;
    unsigned char mode149;
    char padding2[0x16];
    unsigned char enabled160;
    unsigned char mode161;
    char padding3[0x8bdc - 0x162];
    Special* special;
    char padding4[4];
    Node* node8be4;

    void f(Camera*);
};

#undef V10
#undef V

void S::f(Camera* camera)
{
    PositionFunction position = getDerivedPosition;

    if (node114)
        node114->update(position(camera));

    if (node11c)
    {
        node11c->update(position(camera));
        node8be4->update(position(camera));
    }

    if (node118)
        node118->update(position(camera));

    QueueFunction enqueue = addRenderable;

    if (enabled120)
        enqueue(getRenderQueue(), getSubEntity(entity, 0),
                mode121 ? 5 : 95, 100);

    if (enabled148)
    {
        unsigned int group = mode149 ? 5 : 95;
        Entity** p = entities6;
        int count = 6;
        do
        {
            enqueue(getRenderQueue(), getSubEntity(*p, 0), group, 100);
            ++p;
        } while (--count);

        Special* object = special;
        if (object)
            object->update(camera, getRenderQueue(), group);
    }

    if (enabled160)
    {
        unsigned int group = mode161 ? 5 : 95;
        Entity** p = entities5;
        int count = 5;
        do
        {
            enqueue(getRenderQueue(), getSubEntity(*p, 0), group, 100);
            ++p;
        } while (--count);
    }
}
