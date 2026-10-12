// from server: 93% by king_originala
struct S;

struct VTable {
    void* reserved[22];
    void (__thiscall* sync)(S*);
};

struct Buffer {
    char data[12];
    void reserve(int size);
};

struct S {
    VTable* table;
    char padding04[56];
    bool state;
    char padding3D[3];
    void* device;
    bool engaged;
    char padding45[7];
    Buffer buffer;
    int flags;

    void open(void* const& source, int size, int unused);
};

void S::open(void* const& source, int size, int unused)
{
    if (size == -1)
        size = 4096;
    if (size != 0)
        buffer.reserve(size);

    table->sync(this);

    void* value = source;
    if (engaged)
        engaged = false;

    device = value;
    engaged = true;
    flags |= 1;
    state = false;

    if (size > 1)
        flags |= 8;
}
