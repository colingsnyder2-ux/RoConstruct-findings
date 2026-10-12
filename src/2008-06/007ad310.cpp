// from server: 82% by king_originala
extern "C" long (__stdcall * const InterlockedDecrement)(volatile long *);

struct String;
struct MaterialPtr;
struct MaterialManager;
struct LogManager;

extern void (__thiscall *copyString)(String *, const String &);
extern void (__thiscall *destroyString)(String *);
extern String (__cdecl *concatString)(const char *, const String &);
extern void (__thiscall *destroyMaterialPtr)(MaterialPtr *);
extern MaterialManager &(__cdecl *getMaterialManager)();
extern LogManager &(__cdecl *getLogManager)();
extern void (__thiscall *writeLog)(LogManager *, const String &, int, bool);

struct String {
    unsigned char storage[28];
    String(const String &);
    ~String();
};

inline String::String(const String &other)
{
    copyString(this, other);
}

inline String::~String()
{
    destroyString(this);
}

struct Material {
    unsigned char reserved0[36];
    String name;
    unsigned char reserved1[28];
    unsigned long handle;
};

struct MaterialManager {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void remove(unsigned long);
};

struct LogManager {};

struct Control {
    virtual ~Control();
    volatile long count;
    void *object;
    void release();
};

struct Reference {
    Control *p;
    ~Reference();
};

inline Reference::~Reference()
{
    if (p) {
        if (InterlockedDecrement(&p->count) == 0) {
            p->release();
            if (p)
                delete p;
        }
        p = 0;
    }
}

struct MaterialPtr {
    void *vtable;
    Material *p;
    void *count;
    ~MaterialPtr();
};

inline MaterialPtr::~MaterialPtr()
{
    destroyMaterialPtr(this);
}

struct Base {
    virtual ~Base();
};

inline Base::~Base()
{
}

struct Level : Base {
    unsigned long reserved0;
    Reference first;
    Reference second;
    unsigned char reserved1[28];
    MaterialPtr material;
    ~Level();
};

Level::~Level()
{
    if (material.p) {
        String name(material.p->name);
        getMaterialManager().remove(material.p->handle);
        writeLog(&getLogManager(), concatString("RBX removed ", name), 2, false);
    }
}
