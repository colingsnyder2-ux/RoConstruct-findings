// from server: 92% by king_originala
namespace RBX {
    void handle(int a, int b);
}

struct Resource {
    void release();
};

struct Text {
    int allocator;
    union {
        char local[16];
        char* heap;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Description {
    int prefix;
    Text text;
};

struct S {
    virtual Description* description();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void update();

    char padding04[20];
    int context;
    int padding1c;
    Resource* resource;
    char padding24[28];
    bool active;

    int f(int);
};

int S::f(int)
{
    if (active) {
        resource->release();
        resource = 0;
        active = false;

        Text& text = description()->text;
        char* data = text.capacity >= 16
            ? text.storage.heap
            : text.storage.local;
        RBX::handle(reinterpret_cast<int>(data), context);
    }

    update();
    return 0;
}
