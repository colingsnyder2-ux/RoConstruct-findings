// from server: 95% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Object {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual ~Object();
    virtual Object* get();
};

struct Flag {
    unsigned char value;
};

struct Signal {
    void notify(Flag);
};

struct RawObject {
    unsigned int table;
    unsigned int secondTable;
    unsigned char storage[20];
    unsigned char flag;
    unsigned char tail[3];

    int initialize(int);
    RawObject(void*);
};

__forceinline RawObject::RawObject(void* owner)
{
    initialize((int)owner);
    flag = 0;
    table = 0x8336a4;
    secondTable = 0x833688;
}

void* __cdecl func(void*);
Object* __cdecl create(void*);

struct Workspace {
    unsigned char padding[0x364];
    Signal signal;
    unsigned char remaining[0x4b];
    Object* current;
    Object* secondary;

    void set(Object*);
};

void Workspace::set(Object* object)
{
    if (!object) {
        if (secondary)
            object = secondary->get();

        if (!object) {
            if (!func(this))
                object = reinterpret_cast<Object*>(new RawObject(this));
            else
                object = create(this);
        }
    }

    if (object != current) {
        if (object != current) {
            if (current)
                delete current;
        }
        current = object;

        object = object->get();
        if (object) {
            if (object != secondary) {
                if (secondary)
                    delete secondary;
            }
            secondary = object;
        }

        Flag flag;
        flag.value = 0;
        signal.notify(flag);
    }
}
