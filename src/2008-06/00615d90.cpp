// from server: 91% by king_originala
extern "C" void* __cdecl sub_6a0920(unsigned int);
extern "C" void __cdecl sub_6a067a(void*);
extern "C" void* __cdecl sub_6a17c6(int, int, void*, void*, int);

extern char g948304[], g9516c8[];
extern const float g8439d8, g82746c;

struct Vec3
{
    float x, y, z;
};

struct Ray
{
    virtual ~Ray();
    Vec3 origin;
    Vec3 direction;
};

inline Ray::~Ray()
{
}

struct Proxy
{
    void* pointer;
    Proxy();
    ~Proxy();
};

inline Proxy::Proxy()
{
    void* p = sub_6a0920(4);
    if (p)
        *static_cast<Proxy**>(p) = this;
    else
        p = 0;
    pointer = p;
}

inline Proxy::~Proxy()
{
    sub_6a067a(pointer);
}

struct Collection
{
    Proxy proxy;
    void* reserved1;
    void* reserved2;
    void* first;
    void* last;
    void* end;

    Collection();
    ~Collection();
};

inline Collection::Collection()
{
    first = 0;
    last = 0;
    end = 0;
}

inline Collection::~Collection()
{
    if (first)
        sub_6a067a(first);
    first = 0;
    last = 0;
    end = 0;
}

struct Subject
{
    char padding[0x1dc];
    int f1dc;
    int method();
};

struct CharacterSubject
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void collect(Collection*) = 0;
};

struct Camera
{
    virtual void slot0() = 0;
    virtual Subject* subject() = 0;
    void collect(Collection*);
};

extern "C" int __cdecl sub_615940(
    Ray*, void*, Collection*, void*, Vec3*, float);

struct S
{
    char padding[0x18];
    char* object;

    Ray makeRay(void*);
    int f(void*, void*, Vec3*);
};

int S::f(void* input, void* argument, Vec3* output)
{
    Ray ray = makeRay(input);

    void* context = *reinterpret_cast<void**>(
        *reinterpret_cast<char**>(object + 0x2e4) + 0x84);

    Collection collection;
    Camera* camera = object
        ? reinterpret_cast<Camera*>(object + 0x288)
        : 0;
    camera->collect(&collection);

    Subject* subject =
        reinterpret_cast<Camera*>(object + 0x288)->subject();

    if (subject)
    {
        CharacterSubject* character =
            static_cast<CharacterSubject*>(
                sub_6a17c6(subject->method(), 0,
                           g948304, g9516c8, 0));
        if (character)
            character->collect(&collection);
    }

    int result = sub_615940(
        &ray, context, &collection, argument, output, g8439d8);

    if (!result)
    {
        double x = ray.direction.x * static_cast<double>(g82746c);
        double y = ray.direction.y * static_cast<double>(g82746c);
        double z = ray.direction.z * static_cast<double>(g82746c);
        x += ray.origin.x;
        y += ray.origin.y;
        z += ray.origin.z;
        output->x = static_cast<float>(x);
        output->y = static_cast<float>(y);
        output->z = static_cast<float>(z);
    }

    return result;
}
