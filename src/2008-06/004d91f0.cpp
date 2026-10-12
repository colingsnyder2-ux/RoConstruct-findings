// from server: 97% by king_originala
extern void* __cdecl allocate(unsigned int, unsigned int);
extern void* __cdecl clearMemory(void*, int, unsigned int);
extern const unsigned char tableIdentity[];

struct Storage
{
    const void* identity;
    int count;
    void* buckets;
    int capacity;

    Storage();
    ~Storage();
};

__forceinline Storage::Storage()
{
    identity = tableIdentity;
    capacity = 10;
    count = 0;
    buckets = allocate(40, 16);
    clearMemory(buckets, 0, capacity * 4);
}

struct Resource
{
    unsigned char storage[12];
    Resource();
    ~Resource();
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

struct FirstTable
{
    unsigned char storage[32];
    FirstTable(const Hash&, const Equal&);
    ~FirstTable();
};

struct SecondTable
{
    unsigned char storage[32];
    SecondTable(const Hash&, const Equal&);
    ~SecondTable();
};

struct Table : Storage
{
    Resource resource;
    FirstTable first;
    SecondTable second;
    int value;

    Table();
};

Table::Table()
    : first(Hash(), Equal()),
      second(Hash(), Equal()),
      value(0)
{
}
