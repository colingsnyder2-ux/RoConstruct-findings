// from server: 79% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern "C" void (__cdecl* invalidParameter)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instanceType;
extern char modelType;
extern char toolType;
extern const float lowerThreshold;
extern const float upperThreshold;
extern const float intermediateValue;

struct VectorBase;

struct Proxy
{
    VectorBase* owner;
    Proxy(VectorBase*);
};

struct VectorBase
{
    Proxy* proxy;
    char allocator1;
    int allocator2;

    VectorBase();
    ~VectorBase() throw();
};

struct PartInstance
{
    void setValue(float);
};

struct GetSetImpl
{
    static PartInstance* get(PartInstance*);
};

struct Vector : VectorBase
{
    PartInstance** first;
    PartInstance** last;
    PartInstance** limit;

    Vector();
    ~Vector() throw();
    unsigned int size() const;
    PartInstance*& operator[](unsigned int);
};

struct Model
{
    void visit(void (__cdecl*)(), Vector*);
};

void __cdecl collectParts();

struct Humanoid
{
    void func_005d9df0(float);
};

Proxy::Proxy(VectorBase* p) : owner(p)
{
}

VectorBase::VectorBase()
{
    proxy = new Proxy(this);
}

VectorBase::~VectorBase() throw()
{
    operator delete(proxy);
}

Vector::Vector() : first(0), last(0), limit(0)
{
}

Vector::~Vector() throw()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

unsigned int Vector::size() const
{
    return (unsigned int)(last - first);
}

PartInstance*& Vector::operator[](unsigned int index)
{
    if (index >= size())
        invalidParameter();
    return first[index];
}

void Humanoid::func_005d9df0(float value)
{
    Vector parts;
    char* instance = (char*)this - 0x14c;

    if (instance)
    {
        Model* model = (Model*)__RTDynamicCast(
            *(void**)(instance + 0x104), 0,
            &instanceType, &modelType, 0);
        if (model)
            model->visit(collectParts, &parts);
    }

    float result = 1.0f;
    if (lowerThreshold > value)
        result = 0.0f;
    else if (upperThreshold > value)
        result = intermediateValue;

    for (unsigned int i = 0; i < parts.size(); ++i)
    {
        PartInstance* part = GetSetImpl::get(parts[i]);
        if (!__RTDynamicCast(
                *(void**)((char*)part + 0x104), 0,
                &instanceType, &toolType, 0))
            part->setValue(result);
    }
}
