// from server: 97% by king_originala
void __cdecl alignedFree(void *);
void __cdecl operator delete(void *);

struct Buffer {
    void *data;
    int size;
    int capacity;
    ~Buffer();
};

inline Buffer::~Buffer()
{
    alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

struct BufferPair {
    int reserved;
    Buffer first;
    Buffer second;
};

struct Shape {
    virtual void first();
    virtual ~Shape();
    virtual int kind();
};

struct Object {
    ~Object();
};

struct Geometry {
    virtual ~Geometry();
    char pad04[0x14];
    BufferPair first;
    BufferPair second;
    char pad50[0x4c];
    Shape *shape;
    Object *object;
    char pada4[0x2c];
    void *faces[6];
};

Geometry::~Geometry()
{
    if (shape->kind() != 3) {
        delete shape;
        delete object;
    }

    for (int i = 0; i < 6; ++i)
        operator delete(faces[i]);
}
