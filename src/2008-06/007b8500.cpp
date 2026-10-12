// from server: 96% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct TextureProxyBase;

struct Ref {
    TextureProxyBase* volatile p;
    Ref(TextureProxyBase*);
    Ref(const Ref&);
    ~Ref();
    void assign(TextureProxyBase*);
};

struct Vector3 {
    float x, y, z;
};

struct TextureProxyBase {
    virtual ~TextureProxyBase();
    char padding[52];
    volatile unsigned int value;
    unsigned int reserved;
};

struct TextureProxy : TextureProxyBase {
    Ref texture;
    Ref owner;
    Vector3 position;

    TextureProxy(Ref);
    Ref clone(const Vector3&, const Ref&);
};

inline Ref::Ref(TextureProxyBase* object) : p(0) {
    assign(object);
}

Ref TextureProxy::clone(const Vector3& vector, const Ref& source) {
    TextureProxy* object = dynamic_cast<TextureProxy*>(source.p);
    TextureProxy* result = new TextureProxy(Ref(object));
    result->value = value;
    result->texture.assign(object);
    result->position.x = vector.x;
    result->position.y = vector.y;
    result->position.z = vector.z;
    result->owner.assign(this);
    return Ref(result);
}
