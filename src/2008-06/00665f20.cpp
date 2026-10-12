// from server: 86% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared& other) : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    __forceinline ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
};

struct Vector3
{
    float x, y, z;
};

struct Base
{
    unsigned int table1, table2;
    int a, b, c;
    unsigned char flag;
    int argument;

    Base(int);
    ~Base();
};

struct First
{
    unsigned char data[112];
    First();
    ~First();
};

struct List;

struct Proxy
{
    List* owner;
    Proxy(List* p) : owner(p) {}
};

struct ProxyOwner
{
    Proxy* pointer;

    ProxyOwner(List* p) : pointer(new Proxy(p)) {}
    __forceinline ~ProxyOwner() { operator delete(pointer); }
};

struct Storage
{
    void* begin;
    void* end;
    void* capacity;

    Storage() : begin(0), end(0), capacity(0) {}

    __forceinline ~Storage()
    {
        if (begin)
            operator delete(begin);
        begin = 0;
        end = 0;
        capacity = 0;
    }
};

struct List
{
    ProxyOwner proxy;
    unsigned char padding[8];
    Storage storage;

    List() : proxy(this) {}
    void append(int*);
    __forceinline ~List() {}
};

struct Second
{
    unsigned char data[44];
    Second(int, List*, int);
    ~Second();
};

template<class T> struct Owner
{
    T* pointer;

    Owner() : pointer(0) {}
    Owner(int) : pointer(0) {}

    __forceinline ~Owner() { delete pointer; }

    void reset(T* value)
    {
        if (value != pointer && pointer)
            delete pointer;
        pointer = value;
    }
};

struct PartDragTool : Base
{
    Owner<First> first;
    Owner<Second> second;
    Shared shared;
    float x, y;
    unsigned char active;
    Vector3 position;

    PartDragTool(int, const Vector3*, int, Shared);
};

PartDragTool::PartDragTool(int object, const Vector3* point,
                           int argument, Shared value)
    : Base(argument),
      first((table1 = 0x84cbb4, table2 = 0x84cb9c, 0)),
      shared(value), x(0.0f), y(0.0f), active(0)
{
    position.x = point->x;
    position.y = point->y;
    position.z = point->z;

    first.reset(new First);

    List objects;
    point = reinterpret_cast<const Vector3*>(object);
    objects.append(reinterpret_cast<int*>(&point));

    second.reset(new Second(object, &objects, argument));
}
