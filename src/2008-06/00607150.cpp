// from server: 96% by king_originala
struct Vector3 {
    float x, y, z;
    Vector3();
};

Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

struct Short3 {
    short x, y, z;
    Short3();
};

Short3::Short3() : x(0), y(0), z(0) {}

struct Block {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual float value();

    int query(int kind, Short3 position, int* first, int* second);
    int query(Vector3* position, int* first, int* second);
};

struct Shape {
    virtual void slot0();
    virtual int kind();
};

struct Primitive {
    unsigned char padding[0x9c];
    Block* block;
    void* data;
};

struct ContactData {
    int result;
    int padding0;
    int first;
    unsigned char padding1[12];
    float value;
    int second;
};

struct Connector {
    unsigned char padding[8];
    ContactData data;
};

struct Contact {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void reset();

    Shape* shape;
    int padding0;
    Primitive* first;
    Primitive* second;
    unsigned char padding1[0x20];
    Connector* connector;

    Connector* create(void* firstData, void* secondData);
    bool prepare(int* kind, Short3* position, Vector3* point, float tolerance);
    bool update();
};

bool Contact::update()
{
    Vector3 point;
    Short3 position;
    int kind;
    int firstResult;
    int secondResult;

    if (prepare(&kind, &position, &point, 0.0f)) {
        if (shape->kind() == 7) {
            if (!connector) {
                void* secondData = second->data;
                void* firstData = first->data;
                connector = create(firstData, secondData);
            }

            int result;
            if (kind) {
                Block* block = second->block;
                result = block->query(
                    kind, position, &firstResult, &secondResult);
            } else {
                Block* block = second->block;
                result = block->query(
                    &point, &firstResult, &secondResult);
            }

            int savedSecond = secondResult;
            int savedFirst = firstResult;
            connector->data.value = first->block->value();
            ContactData* data = &connector->data;
            data->first = savedFirst;
            data->second = savedSecond;
            data->result = result;
        }
        return true;
    }

    reset();
    return false;
}
