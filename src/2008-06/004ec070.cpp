// from server: 93% by king_originala
#include <intrin.h>
// from server: 85% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct String;
typedef void (__thiscall *StringInit)(String *);
typedef void (__thiscall *StringDestroy)(String *);
extern StringInit stringInit;
extern StringDestroy stringDestroy;

struct String {
    char data[28];
    String();
    ~String();
};

inline String::String() { stringInit(this); }
inline String::~String() { stringDestroy(this); }

struct Value {
    char stringData[28];
    unsigned int extra;
    ~Value();
};

inline Value::~Value()
{
    stringDestroy((String *)stringData);
}

struct Block {
    char padding[0x144];
    Value value;
    float width;
    float height;
    Value copy();
};

struct Resource;

struct Handle {
    Resource *pointer;
    void assign(Resource *);
    Handle(Resource *);
    Handle(const Handle &);
};

inline Handle::Handle(Resource *p)
{
    pointer = 0;
    assign(p);
}

inline Handle::Handle(const Handle &p)
{
    pointer = 0;
    assign(p.pointer);
}

struct Vector {
    float x, y, z;
    Vector(const Vector &);
};

inline Vector::Vector(const Vector &v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Resource {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void draw(Handle, Vector, float, float, float, float);
};

struct Image {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(float);
};

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void load(const Value &, int *, String *);
    };
}

extern RBX::ServiceProvider *__cdecl func_00465210(RBX::Instance *);
extern Resource *__cdecl func_00551730();
extern Image *__cdecl func_00551920(void *, String *, int);
extern Vector constantVector;
extern float constantScale;

struct Texture {
    char padding0[0xbc];
    RBX::Instance *owner;
    unsigned int padding1;
    Handle resource;
    unsigned char dirty;
    char padding2[7];
    char *context;
    unsigned int padding3;
    Block *block;

    Handle f();
};

Handle Texture::f()
{
    int status = 0;
    try {
        if (dirty) {
            String name;
            bool ready = (func_00465210(owner)->load(
                block->copy(), &status, &name), status == 1);
            if (ready) {
                resource.assign(func_00551730());
                Image *image = func_00551920(*(void **)(context + 12), &name, 1);
                Resource *destination = resource.pointer;
                _ReadWriteBarrier();
                float transparency = *(float *)((char *)owner + 0x328);
                destination->draw(
                    Handle((Resource *)image),
                    constantVector,
                    block->width,
                    block->height,
                    0.0f,
                    1.0f - transparency);
                image->set(constantScale);
                dirty = 0;
            }
        }
    } catch (...) {
    }
    return resource;
}
