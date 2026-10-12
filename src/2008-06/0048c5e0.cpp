// from server: 92% by king_originala
class type_info {};

extern const type_info brickColorType;
extern bool (__thiscall *typeEqual)(const type_info*, const type_info&);

struct Descriptor {
    void* reserved0;
    void* reserved1;
    const type_info* type;
};

struct Payload {
    virtual ~Payload();
    virtual void reserved();
    virtual Payload* clone();
};

extern int* __cdecl extractColor(Payload**);

struct Temporary {
    Descriptor* descriptor;
    Payload* payload;

    Temporary(const Temporary&);
    ~Temporary();
    int* __thiscall convert();
};

inline Temporary::Temporary(const Temporary& other)
{
    descriptor = other.descriptor;
    Payload* p = other.payload;
    Payload* copy;
    if (p)
        copy = p->clone();
    else
        copy = 0;
    payload = copy;
}

inline Temporary::~Temporary()
{
    if (payload)
        delete payload;
}

struct S {
    Descriptor* descriptor;
    Payload* payload;

    int* __thiscall get(int* result);
};

int* S::get(int* result)
{
    if (typeEqual(&brickColorType, *descriptor->type)) {
        *result = *extractColor(&payload);
        return result;
    }

    Temporary temporary(*reinterpret_cast<const Temporary*>(this));
    *result = *temporary.convert();
    return result;
}
