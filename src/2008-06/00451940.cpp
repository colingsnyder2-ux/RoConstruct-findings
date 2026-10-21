// from server: 91% by EspClaude
// roc 2008-06 00451940  unit: VCRobloxDoc::?$VerbBinder  size: 198 bytes
struct Inner74 { char d[4]; ~Inner74(); };
struct Inner90 { char d[4]; ~Inner90(); };

template<class T> struct ScopedPtr {
    T* p;
    ~ScopedPtr() { delete p; }
};

struct Buffer {
    void* p;
    void* a;
    void* b;
    void release() { operator delete(p); }
};

struct Vec {
    void* first;
    void* last;
    void* end;
    void tidy()
    {
        if (first)
            operator delete(first);
        first = 0;
        last = 0;
        end = 0;
    }
};

struct Base {
    virtual ~Base();
    char pad[0x50];
};

struct Member54 {
    char d[0x20];
    ~Member54();
};

struct VCRobloxDoc : Base {
    Member54 m54;
    ScopedPtr<Inner74> p74;
    Buffer m78;
    Vec v84;
    Inner90* p90;
    virtual ~VCRobloxDoc();
};

VCRobloxDoc::~VCRobloxDoc()
{
    delete p90;
    v84.tidy();
    m78.release();
}
