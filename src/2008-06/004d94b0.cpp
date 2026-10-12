// from server: 97% by king_originala
extern "C" void* __cdecl allocate(unsigned int size, unsigned int alignment);
extern "C" void* __cdecl fill(void* destination, int value, unsigned int size);

struct Storage {
    int count;
    void* entries;
    int capacity;

    Storage();
    virtual ~Storage();
};

struct Lock {
    unsigned char data[12];

    Lock();
    ~Lock();
};

struct Hash {
    Hash();
};

struct Allocator {
    Allocator();
};

struct MaterialTable {
    unsigned char data[32];

    MaterialTable(const Hash&, const Allocator&);
    ~MaterialTable();
};

struct VectorTable {
    unsigned char data[32];

    VectorTable(const Hash&, const Allocator&);
    ~VectorTable();
};

struct SurfaceTable {
    Storage storage;
    Lock lock;
    MaterialTable materials;
    VectorTable vectors;
    int value;

    SurfaceTable();
};

__forceinline Hash::Hash()
{
}

__forceinline Allocator::Allocator()
{
}

__forceinline Storage::Storage()
{
    capacity = 10;
    count = 0;
    entries = allocate(40, 16);
    fill(entries, 0, capacity * 4);
}

SurfaceTable::SurfaceTable()
    : storage(),
      lock(),
      materials(Hash(), Allocator()),
      vectors(Hash(), Allocator())
{
    value = 0;
}
