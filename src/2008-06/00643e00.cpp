// from server: 96% by king_originala
extern char table_00843a40[];
extern char table_0084ad00[];
extern char table_0084acf8[];

struct Object
{
    void func_005dc270(bool value);
    void func_005dc230(bool value);
};

struct Header
{
    void* primary;
    void* volatile secondary;
    Object* object;
    volatile float value;
    bool flag1;
    bool flag2;

    Header(Object* p);
};

__forceinline Header::Header(Object* p)
{
    secondary = table_00843a40;
    value = 0.0f;
    primary = table_0084ad00;
    secondary = table_0084acf8;
    object = p;
    flag1 = false;
    flag2 = false;
}

struct Storage
{
    void* first;
    void* last;
    void* end;

    Storage();
    ~Storage();
};

__forceinline Storage::Storage()
{
    last = 0;
    end = 0;
    first = 0;
}

struct Reference
{
    void* object;
    void* control;

    Reference();
    ~Reference();
};

__forceinline Reference::Reference() : object(0), control(0)
{
}

struct Item
{
    char data[0x30];

    Item();
};

struct HumanoidState : Header
{
    Storage storage;
    unsigned int unused;
    Reference reference;
    float a;
    float b;
    float c;
    float d;
    float e;
    Item item1;
    Item item2;

    HumanoidState(Object* object);
    void func_006431b0(bool value);
};

HumanoidState::HumanoidState(Object* p)
    : Header(p), storage(), reference(),
      a(0.0f), b(0.0f), c(0.0f), d(0.0f), e(0.0f),
      item1(), item2()
{
    p->func_005dc270(false);
    p->func_005dc230(false);
    func_006431b0(false);
}
