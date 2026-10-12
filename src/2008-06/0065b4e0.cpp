// from server: 83% by king_originala
struct Entry {
    unsigned int value[2];
};

struct Block {
    unsigned int data[3];
    Entry* first;
    Entry* last;
    Entry* limit;

    Block();
    ~Block();
    void resize(int count, int value1, int value2);
};

struct Tail {
    unsigned int data[5];

    Tail();
};

inline Tail::Tail()
{
    data[0] = 0;
    data[1] = 0;
    data[2] = 0;
    data[3] = 0;
    data[4] = 0;
}

struct Vector {
    Entry* first;
    Entry* last;
    Entry* limit;

    Vector();
    ~Vector();
};

inline Vector::Vector()
{
    last = 0;
    limit = 0;
    first = 0;
}

extern int blockCount;
extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl memset(void* destination, int value, unsigned int size);

struct S {
    int state;
    int argument1;
    int argument2;
    Block blocks[4];
    Tail tail;
    Vector vector;

    S(int a, int b);
};

S::S(int a, int b)
    : state(0), argument1(a), argument2(b)
{
    for (int i = 0; i < blockCount; ++i) {
        blocks[i].resize(0x10000 >> i, 0, 0);

        unsigned int count = blocks[i].last - blocks[i].first;
        if (count <= 0U)
            _invalid_parameter_noinfo();

        memset(blocks[i].first, 0, count * sizeof(Entry));
    }
}
