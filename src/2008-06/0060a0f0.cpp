// from server: 90% by king_originala
struct Frame {
    float rotation[9];
    float x, y, z;

    Frame* func_004782d0();
    void func_00513220(const Frame*);
};

struct Owner;

struct Object {
    virtual void slot0();
    virtual int kind();

    Object* parent;
    int unused;
    Owner* owner;
};

struct Joint {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void setBody(int, int);

    Object* object;
    int unused;
    void* body0;
    void* body1;
};

struct Owner {
    void func_005ea3a0(Joint*);
    void func_005ea320(Joint*);
};

struct S {
    char padding0[0x104];
    void* instance;
    char padding1[0x48];
    Joint* joint;

    void func_005e3a80(int);
    void func_0060a020(int, void*);
    void func_0060a0f0(int);
};

extern "C" void* __cdecl func_006a17c6(
    void*, int, const void*, const void*, int);
extern Owner* __cdecl func_005a3390(S*);

void S::func_0060a0f0(int arg)
{
    volatile int flag = 0;
    Frame frame;
    Frame temporary;

    func_005e3a80(arg);
    func_0060a020(0, func_006a17c6(
        instance, 0, (const void*)0x92907c,
        (const void*)0x959b80, 0));

    Owner* oldOwner;
    Joint* j = joint;

    if (!j->object) {
        oldOwner = 0;
    } else {
        Object* object;
        if (j->object->kind() != 7)
            object = j->object;
        else
            object = j->object->parent;
        oldOwner = object->owner;
    }

    Owner* newOwner = func_005a3390(this);
    if (oldOwner != newOwner) {
        if (oldOwner) {
            oldOwner->func_005ea3a0(joint);

            Frame* source = temporary.func_004782d0();
            frame.func_00513220(source);
            frame.x = source->x;
            frame.y = source->y;
            frame.z = source->z;

            j = joint;
            if (j->body0)
                j->setBody(0, 0);

            source = temporary.func_004782d0();
            frame.func_00513220(source);
            frame.x = source->x;
            frame.y = source->y;
            frame.z = source->z;

            j = joint;
            if (j->body1)
                j->setBody(1, 0);
        }

        if (newOwner)
            newOwner->func_005ea320(joint);
    }
}
