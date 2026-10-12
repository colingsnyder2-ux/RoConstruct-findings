// from server: 94% by king_originala
void* __cdecl allocate(unsigned int, unsigned int);
void* __cdecl clearMemory(void*, int, unsigned int);

struct Storage
{
    int count;
    void* data;
    int capacity;

    Storage();
    ~Storage();
};

__forceinline Storage::Storage()
{
    capacity = 10;
    count = 0;
    data = allocate(40, 16);
    clearMemory(data, 0, capacity * 4);
}

struct Array
{
    unsigned char storage[12];
    Array();
    ~Array();
};

struct Hash
{
    Hash();
};

struct Equal
{
    Equal();
};

__forceinline Hash::Hash()
{
}

__forceinline Equal::Equal()
{
}

struct MaterialTable
{
    unsigned char storage[32];
    MaterialTable(const Hash&, const Equal&);
    ~MaterialTable();
};

struct VectorTable
{
    unsigned char storage[32];
    VectorTable(const Hash&, const Equal&);
    ~VectorTable();
};

struct Table
{
    Storage storage;
    Array array;
    MaterialTable materials;
    VectorTable vectors;
    int value;

    Table();
    virtual ~Table();
};

Table::Table()
    : materials(Hash(), Equal()),
      vectors(Hash(), Equal())
{
    value = 0;
}
