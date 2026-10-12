// from server: 63% by king_originala
typedef long LONG;

extern "C"
{
    extern LONG (__thiscall *InterlockedIncrement)(volatile LONG *);
    extern LONG (__stdcall *InterlockedDecrement)(volatile LONG *);
}

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

extern const float scale;

struct Vector
{
    float x, y, z;

    Vector(const Vector &v) : x(v.x), y(v.y), z(v.z) {}
};

struct Object
{
    virtual ~Object();
    volatile LONG references;
    void *auxiliary;
    char storage[28];

    Object(int);
    void cleanup();
};

struct Reference
{
    Object *pointer;

    Reference(Object *p) : pointer(0)
    {
        if (p)
        {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    ~Reference()
    {
        Object *p = pointer;
        if (p && InterlockedDecrement(&p->references) == 0)
        {
            p->cleanup();
            delete p;
        }
    }
};

struct ArgumentReference
{
    Object *pointer;

    void assign(Object *);

    ArgumentReference(Object *p) : pointer(0)
    {
        assign(p);
    }

    ~ArgumentReference();
};

struct Array
{
    Object **data;
    int size;
    int capacity;

    void append(const Reference &);
};

struct Base
{
    virtual ~Base();
    int reserved[2];
    Array objects;

    Base();
};

struct Temporary
{
    char storage[20];
    Object *pointer;

    Temporary(ArgumentReference, Vector, int, int, float);
    void apply(int);

    ~Temporary()
    {
        if (pointer)
        {
            if (InterlockedDecrement(&pointer->references) == 0)
            {
                pointer->cleanup();
                if (pointer)
                    delete pointer;
            }
            pointer = 0;
        }
    }
};

struct S : Base
{
    S(const Vector &, int);
    virtual ~S();
};

S::S(const Vector &v, int argument)
{
    const float &minimum = v.x <= v.z ? v.x : v.z;
    float radius = minimum * scale;

    {
        Reference object(new Object(5));
        objects.append(object);
    }

    Reference object(objects.data[objects.size - 1]);
    Temporary temporary(object.pointer, v, argument, 9, radius);
    temporary.apply(0);
}
