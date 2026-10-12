// from server: 97% by king_originala
extern "C" void* __cdecl allocate(unsigned int, unsigned int);
extern "C" void* __cdecl fill(void*, int, unsigned int);
extern unsigned int tableVtable[];

struct Tag {
    Tag();
};

__forceinline Tag::Tag()
{
}

struct Storage {
    unsigned int* vtable;
    int count;
    void* data;
    int capacity;

    Storage();
    ~Storage();
};

struct State {
    unsigned char bytes[12];

    State();
    ~State();
};

struct FirstTable {
    unsigned char bytes[32];

    FirstTable(const Tag&, const Tag&);
    ~FirstTable();
};

struct SecondTable {
    unsigned char bytes[32];

    SecondTable(const Tag&, const Tag&);
    ~SecondTable();
};

struct Table : Storage {
    State state;
    FirstTable first;
    SecondTable second;
    int last;

    Table();
};

__forceinline Storage::Storage()
{
    vtable = tableVtable;
    capacity = 10;
    count = 0;
    data = allocate(40, 16);
    fill(data, 0, capacity * 4);
}

Table::Table()
    : Storage(),
      state(),
      first(Tag(), Tag()),
      second(Tag(), Tag()),
      last(0)
{
}
