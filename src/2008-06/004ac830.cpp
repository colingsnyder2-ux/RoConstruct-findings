// from server: 89% by king_originala
extern const unsigned long table0[];
extern const unsigned long table10[];
extern const unsigned long table14[];
extern const unsigned long table20[];
extern const unsigned long table24[];
extern const unsigned long table44[];
extern const unsigned long table64[];
extern const unsigned long table84[];
extern const unsigned long tableA4[];
extern const unsigned long tableC4[];
extern const unsigned long table130[];
extern const unsigned long table134[];

struct S_func_0049ed40
{
    virtual ~S_func_0049ed40();
};

struct Base
{
    unsigned long words[76];
    ~Base();
};

struct Object
{
    virtual ~Object();
};

struct ObjectTable
{
    typedef void (__thiscall *Callback)(Object*, S_func_0049ed40*);
    void* reserved[59];
    Callback callback;
};

struct Owner
{
    Object* pointer;
    ~Owner();
};

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

struct S : Base
{
    S_func_0049ed40 slot;
    unsigned long secondary;
    Owner first;
    Owner second;
    Owner third;

    ~S();
};

S::~S()
{
    words[0] = reinterpret_cast<unsigned long>(table0);
    words[4] = reinterpret_cast<unsigned long>(table10);
    words[5] = reinterpret_cast<unsigned long>(table14);
    words[8] = reinterpret_cast<unsigned long>(table20);
    words[9] = reinterpret_cast<unsigned long>(table24);
    words[17] = reinterpret_cast<unsigned long>(table44);
    words[25] = reinterpret_cast<unsigned long>(table64);
    words[33] = reinterpret_cast<unsigned long>(table84);
    words[41] = reinterpret_cast<unsigned long>(tableA4);
    words[49] = reinterpret_cast<unsigned long>(tableC4);
    *reinterpret_cast<unsigned long*>(&slot) =
        reinterpret_cast<unsigned long>(table130);
    secondary = reinterpret_cast<unsigned long>(table134);

    (*reinterpret_cast<ObjectTable**>(third.pointer))->callback(
        third.pointer, &slot);
}
