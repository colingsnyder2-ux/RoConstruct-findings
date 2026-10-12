// from server: 93% by king_originala
struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
};

struct Frame {
    Matrix rotation;
    float x, y, z;

    bool different(const Frame&) const;
};

struct FrameStorage {
    char data[0x170];

    const Frame& get();
    void set(const Frame&);
};

extern bool __cdecl normalize(Frame*);

struct S;

struct VTable {
    void* entries[20];
    void (__thiscall *changed)(S*);
};

struct S {
    VTable* volatile vtable;
    char padding[0x224];
    FrameStorage frame;
    volatile bool dirty;

    void notify(const int*);
    void update(const Frame*);
};

void S::update(const Frame* value)
{
    const Frame* source = value;
    FrameStorage* storage = &frame;

    if (source->different(storage->get())) {
        Frame temporary(*source);
        normalize(&temporary);

        if (temporary.different(storage->get())) {
            storage->set(temporary);
            dirty = true;
            vtable->changed(this);
        }

        notify(reinterpret_cast<const int*>(0x976198));
        notify(reinterpret_cast<const int*>(0x975fac));
    }
}
