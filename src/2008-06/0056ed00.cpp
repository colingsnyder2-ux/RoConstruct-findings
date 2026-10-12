// from server: 97% by king_originala
struct TypeInfo
{
};

extern bool (__thiscall *compareTypeInfo)(const TypeInfo*, const TypeInfo&);
extern const TypeInfo intType;
extern const TypeInfo doubleType;
extern const TypeInfo boolType;

struct Type
{
    unsigned int reserved[2];
    const TypeInfo* info;
};

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct FloatHolder : Placeholder
{
    float value;
    FloatHolder(const float&);
    virtual ~FloatHolder();
    virtual const TypeInfo& type() const;
};

struct Any
{
    Placeholder* content;

    Any(const float&);
    ~Any();
    void swap(Any&);
};

void* __cdecl operator new(unsigned int);
extern int __cdecl getInt(const Any*);
extern double __cdecl getDouble(const Any*);
extern char __cdecl getBool(const Any*);
extern Type* __cdecl getFloatType();

struct S
{
    Type* valueType;
    Any value;

    void f();
    void finish();
};

inline FloatHolder::FloatHolder(const float& v) : value(v)
{
}

inline Any::Any(const float& v) : content(new FloatHolder(v))
{
}

inline Any::~Any()
{
    if (content)
        delete content;
}

inline void Any::swap(Any& other)
{
    if (this != &other)
    {
        Placeholder* p = other.content;
        other.content = content;
        content = p;
    }
}

void S::f()
{
    bool (__thiscall *compare)(const TypeInfo*, const TypeInfo&) = compareTypeInfo;

    if (compare(&intType, *valueType->info))
    {
        {
            Any temporary((float)getInt(&value));
            temporary.swap(value);
        }
        valueType = getFloatType();
    }

    if (compare(&doubleType, *valueType->info))
    {
        {
            Any temporary((float)getDouble(&value));
            temporary.swap(value);
        }
        valueType = getFloatType();
    }

    if (compare(&boolType, *valueType->info))
    {
        {
            Any temporary((float)(int)(getBool(&value) != 0));
            temporary.swap(value);
        }
        valueType = getFloatType();
    }

    finish();
}
