// from server: 90% by king_originala
extern "C" void __cdecl release(void *);
extern "C" int __stdcall closeHandle(void *);

struct Handle
{
    void *value;
    __forceinline ~Handle();
};

struct Storage
{
    void *data;
    unsigned char reserved[28];
    __forceinline ~Storage();
};

struct Entries : Storage
{
    void clear();
    __forceinline ~Entries();
};

struct Lock
{
    void *object;
    bool criticalSection;
    ~Lock();
};

struct S
{
    unsigned char reserved0[16];
    Handle handle;
    unsigned char reserved1[20];
    Entries entries;
    Lock lock;
    virtual ~S();
};

__forceinline Handle::~Handle()
{
    if (value)
        closeHandle(value);
}

__forceinline Storage::~Storage()
{
    release(data);
}

__forceinline Entries::~Entries()
{
    clear();
}

S::~S()
{
}
