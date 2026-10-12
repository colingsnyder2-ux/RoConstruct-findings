// from server: 66% by king_originala
extern "C"
{
    extern long (__stdcall * const InterlockedIncrement)(volatile long *);
    extern long (__stdcall * const InterlockedDecrement)(volatile long *);
}

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

extern const float radiusScale;
extern const float textureScale;

struct Vector3
{
    float x, y, z;

    Vector3() {}
    Vector3(const Vector3 &v) : x(v.x), y(v.y), z(v.z) {}
    Vector3 *adjust(float *);
};

struct Vector2
{
    float x, y;

    Vector2(float a, float b) : x(a), y(b) {}
};

struct Image
{
    virtual void destroy(unsigned int);
    volatile long references;
    void *storage;
    unsigned char padding[28];

    Image(int);
    void releaseStorage();
};

struct ImageRef
{
    Image *pointer;

    ImageRef(Image *p) : pointer(0)
    {
        if (p)
        {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    ~ImageRef()
    {
        if (pointer && !InterlockedDecrement(&pointer->references))
        {
            pointer->releaseStorage();
            pointer->destroy(1);
        }
    }
};

struct SurfaceRef
{
    Image *pointer;

    void reset(Image *);

    SurfaceRef(Image *p) : pointer(0)
    {
        reset(p);
    }

    ~SurfaceRef()
    {
        if (pointer && !InterlockedDecrement(&pointer->references))
        {
            pointer->releaseStorage();
            if (pointer)
                pointer->destroy(1);
        }
    }
};

struct View
{
    unsigned int data;
    void assign(const ImageRef &);
};

struct Base
{
    virtual void unused();
    unsigned int data;
    unsigned int more;
    View view;

    Base();
    ~Base();
};

struct Surface
{
    unsigned char data[20];
    SurfaceRef image;
    Vector2 scale;
    unsigned char tail[8];

    Surface(SurfaceRef, Vector3, int, int, float);
    void apply(void *, int);
};

Vector3 *__cdecl calculate(Vector3 *, const Vector3 *, void *);

struct S : Base
{
    S(const Vector3 &, void *, const Vector2 &);
    virtual void unused();
};

S::S(const Vector3 &size, void *context, const Vector2 &dimensions)
{
    const float &minimum = size.x <= size.z ? size.x : size.z;
    float radius = minimum * radiusScale;
    Image *image = new Image(5);

    {
        ImageRef reference(image);
        view.assign(reference);
    }

    Surface surface(image, size, 0, 9, radius);
    Vector3 result;
    Vector3 *adjusted = calculate(&result, &size, context)->adjust(&radius);
    surface.scale = Vector2(adjusted->x * textureScale / dimensions.x,
                           adjusted->y * textureScale / dimensions.y);
    surface.apply(context, 1);
}
