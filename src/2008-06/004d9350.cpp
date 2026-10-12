// from server: 97% by king_originala
extern "C" void* __cdecl allocate(unsigned int, unsigned int);
extern "C" void* __cdecl clear_memory(void*, int, unsigned int);
extern unsigned int table_vftable[];

struct Storage {
    unsigned int* vftable;
    int count;
    void* entries;
    int capacity;

    Storage();
    ~Storage();
};

__forceinline Storage::Storage() {
    vftable = table_vftable;
    capacity = 10;
    count = 0;
    entries = allocate(40, 16);
    clear_memory(entries, 0, capacity * 4);
}

struct Lock {
    unsigned char data[12];
    Lock();
    ~Lock();
};

struct Compare {
    Compare();
};

__forceinline Compare::Compare() {}

struct Allocator {
    Allocator();
};

__forceinline Allocator::Allocator() {}

struct MaterialTable {
    unsigned char data[32];
    MaterialTable(const Compare&, const Allocator&);
    ~MaterialTable();
};

struct VectorTable {
    unsigned char data[32];
    VectorTable(const Compare&, const Allocator&);
    ~VectorTable();
};

struct S {
    Storage storage;
    Lock lock;
    MaterialTable materials;
    VectorTable vectors;
    int value;

    S();
};

S::S()
    : materials(Compare(), Allocator()),
      vectors(Compare(), Allocator()),
      value(0)
{
}
