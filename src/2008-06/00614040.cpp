// from server: 94% by king_originala
extern int counter;

struct DirtyState {
    char padding[8];
    unsigned char dirty;
};

struct RevoluteLink {
    char padding0[0x14];
    int state;
    char padding1[0x14];
    DirtyState* owner;
    char padding2[0x60];
    int serial;
    char padding3[0x30];
    float values[6];

    void set(const float* source);
};

void RevoluteLink::set(const float* source)
{
    if (state == 0) {
        values[0] = source[0];
        values[1] = source[1];
        values[2] = source[2];
        values[3] = source[3];
        values[4] = source[4];
        values[5] = source[5];

        ++counter;
        if (counter == 0x7fffffff)
            counter = 1;
        serial = counter;

        if (owner)
            owner->dirty = 1;
    }
}
