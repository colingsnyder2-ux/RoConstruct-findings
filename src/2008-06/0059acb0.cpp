// from server: 99% by king_originala
struct Value {
    bool readFloat(float* result);
};

struct Node {
    char prefix[16];
    Value value;
};

struct Element {
    bool isEmpty();
    Node* find(void* name);
};

struct Frame {
    float rotation[9];
    float position[3];
    Frame();
};

struct Accessor;
struct AccessorTable {
    void* reserved[3];
    void (__thiscall *set)(Accessor*, void*, const Frame*);
};

struct Accessor {
    AccessorTable* table;
};

extern void* name975334;
extern void* name975380;
extern void* name975318;
extern void* name975350;
extern void* name975368;
extern void* name975304;
extern void* name975328;
extern void* name975354;
extern void* name975348;
extern void* name975324;
extern void* name975320;
extern void* name975308;

struct Descriptor {
    char prefix[24];
    Accessor* accessor;
    void read(void* object, Element* element, int unused);
};

void Descriptor::read(void* object, Element* element, int unused)
{
    Element* source = element;
    float& temporary = reinterpret_cast<float&>(element);

    if (!source->isEmpty()) {
        Frame frame;

        source->find(name975334)->value.readFloat(&temporary);
        frame.position[0] = temporary;
        source->find(name975380)->value.readFloat(&temporary);
        frame.position[1] = temporary;
        source->find(name975318)->value.readFloat(&temporary);
        frame.position[2] = temporary;

        source->find(name975350)->value.readFloat(&temporary);
        frame.rotation[0] = temporary;
        source->find(name975368)->value.readFloat(&temporary);
        frame.rotation[1] = temporary;
        source->find(name975304)->value.readFloat(&temporary);
        frame.rotation[2] = temporary;
        source->find(name975328)->value.readFloat(&temporary);
        frame.rotation[3] = temporary;
        source->find(name975354)->value.readFloat(&temporary);
        frame.rotation[4] = temporary;
        source->find(name975348)->value.readFloat(&temporary);
        frame.rotation[5] = temporary;
        source->find(name975324)->value.readFloat(&temporary);
        frame.rotation[6] = temporary;
        source->find(name975320)->value.readFloat(&temporary);
        frame.rotation[7] = temporary;
        source->find(name975308)->value.readFloat(&temporary);
        frame.rotation[8] = temporary;

        accessor->table->set(accessor, object, &frame);
    }
}
