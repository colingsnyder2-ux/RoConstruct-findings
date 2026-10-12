// from server: 88% by king_originala
class type_info;

typedef bool (__thiscall *TypeEqual)(const type_info*, const type_info&);

struct Descriptor
{
    unsigned long reserved[2];
    const type_info* info;
};

struct Value
{
    virtual ~Value();
    virtual void unused();
    virtual Value* clone();
};

struct S;

struct Temporary
{
    Descriptor* descriptor;
    Value* value;

    Temporary(const S&);
    ~Temporary();
    float& convert();
    static Value* copy(Value*);
};

extern float* __cdecl extract(Value**);

struct S
{
    Descriptor* descriptor;
    Value* value;

    float func_00445f10();
};

inline Value* Temporary::copy(Value* original)
{
    if (original)
        return original->clone();
    return 0;
}

inline Temporary::Temporary(const S& source)
    : descriptor(source.descriptor), value(copy(source.value))
{
}

inline Temporary::~Temporary()
{
    if (value)
        delete value;
}

float S::func_00445f10()
{
    if ((*(TypeEqual*)0x802878)(
            (const type_info*)0x92bedc, *descriptor->info))
        return *extract(&value);

    Temporary temporary(*this);
    return temporary.convert();
}
