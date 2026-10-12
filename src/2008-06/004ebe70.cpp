// from server: 81% by king_originala
typedef void (__thiscall *StringInit)(void *);
typedef void (__thiscall *StringFini)(void *);
typedef long (__stdcall *Decrement)(volatile long *);

extern StringInit stringInit;
extern StringFini stringFini;
extern Decrement decrement;

struct String {
    char data[28];
    String() { stringInit(this); }
    ~String() { stringFini(this); }
};

struct Value {
    char stringData[28];
    unsigned int extra;
    ~Value() { stringFini(this); }
};

struct Texture {
    virtual void destroy(unsigned int);
    virtual void unused1();
    virtual void unused2();
    virtual void adjust(float);
    volatile long references;
    void *data;
    void cleanup();
};

struct Ref {
    Texture *pointer;
    void set(Texture *);
    Ref(Texture *p) : pointer(0) { set(p); }
    Ref(const Ref &);
};

extern float colorRed;
extern float colorGreen;
extern float colorBlue;
extern float adjustment;

struct DrawParameters {
    float red;
    float green;
    float blue;
    float width;
    float height;
    float zero;
    float opacity;

    __forceinline DrawParameters(const float &, const float &, const float &);
    DrawParameters(const DrawParameters &);
};

__forceinline DrawParameters::DrawParameters(
    const float &w, const float &h, const float &transparency)
{
    opacity = 1.0f - transparency;
    zero = 0.0f;
    height = h;
    width = w;
    red = colorRed;
    green = colorGreen;
    blue = colorBlue;
}

struct Renderer {
    virtual void destroy(unsigned int);
    virtual void unused1();
    virtual void unused2();
    virtual void draw(Ref, DrawParameters);
};

struct Block {
    char padding[0x144];
    Value value;
    float width;
    float height;
    Value copy();
};

struct Instance {
    char padding[0x328];
    float transparency;
};

struct Service {
    void query(const Value &, int *, String *);
};

struct Context {
    char padding[12];
    void *object;
};

extern Service *__cdecl findService(Instance *);
extern Texture *__cdecl defaultTexture();
extern Texture *__cdecl createTexture(void *, const String *, int);

struct Decal {
    char padding[0xbc];
    Instance *instance;
    unsigned int unknown;
    Ref texture;
    unsigned char dirty;
    char padding2[7];
    Context *context;
    unsigned int unknown2;
    Block *block;
    Ref get();
};

Ref Decal::get()
{
    int status = 0;
    try {
        if (dirty && instance) {
            String name;
            findService(instance)->query(block->copy(), &status, &name);
            if (status == 1) {
                texture.set(defaultTexture());
                Texture *created = createTexture(context->object, &name, 0);
                Renderer *renderer = reinterpret_cast<Renderer *>(texture.pointer);
                renderer->draw(
                    Ref(created),
                    DrawParameters(block->width, block->height,
                                   instance->transparency));
                created->adjust(adjustment);
                dirty = 0;
            } else if (status == 2) {
                if (texture.pointer) {
                    if (!decrement(&texture.pointer->references)) {
                        texture.pointer->cleanup();
                        if (texture.pointer)
                            texture.pointer->destroy(1);
                    }
                    texture.pointer = 0;
                }
                dirty = 0;
            }
        }
    } catch (...) {
    }
    return Ref(texture.pointer);
}
