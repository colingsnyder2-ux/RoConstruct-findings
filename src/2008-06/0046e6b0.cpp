// from server: 81% by colin
struct String;

extern void __stdcall copyString(String*, const String*);
extern void __stdcall destroyString(String*);

struct String {
    unsigned char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    copyString(this, &other);
}

inline String::~String()
{
    destroyString(this);
}

struct VectorStorage {
    void** proxy;
    unsigned char reserved[8];
    void* first;
    void* last;
    void* end;

    VectorStorage();
    ~VectorStorage();
};

inline VectorStorage::VectorStorage()
{
    proxy = new void*(this);
    first = 0;
    last = 0;
    end = 0;
}

struct MapRoot {
    virtual ~MapRoot();
    String firstName;
    String secondName;
    String thirdName;
    int value;
    VectorStorage entries;

    MapRoot(String, String, String, int);
};

MapRoot::MapRoot(String a, String b, String c, int n)
    : firstName(a), secondName(b), thirdName(c), value(n), entries()
{
}
