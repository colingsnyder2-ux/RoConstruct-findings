// from server: 83% by king_originala
struct Camera;
struct RenderPriorityGroup;
struct RenderQueueGroup;
struct Timer;

extern "C" {
    extern void (__cdecl *invalidParameter)();
}

struct Node {
    char unused[16];
    RenderPriorityGroup* value;
};

struct Container {
    char unused[24];
    Node* head;
};

struct Iterator {
    Container** owner;
    Node* current;
    Container** endOwner;
    Node* end;

    void advance();
};

extern Iterator* (__thiscall *getIterator)(RenderQueueGroup*, Iterator*);
extern void (__thiscall *constructTimer)(Timer*);
extern void (__thiscall *destroyTimer)(Timer*);
extern unsigned long (__thiscall *getMicroseconds)(Timer*);
extern void (__thiscall *resetTimer)(Timer*);
extern void (__thiscall *sortPriorityGroup)(RenderPriorityGroup*, const Camera*);

struct Timer {
    char storage[48];

    Timer();
    ~Timer();
};

inline Timer::Timer()
{
    constructTimer(this);
}

inline Timer::~Timer()
{
    destroyTimer(this);
}

struct SceneManager {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void renderObjects(void*, int, bool, bool);

    char unused[180];
    Camera* camera;

    void renderQueueGroup(RenderQueueGroup*, int);
};

void SceneManager::renderQueueGroup(RenderQueueGroup* group, int mode)
{
    Iterator iterator;
    getIterator(group, &iterator);
    Timer timer;
    unsigned long (__thiscall *measure)(Timer*) = getMicroseconds;
    void (__thiscall *reset)(Timer*) = resetTimer;

    for (;;) {
        if (!iterator.owner || iterator.owner != iterator.endOwner)
            invalidParameter();

        Node* node = iterator.current;
        if (node == iterator.end)
            break;

        Container** owner = iterator.owner;
        iterator.advance();

        Container* container;
        if (!owner) {
            invalidParameter();
            container = 0;
        } else {
            container = *owner;
        }

        if (node == container->head)
            invalidParameter();

        RenderPriorityGroup* priority = node->value;

        measure(&timer);
        sortPriorityGroup(priority, camera);
        reset(&timer);

        measure(&timer);
        renderObjects(reinterpret_cast<char*>(priority) + 8, mode, true, false);
        reset(&timer);

        measure(&timer);
        renderObjects(reinterpret_cast<char*>(priority) + 248, 2, true, false);
        reset(&timer);
    }
}
