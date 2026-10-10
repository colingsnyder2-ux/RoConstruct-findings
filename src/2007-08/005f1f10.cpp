// from server: 40% by colin
struct Vector3 { float x, y, z, w; };

struct Holder {
    void construct(Vector3* v);
};

struct Alloc {
    void* alloc(unsigned int size);
};

extern Alloc* g_alloc;

struct Container {
    void* field0;
    Vector3 vec;
    void* field10;
    void init();
};

void Container::init()
{
    void* mem = g_alloc->alloc(0x10);
    if (mem != 0) {
        ((Holder*)mem)->construct(&this->vec);
    }
}
