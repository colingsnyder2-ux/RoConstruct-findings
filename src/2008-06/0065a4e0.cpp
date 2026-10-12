// from server: 78% by king_originala
struct Int3 {
    int x, y, z;
};

struct Source {
    char reserved0[0x68];
    Int3 lower;
    Int3 upper;
    char reserved1[0x10];
    unsigned int version;
    const void* get();
};

extern void __cdecl query(void**, Source*, const void*, Int3*, Int3*);

struct Contact {
    void visit(void*, Source*, const Int3*);
    void update(Source*);
};

void Contact::update(Source* source)
{
    Int3 lower = { 0, 0, 0 };
    Int3 upper = { 0, 0, 0 };
    void* handle;

    query(&handle, source, source->get(), &lower, &upper);

    source->lower.x = lower.x;
    source->lower.y = lower.y;
    source->upper.x = upper.x;
    source->upper.y = upper.y;
    source->lower.z = lower.z;
    source->upper.z = upper.z;

    const int zmax = upper.z;
    for (int x = lower.x; x <= upper.x; ++x) {
        for (int y = lower.y; y <= upper.y; ++y) {
            int z = lower.z;
            if (z <= zmax) {
                Int3 cell;
                cell.x = x;
                cell.y = y;
                do {
                    cell.z = z;
                    visit(handle, source, &cell);
                    ++z;
                } while (z <= zmax);
            }
        }
    }
}
