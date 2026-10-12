// from server: 86% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Rotation {
    float data[9];
};

struct Frame {
    Rotation rotation;
    Vector3 translation;
    Frame(const Rotation&);
};

struct Source {
    Frame get();
};

struct Owner {
    char padding[0xa0];
    Source* source;
};

struct Link {
    char padding[0x1c];
    Owner* owner;
};

struct Test {
    bool check(const Frame&, float, float);
};

struct Stage {
    char padding[8];
    Test test;
};

typedef float (__thiscall *Getter)(void*);

struct Item {
    char padding0[0x18];
    Stage* stage;
    char padding1[8];
    Link* link;
    char padding2[0x28];
    float value;
    bool dirty;
    char padding3[3];
    char* object;
    int padding4;
    Getter getter;
    int adjustment;
};

extern float limit;

struct CleanStage {
    bool check(Item*);
};

bool CleanStage::check(Item* item)
{
    Frame frame = item->link->owner->source->get();
    if (item->dirty) {
        item->value = item->getter(item->object + item->adjustment);
        item->dirty = false;
    }
    return !item->stage->test.check(frame, item->value, limit);
}
