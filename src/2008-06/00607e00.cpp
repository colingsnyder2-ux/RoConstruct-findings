// from server: 76% by king_originala
struct Object {
    virtual ~Object();
    bool active();
};

struct ObjectArray {
    Object** data;
    int count;
    int capacity;
    void resize(int size, int flag);
};

struct ByteArray {
    unsigned char* data;
    int count;
    int capacity;
    void resize(int size, int flag);
};

struct Node {
    int field0;
    int index;
    int* f();
};

struct Contact {
    unsigned char padding[0x34];
    ObjectArray objects;
    ByteArray flags;

    Node* find(Object* object);
    void update();
};

void Contact::update()
{
    int i = objects.count - 1;
    if (i >= 0) {
        ObjectArray& array = objects;
        ByteArray& enabled = flags;
        do {
            if (enabled.data[i]) {
                Object*& entry = array.data[i];
                if (entry->active())
                    continue;
            }

            Object*& entry = array.data[i];
            Object* object = entry;
            entry = array.data[array.count - 1];
            array.resize(array.count - 1, 1);

            enabled.data[i] = enabled.data[enabled.count - 1];
            enabled.resize(enabled.count - 1, 1);

            find(object)->f();
            delete object;
        } while (--i >= 0);
    }
}
