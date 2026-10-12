// from server: 95% by king_originala
extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

struct Point {
    float x;
    float y;
};

struct Lock {
    void* section;
    bool locked;
    Lock(void*);
    ~Lock();
};

inline Lock::Lock(void* p) : section(p)
{
    EnterCriticalSection(section);
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        LeaveCriticalSection(section);
}

struct S {
    unsigned char reserved[0x34];
    unsigned char section[0x18];
    unsigned char gap[0x146];
    bool enabled;

    Point getPoint();
    void setPoint(const Point&);
    void f();
};

void S::f()
{
    Lock lock(section);
    if (enabled) {
        Point point = getPoint();
        setPoint(point);
    }
}
