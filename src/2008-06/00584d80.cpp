// from server: 84% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);
extern "C" void __cdecl _invalid_parameter_noinfo();

#pragma float_control(precise, off)

struct Vector3
{
    float x, y, z;
    Vector3() {}
    __forceinline Vector3(double, double, double) throw();
    __forceinline Vector3 operator*(float) const throw();
    __forceinline Vector3 operator-() const throw();
};

__forceinline Vector3::Vector3(double a, double b, double c) throw()
    : x((float)a), y((float)b), z((float)c)
{
}

__forceinline Vector3 Vector3::operator*(float s) const throw()
{
    return Vector3(x * s, y * s, z * s);
}

__forceinline Vector3 Vector3::operator-() const throw()
{
    return Vector3(-x, -y, -z);
}

struct Frame
{
    float data[12];
};

struct Box
{
    Vector3 low, high;
    Box() {}
    __forceinline Box(const Box&);
    __forceinline Box(const Vector3&, const Vector3&);
    Box transform(const Vector3&, const Frame&) const;
    void merge(const Box&);
};

__forceinline Box::Box(const Box& b)
{
    low.x = b.low.x;
    low.y = b.low.y;
    low.z = b.low.z;
    high.x = b.high.x;
    high.y = b.high.y;
    high.z = b.high.z;
}

__forceinline Box::Box(const Vector3& a, const Vector3& b)
{
    low.x = a.x;
    low.y = a.y;
    low.z = a.z;
    high.x = b.x;
    high.y = b.y;
    high.z = b.z;
}

extern const Box& __cdecl initialBox();
extern const Box& __cdecl emptyBox();
extern const float extentScale;

struct Dimensions
{
    float unused;
    Vector3 value;
};

struct Body;

struct Primitive
{
    char padding[0x9c];
    Dimensions* dimensions;
    Body* body;
    const Vector3& getValue();
};

struct ListBase;

struct ListProxy
{
    ListBase* owner;
    __forceinline ListProxy(ListBase*);
};

__forceinline ListProxy::ListProxy(ListBase* p) : owner(p)
{
}

struct ListBase
{
    ListProxy* proxy;
    unsigned int reserved[2];
    __forceinline ListBase();
    __forceinline ~ListBase() throw();
};

__forceinline ListBase::ListBase() : proxy(new ListProxy(this))
{
}

__forceinline ListBase::~ListBase() throw()
{
    operator delete(proxy);
}

struct PrimitiveList : ListBase
{
    Primitive** first;
    Primitive** last;
    Primitive** limit;
    __forceinline PrimitiveList();
    __forceinline ~PrimitiveList() throw();
    __forceinline size_t size() const;
    __forceinline Primitive* operator[](size_t) const;
};

__forceinline PrimitiveList::PrimitiveList() : first(0), last(0), limit(0)
{
}

__forceinline PrimitiveList::~PrimitiveList() throw()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline size_t PrimitiveList::size() const
{
    return static_cast<size_t>(last - first);
}

__forceinline Primitive* PrimitiveList::operator[](size_t i) const
{
    if (i >= size())
        _invalid_parameter_noinfo();
    return first[i];
}

struct S;
extern void __cdecl collect(S*, PrimitiveList*);

typedef Frame* (__thiscall *FrameGetter)(void*, Frame*);

struct S
{
    char padding[0x134];
    int* frameTable;
    Box f();
};

Box S::f()
{
    PrimitiveList primitives;
    collect(this, &primitives);
    Box result(initialBox());

    for (size_t i = 0; i < primitives.size(); ++i)
    {
        Vector3 half = primitives[i]->dimensions->value * extentScale;
        Primitive* primitive = primitives.first[i];
        Box bounds(-half, half);

        void* object = reinterpret_cast<char*>(&frameTable) + frameTable[2];
        FrameGetter getter =
            reinterpret_cast<FrameGetter*>(*static_cast<int**>(object))[0];

        Frame storage;
        const Frame* frame = getter(object, &storage);
        Box transformed = bounds.transform(primitive->getValue(), *frame);
        result.merge(transformed);
    }

    return primitives.size() > 0 ? result : emptyBox();
}
