// from server: 94% by king_originala
extern void* __cdecl allocate(unsigned int, unsigned int);
extern void* __cdecl clearMemory(void*, int, unsigned int);

struct Storage
{
    int count;
    void* buckets;
    int capacity;

    Storage();
    ~Storage();
};

inline Storage::Storage()
{
    capacity = 10;
    count = 0;
    buckets = allocate(40, 16);
    clearMemory(buckets, 0, capacity * 4);
}

struct TagA
{
    TagA();
};

inline TagA::TagA() {}

struct TagB
{
    TagB();
};

inline TagB::TagB() {}

struct First
{
    unsigned char data[12];
    First();
    ~First();
};

struct Second
{
    unsigned char data[32];
    Second(const TagA&, const TagB&);
    ~Second();
};

struct Third
{
    unsigned char data[32];
    Third(const TagA&, const TagB&);
    ~Third();
};

struct Table
{
    Storage storage;
    First first;
    Second second;
    Third third;
    int last;

    Table();
    virtual ~Table();
};

Table::Table()
    : second(TagA(), TagB()),
      third(TagA(), TagB()),
      last(0)
{
}
